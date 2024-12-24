const char *__fastcall uu_wc::Input::to_title(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // rbp
  const char *result; // rax
  __int64 v4; // r15
  __int64 v5; // r14
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-40h]
  unsigned __int64 v10; // [rsp+10h] [rbp-38h]

  v2 = 0x8000000000000000LL;
  result = (const char *)0x8000000000000001LL;
  if ( *(_QWORD *)a2 == 0x8000000000000001LL )
  {
    if ( *(_BYTE *)(a2 + 8) )
    {
      *a1 = 0x8000000000000001LL;
    }
    else
    {
      *a1 = 0x8000000000000000LL;
      result = asc_1E45F;
      a1[1] = (unsigned __int64)asc_1E45F;
      a1[2] = 1LL;
    }
  }
  else
  {
    v4 = *(_QWORD *)(a2 + 8);
    v5 = *(_QWORD *)(a2 + 16);
    std::sys::os_str::bytes::Slice::to_str(&v8, v4, v5);
    if ( v8
      || (v6 = v9,
          v7 = v10,
          result = (const char *)<char as core::str::pattern::Pattern>::is_contained_in(v9, v10),
          (_BYTE)result) )
    {
      result = (const char *)uucore::features::quoting_style::escape_name(
                               &v8,
                               v4,
                               v5,
                               &anon_2d62524804cc4b2f7247b138d4e0921f_19_llvm_17271959582280866971);
      v2 = v8;
      v6 = v9;
      v7 = v10;
    }
    *a1 = v2;
    a1[1] = v6;
    a1[2] = v7;
  }
  return result;
}
