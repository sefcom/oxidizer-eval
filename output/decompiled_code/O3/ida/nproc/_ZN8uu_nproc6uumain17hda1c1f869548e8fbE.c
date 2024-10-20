__int64 __fastcall uu_nproc::uumain(__int64 a1, __int64 a2)
{
  __int128 v2; // rax
  __int64 v3; // r15
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rax
  _OWORD *v8; // rax
  __int128 v9; // xmm0
  _OWORD *v10; // r14
  __int128 v11; // rax
  __int128 v12; // rax
  unsigned int v13; // ebx
  __int128 v14; // kr00_16
  __int64 v15; // rsi
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // r12
  __int64 v18; // r14
  __int64 v19; // r13
  __int64 v20; // r12
  unsigned __int64 v21; // r14
  bool v22; // cc
  __int64 v23; // r14
  __int64 v24; // rax
  unsigned __int64 v26; // [rsp+8h] [rbp-420h] BYREF
  __int128 v27; // [rsp+10h] [rbp-418h] BYREF
  unsigned __int64 *v28; // [rsp+20h] [rbp-408h]
  __int64 (__fastcall *v29)(); // [rsp+28h] [rbp-400h]
  __int128 v30; // [rsp+30h] [rbp-3F8h] BYREF
  __int128 v31; // [rsp+40h] [rbp-3E8h]
  __int128 v32; // [rsp+50h] [rbp-3D8h]
  __int64 v33; // [rsp+60h] [rbp-3C8h]
  _BYTE v34[8]; // [rsp+68h] [rbp-3C0h] BYREF
  unsigned __int64 v35; // [rsp+70h] [rbp-3B8h]
  _OWORD v36[3]; // [rsp+78h] [rbp-3B0h] BYREF
  __int64 v37; // [rsp+A8h] [rbp-380h]
  __int128 v38; // [rsp+B0h] [rbp-378h] BYREF
  __int128 v39; // [rsp+C0h] [rbp-368h]
  __int64 v40; // [rsp+D0h] [rbp-358h]
  __int64 v41; // [rsp+D8h] [rbp-350h]
  __int64 v42; // [rsp+E0h] [rbp-348h]
  char v43; // [rsp+E8h] [rbp-340h]
  __int16 v44; // [rsp+F0h] [rbp-338h]
  __int128 v45; // [rsp+100h] [rbp-328h] BYREF
  __int64 v46; // [rsp+110h] [rbp-318h]
  __int128 v47; // [rsp+118h] [rbp-310h] BYREF
  __int64 v48; // [rsp+128h] [rbp-300h]
  __m256i v49; // [rsp+130h] [rbp-2F8h] BYREF
  __int64 v50; // [rsp+150h] [rbp-2D8h]

  uu_nproc::uu_app(&v49);
  clap_builder::builder::command::Command::try_get_matches_from(&v30, &v49, a1, a2);
  if ( (_QWORD)v30 != 0x8000000000000000LL )
  {
    v37 = v33;
    v36[2] = v32;
    v36[1] = v31;
    v36[0] = v30;
    v3 = (__int64)*(&uu_nproc::OPT_IGNORE + 1);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v49, v36, aIgnore, v3);
    v4 = clap_builder::parser::error::MatchesError::unwrap(aIgnore, v3, &v49);
    if ( v4 )
    {
      v5 = *(_QWORD *)(v4 + 8);
      v6 = *(_QWORD *)(v4 + 16);
      v7 = core::str::<impl str>::trim_matches(v5, v6);
      core::num::<impl core::str::traits::FromStr for usize>::from_str(v34, v7);
      if ( v34[0] )
      {
        LOBYTE(v26) = v34[1];
        *(_QWORD *)&v30 = 0LL;
        *((_QWORD *)&v30 + 1) = v5;
        *(_QWORD *)&v31 = v6;
        BYTE8(v31) = 1;
        *(_QWORD *)&v27 = &v30;
        *((_QWORD *)&v27 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
        v28 = &v26;
        v29 = <core::num::error::ParseIntError as core::fmt::Display>::fmt;
        v49.m256i_i64[0] = (__int64)&unk_DAE68;
        v49.m256i_i64[1] = 2LL;
        v50 = 0LL;
        v49.m256i_i64[2] = (__int64)&v27;
        v49.m256i_i64[3] = 2LL;
        alloc::fmt::format::format_inner(&v47, &v49);
        v49.m256i_i32[6] = 1;
        *(_OWORD *)v49.m256i_i8 = v47;
        v49.m256i_i64[2] = v48;
        v8 = (_OWORD *)_rust_alloc(32LL, 8LL);
        if ( !v8 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        v9 = *(_OWORD *)v49.m256i_i8;
        v8[1] = *(_OWORD *)&v49.m256i_u64[2];
        *v8 = v9;
        v10 = v8;
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v36);
        *(_QWORD *)&v2 = v10;
        *((_QWORD *)&v2 + 1) = &off_DAEC0;
        goto LABEL_8;
      }
      v16 = v35;
    }
    else
    {
      v16 = 0LL;
    }
    std::env::var(&v49, aOmpThreadLimit, 16LL);
    v17 = -1LL;
    if ( v49.m256i_i64[0] )
      goto LABEL_20;
    *(_QWORD *)&v31 = v49.m256i_i64[3];
    v30 = *(_OWORD *)&v49.m256i_u64[1];
    core::num::<impl core::str::traits::FromStr for usize>::from_str(&v27, v49.m256i_i64[2]);
    v18 = *((_QWORD *)&v27 + 1);
    v19 = -(__int64)(*((_QWORD *)&v27 + 1) == 0LL);
    v20 = -(__int64)((_BYTE)v27 != 0);
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v30);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v30);
    v17 = v18 | v19 | v20;
    if ( v49.m256i_i64[0] )
LABEL_20:
      core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v49);
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                            v36,
                            aAll,
                            *(&uu_nproc::OPT_ALL + 1)) )
    {
      v21 = uu_nproc::num_cpus_all();
    }
    else
    {
      std::env::var(&v49, aOmpNumThreads, 15LL);
      if ( v49.m256i_i64[0] )
      {
        v21 = uu_nproc::available_parallelism();
        v26 = v21;
      }
      else
      {
        v28 = (unsigned __int64 *)v49.m256i_i64[3];
        v27 = *(_OWORD *)&v49.m256i_u64[1];
        *(_QWORD *)&v38 = 0LL;
        *((_QWORD *)&v38 + 1) = v49.m256i_i64[3];
        v39 = *(_OWORD *)&v49.m256i_u64[2];
        v40 = 0LL;
        v41 = v49.m256i_i64[3];
        v42 = 0x2C0000002CLL;
        v43 = 1;
        v44 = 0;
        <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v30, &v38);
        if ( !(_QWORD)v31
          || (core::num::<impl core::str::traits::FromStr for usize>::from_str(v34, **((_QWORD **)&v30 + 1)), v34[0])
          || (v21 = v35) == 0 )
        {
          v21 = uu_nproc::available_parallelism();
        }
        v26 = v21;
        <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v30);
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v30);
        <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v27);
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v27);
      }
      if ( v49.m256i_i64[0] )
        core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v49);
    }
    if ( v17 < v21 )
      v21 = v17;
    v22 = v21 <= v16;
    v23 = v21 - v16;
    v24 = 1LL;
    if ( !v22 )
      v24 = v23;
    v26 = v24;
    *(_QWORD *)&v30 = &v26;
    *((_QWORD *)&v30 + 1) = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v49.m256i_i64[0] = (__int64)&unk_DAE28;
    v49.m256i_i64[1] = 2LL;
    v50 = 0LL;
    v49.m256i_i64[2] = (__int64)&v30;
    v49.m256i_i64[3] = 1LL;
    std::io::stdio::_print(&v49);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v36);
    return (unsigned int)uucore::mods::error::get_exit_code();
  }
  *(_QWORD *)&v2 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v30 + 1));
  if ( !(_QWORD)v2 )
    return (unsigned int)uucore::mods::error::get_exit_code();
LABEL_8:
  v27 = v2;
  *(_QWORD *)&v38 = &v27;
  *((_QWORD *)&v38 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
  v49.m256i_i64[0] = (__int64)anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
  v49.m256i_i64[1] = 1LL;
  v50 = 0LL;
  v49.m256i_i64[2] = (__int64)&v38;
  v49.m256i_i64[3] = 1LL;
  alloc::fmt::format::format_inner(&v45, &v49);
  v38 = v45;
  *(_QWORD *)&v39 = v46;
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((_QWORD *)&v45 + 1), v46, 1LL, 0LL) )
  {
    *(_QWORD *)&v11 = uucore::util_name();
    v30 = v11;
    *(_QWORD *)&v36[0] = &v30;
    *((_QWORD *)&v36[0] + 1) = <&T as core::fmt::Display>::fmt;
    v49.m256i_i64[0] = (__int64)&unk_DAE08;
    v49.m256i_i64[1] = 2LL;
    v50 = 0LL;
    v49.m256i_i64[2] = (__int64)v36;
    v49.m256i_i64[3] = 1LL;
    std::io::stdio::_eprint(&v49);
    *(_QWORD *)&v30 = &v38;
    *((_QWORD *)&v30 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    v49.m256i_i64[0] = (__int64)&unk_DAE28;
    v49.m256i_i64[1] = 2LL;
    v50 = 0LL;
    v49.m256i_i64[2] = (__int64)&v30;
    v49.m256i_i64[3] = 1LL;
    std::io::stdio::_eprint(&v49);
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*((_QWORD *)&v27 + 1) + 104LL))(v27) )
  {
    *(_QWORD *)&v12 = uucore::execution_phrase();
    v30 = v12;
    *(_QWORD *)&v36[0] = &v30;
    *((_QWORD *)&v36[0] + 1) = <&T as core::fmt::Display>::fmt;
    v49.m256i_i64[0] = (__int64)&off_DAE48;
    v49.m256i_i64[1] = 2LL;
    v50 = 0LL;
    v49.m256i_i64[2] = (__int64)v36;
    v49.m256i_i64[3] = 1LL;
    std::io::stdio::_eprint(&v49);
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD))(*((_QWORD *)&v27 + 1) + 96LL))(v27);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v38);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v38);
  v14 = v27;
  if ( **((_QWORD **)&v27 + 1) )
    (**((void (__fastcall ***)(_QWORD))&v27 + 1))(v27);
  v15 = *(_QWORD *)(*((_QWORD *)&v14 + 1) + 8LL);
  if ( v15 )
    _rust_dealloc(v14, v15, *(_QWORD *)(*((_QWORD *)&v14 + 1) + 16LL));
  return v13;
}
