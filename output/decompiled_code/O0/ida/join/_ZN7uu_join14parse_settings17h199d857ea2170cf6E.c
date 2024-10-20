__int64 __fastcall uu_join::parse_settings(__int64 a1, __int64 a2)
{
  __int128 v2; // xmm0
  __int128 v3; // kr00_16
  __int128 v4; // kr10_16
  void (__fastcall __noreturn *v6)(); // rbp
  void (__fastcall __noreturn *v7)(); // r12
  const char *v8; // r15
  const char *v9; // r13
  __int64 v10; // rcx
  __int128 v11; // xmm1
  __int64 v12; // rax
  __int128 v13; // xmm0
  char v14; // r13
  char v15; // r15
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  char *i; // rdx
  unsigned __int8 *v20; // rcx
  __int64 v21; // rax
  int v22; // edx
  __int64 v23; // rax
  __int64 v24; // r15
  __int64 v25; // r12
  __int64 v26; // r14
  __int64 v27; // r15
  __int64 v28; // r12
  __int64 v29; // rax
  __int64 one; // rax
  __int64 v31; // r13
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rcx
  unsigned __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r15
  __int64 v40; // r12
  __int64 v41; // r13
  __int64 v42; // rax
  __int64 v43; // r15
  __int64 v44; // r12
  bool v45; // zf
  char v46; // al
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm2
  char v50; // [rsp+4h] [rbp-3C4h]
  __int128 v51; // [rsp+8h] [rbp-3C0h] BYREF
  __int64 v52; // [rsp+18h] [rbp-3B0h]
  __int128 v53; // [rsp+20h] [rbp-3A8h] BYREF
  __m256i v54; // [rsp+30h] [rbp-398h]
  __int128 v55; // [rsp+50h] [rbp-378h] BYREF
  _BYTE v56[24]; // [rsp+60h] [rbp-368h]
  _BYTE v57[7]; // [rsp+78h] [rbp-350h]
  char v58; // [rsp+7Fh] [rbp-349h]
  __int64 v59; // [rsp+88h] [rbp-340h]
  __int64 v60; // [rsp+90h] [rbp-338h]
  __int64 v61; // [rsp+98h] [rbp-330h] BYREF
  __int128 v62; // [rsp+A0h] [rbp-328h]
  __int64 v63; // [rsp+B0h] [rbp-318h]
  __int64 v64; // [rsp+B8h] [rbp-310h]
  __int64 v65; // [rsp+C0h] [rbp-308h]
  __int64 v66; // [rsp+C8h] [rbp-300h]
  __int64 v67; // [rsp+D0h] [rbp-2F8h]
  __int64 v68; // [rsp+D8h] [rbp-2F0h]
  __int64 v69; // [rsp+E0h] [rbp-2E8h]
  __int64 v70; // [rsp+E8h] [rbp-2E0h] BYREF
  __int64 v71; // [rsp+F0h] [rbp-2D8h]
  __int64 v72; // [rsp+F8h] [rbp-2D0h] BYREF
  __int64 v73; // [rsp+100h] [rbp-2C8h]
  __int64 v74; // [rsp+108h] [rbp-2C0h] BYREF
  __int128 v75; // [rsp+110h] [rbp-2B8h]
  __int64 v76; // [rsp+120h] [rbp-2A8h] BYREF
  __int128 v77; // [rsp+128h] [rbp-2A0h]
  __int64 v78; // [rsp+138h] [rbp-290h] BYREF
  __int128 v79; // [rsp+140h] [rbp-288h]
  __int128 v80; // [rsp+150h] [rbp-278h]
  __int128 v81; // [rsp+160h] [rbp-268h]
  void (__fastcall __noreturn *v82)(); // [rsp+178h] [rbp-250h]
  const char *v83; // [rsp+180h] [rbp-248h] BYREF
  __int128 v84; // [rsp+188h] [rbp-240h]
  __int64 v85; // [rsp+198h] [rbp-230h]
  __int64 v86; // [rsp+1A0h] [rbp-228h]
  __int128 v87; // [rsp+1A8h] [rbp-220h] BYREF
  void (__fastcall __noreturn *v88)(); // [rsp+1B8h] [rbp-210h]
  const char *v89; // [rsp+1C0h] [rbp-208h] BYREF
  __int128 v90; // [rsp+1C8h] [rbp-200h]
  __int64 v91; // [rsp+1D8h] [rbp-1F0h]
  __int64 v92; // [rsp+1E0h] [rbp-1E8h]
  __int128 v93; // [rsp+1E8h] [rbp-1E0h] BYREF
  _QWORD v94[2]; // [rsp+1F8h] [rbp-1D0h] BYREF
  _QWORD v95[3]; // [rsp+208h] [rbp-1C0h] BYREF
  __int64 v96; // [rsp+220h] [rbp-1A8h] BYREF
  __int64 v97; // [rsp+228h] [rbp-1A0h]
  __int64 v98; // [rsp+230h] [rbp-198h]
  _QWORD v99[3]; // [rsp+238h] [rbp-190h] BYREF
  _QWORD v100[3]; // [rsp+250h] [rbp-178h] BYREF
  char v101; // [rsp+268h] [rbp-160h]
  _QWORD v102[8]; // [rsp+270h] [rbp-158h] BYREF
  int v103; // [rsp+2B0h] [rbp-118h]
  __int16 v104; // [rsp+2B8h] [rbp-110h]
  __int128 v105; // [rsp+2C0h] [rbp-108h]
  __int128 v106; // [rsp+2D0h] [rbp-F8h] BYREF
  __int64 v107; // [rsp+2E0h] [rbp-E8h]
  _QWORD v108[6]; // [rsp+2E8h] [rbp-E0h] BYREF
  _QWORD v109[2]; // [rsp+318h] [rbp-B0h] BYREF
  __int128 v110; // [rsp+328h] [rbp-A0h]
  __int64 v111; // [rsp+338h] [rbp-90h]
  __int64 v112; // [rsp+340h] [rbp-88h]
  __int128 v113; // [rsp+348h] [rbp-80h]
  _QWORD v114[2]; // [rsp+358h] [rbp-70h] BYREF
  __int128 v115; // [rsp+368h] [rbp-60h]
  __int64 v116; // [rsp+378h] [rbp-50h]
  __int64 v117; // [rsp+380h] [rbp-48h]
  __int128 v118; // [rsp+388h] [rbp-40h]

  uu_join::get_and_parse_field_number(&v74, a2, (__int64)aJ);
  if ( v74 )
  {
    v2 = v75;
LABEL_7:
    *(_OWORD *)(a1 + 8) = v2;
LABEL_8:
    *(_QWORD *)a1 = 0x8000000000000000LL;
    return a1;
  }
  v3 = v75;
  uu_join::get_and_parse_field_number(&v76, a2, (__int64)::a1);
  if ( v76 )
  {
    v2 = v77;
    goto LABEL_7;
  }
  v4 = v77;
  uu_join::get_and_parse_field_number(&v78, a2, (__int64)::a2);
  if ( v78 )
  {
    v2 = v79;
    goto LABEL_7;
  }
  v66 = *((_QWORD *)&v4 + 1);
  v67 = v4;
  v68 = *((_QWORD *)&v3 + 1);
  v69 = v3;
  v64 = *((_QWORD *)&v79 + 1);
  v65 = v79;
  clap_builder::parser::matches::arg_matches::ArgMatches::get_many(v109, a2, aV, 1LL, &off_1312C8);
  v6 = (void (__fastcall __noreturn *)())v109[0];
  v7 = core::ops::function::FnOnce::call_once;
  v8 = anon_21d6120f1bf3ae8083dd7bd30f6eb60d_438_llvm_13186119769495240950;
  v105 = (unsigned __int64)anon_21d6120f1bf3ae8083dd7bd30f6eb60d_438_llvm_13186119769495240950;
  if ( v109[0] )
  {
    v9 = (const char *)v109[1];
    v80 = v110;
    v59 = v111;
    v60 = v112;
    v81 = v113;
    v50 = 0;
  }
  else
  {
    v50 = 1;
    v60 = 0LL;
    v9 = anon_21d6120f1bf3ae8083dd7bd30f6eb60d_438_llvm_13186119769495240950;
    v6 = core::ops::function::FnOnce::call_once;
    v81 = 0LL;
    v80 = (unsigned __int64)anon_21d6120f1bf3ae8083dd7bd30f6eb60d_438_llvm_13186119769495240950;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::get_many(v114, a2, aA, 1LL, &off_1312E0);
  if ( v114[0] )
  {
    v8 = (const char *)v114[1];
    v11 = v115;
    v10 = v116;
    v12 = v117;
    v13 = v118;
    v7 = (void (__fastcall __noreturn *)())v114[0];
  }
  else
  {
    v12 = 0LL;
    v13 = 0LL;
    v11 = v105;
  }
  v82 = v6;
  v83 = v9;
  v84 = v80;
  v85 = v59;
  v86 = v60;
  v87 = v81;
  v88 = v7;
  v89 = v8;
  v90 = v11;
  v91 = v10;
  v92 = v12;
  v93 = v13;
  v14 = 0;
  v15 = 0;
  if ( v6 )
    goto LABEL_17;
LABEL_30:
  if ( v88 )
  {
    v23 = <core::iter::adapters::flatten::FlattenCompat<I,U> as core::iter::traits::iterator::Iterator>::next(&v89);
    if ( v23 )
    {
      v17 = ((__int64 (__fastcall *)(__int64))v88)(v23);
      if ( v17 )
      {
        v18 = *((_QWORD *)&v93 + 1);
        for ( i = (char *)&v93 + 8; ; i = (char *)&v87 + 8 )
        {
          if ( !v18 )
            core::panicking::panic_const::panic_const_sub_overflow(
              &anon_88bd953382d64e16d63aef396fcf2aa0_14_llvm_18377431372254846744,
              a2,
              i);
          *(_QWORD *)i = v18 - 1;
          v20 = *(unsigned __int8 **)(v17 + 8);
          if ( !v20 || (v21 = *(_QWORD *)(v17 + 16), v21 < 0) )
            core::panicking::panic_nounwind(anon_88bd953382d64e16d63aef396fcf2aa0_53_llvm_18377431372254846744, 162LL);
          if ( v21 != 1 )
            break;
          v22 = *v20;
          if ( v22 == 49 )
          {
            v15 = 1;
          }
          else
          {
            if ( v22 != 50 )
              break;
            v14 = 1;
          }
          if ( !v82 )
            goto LABEL_30;
LABEL_17:
          v16 = <core::iter::adapters::flatten::FlattenCompat<I,U> as core::iter::traits::iterator::Iterator>::next(&v83);
          if ( !v16 || (v17 = ((__int64 (__fastcall *)(__int64))v82)(v16)) == 0 )
          {
            v82 = 0LL;
            goto LABEL_30;
          }
          v18 = *((_QWORD *)&v87 + 1);
        }
        v100[0] = 0LL;
        v100[1] = v20;
        v100[2] = v21;
        v101 = 1;
        v94[0] = v100;
        v94[1] = <os_display::Quoted as core::fmt::Display>::fmt;
        v108[0] = &off_131440;
        v108[1] = 1LL;
        v108[2] = v94;
        v108[3] = 1LL;
        v108[4] = 0LL;
        alloc::fmt::format::format_inner(v99, v108);
        v26 = v99[0];
        v27 = v99[1];
        v28 = v99[2];
        v29 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
        if ( !v29 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        *(_QWORD *)v29 = v26;
        *(_QWORD *)(v29 + 8) = v27;
        *(_QWORD *)(v29 + 16) = v28;
        *(_DWORD *)(v29 + 24) = 1;
        *(_QWORD *)(a1 + 8) = v29;
        *(_QWORD *)(a1 + 16) = &anon_f907210316a4f48a9c7de5c93e2a79ff_265_llvm_5503381581801417789;
        goto LABEL_8;
      }
    }
  }
  *(_OWORD *)&v56[8] = 0LL;
  v58 = 10;
  *(_QWORD *)&v55 = 0x8000000000000003LL;
  *(_QWORD *)&v53 = 0LL;
  *((_QWORD *)&v53 + 1) = 8LL;
  *(_OWORD *)v54.m256i_i8 = 0LL;
  *(_OWORD *)&v54.m256i_u64[2] = 1uLL;
  v57[2] = v50;
  v57[0] = v15 & 1;
  v57[1] = v14 & 1;
  *(_DWORD *)&v57[3] = (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                          a2,
                                          aI,
                                          1LL,
                                          &off_131310);
  uu_join::get_field_number(&v70, v69, v68, v67, v66);
  v24 = v70;
  if ( v70 )
  {
    v25 = v71;
LABEL_40:
    *(_QWORD *)(a1 + 8) = v24;
    *(_QWORD *)(a1 + 16) = v25;
    *(_QWORD *)a1 = 0x8000000000000000LL;
LABEL_41:
    core::ptr::drop_in_place<uu_join::Settings>(&v53);
    return a1;
  }
  *(_QWORD *)&v56[8] = v71;
  uu_join::get_field_number(&v72, v69, v68, v65, v64);
  v24 = v72;
  if ( v72 )
  {
    v25 = v73;
    goto LABEL_40;
  }
  *(_QWORD *)&v56[16] = v73;
  one = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(a2, aT, 1LL, &off_131328);
  if ( one )
  {
    uu_join::parse_separator((__int64)v95, one);
    v31 = v95[0];
    v24 = v95[1];
    v25 = v95[2];
    if ( v95[0] == 0x8000000000000004LL )
      goto LABEL_40;
    core::ptr::drop_in_place<uu_join::SepSetting>(&v55);
    *(_QWORD *)&v55 = v31;
    *((_QWORD *)&v55 + 1) = v24;
    *(_QWORD *)v56 = v25;
  }
  v32 = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(a2, aO, 1LL, &off_131340);
  if ( v32 )
  {
    v61 = v32;
    if ( !(unsigned __int8)core::cmp::impls::<impl core::cmp::PartialEq<&B> for &A>::eq(&v61, &off_131358) )
    {
      *(_QWORD *)&v51 = 0LL;
      *((_QWORD *)&v51 + 1) = 8LL;
      v52 = 0LL;
      v33 = <alloc::string::String as core::ops::deref::Deref>::deref(v61);
      v102[0] = 0LL;
      v102[1] = v34;
      v102[2] = v33;
      v102[3] = v34;
      v102[4] = v33;
      v102[5] = v34 + v33;
      v102[6] = 0LL;
      v102[7] = 0x2C00000020LL;
      v103 = 9;
      v104 = 1;
      while ( 1 )
      {
        v37 = <core::str::iter::Split<P> as core::iter::traits::iterator::Iterator>::next(v102);
        if ( !v37 )
        {
          v63 = v52;
          v62 = v51;
          core::ptr::drop_in_place<alloc::vec::Vec<uu_join::Spec>>(&v53);
          v54.m256i_i64[0] = v63;
          v53 = v62;
          goto LABEL_55;
        }
        uu_join::Spec::parse((__int64)&v96, v37, v38);
        v39 = v97;
        v40 = v98;
        if ( v96 )
          break;
        v41 = v52;
        if ( v52 == (_QWORD)v51 )
          alloc::raw_vec::RawVec<T,A>::grow_one(&v51);
        v35 = *((_QWORD *)&v51 + 1);
        v36 = 16 * v41;
        *(_QWORD *)(*((_QWORD *)&v51 + 1) + v36) = v39;
        *(_QWORD *)(v35 + v36 + 8) = v40;
        v52 = v41 + 1;
      }
      *(_QWORD *)(a1 + 8) = v97;
      *(_QWORD *)(a1 + 16) = v40;
      *(_QWORD *)a1 = 0x8000000000000000LL;
      core::ptr::drop_in_place<alloc::vec::Vec<uu_join::Spec>>(&v51);
      goto LABEL_41;
    }
    v57[4] = 1;
  }
LABEL_55:
  v42 = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(a2, aE, 1LL, &off_131368);
  if ( v42 )
  {
    v43 = *(_QWORD *)(v42 + 8);
    v44 = *(_QWORD *)(v42 + 16);
    core::slice::raw::from_raw_parts::precondition_check(v43, 1LL, 1LL, v44);
    alloc::slice::<impl [T]>::to_vec(&v106, v43, v44);
    if ( v54.m256i_i64[1] )
      _rust_dealloc(v54.m256i_i64[2], v54.m256i_i64[1], 1LL);
    v54.m256i_i64[3] = v107;
    *(_OWORD *)&v54.m256i_u64[1] = v106;
  }
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          a2,
                          aNocheckOrder,
                          13LL,
                          &off_131380) )
    v57[6] = 1;
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          a2,
                          aCheckOrder,
                          11LL,
                          &off_131398) )
    v57[6] = 2;
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aHeader, 6LL, &off_1313B0) )
    v57[5] = 1;
  v45 = (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aZ, 1LL, &off_1313C8) == 0;
  v46 = 10;
  if ( !v45 )
    v46 = 0;
  v58 = v46;
  *(_OWORD *)(a1 + 64) = *(_OWORD *)v56;
  v47 = v53;
  v48 = *(_OWORD *)v54.m256i_i8;
  v49 = *(_OWORD *)&v54.m256i_u64[2];
  *(_OWORD *)(a1 + 48) = v55;
  *(_OWORD *)(a1 + 32) = v49;
  *(_OWORD *)(a1 + 16) = v48;
  *(_OWORD *)a1 = v47;
  *(_QWORD *)(a1 + 80) = *(_QWORD *)&v56[16];
  *(_DWORD *)(a1 + 88) = *(_DWORD *)v57;
  *(_WORD *)(a1 + 92) = *(_WORD *)&v57[4];
  *(_BYTE *)(a1 + 94) = v57[6];
  *(_BYTE *)(a1 + 95) = v58;
  return a1;
}
