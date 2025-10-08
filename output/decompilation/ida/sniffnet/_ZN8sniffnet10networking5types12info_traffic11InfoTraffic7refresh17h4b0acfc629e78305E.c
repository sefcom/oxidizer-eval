__int64 __fastcall sniffnet::networking::types::info_traffic::InfoTraffic::refresh(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r10
  __int64 v6; // r9
  __int64 v7; // r8
  bool v8; // cf
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int128 *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r12
  __int64 v18; // rdx
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int64 v21; // rax
  __int128 *v22; // rdx
  __int128 *v23; // rbx
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm2
  __int128 *v27; // rdx
  __int64 result; // rax
  __int128 *v29; // rdx
  __int128 *v30; // rbp
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm2
  __int128 *v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // [rsp+0h] [rbp-1A8h]
  __int64 v39; // [rsp+8h] [rbp-1A0h]
  __m256i v40; // [rsp+10h] [rbp-198h] BYREF
  __int128 v41; // [rsp+30h] [rbp-178h]
  __int128 v42; // [rsp+40h] [rbp-168h]
  __int128 v43; // [rsp+50h] [rbp-158h]
  __int128 v44; // [rsp+60h] [rbp-148h]
  __int128 v45; // [rsp+70h] [rbp-138h]
  __m256i v46; // [rsp+80h] [rbp-128h] BYREF
  __int128 v47; // [rsp+A0h] [rbp-108h]
  __int128 v48; // [rsp+B0h] [rbp-F8h]
  __int128 v49; // [rsp+C0h] [rbp-E8h]
  __int128 v50; // [rsp+D0h] [rbp-D8h]
  _BYTE v51[40]; // [rsp+E8h] [rbp-C0h] BYREF
  __int128 v52; // [rsp+110h] [rbp-98h] BYREF
  _BYTE v53[28]; // [rsp+120h] [rbp-88h]

  v2 = *(_QWORD *)(a2 + 160);
  v3 = *(_QWORD *)(a2 + 168);
  v4 = *(_QWORD *)(a2 + 184);
  v5 = *(_QWORD *)(a2 + 176);
  v6 = *(_QWORD *)(a2 + 200);
  v7 = *(_QWORD *)(a2 + 192);
  v8 = __CFADD__(v2, *(_QWORD *)(a1 + 160));
  *(_QWORD *)(a1 + 160) += v2;
  *(_QWORD *)(a1 + 168) += v3 + v8;
  v9 = *(_QWORD *)(a2 + 216);
  v8 = __CFADD__(v5, *(_QWORD *)(a1 + 176));
  *(_QWORD *)(a1 + 176) += v5;
  *(_QWORD *)(a1 + 184) += v4 + v8;
  v10 = *(_QWORD *)(a2 + 208);
  v8 = __CFADD__(v7, *(_QWORD *)(a1 + 192));
  *(_QWORD *)(a1 + 192) += v7;
  *(_QWORD *)(a1 + 200) += v6 + v8;
  v11 = *(_QWORD *)(a2 + 224);
  v8 = __CFADD__(v10, *(_QWORD *)(a1 + 208));
  *(_QWORD *)(a1 + 208) += v10;
  *(_QWORD *)(a1 + 216) += v9 + v8;
  LODWORD(v9) = *(_DWORD *)(a2 + 232);
  *(_QWORD *)(a1 + 224) = v11;
  *(_DWORD *)(a1 + 232) = v9;
  *(_DWORD *)(a1 + 240) = *(_DWORD *)(a2 + 240);
  v12 = *(_QWORD *)a2;
  if ( *(_QWORD *)a1 == *(_QWORD *)a2 )
  {
    v13 = *(_QWORD *)a1 + 1LL;
    *(_QWORD *)a2 = v13;
    v12 = v13;
  }
  v14 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)a1 = v12;
  *(_QWORD *)(a1 + 8) = v14;
  v39 = a2;
  hashbrown::map::HashMap<K,V,S,A>::iter(v51);
  v15 = (__int128 *)<hashbrown::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(v51, a2 + 16);
  if ( v15 )
  {
    v17 = v16;
    do
    {
      v19 = *v15;
      v20 = v15[1];
      *(_OWORD *)&v53[12] = *(__int128 *)((char *)v15 + 28);
      *(_OWORD *)v53 = v20;
      v52 = v19;
      hashbrown::rustc_entry::<impl hashbrown::map::HashMap<K,V,S,A>>::rustc_entry(&v40, a1 + 16, &v52);
      if ( v40.m256i_i16[8] == 2 )
      {
        *(_OWORD *)v46.m256i_i8 = *(_OWORD *)v40.m256i_i8;
        v46.m256i_i16[8] = 2;
      }
      else
      {
        v48 = v42;
        v47 = v41;
        v46 = v40;
      }
      std::collections::hash::map::Entry<K,V>::and_modify(&v40, &v46, v17);
      std::collections::hash::map::Entry<K,V>::or_insert_with(&v40, v17);
      v15 = (__int128 *)<hashbrown::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(v51, v17);
      v17 = v18;
    }
    while ( v15 );
  }
  hashbrown::map::HashMap<K,V,S,A>::iter(v51);
  v21 = <hashbrown::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(v51, a2 + 64);
  if ( v21 )
  {
    v23 = v22;
    do
    {
      *(_QWORD *)v53 = *(_QWORD *)(v21 + 16);
      v52 = *(_OWORD *)v21;
      hashbrown::rustc_entry::<impl hashbrown::map::HashMap<K,V,S,A>>::rustc_entry(&v40, a1 + 64, &v52);
      if ( v40.m256i_i32[0] == 3 )
      {
        *(_OWORD *)&v46.m256i_u64[1] = *(_OWORD *)&v40.m256i_u64[1];
        v46.m256i_i64[0] = 3LL;
      }
      else
      {
        *(_QWORD *)&v47 = v41;
        v46 = v40;
      }
      std::collections::hash::map::Entry<K,V>::and_modify(&v52, &v46, v23);
      v43 = v23[4];
      v24 = *v23;
      v25 = v23[1];
      v26 = v23[2];
      v42 = v23[3];
      v41 = v26;
      *(_OWORD *)&v40.m256i_u64[2] = v25;
      *(_OWORD *)v40.m256i_i8 = v24;
      std::collections::hash::map::Entry<K,V>::or_insert(&v52, &v40);
      v21 = <hashbrown::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(v51, &v40);
      v23 = v27;
    }
    while ( v21 );
  }
  hashbrown::map::HashMap<K,V,S,A>::iter(v51);
  result = <hashbrown::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(v51, a2 + 112);
  if ( result )
  {
    v30 = v29;
    v38 = a1 + 112;
    do
    {
      <sniffnet::networking::types::host::Host as core::clone::Clone>::clone(&v52, result);
      ((void (__fastcall *)(__m256i *, __int64, __int128 *, __int64, __int64, __int64, __int64, __int64))hashbrown::rustc_entry::<impl hashbrown::map::HashMap<K,V,S,A>>::rustc_entry)(
        &v40,
        v38,
        &v52,
        v35,
        v36,
        v37,
        v38,
        v39);
      if ( v40.m256i_i64[0] == 0x8000000000000000LL )
      {
        *(_OWORD *)&v46.m256i_u64[1] = *(_OWORD *)&v40.m256i_u64[1];
        v46.m256i_i64[0] = 0x8000000000000000LL;
      }
      else
      {
        v50 = v44;
        v49 = v43;
        v48 = v42;
        v47 = v41;
        v46 = v40;
      }
      std::collections::hash::map::Entry<K,V>::and_modify(&v52, &v46, v30);
      v45 = v30[6];
      v44 = v30[5];
      v43 = v30[4];
      v31 = *v30;
      v32 = v30[1];
      v33 = v30[2];
      v42 = v30[3];
      v41 = v33;
      *(_OWORD *)&v40.m256i_u64[2] = v32;
      *(_OWORD *)v40.m256i_i8 = v31;
      std::collections::hash::map::Entry<K,V>::or_insert(&v52, &v40);
      result = <hashbrown::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(v51, &v40);
      v30 = v34;
    }
    while ( result );
  }
  return result;
}