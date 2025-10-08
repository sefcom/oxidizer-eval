undefined8
_ZN5uu_od12byteorder_io9ByteOrder8read_f6417hdb659793fd52688bE
          (char param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_RAX;
  
  if ((param_1 != '\0') && (param_1 == '\x01')) {
    _ZN61__LT_byteorder__BigEndian_u20_as_u20_byteorder__ByteOrder_GT_8read_u6417h4e06a29913649185E
              (param_2,param_3);
    return in_RAX;
  }
  _ZN64__LT_byteorder__LittleEndian_u20_as_u20_byteorder__ByteOrder_GT_8read_u6417hcc551e0560558125E
            (param_2,param_3);
  return in_RAX;
}