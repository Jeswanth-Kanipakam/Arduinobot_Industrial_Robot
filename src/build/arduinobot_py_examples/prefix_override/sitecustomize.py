import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/eeiww/ud90uhak/arduinobot_ws/src/install/arduinobot_py_examples'
