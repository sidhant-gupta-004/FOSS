#!/usr/bin/env python
from pyexcel_ods import get_data
data = get_data('sum.ods')
import json
k = json.dumps(data)
print(k)
print(int(k[13]+k[14]) + int(k[17]+k[18]))