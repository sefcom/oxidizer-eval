__int64 __fastcall uu_test::parser::Parser::term(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 *v5; // r15
  _QWORD *v6; // r15
  __int64 v7; // r15
  char *v8; // rax
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rcx
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // rcx
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // r15
  __int64 v22; // rax
  __int64 v23; // rcx
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  char v26; // bp
  _BYTE *v27; // rax
  __int128 *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // r15
  __int128 *v32; // rcx
  const char *v33; // rsi
  __int64 v34; // r15
  __int64 v35; // rax
  __int64 v36; // rcx
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 *v39; // rax
  __m256i v41; // [rsp+0h] [rbp-4C8h] BYREF
  __int128 v42; // [rsp+20h] [rbp-4A8h]
  __int64 v43; // [rsp+30h] [rbp-498h]
  __int64 v44; // [rsp+38h] [rbp-490h]
  _QWORD *v45; // [rsp+48h] [rbp-480h] BYREF
  _QWORD *v46; // [rsp+50h] [rbp-478h] BYREF
  __int128 v47; // [rsp+58h] [rbp-470h] BYREF
  __int128 v48; // [rsp+68h] [rbp-460h]
  __int64 v49; // [rsp+78h] [rbp-450h]
  __int64 v50; // [rsp+80h] [rbp-448h] BYREF
  _QWORD *v51; // [rsp+88h] [rbp-440h] BYREF
  unsigned __int64 v52; // [rsp+90h] [rbp-438h]
  __int128 v53; // [rsp+A0h] [rbp-428h] BYREF
  __int64 v54; // [rsp+B0h] [rbp-418h]
  _BYTE v55[8]; // [rsp+B8h] [rbp-410h] BYREF
  _QWORD *v56; // [rsp+C0h] [rbp-408h]
  unsigned __int64 v57; // [rsp+C8h] [rbp-400h]
  _QWORD *v58; // [rsp+D0h] [rbp-3F8h] BYREF
  _QWORD *v59; // [rsp+D8h] [rbp-3F0h] BYREF
  __m256i v60; // [rsp+E0h] [rbp-3E8h] BYREF
  __int64 v61; // [rsp+100h] [rbp-3C8h]
  signed __int64 v62; // [rsp+108h] [rbp-3C0h] BYREF
  __int128 v63; // [rsp+110h] [rbp-3B8h] BYREF
  __int64 v64[4]; // [rsp+120h] [rbp-3A8h] BYREF
  __int128 v65; // [rsp+140h] [rbp-388h] BYREF
  __int64 v66; // [rsp+150h] [rbp-378h]
  __int64 v67; // [rsp+160h] [rbp-368h] BYREF
  char v68; // [rsp+168h] [rbp-360h] BYREF
  __int64 v69; // [rsp+188h] [rbp-340h] BYREF
  char v70; // [rsp+190h] [rbp-338h] BYREF
  __int64 v71; // [rsp+1B0h] [rbp-318h] BYREF
  __int128 v72; // [rsp+1B8h] [rbp-310h]
  __int64 v73; // [rsp+1C8h] [rbp-300h]
  _QWORD v74[2]; // [rsp+1D8h] [rbp-2F0h] BYREF
  __int64 v75; // [rsp+1E8h] [rbp-2E0h] BYREF
  _BYTE v76[24]; // [rsp+1F0h] [rbp-2D8h] BYREF
  __int64 v77; // [rsp+208h] [rbp-2C0h] BYREF
  _BYTE v78[24]; // [rsp+210h] [rbp-2B8h] BYREF
  __int64 v79; // [rsp+228h] [rbp-2A0h] BYREF
  _BYTE v80[24]; // [rsp+230h] [rbp-298h] BYREF
  __int64 v81; // [rsp+248h] [rbp-280h] BYREF
  _BYTE v82[24]; // [rsp+250h] [rbp-278h] BYREF
  __m256i v83; // [rsp+268h] [rbp-260h] BYREF
  __int128 v84; // [rsp+288h] [rbp-240h]
  __int64 v85; // [rsp+298h] [rbp-230h]
  __int128 v86; // [rsp+2A0h] [rbp-228h]
  __int128 v87; // [rsp+2B0h] [rbp-218h]
  __int64 v88; // [rsp+2C0h] [rbp-208h]
  __int64 v89; // [rsp+2C8h] [rbp-200h] BYREF
  __int128 v90; // [rsp+2D0h] [rbp-1F8h] BYREF
  __int64 v91; // [rsp+2E0h] [rbp-1E8h]
  _OWORD v92[2]; // [rsp+2F0h] [rbp-1D8h] BYREF
  __int64 v93; // [rsp+310h] [rbp-1B8h]
  _OWORD v94[2]; // [rsp+318h] [rbp-1B0h] BYREF
  __int64 v95; // [rsp+338h] [rbp-190h]
  __int64 v96; // [rsp+340h] [rbp-188h] BYREF
  char v97; // [rsp+348h] [rbp-180h] BYREF
  __int64 v98; // [rsp+360h] [rbp-168h] BYREF
  __int128 v99; // [rsp+368h] [rbp-160h]
  __int64 v100; // [rsp+378h] [rbp-150h]
  __int64 v101; // [rsp+388h] [rbp-140h] BYREF
  __int128 v102; // [rsp+390h] [rbp-138h]
  __int64 v103; // [rsp+3A0h] [rbp-128h]
  __int128 v104; // [rsp+3A8h] [rbp-120h] BYREF
  __int64 v105; // [rsp+3B8h] [rbp-110h]
  __int64 v106; // [rsp+3C0h] [rbp-108h] BYREF
  __int128 v107; // [rsp+3C8h] [rbp-100h] BYREF
  __int64 v108; // [rsp+3D8h] [rbp-F0h]
  _OWORD v109[2]; // [rsp+3E0h] [rbp-E8h] BYREF
  __int64 v110; // [rsp+400h] [rbp-C8h]
  _OWORD v111[2]; // [rsp+410h] [rbp-B8h] BYREF
  __int64 v112; // [rsp+430h] [rbp-98h]
  _QWORD v113[5]; // [rsp+438h] [rbp-90h] BYREF
  __int64 v114; // [rsp+460h] [rbp-68h] BYREF
  char v115; // [rsp+468h] [rbp-60h] BYREF
  __int64 v116; // [rsp+480h] [rbp-48h] BYREF
  char v117; // [rsp+488h] [rbp-40h] BYREF

  v3 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = 0x8000000000000001LL;
  if ( v3 != 0x8000000000000001LL )
  {
    *(_OWORD *)&v41.m256i_u64[1] = *(_OWORD *)(a2 + 32);
LABEL_6:
    v41.m256i_i64[0] = v3;
    goto LABEL_7;
  }
  v4 = *(_QWORD *)(a2 + 56);
  if ( v4 == *(_QWORD *)(a2 + 72) )
  {
    v3 = 0x8000000000000000LL;
    goto LABEL_6;
  }
  *(_QWORD *)(a2 + 56) = v4 + 24;
  v41.m256i_i64[2] = *(_QWORD *)(v4 + 16);
  *(_OWORD *)v41.m256i_i8 = *(_OWORD *)v4;
LABEL_7:
  uu_test::parser::Symbol::new((__int64)&v47, &v41);
  v5 = (__int64 *)(a2 + 24);
  switch ( (__int64)v47 )
  {
    case 0LL:
      <core::iter::adapters::peekable::Peekable<I> as core::clone::Clone>::clone(&v83, a2 + 24);
      v43 = v85;
      v42 = v84;
      v41 = v83;
      v44 = 3LL;
      <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(v55, &v41);
      v6 = v56;
      if ( !v56 || ((unsigned __int8)v56 & 7) != 0 || v57 > 0x333333333333333LL )
        goto LABEL_121;
      switch ( v57 )
      {
        case 0uLL:
          std::sys::os_str::bytes::Slice::to_owned(
            &v41,
            "(!-asrc/uu/test/src/parser.rs)description() is deprecated; use Display",
            1LL);
          v73 = v41.m256i_i64[2];
          v72 = *(_OWORD *)v41.m256i_i8;
          v71 = 3LL;
          uu_test::parser::Parser::literal(&v114, a2, &v71);
          v7 = v114;
          if ( v114 == 7 )
            goto LABEL_93;
          v8 = &v115;
          goto LABEL_115;
        case 1uLL:
          v58 = v56;
          v74[0] = &v58;
          v74[1] = <&T as core::fmt::Display>::fmt;
          v41.m256i_i64[0] = (__int64)&anon_5881361bc50ddb8569a319ef7cd28565_52_llvm_17519153253422479168;
          v41.m256i_i64[1] = 1LL;
          v41.m256i_i64[2] = (__int64)v74;
          v41.m256i_i64[3] = 1LL;
          *(_QWORD *)&v42 = 0LL;
          ((void (__fastcall *)(__int128 *, __m256i *))alloc::fmt::format::format_inner)(&v104, &v41);
          v53 = v104;
          v54 = v105;
          v7 = 3LL;
          v26 = 0;
          goto LABEL_94;
        case 2uLL:
          if ( *v56 == 4LL && v56[5] == 3LL )
          {
            v45 = v56 + 6;
            if ( (unsigned __int8)core::cmp::impls::<impl core::cmp::PartialEq<&B> for &A>::eq(&v45, &off_1068A8) )
              goto LABEL_69;
          }
          if ( v6[5] == 3LL )
            goto LABEL_82;
          goto LABEL_86;
        case 3uLL:
          if ( *v56 == 4LL )
          {
            if ( v56[5] == 3LL )
            {
              v45 = v56 + 6;
              if ( (unsigned __int8)core::cmp::impls::<impl core::cmp::PartialEq<&B> for &A>::eq(&v45, &off_1068A8) )
              {
LABEL_69:
                v60.m256i_i64[0] = 0LL;
                uu_test::parser::Symbol::into_literal((__int64)&v98, &v60);
                uu_test::parser::Parser::literal(&v96, a2, &v98);
                v7 = v96;
                if ( v96 != 7 )
                {
                  v8 = &v97;
                  goto LABEL_115;
                }
                goto LABEL_93;
              }
            }
          }
          else if ( *v56 == 5LL && v56[10] == 3LL )
          {
            v59 = v56 + 11;
            if ( (unsigned __int8)core::cmp::impls::<impl core::cmp::PartialEq<&B> for &A>::eq(&v59, &off_1068A8) )
            {
              uu_test::parser::Parser::next_token((__int64)v92, a2);
              uu_test::parser::Parser::uop(a2, v92);
              uu_test::parser::Parser::expect((__int64)&v116, a2);
              v7 = v116;
              if ( v116 != 7 )
              {
                v8 = &v117;
LABEL_115:
                v54 = *((_QWORD *)v8 + 2);
                v53 = *(_OWORD *)v8;
                core::ptr::drop_in_place<alloc::vec::Vec<uu_test::parser::Symbol>>(v55);
LABEL_116:
                v39 = &v53;
                goto LABEL_117;
              }
              goto LABEL_93;
            }
          }
          v29 = v6[5];
          if ( v29 == 3 )
          {
LABEL_82:
            v46 = v6 + 6;
            if ( (unsigned __int8)core::cmp::impls::<impl core::cmp::PartialEq<&B> for &A>::eq(&v46, &off_1068A8) )
            {
              uu_test::parser::Parser::next_token((__int64)v113, a2);
              uu_test::parser::Parser::literal(&v50, a2, v113);
              v7 = v50;
              if ( v50 != 7 )
              {
                v8 = (char *)&v51;
                goto LABEL_115;
              }
              uu_test::parser::Parser::expect((__int64)&v75, a2);
              v7 = v75;
              if ( v75 != 7 )
              {
                v8 = v76;
                goto LABEL_115;
              }
              goto LABEL_93;
            }
          }
          else if ( v29 == 4 )
          {
            if ( *v6 == 4LL )
            {
              uu_test::parser::Parser::next_token((__int64)v94, a2);
              uu_test::parser::Parser::literal(&v77, a2, v94);
              v7 = v77;
              if ( v77 != 7 )
              {
                v8 = v78;
                goto LABEL_115;
              }
              uu_test::parser::Parser::expect((__int64)&v79, a2);
              v7 = v79;
              if ( v79 != 7 )
              {
                v8 = v80;
                goto LABEL_115;
              }
              goto LABEL_93;
            }
            goto LABEL_89;
          }
LABEL_86:
          if ( *v6 == 4LL )
          {
            std::sys::os_str::bytes::Slice::to_owned(
              &v41,
              "(!-asrc/uu/test/src/parser.rs)description() is deprecated; use Display",
              1LL);
            v64[0] = v41.m256i_i64[2];
            v63 = *(_OWORD *)v41.m256i_i8;
            v62 = 3LL;
            uu_test::parser::Parser::literal(&v81, a2, &v62);
            v7 = v81;
            if ( v81 != 7 )
            {
              v8 = v82;
              goto LABEL_115;
            }
            goto LABEL_93;
          }
LABEL_89:
          uu_test::parser::Parser::peek((__int64)&v41, a2);
          v31 = v41.m256i_i64[0];
          core::ptr::drop_in_place<uu_test::parser::Symbol>(&v41);
          if ( v31 != 2 )
          {
            uu_test::parser::Parser::term(&v69, a2);
            v7 = v69;
            if ( v69 != 7 )
            {
              v32 = (__int128 *)&v70;
              goto LABEL_98;
            }
          }
          uu_test::parser::Parser::maybe_boolop(&v89, a2);
          v7 = v89;
          if ( v89 != 7 )
          {
            v32 = &v90;
LABEL_98:
            v8 = (char *)&v107;
            v108 = *((_QWORD *)v32 + 2);
            v107 = *v32;
            goto LABEL_115;
          }
          uu_test::parser::Parser::expect((__int64)&v67, a2);
          v7 = v67;
          if ( v67 != 7 )
          {
            v8 = &v68;
            goto LABEL_115;
          }
LABEL_93:
          v7 = 7LL;
          v26 = 1;
LABEL_94:
          core::ptr::drop_in_place<alloc::vec::Vec<uu_test::parser::Symbol>>(v55);
          if ( !v26 )
            goto LABEL_116;
LABEL_109:
          *(_QWORD *)a1 = 7LL;
LABEL_118:
          core::ptr::drop_in_place<uu_test::parser::Symbol>(&v47);
          return a1;
        default:
          goto LABEL_89;
      }
    case 1LL:
      uu_test::parser::Parser::peek((__int64)&v67, a2);
      if ( v67 != 2 && v67 != 4 )
      {
        if ( v67 == 6 )
        {
          std::sys::os_str::bytes::Slice::to_owned(
            &v41,
            "!-asrc/uu/test/src/parser.rs)description() is deprecated; use Display",
            1LL);
          v60.m256i_i64[3] = v41.m256i_i64[2];
          *(_OWORD *)&v60.m256i_u64[1] = *(_OWORD *)v41.m256i_i8;
          v60.m256i_i64[0] = 3LL;
          v9 = *(_QWORD *)(a2 + 16);
          if ( v9 == *(_QWORD *)a2 )
            alloc::raw_vec::RawVec<T,A>::grow_one(a2);
          v10 = *(_QWORD *)(a2 + 8);
          v11 = 5 * v9;
          v12 = *(_OWORD *)v60.m256i_i8;
          v13 = *(_OWORD *)&v60.m256i_u64[2];
          *(_QWORD *)(v10 + 8 * v11 + 32) = v61;
          *(_OWORD *)(v10 + 8 * v11 + 16) = v13;
          *(_OWORD *)(v10 + 8 * v11) = v12;
          *(_QWORD *)(a2 + 16) = v9 + 1;
          goto LABEL_108;
        }
        <core::iter::adapters::peekable::Peekable<I> as core::clone::Clone>::clone(&v83, a2 + 24);
        v43 = v85;
        v42 = v84;
        v41 = v83;
        v44 = 4LL;
        ((void (__fastcall *)(__int64 *, __m256i *))<alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter)(
          &v50,
          &v41);
        if ( !v51 || ((unsigned __int8)v51 & 7) != 0 || v52 > 0x333333333333333LL )
LABEL_121:
          core::panicking::panic_nounwind(
            "unsafe precondition(s) violated: slice::from_raw_parts requires the pointer to be aligned and non-null, and "
            "the total size of the slice not to exceed `isize::MAX`expected valueexpected extra argument missing argument"
            " after unknown operator : unary operator expected(!-asrc/uu/test/src/parser.rs)description() is deprecated; use Display",
            162LL);
        if ( v52 == 3 && *v51 == 3LL && v51[5] == 2LL && v51[10] == 3LL )
        {
          uu_test::parser::Parser::expr((__int64)&v81, a2);
          v7 = v81;
          if ( v81 == 7 )
          {
            v113[0] = 1LL;
            alloc::vec::Vec<T,A>::push(a2, v113);
LABEL_47:
            core::ptr::drop_in_place<alloc::vec::Vec<uu_test::parser::Symbol>>(&v50);
LABEL_108:
            core::ptr::drop_in_place<uu_test::parser::Symbol>(&v67);
            goto LABEL_109;
          }
          v28 = (__int128 *)v82;
        }
        else
        {
          uu_test::parser::Parser::term(&v106, a2);
          v7 = v106;
          if ( v106 == 7 )
          {
            *(_QWORD *)&v94[0] = 1LL;
            v21 = *(_QWORD *)(a2 + 16);
            if ( v21 == *(_QWORD *)a2 )
              alloc::raw_vec::RawVec<T,A>::grow_one(a2);
            v22 = *(_QWORD *)(a2 + 8);
            v23 = 5 * v21;
            v24 = v94[0];
            v25 = v94[1];
            *(_QWORD *)(v22 + 8 * v23 + 32) = v95;
            *(_OWORD *)(v22 + 8 * v23 + 16) = v25;
            *(_OWORD *)(v22 + 8 * v23) = v24;
            *(_QWORD *)(a2 + 16) = v21 + 1;
            goto LABEL_47;
          }
          v28 = &v107;
        }
        v66 = *((_QWORD *)v28 + 2);
        v65 = *v28;
        core::ptr::drop_in_place<alloc::vec::Vec<uu_test::parser::Symbol>>(&v50);
LABEL_112:
        core::ptr::drop_in_place<uu_test::parser::Symbol>(&v67);
        v39 = &v65;
LABEL_117:
        *(_QWORD *)a1 = v7;
        *(_OWORD *)(a1 + 8) = *v39;
        *(_QWORD *)(a1 + 24) = *((_QWORD *)v39 + 2);
        goto LABEL_118;
      }
      <core::iter::adapters::peekable::Peekable<I> as core::clone::Clone>::clone(&v62, a2 + 24);
      <core::iter::adapters::peekable::Peekable<I> as core::iter::traits::iterator::Iterator>::nth(&v96, &v62, 1LL);
      uu_test::parser::Symbol::new((__int64)&v69, &v96);
      <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(v64);
      if ( v62 >= (__int64)0x8000000000000002LL )
      {
        alloc::raw_vec::RawVec<T,A>::current_memory(&v41, &v62);
        if ( v41.m256i_i64[1] )
          <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
            (char *)&v63 + 8,
            v41.m256i_i64[0],
            v41.m256i_i64[1],
            v41.m256i_i64[2]);
      }
      if ( (v69 | 2) == 6 )
      {
        v19 = *v5;
        *v5 = 0x8000000000000001LL;
        if ( v19 == 0x8000000000000001LL )
        {
          v20 = *(_QWORD *)(a2 + 56);
          if ( v20 == *(_QWORD *)(a2 + 72) )
          {
            v41.m256i_i64[0] = 0x8000000000000000LL;
          }
          else
          {
            *(_QWORD *)(a2 + 56) = v20 + 24;
            v41.m256i_i64[2] = *(_QWORD *)(v20 + 16);
            *(_OWORD *)v41.m256i_i8 = *(_OWORD *)v20;
          }
        }
        else
        {
          *(_OWORD *)&v41.m256i_u64[1] = *(_OWORD *)(a2 + 32);
          v41.m256i_i64[0] = v19;
        }
        uu_test::parser::Symbol::new((__int64)&v71, &v41);
        switch ( v71 )
        {
          case 0LL:
            v33 = "(!-asrc/uu/test/src/parser.rs)description() is deprecated; use Display";
            goto LABEL_102;
          case 1LL:
            v33 = "!-asrc/uu/test/src/parser.rs)description() is deprecated; use Display";
LABEL_102:
            std::sys::os_str::bytes::Slice::to_owned(&v41, v33, 1LL);
            goto LABEL_103;
          case 2LL:
          case 3LL:
            v30 = 8LL;
            goto LABEL_81;
          case 4LL:
          case 5LL:
            v30 = 16LL;
LABEL_81:
            v41.m256i_i64[2] = *(_QWORD *)((char *)&v72 + v30 + 8);
            *(_OWORD *)v41.m256i_i8 = *(_OWORD *)((char *)&v71 + v30);
LABEL_103:
            v91 = v41.m256i_i64[2];
            v90 = *(_OWORD *)v41.m256i_i8;
            v89 = 3LL;
            uu_test::parser::Parser::literal(&v75, a2, &v89);
            v7 = v75;
            if ( v75 != 7 )
            {
              v27 = v76;
              goto LABEL_111;
            }
            *(_QWORD *)&v92[0] = 1LL;
            v34 = *(_QWORD *)(a2 + 16);
            if ( v34 == *(_QWORD *)a2 )
              alloc::raw_vec::RawVec<T,A>::grow_one(a2);
            v35 = *(_QWORD *)(a2 + 8);
            v36 = 5 * v34;
            v37 = v92[0];
            v38 = v92[1];
            *(_QWORD *)(v35 + 8 * v36 + 32) = v93;
            *(_OWORD *)(v35 + 8 * v36 + 16) = v38;
            *(_OWORD *)(v35 + 8 * v36) = v37;
            *(_QWORD *)(a2 + 16) = v34 + 1;
            break;
          case 6LL:
            uu_test::parser::Symbol::into_literal::panic_cold_explicit();
        }
        goto LABEL_107;
      }
      std::sys::os_str::bytes::Slice::to_owned(
        &v41,
        "!-asrc/uu/test/src/parser.rs)description() is deprecated; use Display",
        1LL);
      v100 = v41.m256i_i64[2];
      v99 = *(_OWORD *)v41.m256i_i8;
      v98 = 3LL;
      uu_test::parser::Parser::literal(&v77, a2, &v98);
      v7 = v77;
      if ( v77 == 7 )
      {
        uu_test::parser::Parser::maybe_boolop(&v79, a2);
        v7 = v79;
        if ( v79 == 7 )
        {
LABEL_107:
          core::ptr::drop_in_place<uu_test::parser::Symbol>(&v69);
          goto LABEL_108;
        }
        v27 = v80;
      }
      else
      {
        v27 = v78;
      }
LABEL_111:
      v66 = *((_QWORD *)v27 + 2);
      v65 = *(_OWORD *)v27;
      core::ptr::drop_in_place<uu_test::parser::Symbol>(&v69);
      goto LABEL_112;
    case 5LL:
      v110 = v49;
      v109[1] = v48;
      v109[0] = v47;
      uu_test::parser::Parser::uop(a2, v109);
      *(_QWORD *)a1 = 7LL;
      return a1;
    case 6LL:
      v88 = v49;
      v87 = v48;
      v86 = v47;
      v14 = *(_QWORD *)(a2 + 16);
      if ( v14 == *(_QWORD *)a2 )
        alloc::raw_vec::RawVec<T,A>::grow_one(a2);
      v15 = *(_QWORD *)(a2 + 8);
      v16 = 5 * v14;
      v17 = v86;
      v18 = v87;
      *(_QWORD *)(v15 + 8 * v16 + 32) = v88;
      *(_OWORD *)(v15 + 8 * v16 + 16) = v18;
      *(_OWORD *)(v15 + 8 * v16) = v17;
      *(_QWORD *)(a2 + 16) = v14 + 1;
      *(_QWORD *)a1 = 7LL;
      return a1;
    default:
      v112 = v49;
      v111[1] = v48;
      v111[0] = v47;
      uu_test::parser::Parser::literal(&v101, a2, v111);
      if ( v101 == 7 )
      {
        *(_QWORD *)a1 = 7LL;
      }
      else
      {
        *(_QWORD *)a1 = v101;
        *(_OWORD *)(a1 + 8) = v102;
        *(_QWORD *)(a1 + 24) = v103;
      }
      return a1;
  }
}
