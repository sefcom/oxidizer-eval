__int64 __fastcall rg::flags::doc::help::remove_roff(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r13
  __int64 v11; // r12
  __int64 v12; // rax
  int v13; // edx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // r12
  __int64 v17; // rdx
  __int128 v19; // [rsp+10h] [rbp-208h] BYREF
  __int64 v20; // [rsp+20h] [rbp-1F8h]
  __int128 v21; // [rsp+30h] [rbp-1E8h] BYREF
  __m256i v22; // [rsp+40h] [rbp-1D8h] BYREF
  __int128 v23; // [rsp+60h] [rbp-1B8h]
  __int128 v24; // [rsp+70h] [rbp-1A8h]
  __int128 v25; // [rsp+80h] [rbp-198h]
  __int64 v26; // [rsp+90h] [rbp-188h]
  __int64 v27; // [rsp+98h] [rbp-180h]
  __int64 v28; // [rsp+A0h] [rbp-178h]
  __int16 v29; // [rsp+A8h] [rbp-170h]
  __int64 v30; // [rsp+B0h] [rbp-168h] BYREF
  __int64 v31; // [rsp+B8h] [rbp-160h]
  __int64 v32; // [rsp+C0h] [rbp-158h]
  _BYTE v33[8]; // [rsp+C8h] [rbp-150h] BYREF
  __int64 v34; // [rsp+D0h] [rbp-148h]
  __int64 v35; // [rsp+D8h] [rbp-140h]
  __int128 v36; // [rsp+E0h] [rbp-138h] BYREF
  __m256i v37; // [rsp+F0h] [rbp-128h]
  __int128 v38; // [rsp+110h] [rbp-108h]
  __int128 v39; // [rsp+120h] [rbp-F8h]
  __int128 v40; // [rsp+130h] [rbp-E8h]
  __int64 v41; // [rsp+140h] [rbp-D8h]
  __int64 v42; // [rsp+150h] [rbp-C8h]
  __int64 v43; // [rsp+158h] [rbp-C0h] BYREF
  __int64 v44; // [rsp+160h] [rbp-B8h]
  _QWORD v45[6]; // [rsp+168h] [rbp-B0h] BYREF
  __int16 v46; // [rsp+198h] [rbp-80h]
  _BYTE v47[24]; // [rsp+1A0h] [rbp-78h] BYREF
  _BYTE v48[24]; // [rsp+1B8h] [rbp-60h] BYREF
  _BYTE v49[72]; // [rsp+1D0h] [rbp-48h] BYREF

  v42 = a1;
  v30 = 0LL;
  v31 = 8LL;
  v32 = 0LL;
  v3 = core::str::<impl str>::trim_matches(a2, a3);
  v5 = v4;
  <char as core::str::pattern::Pattern>::into_searcher(v45, 10LL, v3, v4);
  v43 = 0LL;
  v44 = v5;
  v46 = 0;
  while ( 1 )
  {
    v6 = core::str::iter::SplitInternal<P>::next_inclusive(&v43);
    if ( !v6 )
      break;
    v8 = <core::str::LinesMap as core::ops::function::Fn<(&str,)>>::call(v6, v7);
    v10 = v8;
    if ( !v8 )
      break;
    v11 = v9;
    if ( !v9 )
    {
      *(_QWORD *)&v21 = &off_3EA690;
      *((_QWORD *)&v21 + 1) = 1LL;
      v22.m256i_i64[0] = 8LL;
      *(_OWORD *)&v22.m256i_u64[1] = 0LL;
      core::panicking::panic_fmt(&v21, &off_3EA6A0);
    }
    if ( (unsigned __int8)core::slice::<impl [T]>::starts_with(v8, v9, asc_68DA2, 1LL) )
    {
      if ( (unsigned __int8)core::slice::<impl [T]>::starts_with(v10, v11, ".IP utf8java*.ml*.pmoptsinfo\\", 4LL) )
      {
        core::str::pattern::StrSearcher::new(&v36, v10, v11, asc_69B32, 1LL);
        v26 = v41;
        v25 = v40;
        v24 = v39;
        v23 = v38;
        v22 = v37;
        v21 = v36;
        v27 = 0LL;
        v28 = v11;
        v29 = 1;
        if ( core::iter::traits::iterator::Iterator::advance_by(&v21)
          || (v12 = core::str::iter::SplitInternal<P>::next(&v21)) == 0 )
        {
          core::option::expect_failed(aFirstArgumentT, 21LL, &off_3EA718);
        }
        alloc::str::<impl str>::replace(
          (unsigned int)&v36,
          v12,
          v13,
          (unsigned int)"\\(buAVX2aidl*.rbrakuyang|",
          4,
          (unsigned int)&unk_83D8C,
          3LL);
        alloc::str::<impl str>::replace((unsigned int)&v19, DWORD2(v36), v37.m256i_i32[0], (unsigned int)aFb, 3, 1, 0LL);
        alloc::str::<impl str>::replace(
          (unsigned int)v33,
          DWORD2(v19),
          v20,
          (unsigned int)aFp,
          3,
          (unsigned int)asc_6671B,
          1LL);
        core::ptr::drop_in_place<alloc::string::String>(&v19);
        core::ptr::drop_in_place<alloc::string::String>(&v36);
        *(_QWORD *)&v36 = v33;
        *((_QWORD *)&v36 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
        *(_QWORD *)&v21 = asc_62330;
        *((_QWORD *)&v21 + 1) = 1LL;
        v22.m256i_i64[0] = (__int64)&v36;
        *(_OWORD *)&v22.m256i_u64[1] = 1uLL;
        core::option::Option<T>::map_or_else(v47, 0LL, v14, &v21);
        alloc::vec::Vec<T,A>::push(&v30, v47, &off_3EA730);
        core::ptr::drop_in_place<alloc::string::String>(v33);
      }
      else if ( (unsigned __int8)core::slice::<impl [T]>::starts_with(v10, v11, aIb, 4LL)
             || (unsigned __int8)core::slice::<impl [T]>::starts_with(v10, v11, aBi, 4LL) )
      {
        <core::str::pattern::MultiCharEqPattern<C> as core::str::pattern::Pattern>::into_searcher(
          &v22.m256i_u64[1],
          v10,
          v11);
        v22.m256i_i64[0] = v11;
        LOWORD(v24) = 1;
        v21 = 1uLL;
        core::iter::traits::iterator::Iterator::collect(&v36, &v21);
        v16 = *((_QWORD *)&v36 + 1);
        alloc::str::join_generic_copy(&v21, *((_QWORD *)&v36 + 1), v37.m256i_i64[0], 1LL, 0LL);
        v20 = v22.m256i_i64[0];
        v19 = v21;
        core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v36, v16);
        *(_QWORD *)&v36 = &v19;
        *((_QWORD *)&v36 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
        *(_QWORD *)&v21 = asc_62330;
        *((_QWORD *)&v21 + 1) = 1LL;
        v22.m256i_i64[0] = (__int64)&v36;
        *(_OWORD *)&v22.m256i_u64[1] = 1uLL;
        core::option::Option<T>::map_or_else(v48, 0LL, v17, &v21);
        alloc::vec::Vec<T,A>::push(&v30, v48, &off_3EA700);
        core::ptr::drop_in_place<alloc::string::String>(&v19);
      }
      else if ( (unsigned __int8)core::slice::<impl [T]>::starts_with(v10, v11, aSp_0, 3LL)
             || (unsigned __int8)core::slice::<impl [T]>::starts_with(v10, v11, aPp_0, 3LL)
             || (unsigned __int8)core::slice::<impl [T]>::starts_with(v10, v11, aTp, 3LL) )
      {
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v21, 1LL);
        v37.m256i_i64[0] = v22.m256i_i64[0];
        v36 = v21;
        alloc::vec::Vec<T,A>::push(&v30, &v36, &off_3EA6E8);
      }
    }
    else if ( (unsigned __int8)core::slice::<impl [T]>::starts_with(v10, v11, aFb, 3LL)
           && (unsigned __int8)core::slice::<impl [T]>::ends_with(v10, v11, aFp, 3LL) )
    {
      alloc::str::<impl str>::replace((unsigned int)&v21, v10, v11, (unsigned int)aFb, 3, 1, 0LL);
      alloc::str::<impl str>::replace((unsigned int)&v36, DWORD2(v21), v22.m256i_i32[0], (unsigned int)aFp, 3, 1, 0LL);
      core::ptr::drop_in_place<alloc::string::String>(&v21);
      *(_QWORD *)&v19 = &v36;
      *((_QWORD *)&v19 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v21 = &unk_3E5CF0;
      *((_QWORD *)&v21 + 1) = 2LL;
      v22.m256i_i64[0] = (__int64)&v19;
      *(_OWORD *)&v22.m256i_u64[1] = 1uLL;
      core::option::Option<T>::map_or_else(v49, 0LL, v15, &v21);
      alloc::vec::Vec<T,A>::push(&v30, v49, &off_3EA6D0);
      core::ptr::drop_in_place<alloc::string::String>(&v36);
    }
    else
    {
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v21, v10);
      v37.m256i_i64[0] = v22.m256i_i64[0];
      v36 = v21;
      alloc::vec::Vec<T,A>::push(&v30, &v36, &off_3EA6B8);
    }
  }
  alloc::vec::Vec<T,A>::dedup_by(&v30);
  alloc::str::join_generic_copy(&v21, v31, v32, asc_66865, 1LL);
  v37.m256i_i64[0] = v22.m256i_i64[0];
  v36 = v21;
  alloc::str::<impl str>::replace((unsigned int)&v21, DWORD2(v21), v22.m256i_i32[0], (unsigned int)aFb, 3, 1, 0LL);
  alloc::str::<impl str>::replace((unsigned int)&v43, DWORD2(v21), v22.m256i_i32[0], (unsigned int)aFi_1, 3, 1, 0LL);
  alloc::str::<impl str>::replace((unsigned int)&v19, v44, v45[0], (unsigned int)aFp, 3, 1, 0LL);
  alloc::str::<impl str>::replace(
    (unsigned int)v33,
    DWORD2(v19),
    v20,
    (unsigned int)asc_83D88,
    2,
    (unsigned int)asc_69BA0,
    1LL);
  alloc::str::<impl str>::replace(
    v42,
    v34,
    v35,
    (unsigned int)asc_83D8A,
    2,
    (unsigned int)"\\xfatal runtime error: thread local panicked on drop, aborting\n"
                  "/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/alloc/src/collections/btree/navigate.rsassembl"
                  "ing HIR from  fixed string literals(?:)|/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/ripgrep/"
                  "crates/regex/src/config.rsgrep_regex::configfinal regex: /home/34r7hm4n/dev/oxidizer/oxidizer-eval/tar"
                  "gets/src/ripgrep/crates/regex/src/matcher.rsgrep_regex::matcher  mid > len/home/34r7hm4n/.cargo/regist"
                  "ry/src/index.crates.io-1949cf8c6b5b557f/serde_json-1.0.145/src/ser.rs}\"false.IP utf8java*.ml*.pmoptsinfo\\",
    1LL);
  core::ptr::drop_in_place<alloc::string::String>(v33);
  core::ptr::drop_in_place<alloc::string::String>(&v19);
  core::ptr::drop_in_place<alloc::string::String>(&v43);
  core::ptr::drop_in_place<alloc::string::String>(&v21);
  core::ptr::drop_in_place<alloc::string::String>(&v36);
  return core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v30);
}