__int64 __fastcall uu_nproc::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 (__fastcall *v6)(); // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned __int64 v10; // rbp
  __int64 v11; // r14
  __int64 v12; // r15
  _QWORD *v13; // r12
  __int64 v14; // r13
  __int128 v15; // kr00_16
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  bool v18; // cc
  __int64 v19; // rax
  __int64 v20; // rcx
  char v21; // [rsp+Fh] [rbp-3B9h] BYREF
  _QWORD v22[2]; // [rsp+10h] [rbp-3B8h] BYREF
  __int64 v23; // [rsp+20h] [rbp-3A8h] BYREF
  unsigned __int64 v24; // [rsp+28h] [rbp-3A0h]
  __int128 v25; // [rsp+30h] [rbp-398h]
  __int128 v26; // [rsp+40h] [rbp-388h]
  __int64 v27; // [rsp+50h] [rbp-378h]
  unsigned __int64 v28; // [rsp+58h] [rbp-370h]
  __int64 *v29; // [rsp+60h] [rbp-368h] BYREF
  __int64 (__fastcall *v30)(); // [rsp+68h] [rbp-360h]
  char *v31; // [rsp+70h] [rbp-358h]
  __int64 (__fastcall *v32)(); // [rsp+78h] [rbp-350h]
  _QWORD v33[2]; // [rsp+80h] [rbp-348h] BYREF
  __int128 v34; // [rsp+90h] [rbp-338h]
  __int128 v35; // [rsp+A0h] [rbp-328h]
  __int64 v36; // [rsp+B0h] [rbp-318h]
  __int128 v37; // [rsp+B8h] [rbp-310h] BYREF
  _QWORD *v38; // [rsp+C8h] [rbp-300h]
  __int128 dest; // [rsp+D0h] [rbp-2F8h] BYREF
  _QWORD *v40; // [rsp+E0h] [rbp-2E8h] BYREF
  __int64 v41; // [rsp+E8h] [rbp-2E0h]
  __int64 v42; // [rsp+F0h] [rbp-2D8h]
  __int16 v43; // [rsp+110h] [rbp-2B8h]

  uu_nproc::uu_app(&dest);
  clap_builder::builder::command::Command::try_get_matches_from(&v23, &dest, a1, a2);
  if ( __OFSUB__(-v23, 1LL) )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
             v24,
             &dest,
             v2,
             -v23);
  v36 = v27;
  v35 = v26;
  v34 = v25;
  v33[0] = v23;
  v33[1] = v24;
  v4 = (__int64)*(&uu_nproc::OPT_IGNORE + 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&dest, v33, aIgnore, v4);
  v5 = clap_builder::parser::error::MatchesError::unwrap(aIgnore, v4, &dest);
  if ( v5 )
  {
    v6 = *(__int64 (__fastcall **)())(v5 + 8);
    v7 = *(_QWORD *)(v5 + 16);
    v8 = core::str::<impl str>::trim_matches(v6, v7);
    core::num::<impl usize>::from_ascii_radix(v22, v8);
    if ( LOBYTE(v22[0]) )
    {
      v21 = BYTE1(v22[0]);
      v23 = 0LL;
      v24 = (unsigned __int64)v6;
      *(_QWORD *)&v25 = v7;
      BYTE8(v25) = 1;
      v29 = &v23;
      v30 = <os_display::Quoted as core::fmt::Display>::fmt;
      v31 = &v21;
      v32 = <core::num::error::ParseIntError as core::fmt::Display>::fmt;
      *(_QWORD *)&dest = &unk_E05C0;
      *((_QWORD *)&dest + 1) = 2LL;
      v42 = 0LL;
      v40 = &v29;
      v41 = 2LL;
      core::option::Option<T>::map_or_else(&v37, &dest);
      LODWORD(v41) = 1;
      dest = v37;
      v40 = v38;
      v9 = alloc::boxed::Box<T>::new(&dest);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v33);
      return v9;
    }
    v10 = v22[1];
  }
  else
  {
    v10 = 0LL;
  }
  std::env::var(&dest, aOmpThreadLimit, 16LL);
  if ( (dest & 1) != 0 )
  {
    core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&dest);
    v11 = -1LL;
  }
  else
  {
    v12 = *((_QWORD *)&dest + 1);
    v13 = v40;
    core::num::<impl usize>::from_ascii_radix(&v23, v40);
    v11 = -1LL;
    if ( !(_BYTE)v23 )
      v11 = v24 | -(__int64)(v24 == 0);
    core::ptr::drop_in_place<alloc::string::String>(v12, v13);
  }
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          v33,
                          aAll,
                          *(&uu_nproc::OPT_ALL + 1)) )
  {
    v14 = uu_nproc::num_cpus_all();
  }
  else
  {
    std::env::var(&v23, aOmpNumThreads, 15LL);
    if ( v23 == 1 )
    {
      v14 = uu_nproc::available_parallelism();
      core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v23);
    }
    else
    {
      v28 = v24;
      v15 = v25;
      <char as core::str::pattern::Pattern>::into_searcher(&v40, v25, *((_QWORD *)&v25 + 1));
      *(_QWORD *)&dest = 0LL;
      *((_QWORD *)&dest + 1) = *((_QWORD *)&v15 + 1);
      v43 = 0;
      v16 = core::str::iter::SplitInternal<P>::next(&dest);
      if ( !v16
        || (core::num::<impl usize>::from_ascii_radix(&v29, v16), v14 = (__int64)v30,
                                                                  (unsigned __int8)v29 | (v30 == 0LL)) )
      {
        v14 = uu_nproc::available_parallelism();
      }
      v22[0] = *((_QWORD *)&v15 + 1);
      core::ptr::drop_in_place<alloc::string::String>(v28, v15);
    }
  }
  v17 = core::cmp::Ord::min(v11, v14);
  v18 = v17 <= v10;
  v19 = v17 - v10;
  v20 = 1LL;
  if ( !v18 )
    v20 = v19;
  v22[0] = v20;
  v23 = (__int64)v22;
  v24 = (unsigned __int64)core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
  *(_QWORD *)&dest = &unk_E0568;
  *((_QWORD *)&dest + 1) = 2LL;
  v42 = 0LL;
  v40 = &v23;
  v41 = 1LL;
  std::io::stdio::_print(&dest);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v33);
  return 0LL;
}