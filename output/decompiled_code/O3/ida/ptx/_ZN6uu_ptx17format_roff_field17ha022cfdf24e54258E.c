void *__fastcall uu_ptx::format_roff_field(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // r15
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rbp
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  const void *v13; // rbp
  size_t v14; // rdx
  __int64 v15; // rax
  const void *v16; // rsi
  size_t v17; // rbp
  __int64 v18; // r15
  __int64 v19; // rax
  const void *v20; // rbp
  size_t v21; // r13
  void *result; // rax
  __int64 v23; // [rsp+0h] [rbp-68h]
  size_t v24; // [rsp+0h] [rbp-68h]
  __int64 v25; // [rsp+0h] [rbp-68h]
  __int128 v26; // [rsp+8h] [rbp-60h] BYREF
  __int64 v27; // [rsp+18h] [rbp-50h]
  __int64 v28; // [rsp+20h] [rbp-48h]
  unsigned __int64 v29; // [rsp+28h] [rbp-40h]
  unsigned __int64 v30; // [rsp+30h] [rbp-38h]

  *(_QWORD *)&v26 = 0LL;
  *((_QWORD *)&v26 + 1) = 1LL;
  v23 = 1LL;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
LABEL_2:
  v27 = v5;
  while ( 1 )
  {
    v8 = a2 + v6;
    if ( a3 - v6 > 0xF )
      break;
    if ( a3 == v6 )
      goto LABEL_23;
    v9 = 0LL;
    while ( *(_BYTE *)(v8 + v9) != 34 )
    {
      if ( a3 - v6 == ++v9 )
        goto LABEL_23;
    }
LABEL_12:
    v12 = v9 + v6;
    v6 += v9 + 1;
    if ( v12 < a3 && *(_BYTE *)(a2 + v12) == 34 )
    {
      v29 = v6;
      v30 = v12;
LABEL_16:
      v13 = (const void *)(a2 + v7);
      v14 = a2 + v30 - (_QWORD)v13;
      if ( (__int64)v26 - v5 >= v14 )
      {
        v15 = v23;
        v28 = v26;
      }
      else
      {
        v24 = a2 + v30 - (_QWORD)v13;
        alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v26, v5, v14);
        v5 = v27;
        v15 = *((_QWORD *)&v26 + 1);
        v28 = v26;
        v14 = v24;
      }
      v25 = v15;
      v16 = v13;
      v17 = v14;
      memcpy((void *)(v15 + v5), v16, v14);
      v18 = v17 + v5;
      v27 = v18;
      if ( (unsigned __int64)(v28 - v18) > 1 )
      {
        v19 = v25;
      }
      else
      {
        alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v26, v18, 2LL);
        v19 = *((_QWORD *)&v26 + 1);
        v18 = v27;
      }
      v23 = v19;
      *(_WORD *)(v19 + v18) = 8738;
      v5 = v27 + 2;
      v7 = v29;
      goto LABEL_2;
    }
    if ( v6 > a3 )
      goto LABEL_23;
  }
  v10 = core::slice::memchr::memchr_aligned(34LL, v8);
  if ( v10 == 1 )
  {
    v9 = v11;
    goto LABEL_12;
  }
  v6 = a3;
  if ( v10 )
    goto LABEL_16;
LABEL_23:
  v20 = (const void *)(a2 + v7);
  v21 = a2 + a3 - (_QWORD)v20;
  if ( (__int64)v26 - v5 < v21 )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v26, v5, v21);
    v5 = v27;
  }
  result = memcpy((void *)(v5 + *((_QWORD *)&v26 + 1)), v20, v21);
  *(_OWORD *)a1 = v26;
  *(_QWORD *)(a1 + 16) = v21 + v5;
  return result;
}
