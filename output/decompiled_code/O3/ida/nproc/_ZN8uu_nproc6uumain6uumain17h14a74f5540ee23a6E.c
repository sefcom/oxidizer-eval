__int64 __fastcall uu_nproc::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v3; // r15
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned __int64 v9; // r12
  __int64 v10; // r14
  char v11; // bp
  __int64 v12; // r15
  __int64 v13; // r15
  __int64 v14; // r15
  unsigned __int64 v15; // rax
  bool v16; // cc
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // [rsp+8h] [rbp-410h] BYREF
  __m256i v20; // [rsp+10h] [rbp-408h] BYREF
  __int128 v21; // [rsp+30h] [rbp-3E8h]
  __int64 v22; // [rsp+40h] [rbp-3D8h]
  _BYTE v23[8]; // [rsp+50h] [rbp-3C8h] BYREF
  __int64 v24; // [rsp+58h] [rbp-3C0h]
  __int128 v25; // [rsp+60h] [rbp-3B8h] BYREF
  __int64 *v26; // [rsp+70h] [rbp-3A8h]
  __int64 (__fastcall *v27)(); // [rsp+78h] [rbp-3A0h]
  __m256i v28; // [rsp+88h] [rbp-390h] BYREF
  __int128 v29; // [rsp+A8h] [rbp-370h]
  __int64 v30; // [rsp+B8h] [rbp-360h]
  __int128 v31; // [rsp+C0h] [rbp-358h] BYREF
  __int64 v32; // [rsp+D0h] [rbp-348h]
  _QWORD v33[2]; // [rsp+D8h] [rbp-340h] BYREF
  __m256i v34; // [rsp+E8h] [rbp-330h]
  __int128 v35; // [rsp+108h] [rbp-310h]
  __int16 v36; // [rsp+118h] [rbp-300h]
  __m256i dest; // [rsp+120h] [rbp-2F8h] BYREF
  __int128 v38; // [rsp+140h] [rbp-2D8h]

  uu_nproc::uu_app(&dest);
  clap_builder::builder::command::Command::try_get_matches_from(&v20, &dest, a1, a2);
  if ( v20.m256i_i64[0] == 0x8000000000000000LL )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v20.m256i_i64[1]);
  v30 = v22;
  v29 = v21;
  v28 = v20;
  v3 = (__int64)*(&uu_nproc::OPT_IGNORE + 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&dest, &v28, aIgnore, v3);
  v4 = clap_builder::parser::error::MatchesError::unwrap(aIgnore, v3, &dest);
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 8);
    v6 = *(_QWORD *)(v4 + 16);
    v7 = core::str::<impl str>::trim_matches(v5, v6);
    core::num::<impl core::str::traits::FromStr for usize>::from_str(v23, v7);
    if ( v23[0] )
    {
      LOBYTE(v19) = v23[1];
      v20.m256i_i64[0] = 0LL;
      v20.m256i_i64[1] = v5;
      v20.m256i_i64[2] = v6;
      v20.m256i_i8[24] = 1;
      *(_QWORD *)&v25 = &v20;
      *((_QWORD *)&v25 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
      v26 = &v19;
      v27 = <core::num::error::ParseIntError as core::fmt::Display>::fmt;
      dest.m256i_i64[0] = (__int64)&unk_10EBA8;
      dest.m256i_i64[1] = 2LL;
      *(_QWORD *)&v38 = 0LL;
      dest.m256i_i64[2] = (__int64)&v25;
      dest.m256i_i64[3] = 2LL;
      core::option::Option<T>::map_or_else(&v31, &dest);
      dest.m256i_i32[6] = 1;
      *(_OWORD *)dest.m256i_i8 = v31;
      dest.m256i_i64[2] = v32;
      v8 = alloc::boxed::Box<T>::new(&dest);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v28);
      return v8;
    }
    v9 = v24;
  }
  else
  {
    v9 = 0LL;
  }
  std::env::var(&dest, aOmpThreadLimit, 16LL);
  v10 = -1LL;
  if ( dest.m256i_i64[0]
    || (v20.m256i_i64[2] = dest.m256i_i64[3],
        *(_OWORD *)v20.m256i_i8 = *(_OWORD *)&dest.m256i_u64[1],
        core::num::<impl core::str::traits::FromStr for usize>::from_str(&v25, dest.m256i_i64[2]),
        v11 = v25,
        v12 = *((_QWORD *)&v25 + 1),
        core::ptr::drop_in_place<alloc::string::String>(&v20),
        v10 = v12 | -(__int64)(v12 == 0) | -(__int64)(v11 != 0),
        dest.m256i_i64[0]) )
  {
    core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&dest);
  }
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          &v28,
                          aAll,
                          *(&uu_nproc::OPT_ALL + 1)) )
  {
    v13 = uu_nproc::num_cpus_all();
  }
  else
  {
    std::env::var(&v20, aOmpNumThreads, 15LL);
    if ( v20.m256i_i64[0] )
    {
      v13 = uu_nproc::available_parallelism();
      v19 = v13;
    }
    else
    {
      v14 = v20.m256i_i64[3];
      v26 = (__int64 *)v20.m256i_i64[3];
      v25 = *(_OWORD *)&v20.m256i_u64[1];
      <char as core::str::pattern::Pattern>::into_searcher(&dest, v20.m256i_i64[2], v20.m256i_i64[3]);
      v35 = v38;
      v34 = dest;
      v33[0] = 0LL;
      v33[1] = v14;
      v36 = 0;
      <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&dest, v33);
      if ( !dest.m256i_i64[2]
        || (core::num::<impl core::str::traits::FromStr for usize>::from_str(v23, *(_QWORD *)dest.m256i_i64[1]), v23[0])
        || (v13 = v24) == 0 )
      {
        v13 = uu_nproc::available_parallelism();
      }
      v19 = v13;
      core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&dest);
      core::ptr::drop_in_place<alloc::string::String>(&v25);
    }
    if ( v20.m256i_i64[0] )
      core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v20);
  }
  v15 = core::cmp::min_by(v10, v13);
  v16 = v15 <= v9;
  v17 = v15 - v9;
  v18 = 1LL;
  if ( !v16 )
    v18 = v17;
  v19 = v18;
  v20.m256i_i64[0] = (__int64)&v19;
  v20.m256i_i64[1] = (__int64)core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
  dest.m256i_i64[0] = (__int64)&unk_10EB68;
  dest.m256i_i64[1] = 2LL;
  *(_QWORD *)&v38 = 0LL;
  dest.m256i_i64[2] = (__int64)&v20;
  dest.m256i_i64[3] = 1LL;
  std::io::stdio::_print(&dest);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v28);
  return 0LL;
}
