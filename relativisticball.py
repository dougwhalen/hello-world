#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Wed Mar 10 08:52:20 2021

@author: douglas
"""

import numpy as np

t = 2.0
g = 9.81 
c = 299792458


yn = 0.5 * g * (t**2) #Newton


ye = 2 * ((c**2) / g) * (np.sinh(0.5*(g/c)*t))**2 #Einstein

E = np.abs(yn - ye)

print("{:e}".format(E), "{:e}".format(yn), "{:e}".format(ye))