__int64 __fastcall uu_ptx::get_config(__int64 a1, __int64 a2)
{
  _WORD *v2; // r12
  __int64 v3; // r15
  _BYTE *v4; // rbp
  __int64 v5; // rbx
  __int64 v6; // r14
  char flag; // al
  __int64 v8; // r15
  __int64 v9; // rbx
  __int64 v10; // r14
  __int64 v11; // rax
  char v12; // al
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm2
  char v16; // bl
  char **v18; // rsi
  char **v19; // rdx
  const char *v20; // [rsp+8h] [rbp-1E0h] BYREF
  __int64 v21; // [rsp+10h] [rbp-1D8h]
  const char **v22; // [rsp+18h] [rbp-1D0h] BYREF
  __int64 (__fastcall *v23)(); // [rsp+20h] [rbp-1C8h]
  __int128 *v24; // [rsp+28h] [rbp-1C0h]
  __int64 (__fastcall *v25)(); // [rsp+30h] [rbp-1B8h]
  __int64 v26; // [rsp+38h] [rbp-1B0h] BYREF
  __int128 v27; // [rsp+40h] [rbp-1A8h]
  __int128 v28; // [rsp+50h] [rbp-198h]
  __int128 v29; // [rsp+60h] [rbp-188h]
  __int128 v30; // [rsp+70h] [rbp-178h]
  __int128 v31; // [rsp+80h] [rbp-168h] BYREF
  __int128 v32; // [rsp+90h] [rbp-158h]
  __int128 v33; // [rsp+A0h] [rbp-148h]
  __int128 v34; // [rsp+B0h] [rbp-138h]
  __int64 v35; // [rsp+C8h] [rbp-120h]
  __int128 v36; // [rsp+D0h] [rbp-118h]
  __m256i v37; // [rsp+E0h] [rbp-108h]
  __int128 v38; // [rsp+100h] [rbp-E8h] BYREF
  __int128 v39; // [rsp+110h] [rbp-D8h]
  __int64 v40; // [rsp+120h] [rbp-C8h]
  _BYTE v41[5]; // [rsp+128h] [rbp-C0h]
  char v42; // [rsp+12Dh] [rbp-BBh]
  __int16 v43; // [rsp+12Eh] [rbp-BAh]
  _QWORD v44[6]; // [rsp+130h] [rbp-B8h] BYREF
  __int64 v45; // [rsp+160h] [rbp-88h]
  _BYTE v46[8]; // [rsp+168h] [rbp-80h] BYREF
  __int64 v47; // [rsp+170h] [rbp-78h]
  _BYTE v48[8]; // [rsp+178h] [rbp-70h] BYREF
  __int64 v49; // [rsp+180h] [rbp-68h]
  __int128 v50; // [rsp+188h] [rbp-60h] BYREF
  __int64 v51; // [rsp+198h] [rbp-50h]
  __int128 v52; // [rsp+1A0h] [rbp-48h] BYREF
  __int64 v53; // [rsp+1B0h] [rbp-38h]

  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v26, 2LL, 0LL);
  v35 = v27;
  if ( v26 )
    alloc::raw_vec::handle_error(v35, *((_QWORD *)&v27 + 1));
  v2 = (_WORD *)*((_QWORD *)&v27 + 1);
  core::intrinsics::copy_nonoverlapping::precondition_check(&unk_629E0, *((_QWORD *)&v27 + 1), 1LL, 1LL, 2LL);
  *v2 = 30840;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v26, 1LL, 0LL);
  v45 = a1;
  v3 = v27;
  if ( v26 )
    alloc::raw_vec::handle_error(v27, *((_QWORD *)&v27 + 1));
  v4 = (_BYTE *)*((_QWORD *)&v27 + 1);
  core::intrinsics::copy_nonoverlapping::precondition_check(&unk_629E2, *((_QWORD *)&v27 + 1), 1LL, 1LL, 1LL);
  *v4 = 47;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v26, 3LL, 0LL);
  v5 = v27;
  if ( v26 )
    alloc::raw_vec::handle_error(v27, *((_QWORD *)&v27 + 1));
  v6 = *((_QWORD *)&v27 + 1);
  core::intrinsics::copy_nonoverlapping::precondition_check(&unk_629E3, *((_QWORD *)&v27 + 1), 1LL, 1LL, 3LL);
  *(_BYTE *)(v6 + 2) = 43;
  *(_WORD *)v6 = 30556;
  v42 = 0;
  v41[0] = 1;
  *(_DWORD *)&v41[1] = 0;
  *(_QWORD *)&v36 = v35;
  *((_QWORD *)&v36 + 1) = v2;
  v37.m256i_i64[0] = 2LL;
  v37.m256i_i64[1] = v3;
  v37.m256i_i64[2] = (__int64)v4;
  v37.m256i_i64[3] = 1LL;
  *(_QWORD *)&v38 = v5;
  *((_QWORD *)&v38 + 1) = v6;
  *(_QWORD *)&v39 = 3LL;
  *((_QWORD *)&v39 + 1) = 72LL;
  v40 = 3LL;
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           a2,
           anon_8ffa798e1188aa055e40a44719e13e52_33_llvm_11133899800467015185,
           11LL,
           &off_2AA9B8);
  v8 = v45;
  if ( flag )
  {
    v41[0] = 0;
    v42 = 1;
    v9 = *((_QWORD *)&v38 + 1);
    if ( !*((_QWORD *)&v38 + 1) || (__int64)v39 < 0 )
      core::panicking::panic_nounwind(anon_23a8c89669b7e3966eab8f1d3c4cd90c_24_llvm_2187995499940452454, 166LL);
    *(_QWORD *)&v39 = 0LL;
    if ( (unsigned __int64)v38 > 6 )
    {
      v10 = 0LL;
    }
    else
    {
      alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v38, 0LL, 7LL);
      v9 = *((_QWORD *)&v38 + 1);
      v10 = v39;
    }
    core::intrinsics::copy_nonoverlapping::precondition_check(&unk_62A20, v9 + v10, 1LL, 1LL, 7LL);
    *(_DWORD *)(v9 + v10 + 3) = 727517705;
    *(_DWORD *)(v9 + v10) = 153116251;
    *(_QWORD *)&v39 = v39 + 7;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_contains_id(
      &v26,
      a2,
      anon_8ffa798e1188aa055e40a44719e13e52_38_llvm_11133899800467015185,
      15LL);
    v20 = anon_8ffa798e1188aa055e40a44719e13e52_38_llvm_11133899800467015185;
    v21 = 15LL;
    if ( (v26 & 1) != 0 )
      goto LABEL_62;
    if ( (v26 & 0x100) == 0 )
    {
      v41[1] = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                 a2,
                 anon_8ffa798e1188aa055e40a44719e13e52_32_llvm_11133899800467015185,
                 14LL,
                 &off_2AA9D0);
      v41[2] = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                 a2,
                 anon_8ffa798e1188aa055e40a44719e13e52_46_llvm_11133899800467015185,
                 10LL,
                 &off_2AA9E8);
      v12 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
              a2,
              anon_8ffa798e1188aa055e40a44719e13e52_37_llvm_11133899800467015185,
              15LL,
              &off_2AAA00);
      v41[3] &= v12;
      v41[4] = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                 a2,
                 anon_8ffa798e1188aa055e40a44719e13e52_42_llvm_11133899800467015185,
                 11LL,
                 &off_2AAA18);
      clap_builder::parser::matches::arg_matches::ArgMatches::try_contains_id(
        &v26,
        a2,
        anon_8ffa798e1188aa055e40a44719e13e52_35_llvm_11133899800467015185,
        10LL);
      v20 = anon_8ffa798e1188aa055e40a44719e13e52_35_llvm_11133899800467015185;
      v21 = 10LL;
      if ( (v26 & 1) == 0 )
      {
        if ( (v26 & 0x100) != 0 )
        {
          clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v26);
          v20 = anon_8ffa798e1188aa055e40a44719e13e52_35_llvm_11133899800467015185;
          v21 = 10LL;
          if ( v26 )
          {
            v34 = v30;
            v33 = v29;
            v32 = v28;
            v31 = v27;
            v22 = &v20;
            v23 = <&T as core::fmt::Display>::fmt;
            v24 = &v31;
            v25 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
            v44[0] = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
            v18 = &off_2AAA30;
            goto LABEL_63;
          }
          if ( !(_QWORD)v27 )
          {
            v19 = &off_2AAA48;
            goto LABEL_78;
          }
          <alloc::string::String as core::clone::Clone>::clone(&v50);
          if ( (_QWORD)v36 )
            _rust_dealloc(*((_QWORD *)&v36 + 1), v36, 1LL);
          v37.m256i_i64[0] = v51;
          v36 = v50;
        }
        clap_builder::parser::matches::arg_matches::ArgMatches::try_contains_id(
          &v26,
          a2,
          anon_8ffa798e1188aa055e40a44719e13e52_34_llvm_11133899800467015185,
          15LL);
        v20 = anon_8ffa798e1188aa055e40a44719e13e52_34_llvm_11133899800467015185;
        v21 = 15LL;
        if ( (v26 & 1) == 0 )
        {
          if ( (v26 & 0x100) != 0 )
          {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v26);
            v20 = anon_8ffa798e1188aa055e40a44719e13e52_34_llvm_11133899800467015185;
            v21 = 15LL;
            if ( v26 )
            {
              v34 = v30;
              v33 = v29;
              v32 = v28;
              v31 = v27;
              v22 = &v20;
              v23 = <&T as core::fmt::Display>::fmt;
              v24 = &v31;
              v25 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
              v44[0] = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
              v18 = &off_2AAA60;
              goto LABEL_63;
            }
            if ( !(_QWORD)v27 )
            {
              v19 = &off_2AAA78;
              goto LABEL_78;
            }
            <alloc::string::String as core::clone::Clone>::clone(&v52);
            if ( v37.m256i_i64[1] )
              _rust_dealloc(v37.m256i_i64[2], v37.m256i_i64[1], 1LL);
            v37.m256i_i64[3] = v53;
            *(_OWORD *)&v37.m256i_u64[1] = v52;
          }
          clap_builder::parser::matches::arg_matches::ArgMatches::try_contains_id(
            &v26,
            a2,
            anon_8ffa798e1188aa055e40a44719e13e52_47_llvm_11133899800467015185,
            5LL);
          v20 = anon_8ffa798e1188aa055e40a44719e13e52_47_llvm_11133899800467015185;
          v21 = 5LL;
          if ( (v26 & 1) == 0 )
          {
            if ( (v26 & 0x100) != 0 )
            {
              clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v26);
              v20 = anon_8ffa798e1188aa055e40a44719e13e52_47_llvm_11133899800467015185;
              v21 = 5LL;
              if ( v26 )
              {
                v34 = v30;
                v33 = v29;
                v32 = v28;
                v31 = v27;
                v22 = &v20;
                v23 = <&T as core::fmt::Display>::fmt;
                v24 = &v31;
                v25 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
                v44[0] = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
                v18 = &off_2AAA90;
                goto LABEL_63;
              }
              if ( !(_QWORD)v27 )
              {
                v19 = &off_2AAAA8;
                goto LABEL_78;
              }
              if ( !*(_QWORD *)(v27 + 8) || *(__int64 *)(v27 + 16) < 0 )
                goto LABEL_69;
              core::num::<impl core::str::traits::FromStr for usize>::from_str(v46);
              if ( (v46[0] & 1) != 0 )
              {
                v16 = v46[1];
                v11 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 24LL, 0LL);
                goto LABEL_53;
              }
              *((_QWORD *)&v39 + 1) = v47;
            }
            clap_builder::parser::matches::arg_matches::ArgMatches::try_contains_id(
              &v26,
              a2,
              anon_8ffa798e1188aa055e40a44719e13e52_43_llvm_11133899800467015185,
              8LL);
            v20 = anon_8ffa798e1188aa055e40a44719e13e52_43_llvm_11133899800467015185;
            v21 = 8LL;
            if ( (v26 & 1) == 0 )
            {
              if ( (v26 & 0x100) == 0 )
              {
LABEL_44:
                if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                        a2,
                                        anon_8ffa798e1188aa055e40a44719e13e52_36_llvm_11133899800467015185,
                                        11LL,
                                        &off_2AAAF0) )
                  v42 = 1;
                if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                        a2,
                                        anon_8ffa798e1188aa055e40a44719e13e52_39_llvm_11133899800467015185,
                                        10LL,
                                        &off_2AAB08) )
                  v42 = 2;
                *(_QWORD *)(v8 + 80) = v40;
                *(_DWORD *)(v8 + 88) = *(_DWORD *)v41;
                *(_BYTE *)(v8 + 92) = v41[4];
                *(_BYTE *)(v8 + 93) = v42;
                *(_WORD *)(v8 + 94) = v43;
                *(_OWORD *)(v8 + 64) = v39;
                v13 = v36;
                v14 = *(_OWORD *)v37.m256i_i8;
                v15 = *(_OWORD *)&v37.m256i_u64[2];
                *(_OWORD *)(v8 + 48) = v38;
                *(_OWORD *)(v8 + 32) = v15;
                *(_OWORD *)(v8 + 16) = v14;
                *(_OWORD *)v8 = v13;
                return v8;
              }
              clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v26);
              v20 = anon_8ffa798e1188aa055e40a44719e13e52_43_llvm_11133899800467015185;
              v21 = 8LL;
              if ( !v26 )
              {
                if ( (_QWORD)v27 )
                {
                  if ( *(_QWORD *)(v27 + 8) && *(__int64 *)(v27 + 16) >= 0 )
                  {
                    core::num::<impl core::str::traits::FromStr for usize>::from_str(v48);
                    if ( (v48[0] & 1) == 0 )
                    {
                      v40 = v49;
                      goto LABEL_44;
                    }
                    v16 = v48[1];
                    v11 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 24LL, 0LL);
LABEL_53:
                    if ( v11 )
                    {
                      *(_BYTE *)v11 = 2;
                      *(_BYTE *)(v11 + 1) = v16;
                      *(_DWORD *)(v11 + 2) = v26;
                      *(_WORD *)(v11 + 6) = WORD2(v26);
                      goto LABEL_55;
                    }
LABEL_67:
                    alloc::alloc::handle_alloc_error(8LL, 24LL);
                  }
LABEL_69:
                  core::panicking::panic_nounwind(
                    anon_23a8c89669b7e3966eab8f1d3c4cd90c_23_llvm_2187995499940452454,
                    162LL);
                }
                v19 = &off_2AAAD8;
LABEL_78:
                core::option::expect_failed(aParsingOptions_0, 22LL, v19);
              }
              v34 = v30;
              v33 = v29;
              v32 = v28;
              v31 = v27;
              v22 = &v20;
              v23 = <&T as core::fmt::Display>::fmt;
              v24 = &v31;
              v25 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
              v44[0] = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
              v18 = &off_2AAAC0;
LABEL_63:
              v44[1] = 2LL;
              v44[4] = 0LL;
              v44[2] = &v22;
              v44[3] = 2LL;
              core::panicking::panic_fmt(v44, v18);
            }
          }
        }
      }
LABEL_62:
      v34 = v30;
      v33 = v29;
      v32 = v28;
      v31 = v27;
      v22 = &v20;
      v23 = <&T as core::fmt::Display>::fmt;
      v24 = &v31;
      v25 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
      v44[0] = &anon_4999ac20243338206a266e5086c65117_158_llvm_11097290929893828502;
      v18 = &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_413_llvm_13186119769495240950;
      goto LABEL_63;
    }
    v11 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 24LL, 0LL);
    if ( !v11 )
      goto LABEL_67;
    *(_BYTE *)v11 = 1;
    *(_QWORD *)(v11 + 8) = aS;
    *(_QWORD *)(v11 + 16) = 2LL;
  }
  else
  {
    v11 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 24LL, 0LL);
    if ( !v11 )
      goto LABEL_67;
    *(_BYTE *)v11 = 1;
    *(_QWORD *)(v11 + 8) = aGnuExtensions;
    *(_QWORD *)(v11 + 16) = 14LL;
  }
LABEL_55:
  *(_QWORD *)(v8 + 8) = v11;
  *(_QWORD *)(v8 + 16) = &anon_23a8c89669b7e3966eab8f1d3c4cd90c_37_llvm_2187995499940452454;
  *(_QWORD *)v8 = 0x8000000000000000LL;
  if ( (_QWORD)v36 )
    _rust_dealloc(*((_QWORD *)&v36 + 1), v36, 1LL);
  if ( v37.m256i_i64[1] )
    _rust_dealloc(v37.m256i_i64[2], v37.m256i_i64[1], 1LL);
  if ( (_QWORD)v38 )
    _rust_dealloc(*((_QWORD *)&v38 + 1), v38, 1LL);
  return v8;
}
