__int64 __fastcall uu_base32::base_common::fast_encode::write_to_output(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5)
{
  __int64 (__fastcall *v5)(__int64, const char *, __int64); // rcx
  __int64 result; // rax

  v5 = *(__int64 (__fastcall **)(__int64, const char *, __int64))(a4 + 56);
  if ( *a1 == 0x8000000000000000LL )
  {
    result = uu_base32::base_common::fast_encode::write_without_line_breaks(a2, a3, v5, a5);
    if ( !result )
      return 0LL;
  }
  else
  {
    result = uu_base32::base_common::fast_encode::write_with_line_breaks(
               a1,
               a2,
               a3,
               (__int64 (__fastcall *)(_QWORD, _QWORD))v5,
               a5);
    if ( !result )
      return 0LL;
  }
  return result;
}
