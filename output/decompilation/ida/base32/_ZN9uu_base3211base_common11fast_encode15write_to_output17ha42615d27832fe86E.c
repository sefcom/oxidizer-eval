__int64 __fastcall uu_base32::base_common::fast_encode::write_to_output(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 (__fastcall *a4)(__int64, __int64),
        char a5,
        char a6)
{
  __int64 result; // rax

  if ( __OFSUB__(0LL, *a1) )
  {
    result = uu_base32::base_common::fast_encode::write_without_line_breaks(a2, a3, a4, a5, a6);
    if ( !result )
      return 0LL;
  }
  else
  {
    result = uu_base32::base_common::fast_encode::write_with_line_breaks(a1, a2, a3, a4, a5);
    if ( !result )
      return 0LL;
  }
  return result;
}