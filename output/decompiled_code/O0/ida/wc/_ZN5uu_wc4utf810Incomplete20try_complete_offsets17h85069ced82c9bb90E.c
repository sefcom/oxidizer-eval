size_t __fastcall uu_wc::utf8::Incomplete::try_complete_offsets(__int64 a1, const void *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r15
  size_t v4; // r14
  void *v5; // r12
  unsigned __int8 v6; // r12
  __int64 v8; // [rsp+8h] [rbp-40h] BYREF
  unsigned __int64 v9; // [rsp+10h] [rbp-38h]
  char v10; // [rsp+18h] [rbp-30h]
  unsigned __int8 v11; // [rsp+19h] [rbp-2Fh]

  v3 = *(unsigned __int8 *)(a1 + 4);
  if ( v3 >= 5 )
    core::slice::index::slice_start_index_len_fail(*(unsigned __int8 *)(a1 + 4), 4LL, &off_118F40);
  v4 = 4 - v3;
  v5 = (void *)(a1 + v3);
  if ( 4 - v3 >= a3 )
    v4 = a3;
  core::intrinsics::copy_nonoverlapping::precondition_check(a2, v5, 1LL, 1LL, v4);
  memcpy(v5, a2, v4);
  v6 = v4 + v3;
  if ( v4 + v3 >= 5 )
    core::slice::index::slice_end_index_len_fail(v4 + v3, 4LL, &off_118F58);
  core::str::converts::from_utf8(&v8, a1, v4 + v3);
  if ( v8 )
  {
    if ( v9 )
    {
      v4 = v9 - v3;
      if ( v9 < v3 )
        core::option::unwrap_failed(&off_118F88);
      v6 = v9;
    }
    else if ( (v10 & 1) != 0 )
    {
      v6 = v11;
      if ( v11 < (unsigned __int8)v3 )
        core::option::unwrap_failed(&off_118F70);
      v4 = v11 - v3;
    }
  }
  *(_BYTE *)(a1 + 4) = v6;
  return v4;
}
