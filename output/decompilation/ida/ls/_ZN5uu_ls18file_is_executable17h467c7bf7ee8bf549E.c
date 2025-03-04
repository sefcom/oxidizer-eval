bool __fastcall uu_ls::file_is_executable(char a1)
{
  return (a1 & 0x49) != 0;
}
