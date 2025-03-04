_OWORD *__fastcall uu_ptx::create_word_set(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  _QWORD *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // r12
  __int64 v12; // r15
  __int64 v13; // rbp
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdx
  _OWORD *v17; // rbx
  char v19; // [rsp+Ch] [rbp-23Ch]
  char v20; // [rsp+Dh] [rbp-23Bh]
  char v21; // [rsp+Eh] [rbp-23Ah]
  char v22; // [rsp+Fh] [rbp-239h]
  __int128 v23; // [rsp+10h] [rbp-238h] BYREF
  __int64 v24; // [rsp+20h] [rbp-228h]
  __int64 v25; // [rsp+28h] [rbp-220h]
  __int64 v26; // [rsp+30h] [rbp-218h]
  __int64 v27; // [rsp+38h] [rbp-210h]
  __int64 v28; // [rsp+40h] [rbp-208h]
  __int64 v29; // [rsp+48h] [rbp-200h]
  __int64 v30; // [rsp+50h] [rbp-1F8h]
  __int64 v31; // [rsp+58h] [rbp-1F0h]
  __int64 v32; // [rsp+60h] [rbp-1E8h]
  __int128 v33; // [rsp+68h] [rbp-1E0h] BYREF
  __int64 v34; // [rsp+78h] [rbp-1D0h]
  _QWORD v35[2]; // [rsp+80h] [rbp-1C8h] BYREF
  __int128 v36; // [rsp+90h] [rbp-1B8h] BYREF
  __m256i v37; // [rsp+A0h] [rbp-1A8h]
  __int128 v38; // [rsp+C0h] [rbp-188h]
  __int128 v39; // [rsp+D0h] [rbp-178h]
  __int128 v40; // [rsp+E0h] [rbp-168h]
  __int64 v41; // [rsp+F0h] [rbp-158h]
  __int128 v42; // [rsp+100h] [rbp-148h] BYREF
  __int128 v43; // [rsp+110h] [rbp-138h]
  _OWORD v44[4]; // [rsp+120h] [rbp-128h] BYREF
  __int64 v45; // [rsp+160h] [rbp-E8h]
  __int64 v46; // [rsp+168h] [rbp-E0h]
  __int64 v47; // [rsp+170h] [rbp-D8h]
  __int128 v48; // [rsp+180h] [rbp-C8h]
  __int64 v49; // [rsp+190h] [rbp-B8h]
  _QWORD v50[4]; // [rsp+198h] [rbp-B0h] BYREF
  _BYTE v51[32]; // [rsp+1B8h] [rbp-90h] BYREF
  __int128 v52; // [rsp+1D8h] [rbp-70h] BYREF
  __int64 v53; // [rsp+1E8h] [rbp-60h]
  _OWORD v54[2]; // [rsp+1F0h] [rbp-58h] BYREF
  __int64 v55; // [rsp+210h] [rbp-38h]

  regex::regex::string::Regex::new(&v42, *(_QWORD *)(a3 + 8), *(_QWORD *)(a3 + 16));
  core::result::Result<T,E>::unwrap(v51, &v42, &off_2EDD88);
  regex::regex::string::Regex::new(&v42, *(_QWORD *)(a2 + 56), *(_QWORD *)(a2 + 64));
  core::result::Result<T,E>::unwrap(v50, &v42, &off_2EDDA0);
  v27 = a1;
  *(_QWORD *)&v33 = 0LL;
  v34 = 0LL;
  hashbrown::map::HashMap<K,V,S,A>::iter(&v42, a4);
  v55 = *(_QWORD *)&v44[0];
  v54[1] = v43;
  v54[0] = v42;
  v22 = *(_BYTE *)(a2 + 90);
  v19 = *(_BYTE *)(a2 + 92);
  v21 = *(_BYTE *)(a3 + 120);
  v20 = *(_BYTE *)(a3 + 121);
  v32 = a3 + 24;
  v30 = a3 + 72;
  while ( 1 )
  {
    v6 = <hashbrown::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(v54);
    if ( !v6 )
      break;
    v29 = v6;
    v28 = v7[6];
    v8 = v7[1] + 24LL * v7[2];
    v35[0] = v7[1];
    v35[1] = v8;
    v9 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v35);
    if ( v9 )
    {
      v25 = 0LL;
      do
      {
        v10 = *(_QWORD *)(v9 + 8);
        v11 = *(_QWORD *)(v9 + 16);
        regex::regex::string::Regex::find_at(&v42, v50[0], v50[1], v10, v11);
        v12 = v42;
        v26 = v42;
        if ( (_QWORD)v42 )
        {
          v26 = *((_QWORD *)&v43 + 1);
          v12 = v43;
        }
        regex_automata::meta::regex::Regex::find_iter(&v36, v51, v10, v11);
        v45 = v41;
        v44[3] = v40;
        v44[2] = v39;
        v44[1] = v38;
        v44[0] = *(_OWORD *)&v37.m256i_u64[2];
        v43 = *(_OWORD *)v37.m256i_i8;
        v42 = v36;
        v46 = v10;
        v47 = v11;
        v31 = v25 + v28;
        while ( 1 )
        {
          regex_automata::util::iter::Searcher::advance(&v36, v44, v45, &v42);
          if ( !(_QWORD)v36 )
            break;
          v13 = *((_QWORD *)&v36 + 1);
          v14 = v37.m256i_i64[0];
          if ( !v22
            || *((_QWORD *)&v36 + 1) != v12
            || !(unsigned __int8)core::cmp::impls::<impl core::cmp::PartialEq for usize>::eq(v37.m256i_i64[0], v26) )
          {
            v15 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
                    v13,
                    v14,
                    v10,
                    v11);
            if ( !v15 )
              core::str::slice_error_fail(v10, v11, v13, v14, &off_2EDDB8);
            <T as alloc::slice::hack::ConvertVec>::to_vec(&v36, v15, v16);
            v24 = v37.m256i_i64[0];
            v23 = v36;
            if ( v21 && !hashbrown::map::HashMap<K,V,S,A>::get_inner(v32, &v23)
              || v20 && hashbrown::map::HashMap<K,V,S,A>::get_inner(v30, &v23) )
            {
              core::ptr::drop_in_place<alloc::string::String>(&v23);
            }
            else
            {
              if ( v19 )
              {
                alloc::str::<impl str>::to_lowercase(&v36, *((_QWORD *)&v23 + 1), v24);
                core::ptr::drop_in_place<alloc::string::String>(&v23);
                v24 = v37.m256i_i64[0];
                v23 = v36;
              }
              v49 = v24;
              v48 = v23;
              <alloc::string::String as core::clone::Clone>::clone(&v52, v29);
              v37.m256i_i64[0] = v49;
              v36 = v48;
              *(_QWORD *)&v38 = v31;
              *((_QWORD *)&v38 + 1) = v25;
              *(_QWORD *)&v39 = v13;
              *((_QWORD *)&v39 + 1) = v14;
              v37.m256i_i64[3] = v53;
              *(_OWORD *)&v37.m256i_u64[1] = v52;
              alloc::collections::btree::map::BTreeMap<K,V,A>::insert(&v33, &v36);
            }
          }
        }
        core::ptr::drop_in_place<regex::regex::string::Matches>(&v42);
        ++v25;
        v9 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v35);
      }
      while ( v9 );
    }
  }
  v17 = (_OWORD *)v27;
  *(_QWORD *)(v27 + 16) = v34;
  *v17 = v33;
  core::ptr::drop_in_place<regex::regex::string::Regex>(v50);
  core::ptr::drop_in_place<regex::regex::string::Regex>(v51);
  return v17;
}
