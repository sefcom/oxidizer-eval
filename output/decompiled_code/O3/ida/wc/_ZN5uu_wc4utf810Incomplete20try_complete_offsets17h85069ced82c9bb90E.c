size_t __fastcall uu_wc::utf8::Incomplete::try_complete_offsets(__int64 a1, const void *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r12
  size_t v5; // r14
  void *v6; // rdi
  unsigned __int8 v7; // r15
  __int64 v9; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-30h]
  char v11; // [rsp+10h] [rbp-28h]
  unsigned __int8 v12; // [rsp+11h] [rbp-27h]

  v3 = *(unsigned __int8 *)(a1 + 4);
  if ( v3 > 4 )
    core::slice::index::slice_start_index_len_fail(*(unsigned __int8 *)(a1 + 4), 4LL, &off_F3730);
  v5 = 4 - v3;
  v6 = (void *)(v3 + a1);
  if ( 4 - v3 >= a3 )
    v5 = a3;
  memcpy(v6, a2, v5);
  v7 = v5 + v3;
  core::str::converts::from_utf8(&v9, a1, v5 + v3);
  if ( v9 )
  {
    if ( v10 )
    {
      v5 = v10 - v3;
      if ( v10 < v3 )
        core::option::unwrap_failed(&off_F3718);
      v7 = v10;
    }
    else if ( v11 )
    {
      v7 = v12;
      if ( v12 < (unsigned __int8)v3 )
        core::option::unwrap_failed(&off_F3700);
      v5 = v12 - v3;
    }
  }
  *(_BYTE *)(a1 + 4) = v7;
  return v5;
}
