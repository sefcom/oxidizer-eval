__int64 __fastcall uu_od::parse_formats::is_format_size_decimal(unsigned int a1, char a2, __int64 a3)
{
  unsigned int v3; // ebx

  LOBYTE(v3) = a2 != 0 && a1 - 48 < 0xA;
  if ( (_BYTE)v3 )
    alloc::string::String::push(a3, a1);
  return v3;
}