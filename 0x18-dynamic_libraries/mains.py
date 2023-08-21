import random
import ctypes

ini = ctypes.CDLL('./100-operations.so')
a = random.randint(-111, 111)
b = random.randint(-111, 111)
print("{} + {} = {}".format(a, b, ini.add(a, b)))
print("{} - {} = {}".format(a, b, ini.sub(a, b)))
print("{} x {} = {}".format(a, b, ini.mul(a, b)))
print("{} / {} = {}".format(a, b, ini.divs(a, b)))
