bool __rustcall uu_ls::file_is_executable(byte param_1)

{
  return (param_1 & 0x49) != 0;
}