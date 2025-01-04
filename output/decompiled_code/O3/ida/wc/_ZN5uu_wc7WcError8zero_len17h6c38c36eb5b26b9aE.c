unsigned __int64 *__fastcall uu_wc::WcError::zero_len(unsigned __int64 *a1, _QWORD *a2, unsigned __int64 a3)
{
  unsigned __int64 *result; // rax
  unsigned __int64 v4; // rcx
  const char *v5; // rsi
  __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  _QWORD v8[5]; // [rsp+0h] [rbp-28h] BYREF

  result = a1;
  v4 = 0x8000000000000000LL;
  if ( a2 )
  {
    if ( *a2 == 0x8000000000000001LL )
    {
      v5 = asc_1E2E7;
      v6 = 1LL;
    }
    else
    {
      v7 = a3;
      uucore::features::quoting_style::escape_name(
        v8,
        a2[1],
        a2[2],
        &anon_7c7385208ddd1e4e4d864dc74576bdf1_19_llvm_3329604763963259673);
      a3 = v7;
      result = a1;
      v4 = v8[0];
      v5 = (const char *)v8[1];
      v6 = v8[2];
    }
    *result = v4;
    result[1] = (unsigned __int64)v5;
    result[2] = v6;
    result[3] = a3;
  }
  else
  {
    *a1 = 0x8000000000000003LL;
  }
  return result;
}
