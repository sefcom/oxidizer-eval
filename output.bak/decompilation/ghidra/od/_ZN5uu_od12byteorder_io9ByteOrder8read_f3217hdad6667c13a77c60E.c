undefined8 __rustcall
uu_od::byteorder_io::ByteOrder::read_f32(char param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_RAX;
  
  if ((param_1 == '\0') || (param_1 != '\x01')) {
    _<byteorder::LittleEndian_as_byteorder::ByteOrder>::read_u32(param_2,param_3);
  }
  else {
    _<byteorder::BigEndian_as_byteorder::ByteOrder>::read_u32(param_2,param_3);
  }
  return in_RAX;
}