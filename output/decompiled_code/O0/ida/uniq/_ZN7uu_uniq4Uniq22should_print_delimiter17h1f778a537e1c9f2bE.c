bool __fastcall uu_uniq::Uniq::should_print_delimiter(__int64 a1, __int64 a2, char a3)
{
  char v3; // cl
  bool v4; // si
  bool result; // al

  v3 = *(_BYTE *)(a1 + 54);
  v4 = v3 == 4 || a2 != 1;
  result = !v4;
  if ( !v4 && !a3 )
    return (v3 & 0xFD) == 1;
  return result;
}
