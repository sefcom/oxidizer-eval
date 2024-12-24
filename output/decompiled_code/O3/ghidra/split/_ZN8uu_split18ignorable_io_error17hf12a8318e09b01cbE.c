undefined8 __rustcall uu_split::ignorable_io_error(undefined8 param_1,long param_2)

{
  char cVar1;
  
  cVar1 = std::io::error::Error::kind();
  return CONCAT71(0x80000000000000,param_2 != -0x8000000000000000 && cVar1 == '\v');
}