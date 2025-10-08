__int64 __fastcall just::justfile::Justfile::check_unstable(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rsi
  unsigned __int8 *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 result; // rax
  __int64 v14; // rdx
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  __int128 v18; // [rsp+8h] [rbp-D0h] BYREF
  __int128 v19; // [rsp+18h] [rbp-C0h]
  __int128 v20; // [rsp+28h] [rbp-B0h]
  __int128 v21; // [rsp+38h] [rbp-A0h]
  __int128 v22; // [rsp+48h] [rbp-90h]
  __int128 v23; // [rsp+58h] [rbp-80h]
  __int64 v24; // [rsp+68h] [rbp-70h]
  _QWORD v25[13]; // [rsp+70h] [rbp-68h] BYREF

  v5 = *(_QWORD *)(a2 + 720);
  v6 = *(_QWORD *)(a2 + 728);
  v7 = v5;
  if ( v5 )
    v7 = *(_QWORD *)(a2 + 736);
  v18 = v5 != 0;
  *(_QWORD *)&v19 = v5;
  *((_QWORD *)&v19 + 1) = v6;
  v20 = v18;
  *(_QWORD *)&v21 = v5;
  *((_QWORD *)&v21 + 1) = v6;
  *(_QWORD *)&v22 = v7;
  v8 = (unsigned __int8 *)<alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v18);
  if ( !v8 || (a3 & 1) != 0 || *(_BYTE *)(a2 + 491) )
  {
    v9 = *(_QWORD *)(a2 + 672);
    v10 = *(_QWORD *)(a2 + 680);
    v11 = 0LL;
    v12 = v9;
    if ( v9 )
      v12 = *(_QWORD *)(a2 + 688);
    LOBYTE(v11) = v9 != 0;
    v25[0] = v11;
    v25[1] = 0LL;
    v25[2] = v9;
    v25[3] = v10;
    v25[4] = v11;
    v25[5] = 0LL;
    v25[6] = v9;
    v25[7] = v10;
    v25[8] = v12;
    result = <alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(v25);
    if ( result )
    {
      while ( 1 )
      {
        just::justfile::Justfile::check_unstable(&v18, v14, a3);
        if ( (_BYTE)v18 != 56 )
          break;
        result = <alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(v25);
        if ( !result )
          goto LABEL_11;
      }
      result = v24;
      *(_QWORD *)(a1 + 96) = v24;
      *(_OWORD *)(a1 + 80) = v23;
      *(_OWORD *)(a1 + 64) = v22;
      v15 = v18;
      v16 = v19;
      v17 = v20;
      *(_OWORD *)(a1 + 48) = v21;
      *(_OWORD *)(a1 + 32) = v17;
      *(_OWORD *)(a1 + 16) = v16;
      *(_OWORD *)a1 = v15;
    }
    else
    {
LABEL_11:
      *(_BYTE *)a1 = 56;
    }
  }
  else
  {
    result = *v8;
    *(_BYTE *)a1 = 54;
    *(_BYTE *)(a1 + 1) = result;
  }
  return result;
}