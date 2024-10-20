__int64 __fastcall uu_tr::operation::TranslateOperation::new(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  char v7; // si
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  _QWORD *v12; // r13
  unsigned __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // r12
  __int64 v16; // rdx
  _QWORD *v17; // rax
  _QWORD v19[4]; // [rsp+8h] [rbp-90h] BYREF
  __int128 v20; // [rsp+28h] [rbp-70h]
  __int64 v21; // [rsp+38h] [rbp-60h]
  __int64 v22; // [rsp+40h] [rbp-58h]
  __int64 v23; // [rsp+48h] [rbp-50h]
  __int64 v24; // [rsp+50h] [rbp-48h]
  __int64 v25; // [rsp+58h] [rbp-40h]
  char v26; // [rsp+60h] [rbp-38h]
  char v27; // [rsp+61h] [rbp-37h]

  v5 = a3[2];
  if ( v5 )
  {
    v6 = a3[1];
    v7 = *(_BYTE *)(v6 + v5 - 1);
    v8 = *a2;
    v9 = a2[1];
    v10 = v9 + a2[2];
    v11 = *a3;
    v19[0] = v9;
    v19[1] = v9;
    v19[2] = v8;
    v19[3] = v10;
    v22 = v6;
    v23 = v6;
    v24 = v11;
    v25 = v6 + v5;
    v26 = 1;
    v27 = v7;
    v20 = 0LL;
    v21 = 0LL;
    <std::collections::hash::map::HashMap<K,V,S> as core::iter::traits::collect::FromIterator<(K,V)>>::from_iter(
      a1,
      v19);
  }
  else
  {
    if ( a2[2] )
    {
      *(_QWORD *)(a1 + 8) = 0x8000000000000005LL;
      *(_QWORD *)a1 = 0LL;
    }
    else
    {
      v12 = a3;
      if ( *(_QWORD *)(__readfsqword(0) - 48) )
      {
        v13 = __readfsqword(0) - 48;
        v14 = *(_QWORD *)(v13 + 8);
        v15 = *(_QWORD *)(v13 + 16);
      }
      else
      {
        v14 = std::sys::pal::unix::rand::hashmap_random_keys();
        v15 = v16;
        v17 = (_QWORD *)(__readfsqword(0) - 48);
        *v17 = 1LL;
        v17[1] = v14;
        v17[2] = v16;
      }
      *(_QWORD *)(__readfsqword(0) - 48 + 8) = v14 + 1;
      *(_OWORD *)(a1 + 16) = xmmword_EE4E0;
      *(_OWORD *)a1 = *(_OWORD *)&off_EE4D0;
      *(_QWORD *)(a1 + 32) = v14;
      *(_QWORD *)(a1 + 40) = v15;
      a3 = v12;
    }
    if ( *a3 )
      _rust_dealloc(a3[1], *a3, 1LL);
    if ( *a2 )
      _rust_dealloc(a2[1], *a2, 1LL);
  }
  return a1;
}
