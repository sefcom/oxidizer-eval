_QWORD *__fastcall uu_numfmt::format::format_and_print(_QWORD *a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  if ( a4[14] == 0x8000000000000000LL )
    uu_numfmt::format::format_and_print_whitespace(a1, a2, a3, a4);
  else
    uu_numfmt::format::format_and_print_delimited(a1, a2, a3, (__int64)a4);
  return a1;
}
