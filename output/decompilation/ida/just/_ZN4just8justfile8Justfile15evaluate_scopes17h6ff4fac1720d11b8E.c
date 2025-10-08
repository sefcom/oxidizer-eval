__int64 __fastcall just::justfile::Justfile::evaluate_scopes(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  int v9; // r14d
  int v10; // r15d
  __int64 result; // rax
  __int64 v14; // rbp
  __int128 v15; // xmm0
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rsi
  int v19; // edx
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm2
  _BYTE v23[104]; // [rsp+10h] [rbp-120h] BYREF
  __int128 v24; // [rsp+78h] [rbp-B8h] BYREF
  _BYTE v25[24]; // [rsp+88h] [rbp-A8h]
  __int64 v26; // [rsp+A0h] [rbp-90h]
  __int64 v27; // [rsp+A8h] [rbp-88h]
  __int64 v28; // [rsp+B0h] [rbp-80h]
  __int64 v29; // [rsp+B8h] [rbp-78h]
  _QWORD v30[3]; // [rsp+C0h] [rbp-70h] BYREF
  _OWORD v31[5]; // [rsp+D8h] [rbp-58h] BYREF

  v9 = a5;
  v10 = a4;
  just::evaluator::Evaluator::evaluate_assignments((__int64)v23, a4, a5, (__int64)a2, a6, a7, a9);
  result = v23[0];
  if ( v23[0] == 56 )
  {
    v31[0] = *(_OWORD *)&v23[8];
    v31[1] = *(_OWORD *)&v23[24];
    typed_arena::Arena<T>::alloc_fast_path(v23, a3, v31);
    if ( *(_DWORD *)v23 == 1 )
      v14 = typed_arena::Arena<T>::alloc_slow_path(a3, &v23[8]);
    else
      v14 = *(_QWORD *)&v23[8];
    <alloc::string::String as core::clone::Clone>::clone(v23, a2 + 6);
    alloc::collections::btree::map::BTreeMap<K,V,A>::insert(a8, v23, a2, v14);
    v16 = a2[84];
    v17 = a2[85];
    v18 = v16;
    if ( v16 )
      v18 = a2[86];
    v24 = v16 != 0;
    *(_QWORD *)v25 = v16;
    *(_QWORD *)&v25[8] = v17;
    *(_QWORD *)&v25[16] = v16 != 0;
    v26 = 0LL;
    v27 = v16;
    v28 = v17;
    v29 = v18;
    if ( <alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v24) )
    {
      while ( 1 )
      {
        v30[0] = 0LL;
        v30[2] = 0LL;
        just::justfile::Justfile::evaluate_scopes((unsigned int)v23, v19, a3, v10, v9, (unsigned int)v30, v14, a8, a9);
        if ( v23[0] != 56 )
          break;
        core::ptr::drop_in_place<alloc::collections::btree::map::BTreeMap<alloc::string::String,alloc::string::String>>(v30);
        if ( !<alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v24) )
          goto LABEL_11;
      }
      *(_QWORD *)(a1 + 96) = *(_QWORD *)&v23[96];
      *(_OWORD *)(a1 + 80) = *(_OWORD *)&v23[80];
      *(_OWORD *)(a1 + 64) = *(_OWORD *)&v23[64];
      v20 = *(_OWORD *)v23;
      v21 = *(_OWORD *)&v23[16];
      v22 = *(_OWORD *)&v23[32];
      *(_OWORD *)(a1 + 48) = *(_OWORD *)&v23[48];
      *(_OWORD *)(a1 + 32) = v22;
      *(_OWORD *)(a1 + 16) = v21;
      *(_OWORD *)a1 = v20;
      return core::ptr::drop_in_place<alloc::collections::btree::map::BTreeMap<alloc::string::String,alloc::string::String>>(v30);
    }
    else
    {
LABEL_11:
      result = a1;
      *(_BYTE *)a1 = 56;
    }
  }
  else
  {
    *(_QWORD *)&v25[15] = *(_QWORD *)&v23[32];
    *(_OWORD *)v25 = *(_OWORD *)&v23[17];
    v24 = *(_OWORD *)&v23[1];
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v23[88];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v23[72];
    *(_OWORD *)(a1 + 56) = *(_OWORD *)&v23[56];
    *(_OWORD *)(a1 + 40) = *(_OWORD *)&v23[40];
    *(_QWORD *)(a1 + 32) = *(_QWORD *)&v25[15];
    v15 = v24;
    *(_OWORD *)(a1 + 17) = *(_OWORD *)v25;
    *(_OWORD *)(a1 + 1) = v15;
    *(_BYTE *)a1 = result;
  }
  return result;
}