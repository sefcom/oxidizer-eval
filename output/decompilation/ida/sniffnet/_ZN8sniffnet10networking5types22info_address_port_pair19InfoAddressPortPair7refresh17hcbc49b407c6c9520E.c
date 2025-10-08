unsigned __int8 *__fastcall sniffnet::networking::types::info_address_port_pair::InfoAddressPortPair::refresh(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx
  bool v3; // cf
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned __int8 *v6; // rax
  _QWORD *v7; // rdx
  _QWORD *v8; // r14
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // rdx
  __int64 v15; // rsi
  unsigned __int8 *result; // rax
  _QWORD *v17; // rdx
  _QWORD *v18; // r13
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  _QWORD *v24; // rdx
  __int128 v25; // [rsp+0h] [rbp-98h] BYREF
  __int64 v26; // [rsp+10h] [rbp-88h]
  __int128 v27; // [rsp+20h] [rbp-78h] BYREF
  __int64 v28; // [rsp+30h] [rbp-68h]
  __int64 v29; // [rsp+38h] [rbp-60h]
  _BYTE v30[88]; // [rsp+40h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a2 + 8);
  v3 = __CFADD__(*(_QWORD *)a2, *(_QWORD *)a1);
  *(_QWORD *)a1 += *(_QWORD *)a2;
  *(_QWORD *)(a1 + 8) += v2 + v3;
  v4 = *(_QWORD *)(a2 + 24);
  v5 = *(_QWORD *)(a2 + 16);
  v3 = __CFADD__(v5, *(_QWORD *)(a1 + 16));
  *(_QWORD *)(a1 + 16) += v5;
  *(_QWORD *)(a1 + 24) += v4 + v3;
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(a1 + 208) = *(_OWORD *)(a2 + 208);
  *(_QWORD *)(a1 + 224) = *(_QWORD *)(a2 + 224);
  *(_BYTE *)(a1 + 232) = *(_BYTE *)(a2 + 232);
  v29 = a2;
  hashbrown::map::HashMap<K,V,S,A>::iter(v30);
  v6 = (unsigned __int8 *)<hashbrown::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(v30, a2 + 64);
  if ( v6 )
  {
    v8 = v7;
    do
    {
      hashbrown::rustc_entry::<impl hashbrown::map::HashMap<K,V,S,A>>::rustc_entry(&v27, a1 + 64, *v6, v6[1]);
      if ( (_BYTE)v28 == 2 )
      {
        v25 = v27;
        LOBYTE(v26) = 2;
      }
      else
      {
        v26 = v28;
        v25 = v27;
      }
      ((void (__fastcall *)(__int128 *, __int128 *, _QWORD *))std::collections::hash::map::Entry<K,V>::and_modify)(
        &v27,
        &v25,
        v8);
      v9 = *v8;
      std::collections::hash::map::Entry<K,V>::or_insert(&v27, *v8, v10, v11, v12, v13, v25, *((_QWORD *)&v25 + 1), v26);
      v6 = (unsigned __int8 *)<hashbrown::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(v30, v9);
      v8 = v14;
    }
    while ( v6 );
  }
  v15 = v29 + 112;
  hashbrown::map::HashMap<K,V,S,A>::iter(v30);
  result = (unsigned __int8 *)<hashbrown::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(v30, v15);
  if ( result )
  {
    v18 = v17;
    do
    {
      hashbrown::rustc_entry::<impl hashbrown::map::HashMap<K,V,S,A>>::rustc_entry(&v27, a1 + 112, *result);
      if ( (_BYTE)v28 == 3 )
      {
        v25 = v27;
        LOBYTE(v26) = 3;
      }
      else
      {
        v26 = v28;
        v25 = v27;
      }
      ((void (__fastcall *)(__int128 *, __int128 *, _QWORD *))std::collections::hash::map::Entry<K,V>::and_modify)(
        &v27,
        &v25,
        v18);
      v19 = *v18;
      std::collections::hash::map::Entry<K,V>::or_insert(
        &v27,
        *v18,
        v20,
        v21,
        v22,
        v23,
        v25,
        *((_QWORD *)&v25 + 1),
        v26);
      result = (unsigned __int8 *)<hashbrown::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(v30, v19);
      v18 = v24;
    }
    while ( result );
  }
  return result;
}