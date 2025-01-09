ulong __rustcall
uu_od::parse_formats::is_format_size_decimal(int param_1,char param_2,undefined8 param_3)

{
  undefined8 unaff_RBX;
  bool bVar1;
  
  bVar1 = param_1 - 0x30U < 10;
  if (bVar1 && param_2 != '\0') {
    ::alloc::string::String::push(param_3,param_1);
  }
  return CONCAT71((int7)((ulong)unaff_RBX >> 8),bVar1 && param_2 != '\0') & 0xffffffff;
}