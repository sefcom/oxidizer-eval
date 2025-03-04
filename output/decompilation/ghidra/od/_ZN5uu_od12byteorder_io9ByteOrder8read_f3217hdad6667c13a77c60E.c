undefined8
_ZN5uu_od12byteorder_io9ByteOrder8read_f3217hdad6667c13a77c60E
          (char param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_RAX;
  
  if ((param_1 == '\0') || (param_1 != '\x01')) {
    _ZN64__LT_byteorder__LittleEndian_u20_as_u20_byteorder__ByteOrder_GT_8read_u3217hc43338f212540fbcE
              (param_2,param_3);
  }
  else {
    _ZN61__LT_byteorder__BigEndian_u20_as_u20_byteorder__ByteOrder_GT_8read_u3217habec7fb2f414f2e9E
              (param_2,param_3);
  }
  return in_RAX;
}