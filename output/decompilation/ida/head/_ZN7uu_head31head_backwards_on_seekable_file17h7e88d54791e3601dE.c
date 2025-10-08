__int64 __fastcall uu_head::head_backwards_on_seekable_file(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r14
  __int64 result; // rax
  __int64 v4; // rdx
  bool nth_line_from_end; // cl
  __int64 v6; // rsi
  int v7; // [rsp+8h] [rbp-C0h] BYREF
  unsigned __int64 v8; // [rsp+58h] [rbp-70h]

  if ( *(_QWORD *)a2 == 1LL )
  {
    nth_line_from_end = uu_head::find_nth_line_from_end(a1, *(_QWORD *)(a2 + 8), *(_BYTE *)(a2 + 43));
    result = 1LL;
    if ( !nth_line_from_end )
    {
      v6 = v4;
      return uu_head::read_n_bytes(a1, v6);
    }
  }
  else
  {
    if ( (unsigned int)*(_QWORD *)a2 != 3 )
      core::panicking::panic(aInternalErrorE_0, 40LL, &off_F7D30);
    v2 = *(_QWORD *)(a2 + 8);
    std::fs::File::metadata(&v7, a1);
    if ( v7 == 2 )
      return 1LL;
    result = 0LL;
    v6 = v8 - v2;
    if ( v8 > v2 )
      return uu_head::read_n_bytes(a1, v6);
  }
  return result;
}