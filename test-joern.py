from pprint import pprint
from pyjoern import fast_cfgs_from_source
import networkx as nx
import matplotlib.pyplot as plt

cfgs = fast_cfgs_from_source("test.cpp")
G = cfgs["simple_http_server_MainHandler_send_file"]

import ipdb
ipdb.set_trace()