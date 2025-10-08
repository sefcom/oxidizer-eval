__int64 __fastcall just::assignment_resolver::AssignmentResolver::resolve_assignment(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int128 v9; // rax
  __int64 v10; // rax
  _OWORD *v11; // rax
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm2
  __int128 v15; // xmm3
  __int64 v16; // rax
  _OWORD *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // r15
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm2
  __int128 v23; // [rsp+8h] [rbp-1C0h] BYREF
  __int64 v24; // [rsp+18h] [rbp-1B0h]
  _QWORD *v25; // [rsp+20h] [rbp-1A8h] BYREF
  __int64 (__fastcall *v26)(); // [rsp+28h] [rbp-1A0h]
  __int128 v27; // [rsp+38h] [rbp-190h] BYREF
  __int128 v28; // [rsp+48h] [rbp-180h]
  __int128 v29; // [rsp+58h] [rbp-170h]
  __int128 v30; // [rsp+68h] [rbp-160h]
  __int128 v31; // [rsp+78h] [rbp-150h]
  __int64 v32; // [rsp+88h] [rbp-140h]
  _QWORD v33[2]; // [rsp+90h] [rbp-138h] BYREF
  __m256i v34; // [rsp+A0h] [rbp-128h] BYREF
  __int128 v35; // [rsp+C0h] [rbp-108h]
  __int128 v36; // [rsp+D0h] [rbp-F8h]
  __int128 v37; // [rsp+E0h] [rbp-E8h]
  _QWORD v38[3]; // [rsp+108h] [rbp-C0h] BYREF
  __int128 v39; // [rsp+120h] [rbp-A8h]
  __int128 v40; // [rsp+130h] [rbp-98h]
  __int64 v41; // [rsp+140h] [rbp-88h]
  char v42; // [rsp+148h] [rbp-80h]
  _BYTE v43[120]; // [rsp+150h] [rbp-78h] BYREF

  v33[0] = a3;
  v33[1] = a4;
  result = alloc::collections::btree::map::BTreeMap<K,V,A>::get(*(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), a3, a4);
  if ( result )
  {
    *(_BYTE *)(a1 + 72) = 37;
  }
  else
  {
    v24 = a1;
    alloc::vec::Vec<T,A>::push(a2, a3, a4, &off_42DB90);
    v7 = alloc::collections::btree::map::BTreeMap<K,V,A>::get(
           **(_QWORD **)(a2 + 24),
           *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL),
           a3,
           a4);
    if ( v7 )
    {
      v32 = a2 + 32;
      just::expression::Expression::variables(&v25, v7);
      while ( 1 )
      {
        <just::variables::Variables as core::iter::traits::iterator::Iterator>::next(v43, &v25);
        if ( v43[64] == 37 )
          break;
        *(_QWORD *)&v9 = just::token::Token::lexeme(v43);
        v23 = v9;
        if ( !alloc::collections::btree::map::BTreeMap<K,V,A>::get(
                *(_QWORD *)(a2 + 32),
                *(_QWORD *)(a2 + 40),
                v9,
                *((_QWORD *)&v9 + 1)) )
        {
          v10 = just::constants::constants();
          if ( !hashbrown::map::HashMap<K,V,S,A>::get_inner(v10, v23, *((_QWORD *)&v23 + 1)) )
          {
            if ( (unsigned __int8)<T as core::slice::cmp::SliceContains>::slice_contains(
                                    &v23,
                                    *(_QWORD *)(a2 + 8),
                                    *(_QWORD *)(a2 + 16)) )
            {
              alloc::vec::Vec<T,A>::push(a2, v23, *((_QWORD *)&v23 + 1), &off_42DBA8);
              v17 = (_OWORD *)v24;
              v18 = alloc::collections::btree::map::BTreeMap<K,V,A>::get(
                      **(_QWORD **)(a2 + 24),
                      *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL),
                      v23,
                      *((_QWORD *)&v23 + 1));
              if ( !v18 )
                core::option::expect_failed(aNoEntryFoundFo, 22LL, &off_42DBC0);
              v19 = v18;
              <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v27, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
              v35 = v23;
              *(_OWORD *)&v34.m256i_u64[1] = v27;
              v34.m256i_i64[3] = v28;
              v34.m256i_i64[0] = 0x8000000000000018LL;
              just::token::Token::error(&v27, v19 + 128, &v34);
              v17[4] = v31;
              v20 = v27;
              v21 = v28;
              v22 = v29;
              v17[3] = v30;
              v17[2] = v22;
              v17[1] = v21;
              *v17 = v20;
              return core::ptr::drop_in_place<just::variables::Variables>(v25, v26);
            }
            if ( !alloc::collections::btree::map::BTreeMap<K,V,A>::get(
                    **(_QWORD **)(a2 + 24),
                    *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL),
                    v23,
                    *((_QWORD *)&v23 + 1)) )
            {
              *(_OWORD *)&v34.m256i_u64[1] = v23;
              v34.m256i_i64[0] = 0x8000000000000034LL;
              just::token::Token::error(&v27, v43, &v34);
              v11 = (_OWORD *)v24;
              *(_OWORD *)(v24 + 64) = v31;
              v12 = v27;
              v13 = v28;
              v14 = v29;
              v15 = v30;
LABEL_19:
              v11[3] = v15;
              v11[2] = v14;
              v11[1] = v13;
              *v11 = v12;
              return core::ptr::drop_in_place<just::variables::Variables>(v25, v26);
            }
            just::assignment_resolver::AssignmentResolver::resolve_assignment(&v34, a2, v23, *((_QWORD *)&v23 + 1));
            if ( BYTE8(v37) != 37 )
            {
              v11 = (_OWORD *)v24;
              *(_OWORD *)(v24 + 64) = v37;
              v12 = *(_OWORD *)v34.m256i_i8;
              v13 = *(_OWORD *)&v34.m256i_u64[2];
              v14 = v35;
              v15 = v36;
              goto LABEL_19;
            }
          }
        }
      }
      core::ptr::drop_in_place<just::variables::Variables>(v25, v26);
      alloc::collections::btree::map::BTreeMap<K,V,A>::insert(v32, a3);
      v16 = *(_QWORD *)(a2 + 16);
      if ( v16 )
        *(_QWORD *)(a2 + 16) = v16 - 1;
      result = v24;
      *(_BYTE *)(v24 + 72) = 37;
    }
    else
    {
      v25 = v33;
      v26 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v27 = &off_42DB70;
      *((_QWORD *)&v27 + 1) = 2LL;
      *(_QWORD *)&v29 = 0LL;
      *(_QWORD *)&v28 = &v25;
      *((_QWORD *)&v28 + 1) = 1LL;
      core::option::Option<T>::map_or_else(&v34.m256i_u64[1], 0LL, v8, &v27);
      v42 = 35;
      v40 = 0LL;
      v41 = 0LL;
      v38[0] = 1LL;
      v38[1] = 0LL;
      v38[2] = 1LL;
      v39 = 0LL;
      v34.m256i_i64[0] = 0x8000000000000028LL;
      return just::compile_error::CompileError::new(v24, v38, &v34);
    }
  }
  return result;
}