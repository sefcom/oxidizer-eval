__int64 __fastcall just::recipe_resolver::RecipeResolver::resolve_recipes(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int128 *a7)
{
  char v7; // al
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // rax
  _DWORD *v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdx
  char v19; // al
  _QWORD *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rcx
  __int64 v30; // rbx
  __int64 v31; // rax
  unsigned __int8 is_comment; // al
  __int64 v33; // rcx
  _DWORD *v34; // rsi
  _DWORD *v35; // rax
  _DWORD *v36; // rbx
  __int64 v37; // rsi
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm2
  int v41; // edx
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm2
  __int64 v45; // rdi
  int v46; // esi
  __int64 v48; // rcx
  __int128 v49; // [rsp+0h] [rbp-448h] BYREF
  __int64 v50; // [rsp+10h] [rbp-438h]
  __int64 v51; // [rsp+18h] [rbp-430h]
  __int64 v52; // [rsp+20h] [rbp-428h]
  _DWORD *v53; // [rsp+28h] [rbp-420h]
  __int64 v54; // [rsp+30h] [rbp-418h]
  int v55; // [rsp+3Ch] [rbp-40Ch]
  _QWORD v56[3]; // [rsp+40h] [rbp-408h] BYREF
  __int64 v57; // [rsp+58h] [rbp-3F0h] BYREF
  __m256i v58; // [rsp+60h] [rbp-3E8h]
  __m256i v59; // [rsp+80h] [rbp-3C8h]
  char v60; // [rsp+A0h] [rbp-3A8h]
  _BYTE v61[7]; // [rsp+A1h] [rbp-3A7h]
  _QWORD v62[4]; // [rsp+A8h] [rbp-3A0h] BYREF
  __int128 v63; // [rsp+C8h] [rbp-380h]
  __int64 v64; // [rsp+D8h] [rbp-370h]
  __int128 v65; // [rsp+E0h] [rbp-368h] BYREF
  __int64 v66; // [rsp+F0h] [rbp-358h]
  __int128 v67; // [rsp+F8h] [rbp-350h] BYREF
  __int64 v68; // [rsp+108h] [rbp-340h]
  __int128 v69; // [rsp+110h] [rbp-338h] BYREF
  __int64 v70; // [rsp+120h] [rbp-328h]
  __int128 v71; // [rsp+128h] [rbp-320h] BYREF
  __int64 v72; // [rsp+138h] [rbp-310h]
  _OWORD src[16]; // [rsp+140h] [rbp-308h] BYREF
  _BYTE v74[72]; // [rsp+240h] [rbp-208h] BYREF
  _BYTE v75[72]; // [rsp+288h] [rbp-1C0h] BYREF
  _BYTE v76[72]; // [rsp+2D0h] [rbp-178h] BYREF
  _BYTE dest[304]; // [rsp+318h] [rbp-130h] BYREF

  v55 = a6;
  v51 = a1;
  v62[0] = a2;
  v62[1] = a3;
  v62[2] = a4;
  v62[3] = a5;
  *(_QWORD *)&v63 = 0LL;
  v64 = 0LL;
  v65 = *a7;
  v66 = *((_QWORD *)a7 + 2);
  while ( 1 )
  {
    just::table::Table<V>::pop(src);
    if ( __OFSUB__(0LL, *(_QWORD *)&src[0]) )
      break;
    memcpy(dest, src, 0x100uLL);
    *(_QWORD *)&v49 = 0LL;
    *((_QWORD *)&v49 + 1) = 8LL;
    v50 = 0LL;
    just::recipe_resolver::RecipeResolver::resolve_recipe(&v57, v62, &v49, dest);
    v7 = v60;
    v8 = v57;
    if ( v60 != 37 )
    {
      v42 = *(_OWORD *)v58.m256i_i8;
      v43 = *(_OWORD *)&v58.m256i_u64[2];
      v44 = *(_OWORD *)v59.m256i_i8;
      v45 = v51;
      *(_OWORD *)(v51 + 56) = *(_OWORD *)&v59.m256i_u64[2];
      *(_OWORD *)(v45 + 40) = v44;
      *(_OWORD *)(v45 + 24) = v43;
      *(_OWORD *)(v45 + 8) = v42;
      v46 = *(_DWORD *)&v61[3];
      *(_DWORD *)(v45 + 73) = *(_DWORD *)v61;
      *(_DWORD *)(v45 + 76) = v46;
      *(_QWORD *)v45 = v8;
      *(_BYTE *)(v45 + 72) = v7;
      core::ptr::drop_in_place<alloc::vec::Vec<similar::algorithms::utils::UniqueItem<similar::algorithms::utils::OffsetLookup<u32>>>>(
        v49,
        *((_QWORD *)&v49 + 1));
      return core::ptr::drop_in_place<just::recipe_resolver::RecipeResolver>(v62);
    }
    v56[0] = v57;
    core::ptr::drop_in_place<alloc::sync::Arc<just::recipe::Recipe>>(v56);
    core::ptr::drop_in_place<alloc::vec::Vec<similar::algorithms::utils::UniqueItem<similar::algorithms::utils::OffsetLookup<u32>>>>(
      v49,
      *((_QWORD *)&v49 + 1));
  }
  core::ptr::drop_in_place<core::option::Option<just::recipe::Recipe<just::unresolved_dependency::UnresolvedDependency>>>(
    src,
    &v65);
  v9 = 0LL;
  v10 = v63;
  if ( (_QWORD)v63 )
    v10 = v64;
  LOBYTE(v9) = (_QWORD)v63 != 0LL;
  v57 = v9;
  v58.m256i_i64[0] = 0LL;
  *(_OWORD *)&v58.m256i_u64[1] = v63;
  v58.m256i_i64[3] = v9;
  v59.m256i_i64[0] = 0LL;
  *(_OWORD *)&v59.m256i_u64[1] = v63;
  v59.m256i_i64[3] = v10;
  while ( 1 )
  {
    if ( !<alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v57)
      || (v12 = v11) == 0 )
    {
      v48 = v51;
      *(_QWORD *)(v51 + 16) = v64;
      *(_OWORD *)v48 = v63;
      *(_BYTE *)(v48 + 72) = 37;
      return core::ptr::drop_in_place<just::table::Table<just::recipe::Recipe<just::unresolved_dependency::UnresolvedDependency>>>(&v65);
    }
    v13 = *(_QWORD *)(*(_QWORD *)v11 + 96LL) + 208LL * *(_QWORD *)(*(_QWORD *)v11 + 104LL);
    v56[0] = *(_QWORD *)(*(_QWORD *)v11 + 96LL);
    v56[1] = v13;
    v56[2] = 0LL;
    v14 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(v56);
    if ( v15 )
      break;
LABEL_19:
    v20 = *(_QWORD **)v12;
    v21 = *(_QWORD *)(*(_QWORD *)v12 + 56LL);
    if ( v21 )
    {
      v22 = v20[6];
      v23 = v22 + 32;
      v52 = v22 + 32 * v21;
      do
      {
        v24 = v22;
        v54 = v23;
        v25 = *(_QWORD *)(v22 + 16);
        if ( v25 )
        {
          v26 = *(_QWORD *)(v24 + 8);
          v27 = v26 + 128;
          v53 = (_DWORD *)(v26 + (v25 << 7));
          do
          {
            v28 = v26;
            v26 = v27;
            just::expression::Expression::variables((__int64)&v69, v28);
            v50 = v70;
            v49 = v69;
            while ( 1 )
            {
              <just::variables::Variables as core::iter::traits::iterator::Iterator>::next(v74, &v49);
              if ( v74[64] == 37 )
                break;
              just::recipe_resolver::RecipeResolver::resolve_variable(
                src,
                v62[0],
                v74,
                *(_QWORD *)(*(_QWORD *)v12 + 96LL),
                *(_QWORD *)(*(_QWORD *)v12 + 104LL));
              v19 = BYTE8(src[4]);
              if ( BYTE8(src[4]) != 37 )
                goto LABEL_42;
            }
            core::ptr::drop_in_place<just::variables::Variables>(v49, *((_QWORD *)&v49 + 1));
            v27 = v26 + ((unsigned __int8)(v26 != (_QWORD)v53) << 7);
          }
          while ( (_DWORD *)v26 != v53 );
        }
        v22 = v54;
        v23 = v54 + 32 * (unsigned int)(v54 != v52);
      }
      while ( v54 != v52 );
      v20 = *(_QWORD **)v12;
    }
    v29 = v20[4];
    if ( v29 )
    {
      v30 = v20[3];
      v31 = v30 + 32;
      v52 = v30 + 32 * v29;
      do
      {
        v54 = v31;
        is_comment = just::line::Line::is_comment(*(_DWORD **)(v30 + 8), *(_QWORD *)(v30 + 16));
        if ( (is_comment & (unsigned __int8)v55) == 0 )
        {
          v33 = *(_QWORD *)(v30 + 16);
          if ( v33 )
          {
            v34 = *(_DWORD **)(v30 + 8);
            v53 = &v34[32 * v33];
            v35 = v34 + 32;
            do
            {
              v36 = v35;
              if ( *v34 != 18 )
              {
                just::expression::Expression::variables((__int64)&v71, (__int64)v34);
                v50 = v72;
                v49 = v71;
                while ( 1 )
                {
                  <just::variables::Variables as core::iter::traits::iterator::Iterator>::next(v75, &v49);
                  if ( v75[64] == 37 )
                    break;
                  just::recipe_resolver::RecipeResolver::resolve_variable(
                    src,
                    v62[0],
                    v75,
                    *(_QWORD *)(*(_QWORD *)v12 + 96LL),
                    *(_QWORD *)(*(_QWORD *)v12 + 104LL));
                  v19 = BYTE8(src[4]);
                  if ( BYTE8(src[4]) != 37 )
                    goto LABEL_42;
                }
                core::ptr::drop_in_place<just::variables::Variables>(v49, *((_QWORD *)&v49 + 1));
              }
              v35 = &v36[32 * (v36 != v53)];
              v34 = v36;
            }
            while ( v36 != v53 );
          }
        }
        v30 = v54;
        v31 = v54 + 32 * (unsigned int)(v54 != v52);
      }
      while ( v54 != v52 );
    }
  }
  v16 = v14;
  while ( *v15 == 18 )
  {
LABEL_13:
    v16 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(v56);
    if ( !v15 )
      goto LABEL_19;
  }
  just::expression::Expression::variables((__int64)&v67, (__int64)v15);
  v50 = v68;
  v49 = v67;
  do
  {
    <just::variables::Variables as core::iter::traits::iterator::Iterator>::next(v76, &v49);
    if ( v76[64] == 37 )
    {
      core::ptr::drop_in_place<just::variables::Variables>(v49, *((_QWORD *)&v49 + 1));
      goto LABEL_13;
    }
    v17 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
            v16,
            *(_QWORD *)(*(_QWORD *)v12 + 96LL),
            *(_QWORD *)(*(_QWORD *)v12 + 104LL));
    just::recipe_resolver::RecipeResolver::resolve_variable(src, v62[0], v76, v17, v18);
    v19 = BYTE8(src[4]);
  }
  while ( BYTE8(src[4]) == 37 );
LABEL_42:
  v37 = v51;
  *(_QWORD *)(v51 + 64) = *(_QWORD *)&src[4];
  v38 = src[0];
  v39 = src[1];
  v40 = src[2];
  *(_OWORD *)(v37 + 48) = src[3];
  *(_OWORD *)(v37 + 32) = v40;
  *(_OWORD *)(v37 + 16) = v39;
  *(_OWORD *)v37 = v38;
  v41 = HIDWORD(src[4]);
  *(_DWORD *)(v37 + 73) = *(_DWORD *)((char *)&src[4] + 9);
  *(_DWORD *)(v37 + 76) = v41;
  *(_BYTE *)(v37 + 72) = v19;
  core::ptr::drop_in_place<just::variables::Variables>(v49, *((_QWORD *)&v49 + 1));
  return core::ptr::drop_in_place<just::recipe_resolver::RecipeResolver>(v62);
}