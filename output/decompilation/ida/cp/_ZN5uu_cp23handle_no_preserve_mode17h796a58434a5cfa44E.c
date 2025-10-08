__int64 __fastcall uu_cp::handle_no_preserve_mode(char a1, char a2, unsigned int a3)
{
  __int64 result; // rax

  result = 438LL;
  if ( (a2 & 1) == 0 )
    result = a3 & 0x1FF;
  if ( (a1 & 1) != 0 )
    return a3;
  return result;
}