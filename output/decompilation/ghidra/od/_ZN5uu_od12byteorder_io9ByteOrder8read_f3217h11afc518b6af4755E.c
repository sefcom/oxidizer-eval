undefined8
_ZN5uu_od12byteorder_io9ByteOrder8read_f3217h11afc518b6af4755E
          (char param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_RAX;
  
  if ((param_1 != '\0') && (param_1 == '\x01')) {
    _ZN61__LT_byteorder__BigEndian_u20_as_u20_byteorder__ByteOrder_GT_8read_u3217heb7f0e5942a13c7eE
              (param_2,param_3);
    return in_RAX;
  }
  _ZN64__LT_byteorder__LittleEndian_u20_as_u20_byteorder__ByteOrder_GT_8read_u3217ha761c22cf500ee99E
            (param_2,param_3);
  return in_RAX;
}