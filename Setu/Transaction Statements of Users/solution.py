#!/bin/python3

import math
import os
import random
import re
import sys



#
# Complete the 'totalTransactions' function below.
#
# The function is expected to return a 2D_INTEGER_ARRAY.
# The function accepts following parameters:
#  1. INTEGER locationId
#  2. STRING transactionType
#
# Base url for copy/paste
# https://jsonmock.hackerrank.com/api/transactions/search?txnType=<transactionType>&page=<pageNumber>
#

import requests
def getAPIResponse(transactionType, pageNumber):
    response = requests.get("https://jsonmock.hackerrank.com/api/transactions/search?txnType=" + transactionType + "&page="+ str(pageNumber)).json().get("data")
    return response

def totalTransactions(locationId, transactionType):
    total_page = 16
    result = []
    result_hash = {}
    for i in range(16):
        response = getAPIResponse(transactionType, i+1)
        for txn_entry in response:
            if txn_entry.get("location").get("id") == locationId:
                temp_amount = txn_entry.get("amount")[1:]
                temp_amount = temp_amount.replace(',', '')
                if txn_entry.get("userId") in result_hash:
                    result_hash[txn_entry.get("userId")] += float(temp_amount)
                else:
                    result_hash[txn_entry.get("userId")] = float(temp_amount)
    
    if len(result_hash) == 0:
        result.append([-1,-1])
    else:
        for user_id, amount in result_hash.items():
            result.append([user_id, int(amount)])
        result = sorted(result, key = lambda i:i[0])
        
    return result
