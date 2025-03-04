_QWORD *__fastcall uu_dd::Output::write_blocks(_QWORD *a1, __int64 a2, char **a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // rbp
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  char **v13; // [rsp+8h] [rbp-60h] BYREF
  __int64 v14; // [rsp+10h] [rbp-58h]
  __int64 v15; // [rsp+18h] [rbp-50h]
  __int128 v16; // [rsp+20h] [rbp-48h]

  v4 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 120LL);
  if ( !v4 )
  {
    v13 = &off_1610A0;
    v14 = 1LL;
    v15 = 8LL;
    v16 = 0LL;
    core::panicking::panic_fmt(&v13, &off_161120);
  }
  v13 = a3;
  v14 = a4;
  v15 = v4;
  v5 = <core::slice::iter::Chunks<T> as core::iter::traits::iterator::Iterator>::next(&v13);
  if ( v5 )
  {
    v7 = 0LL;
    v8 = 0LL;
    v9 = 0LL;
    while ( !uu_dd::Output::write_block(a2, v5, v6) )
    {
      v11 = *(_QWORD *)(a2 + 16);
      v8 += *(_QWORD *)(v11 + 120) > v10;
      v7 += *(_QWORD *)(v11 + 120) <= v10;
      v9 += v10;
      v5 = <core::slice::iter::Chunks<T> as core::iter::traits::iterator::Iterator>::next(&v13);
      if ( !v5 )
        goto LABEL_8;
    }
    a1[1] = v10;
    *a1 = 1LL;
  }
  else
  {
    v9 = 0LL;
    v8 = 0LL;
    v7 = 0LL;
LABEL_8:
    a1[2] = v9;
    a1[3] = 0LL;
    a1[4] = v7;
    a1[5] = v8;
    *a1 = 0LL;
  }
  return a1;
}
