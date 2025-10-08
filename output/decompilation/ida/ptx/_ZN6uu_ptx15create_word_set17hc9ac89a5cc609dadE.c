_OWORD *__fastcall uu_ptx::create_word_set(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v6; // rdx
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // r13
  __int64 v12; // r15
  __int64 v13; // r13
  __int64 v14; // r12
  __int64 v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  _OWORD *v19; // rbx
  char v21; // [rsp+Ch] [rbp-24Ch]
  char v22; // [rsp+Dh] [rbp-24Bh]
  char v23; // [rsp+Eh] [rbp-24Ah]
  char v24; // [rsp+Fh] [rbp-249h]
  __int128 v25; // [rsp+10h] [rbp-248h] BYREF
  __int64 v26; // [rsp+20h] [rbp-238h]
  __int64 v27; // [rsp+30h] [rbp-228h]
  __int64 v28; // [rsp+38h] [rbp-220h]
  __int128 v29; // [rsp+40h] [rbp-218h]
  __int64 v30; // [rsp+50h] [rbp-208h]
  __int64 v31; // [rsp+58h] [rbp-200h]
  __int64 v32; // [rsp+60h] [rbp-1F8h]
  __int64 v33; // [rsp+68h] [rbp-1F0h]
  __int64 v34; // [rsp+70h] [rbp-1E8h]
  __int64 v35; // [rsp+78h] [rbp-1E0h]
  __int64 v36; // [rsp+80h] [rbp-1D8h]
  __int128 v37; // [rsp+88h] [rbp-1D0h] BYREF
  __int64 v38; // [rsp+98h] [rbp-1C0h]
  __int128 v39; // [rsp+A0h] [rbp-1B8h] BYREF
  __m256i v40; // [rsp+B0h] [rbp-1A8h]
  __int128 v41; // [rsp+D0h] [rbp-188h]
  __int128 v42; // [rsp+E0h] [rbp-178h]
  __int128 v43; // [rsp+F0h] [rbp-168h]
  __int64 v44; // [rsp+100h] [rbp-158h]
  __int128 v45; // [rsp+110h] [rbp-148h]
  __int64 v46; // [rsp+120h] [rbp-138h]
  __int128 v47; // [rsp+130h] [rbp-128h] BYREF
  __int128 v48; // [rsp+140h] [rbp-118h]
  _OWORD v49[4]; // [rsp+150h] [rbp-108h] BYREF
  __int64 v50; // [rsp+190h] [rbp-C8h]
  __int64 v51; // [rsp+198h] [rbp-C0h]
  __int64 v52; // [rsp+1A0h] [rbp-B8h]
  _QWORD v53[4]; // [rsp+1A8h] [rbp-B0h] BYREF
  _BYTE v54[32]; // [rsp+1C8h] [rbp-90h] BYREF
  __int128 v55; // [rsp+1E8h] [rbp-70h] BYREF
  __int64 v56; // [rsp+1F8h] [rbp-60h]
  _BYTE v57[88]; // [rsp+200h] [rbp-58h] BYREF

  regex::regex::string::Regex::new(&v47, *(_QWORD *)(a3 + 8), *(_QWORD *)(a3 + 16));
  core::result::Result<T,E>::unwrap(v54, &v47, &off_251878);
  regex::regex::string::Regex::new(&v47, *(_QWORD *)(a2 + 56), *(_QWORD *)(a2 + 64));
  core::result::Result<T,E>::unwrap(v53, &v47, &off_251890);
  v30 = a1;
  *(_QWORD *)&v37 = 0LL;
  v38 = 0LL;
  hashbrown::map::HashMap<K,V,S,A>::iter(v57, a4);
  v28 = <hashbrown::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(v57);
  if ( v28 )
  {
    v24 = *(_BYTE *)(a2 + 90);
    v21 = *(_BYTE *)(a2 + 92);
    v23 = *(_BYTE *)(a3 + 120);
    v22 = *(_BYTE *)(a3 + 121);
    v35 = a3 + 24;
    v34 = a3 + 72;
    do
    {
      v7 = v6[2];
      if ( v7 )
      {
        v32 = v6[6];
        v8 = v6[1];
        v31 = v8 + 24 * v7;
        v9 = v8 + 24;
        v27 = 0LL;
        do
        {
          v33 = v9;
          regex::regex::string::Regex::find_at(&v47, v53[0], v53[1], *(_QWORD *)(v8 + 8), *(_QWORD *)(v8 + 16));
          *(_QWORD *)&v29 = v47;
          *((_QWORD *)&v29 + 1) = v47;
          if ( (_QWORD)v47 )
          {
            *(_QWORD *)&v29 = *((_QWORD *)&v48 + 1);
            *((_QWORD *)&v29 + 1) = v48;
          }
          v10 = *(_QWORD *)(v8 + 8);
          v11 = *(_QWORD *)(v8 + 16);
          regex_automata::meta::regex::Regex::find_iter(&v39, v54, v10, v11);
          v50 = v44;
          v49[3] = v43;
          v49[2] = v42;
          v49[1] = v41;
          v49[0] = *(_OWORD *)&v40.m256i_u64[2];
          v48 = *(_OWORD *)v40.m256i_i8;
          v47 = v39;
          v51 = v10;
          v52 = v11;
          v36 = v27 + v32;
          while ( 1 )
          {
            regex_automata::util::iter::Searcher::advance(&v39, v49, v50, &v47);
            if ( (_DWORD)v39 != 1 )
              break;
            v12 = *((_QWORD *)&v39 + 1);
            v13 = v40.m256i_i64[0];
            if ( (v24 & 1) == 0 || __PAIR128__(*((unsigned __int64 *)&v39 + 1), v40.m256i_u64[0]) != v29 )
            {
              v14 = *(_QWORD *)(v8 + 8);
              v15 = *(_QWORD *)(v8 + 16);
              v16 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
                      *((_QWORD *)&v39 + 1),
                      v40.m256i_i64[0],
                      v14,
                      v15);
              if ( !v16 )
                core::str::slice_error_fail(v14, v15, v12, v13, &off_2518A8);
              <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v39, v16, v17, v18);
              v26 = v40.m256i_i64[0];
              v25 = v39;
              if ( (v23 & 1) != 0 && !hashbrown::map::HashMap<K,V,S,A>::get_inner(v35, &v25)
                || (v22 & 1) != 0 && hashbrown::map::HashMap<K,V,S,A>::get_inner(v34, &v25) )
              {
                core::ptr::drop_in_place<alloc::string::String>(&v25);
              }
              else
              {
                if ( (v21 & 1) != 0 )
                {
                  alloc::str::<impl str>::to_uppercase(&v39, *((_QWORD *)&v25 + 1), v26);
                  core::ptr::drop_in_place<alloc::string::String>(&v25);
                  v26 = v40.m256i_i64[0];
                  v25 = v39;
                }
                v46 = v26;
                v45 = v25;
                <alloc::string::String as core::clone::Clone>::clone(&v55, v28);
                v40.m256i_i64[0] = v46;
                v39 = v45;
                *(_QWORD *)&v41 = v36;
                *((_QWORD *)&v41 + 1) = v27;
                *(_QWORD *)&v42 = v12;
                *((_QWORD *)&v42 + 1) = v13;
                v40.m256i_i64[3] = v56;
                *(_OWORD *)&v40.m256i_u64[1] = v55;
                alloc::collections::btree::map::BTreeMap<K,V,A>::insert(&v37, &v39);
              }
            }
          }
          core::ptr::drop_in_place<regex::regex::string::Matches>(&v47);
          ++v27;
          v9 = v33 + 24;
          v8 = v33;
        }
        while ( v33 != v31 );
      }
      v28 = <hashbrown::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(v57);
    }
    while ( v28 );
  }
  v19 = (_OWORD *)v30;
  *(_QWORD *)(v30 + 16) = v38;
  *v19 = v37;
  core::ptr::drop_in_place<regex::regex::string::Regex>(v53);
  core::ptr::drop_in_place<regex::regex::string::Regex>(v54);
  return v19;
}