_QWORD *__fastcall uu_du::build_exclude_patterns(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r14
  void (__fastcall __noreturn *v3)(); // rax
  const char *v4; // rcx
  __int128 v5; // xmm0
  __int64 v6; // rdx
  __int128 v7; // xmm1
  __int64 v8; // rsi
  void (__fastcall __noreturn *v9)(); // rax
  const char *v10; // rcx
  __int128 v11; // xmm0
  __int64 v12; // rdx
  __int128 v13; // xmm1
  __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rcx
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm2
  _QWORD *v20; // rbx
  char v21; // al
  _OWORD *v22; // rax
  __int128 v23; // xmm0
  __int128 v25; // [rsp+8h] [rbp-3E0h] BYREF
  __int64 v26; // [rsp+18h] [rbp-3D0h]
  __int128 v27; // [rsp+20h] [rbp-3C8h] BYREF
  __int64 v28; // [rsp+30h] [rbp-3B8h]
  _QWORD *v29; // [rsp+38h] [rbp-3B0h]
  __int128 v30; // [rsp+40h] [rbp-3A8h] BYREF
  __int64 v31; // [rsp+50h] [rbp-398h]
  __int128 *v32; // [rsp+58h] [rbp-390h] BYREF
  _QWORD v33[2]; // [rsp+60h] [rbp-388h] BYREF
  __m256i v34; // [rsp+70h] [rbp-378h]
  __int128 v35; // [rsp+90h] [rbp-358h] BYREF
  __int64 v36; // [rsp+A0h] [rbp-348h] BYREF
  __int128 v37; // [rsp+A8h] [rbp-340h] BYREF
  __int64 v38; // [rsp+B8h] [rbp-330h]
  __m256i v39; // [rsp+C0h] [rbp-328h]
  __int128 v40; // [rsp+E0h] [rbp-308h]
  __int64 v41; // [rsp+F0h] [rbp-2F8h]
  _QWORD v42[4]; // [rsp+F8h] [rbp-2F0h] BYREF
  __int64 v43; // [rsp+118h] [rbp-2D0h] BYREF
  __int128 v44; // [rsp+120h] [rbp-2C8h]
  __int128 v45; // [rsp+130h] [rbp-2B8h]
  __int128 v46; // [rsp+140h] [rbp-2A8h]
  __int128 v47; // [rsp+150h] [rbp-298h]
  _OWORD v48[2]; // [rsp+160h] [rbp-288h] BYREF
  _OWORD v49[2]; // [rsp+180h] [rbp-268h] BYREF
  void (__fastcall __noreturn *v50)(); // [rsp+1A0h] [rbp-248h]
  const char *v51; // [rsp+1A8h] [rbp-240h]
  __int128 v52; // [rsp+1B0h] [rbp-238h]
  __int64 v53; // [rsp+1C0h] [rbp-228h]
  __int64 v54; // [rsp+1C8h] [rbp-220h]
  __int128 v55; // [rsp+1D0h] [rbp-218h]
  _QWORD v56[6]; // [rsp+1E0h] [rbp-208h] BYREF
  __m256i v57; // [rsp+210h] [rbp-1D8h] BYREF
  __int128 v58; // [rsp+230h] [rbp-1B8h]
  __int64 v59; // [rsp+240h] [rbp-1A8h]
  __int128 v60; // [rsp+248h] [rbp-1A0h]
  __int128 v61; // [rsp+258h] [rbp-190h]
  __int128 v62; // [rsp+268h] [rbp-180h]
  __int128 v63; // [rsp+278h] [rbp-170h]
  __int128 v64; // [rsp+288h] [rbp-160h]
  __int128 v65; // [rsp+298h] [rbp-150h]
  __int128 v66; // [rsp+2A8h] [rbp-140h]
  __int128 v67; // [rsp+2B8h] [rbp-130h]
  _QWORD v68[6]; // [rsp+2C8h] [rbp-120h] BYREF
  _QWORD v69[2]; // [rsp+2F8h] [rbp-F0h] BYREF
  __int128 v70; // [rsp+308h] [rbp-E0h]
  __int64 v71; // [rsp+318h] [rbp-D0h]
  __int64 v72; // [rsp+320h] [rbp-C8h]
  __int128 v73; // [rsp+328h] [rbp-C0h]
  _QWORD v74[2]; // [rsp+338h] [rbp-B0h] BYREF
  __int128 v75; // [rsp+348h] [rbp-A0h]
  __int64 v76; // [rsp+358h] [rbp-90h]
  __int64 v77; // [rsp+360h] [rbp-88h]
  __int128 v78; // [rsp+368h] [rbp-80h]
  _QWORD v79[7]; // [rsp+378h] [rbp-70h] BYREF
  char v80; // [rsp+3B0h] [rbp-38h]

  v2 = a2;
  clap_builder::parser::matches::arg_matches::ArgMatches::get_many(v69, a2, aExcludeFrom, 12LL, &off_164DA8);
  v3 = (void (__fastcall __noreturn *)())v69[0];
  if ( v69[0] )
  {
    v4 = (const char *)v69[1];
    v5 = v70;
    a2 = v71;
    v6 = v72;
    v7 = v73;
  }
  else
  {
    v5 = (unsigned __int64)anon_21d6120f1bf3ae8083dd7bd30f6eb60d_438_llvm_13186119769495240950;
    v7 = 0LL;
    v3 = core::ops::function::FnOnce::call_once;
    v4 = anon_21d6120f1bf3ae8083dd7bd30f6eb60d_438_llvm_13186119769495240950;
    v6 = 0LL;
  }
  *(_QWORD *)&v60 = v3;
  *((_QWORD *)&v60 + 1) = v4;
  v61 = v5;
  *(_QWORD *)&v62 = a2;
  *((_QWORD *)&v62 + 1) = v6;
  v63 = v7;
  *(_QWORD *)&v64 = 0LL;
  *(_QWORD *)&v66 = 0LL;
  v8 = v2;
  clap_builder::parser::matches::arg_matches::ArgMatches::get_many(v74, v2, aExclude, 7LL, &off_164DC0);
  v9 = (void (__fastcall __noreturn *)())v74[0];
  v29 = a1;
  if ( v74[0] )
  {
    v10 = (const char *)v74[1];
    v11 = v75;
    v8 = v76;
    v12 = v77;
    v13 = v78;
  }
  else
  {
    v11 = (unsigned __int64)anon_21d6120f1bf3ae8083dd7bd30f6eb60d_438_llvm_13186119769495240950;
    v13 = 0LL;
    v9 = core::ops::function::FnOnce::call_once;
    v10 = anon_21d6120f1bf3ae8083dd7bd30f6eb60d_438_llvm_13186119769495240950;
    v12 = 0LL;
  }
  *(_QWORD *)&v25 = 0LL;
  *((_QWORD *)&v25 + 1) = 8LL;
  v26 = 0LL;
  v44 = v60;
  v45 = v61;
  v46 = v62;
  v47 = v63;
  v48[0] = v64;
  v48[1] = v65;
  v49[0] = v66;
  v49[1] = v67;
  v43 = 1LL;
  v50 = v9;
  v51 = v10;
  v52 = v11;
  v53 = v8;
  v54 = v12;
  v55 = v13;
  while ( 1 )
  {
    <core::iter::adapters::chain::Chain<A,B> as core::iter::traits::iterator::Iterator>::next(&v37, &v43);
    if ( (_QWORD)v37 == 0x8000000000000000LL )
      break;
    v28 = v38;
    v27 = v37;
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                            v2,
                            aVerbose_0,
                            7LL,
                            &off_164DD8) )
    {
      v32 = &v27;
      v33[0] = &v32;
      v33[1] = <&T as core::fmt::Debug>::fmt;
      v68[0] = &off_164DF0;
      v68[1] = 2LL;
      v68[4] = 0LL;
      v68[2] = v33;
      v68[3] = 1LL;
      std::io::stdio::_print(v68);
    }
    if ( !*((_QWORD *)&v27 + 1) || v28 < 0 )
      core::panicking::panic_nounwind(anon_8085cf7280ca5a7279da5d96bb8c0362_48_llvm_11242443447069085683, 162LL);
    uucore::parser::parse_glob::from_str(&v57);
    if ( v57.m256i_i64[0] == 0x8000000000000000LL )
    {
      v36 = v57.m256i_i64[3];
      v35 = *(_OWORD *)&v57.m256i_u64[1];
      *(_QWORD *)&v30 = 0LL;
      *((_QWORD *)&v30 + 1) = 1LL;
      v31 = 0LL;
      v79[6] = 32LL;
      v80 = 3;
      v79[0] = 0LL;
      v79[2] = 0LL;
      v79[4] = &v30;
      v79[5] = &anon_225405b512d7025d7ce7fe63a55e8a3e_13_llvm_8356168335732365941;
      v42[0] = &v36;
      v42[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      v42[2] = &v35;
      v42[3] = <&T as core::fmt::Display>::fmt;
      v56[0] = &anon_c3e8e9ea9dc0545c026a6afd80986738_40_llvm_9386787792893430286;
      v56[1] = 2LL;
      v56[4] = 0LL;
      v56[2] = v42;
      v56[3] = 2LL;
      v21 = core::fmt::Formatter::write_fmt(v79, v56);
      v20 = v29;
      if ( v21 )
        core::result::unwrap_failed(
          anon_225405b512d7025d7ce7fe63a55e8a3e_15_llvm_8356168335732365941,
          55LL,
          v56,
          &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_17_llvm_13186119769495240950,
          &anon_225405b512d7025d7ce7fe63a55e8a3e_17_llvm_8356168335732365941);
      *(_OWORD *)&v34.m256i_u64[1] = v30;
      v34.m256i_i64[3] = v31;
      v34.m256i_i64[0] = 4LL;
      v22 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
      if ( !v22 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v23 = *(_OWORD *)v34.m256i_i8;
      v22[1] = *(_OWORD *)&v34.m256i_u64[2];
      *v22 = v23;
      v20[1] = v22;
      v20[2] = &anon_225405b512d7025d7ce7fe63a55e8a3e_26_llvm_8356168335732365941;
      *v20 = 0x8000000000000000LL;
      if ( (_QWORD)v27 )
        _rust_dealloc(*((_QWORD *)&v27 + 1), v27, 1LL);
      if ( v43 )
      {
        if ( *(_QWORD *)&v48[0] )
          <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(v48);
        if ( *(_QWORD *)&v49[0] )
          <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(v49);
      }
      core::ptr::drop_in_place<alloc::vec::Vec<glob::Pattern>>(&v25);
      return v20;
    }
    v41 = v59;
    v40 = v58;
    v39 = v57;
    v14 = v26;
    if ( v26 == (_QWORD)v25 )
      alloc::raw_vec::RawVec<T,A>::grow_one(&v25);
    v15 = *((_QWORD *)&v25 + 1);
    v16 = 56 * v14;
    v17 = *(_OWORD *)v39.m256i_i8;
    v18 = *(_OWORD *)&v39.m256i_u64[2];
    v19 = v40;
    *(_QWORD *)(*((_QWORD *)&v25 + 1) + v16 + 48) = v41;
    *(_OWORD *)(v15 + v16 + 32) = v19;
    *(_OWORD *)(v15 + v16 + 16) = v18;
    *(_OWORD *)(v15 + v16) = v17;
    v26 = v14 + 1;
    if ( (_QWORD)v27 )
      _rust_dealloc(*((_QWORD *)&v27 + 1), v27, 1LL);
  }
  v20 = v29;
  if ( v43 )
  {
    if ( *(_QWORD *)&v48[0] )
      <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(v48);
    if ( *(_QWORD *)&v49[0] )
      <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(v49);
  }
  v20[2] = v26;
  *(_OWORD *)v20 = v25;
  return v20;
}
