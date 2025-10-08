__int64 __fastcall uu_dd::Output::write_blocks(_QWORD *a1, __int64 a2, char **a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 result; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // r12
  __int64 v10; // r13
  __int64 v11; // rbp
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  char **v14; // [rsp+8h] [rbp-60h] BYREF
  __int64 v15; // [rsp+10h] [rbp-58h]
  __int64 v16; // [rsp+18h] [rbp-50h]
  __int128 v17; // [rsp+20h] [rbp-48h]

  v6 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 120LL);
  if ( !v6 )
  {
    v14 = &off_13D1A0;
    v15 = 1LL;
    v16 = 8LL;
    v17 = 0LL;
    core::panicking::panic_fmt(&v14, &off_13DE08, a3, a4, a5, a6);
  }
  v14 = a3;
  v15 = a4;
  v16 = v6;
  result = <core::slice::iter::Chunks<T> as core::iter::traits::iterator::Iterator>::next(&v14);
  if ( result )
  {
    v9 = 0LL;
    v10 = 0LL;
    v11 = 0LL;
    while ( 1 )
    {
      result = uu_dd::Output::write_block(a2, result, v8);
      if ( (result & 1) != 0 )
        break;
      v13 = *(_QWORD *)(a2 + 16);
      v10 += *(_QWORD *)(v13 + 120) > v12;
      v9 += *(_QWORD *)(v13 + 120) <= v12;
      v11 += v12;
      result = <core::slice::iter::Chunks<T> as core::iter::traits::iterator::Iterator>::next(&v14);
      if ( !result )
        goto LABEL_8;
    }
    a1[1] = v12;
    *a1 = 1LL;
  }
  else
  {
    v11 = 0LL;
    v10 = 0LL;
    v9 = 0LL;
LABEL_8:
    a1[2] = v11;
    a1[3] = 0LL;
    a1[4] = v9;
    a1[5] = v10;
    *a1 = 0LL;
  }
  return result;
}