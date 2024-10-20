void *__fastcall uu_tail::chunks::LinesChunk::from_chunk(void *s, __int64 a2, unsigned __int64 a3)
{
  void *v3; // r12
  char v4; // bl
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // r13
  size_t v9; // r15
  unsigned __int64 v10; // r15
  bool v11; // cf
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rbx
  char v17; // bp
  unsigned __int64 v19; // [rsp+0h] [rbp-4048h]
  __int64 v20; // [rsp+10h] [rbp-4038h] BYREF
  _QWORD sa[1024]; // [rsp+18h] [rbp-4030h] BYREF
  _QWORD dest[1024]; // [rsp+2018h] [rbp-2030h] BYREF

  dest[512] = 0LL;
  dest[0] = 0LL;
  sa[512] = 0LL;
  sa[0] = 0LL;
  v3 = s;
  if ( *(_QWORD *)(a2 + 8200) >= a3 )
  {
    v5 = *(_QWORD *)(a2 + 0x2000);
    if ( v5 >= 0x2001 )
      core::slice::index::slice_end_index_len_fail(
        *(_QWORD *)(a2 + 0x2000),
        0x2000LL,
        &anon_d47df02a786f831a0d9960a1e02c39b9_25_llvm_1356039585147583896);
    if ( !v5 )
      goto LABEL_13;
    v6 = 0LL;
    v19 = a3;
    v7 = a3;
    while ( 1 )
    {
      v20 = a2 + v6;
      if ( !v7 )
        break;
      sa[0] = a2 + 8208;
      ++v6;
      v7 -= (unsigned __int8)core::cmp::impls::<impl core::cmp::PartialEq<&B> for &A>::eq(&v20, sa);
      if ( v5 == v6 )
      {
        v6 = v5;
        break;
      }
    }
    v8 = *(_QWORD *)(a2 + 0x2000);
    v9 = v8 - v6;
    a3 = v19;
    if ( v8 > v6 )
    {
      memset(sa, 0, sizeof(sa));
      if ( v8 >= 0x2001 )
        core::slice::index::slice_end_index_len_fail(
          v8,
          0x2000LL,
          &anon_d47df02a786f831a0d9960a1e02c39b9_26_llvm_1356039585147583896);
      core::intrinsics::copy_nonoverlapping::precondition_check(a2 + v6, sa, 1LL, 1LL, v9);
      memcpy(sa, (const void *)(a2 + v6), v9);
      v10 = *(_QWORD *)(a2 + 0x2000);
      v11 = v10 < v6;
      v12 = v10 - v6;
      if ( v11 )
        core::panicking::panic_const::panic_const_sub_overflow(&off_189D08);
      memcpy(dest, sa, sizeof(dest));
      v3 = s;
      v13 = v19;
    }
    else
    {
LABEL_13:
      v12 = 0LL;
      v14 = a3;
      memset(dest, 0, sizeof(dest));
      v13 = v14;
      v3 = s;
    }
    v15 = *(_QWORD *)(a2 + 8200);
    v11 = v15 < v13;
    v16 = v15 - v13;
    if ( v11 )
      core::panicking::panic_const::panic_const_sub_overflow(&off_189E28);
    v17 = *(_BYTE *)(a2 + 8208);
    memcpy(v3, dest, 0x2000uLL);
    *((_QWORD *)v3 + 1024) = v12;
    *((_QWORD *)v3 + 1025) = v16;
    *((_BYTE *)v3 + 8208) = v17;
  }
  else
  {
    v4 = *(_BYTE *)(a2 + 8208);
    memset(s, 0, 0x2010uLL);
    *((_BYTE *)s + 8208) = v4;
  }
  return v3;
}
