__int64 __fastcall uu_shred::uumain::uumain(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r13
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rbx
  char v8; // r12
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // r15
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 size; // rax
  unsigned __int64 v21; // rdx
  __int64 v22; // r15
  char v23; // bp
  char v24; // r13
  unsigned __int8 v25; // bl
  unsigned __int8 v26; // al
  char v27; // r12
  int v28; // ebp
  __int64 v29; // rax
  __int64 (__fastcall *v30)(); // rax
  __int64 v31; // rdx
  __int64 v32; // rdi
  unsigned __int64 v33; // rdx
  char flag; // [rsp+Fh] [rbp-3F9h]
  char v35; // [rsp+10h] [rbp-3F8h] BYREF
  __int64 (__fastcall *v36)(); // [rsp+18h] [rbp-3F0h] BYREF
  __int64 v37; // [rsp+20h] [rbp-3E8h]
  __int128 v38; // [rsp+28h] [rbp-3E0h] BYREF
  __int128 v39; // [rsp+38h] [rbp-3D0h]
  __int128 v40; // [rsp+48h] [rbp-3C0h]
  __int128 v41; // [rsp+58h] [rbp-3B0h]
  __int64 v42; // [rsp+68h] [rbp-3A0h] BYREF
  unsigned __int64 v43; // [rsp+70h] [rbp-398h]
  _OWORD v44[3]; // [rsp+78h] [rbp-390h] BYREF
  __int64 v45; // [rsp+A8h] [rbp-360h]
  unsigned __int64 v46; // [rsp+B0h] [rbp-358h]
  unsigned __int64 v47; // [rsp+B8h] [rbp-350h]
  __int64 *v48; // [rsp+C0h] [rbp-348h] BYREF
  __int64 (__fastcall *v49)(); // [rsp+C8h] [rbp-340h]
  __int64 (__fastcall **v50)(); // [rsp+D0h] [rbp-338h]
  __int64 (__fastcall *v51)(); // [rsp+D8h] [rbp-330h]
  __int128 v52; // [rsp+E0h] [rbp-328h]
  __int128 v53; // [rsp+F8h] [rbp-310h] BYREF
  __int64 v54; // [rsp+108h] [rbp-300h]
  _BYTE v55[48]; // [rsp+110h] [rbp-2F8h] BYREF
  __int128 v56; // [rsp+140h] [rbp-2C8h]

  v2 = 0x8000000000000000LL;
  uu_shred::uu_app(v55);
  clap_builder::builder::command::Command::try_get_matches_from(&v38, v55, a1, a2);
  if ( (_QWORD)v38 == 0x8000000000000000LL )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v38 + 1));
  v45 = v41;
  v44[2] = v40;
  v44[1] = v39;
  v44[0] = v38;
  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(v44, aFile, 4LL) )
  {
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v38);
    *(_QWORD *)&v55[16] = v39;
    *(_OWORD *)v55 = v38;
    *(_DWORD *)&v55[24] = 1;
    v7 = alloc::boxed::Box<T>::new(v55);
    goto LABEL_8;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v55, v44, aIterations, 10LL);
  v4 = clap_builder::parser::error::MatchesError::unwrap(aIterations, 10LL, v55);
  if ( !v4 )
    core::panicking::panic(aInternalErrorE_0, 40LL, &off_135270);
  v5 = *(_QWORD *)(v4 + 8);
  v6 = *(_QWORD *)(v4 + 16);
  core::num::<impl core::str::traits::FromStr for usize>::from_str(&v42, v5, v6);
  if ( (_BYTE)v42 )
  {
    *(_QWORD *)&v38 = 0LL;
    *((_QWORD *)&v38 + 1) = v5;
    *(_QWORD *)&v39 = v6;
    BYTE8(v39) = 1;
    v48 = (__int64 *)&v38;
    v49 = <os_display::Quoted as core::fmt::Display>::fmt;
    *(_QWORD *)v55 = &off_1352F8;
    *(_QWORD *)&v55[8] = 1LL;
    *(_QWORD *)&v55[32] = 0LL;
    *(_QWORD *)&v55[16] = &v48;
    *(_QWORD *)&v55[24] = 1LL;
    core::option::Option<T>::map_or_else(&v53, v55);
    *(_DWORD *)&v55[24] = 1;
    *(_OWORD *)v55 = v53;
    *(_QWORD *)&v55[16] = v54;
    v7 = alloc::boxed::Box<T>::new(v55);
LABEL_8:
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v44);
    return v7;
  }
  v47 = v43;
  v8 = 3;
  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v44, aU, 1LL) )
  {
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(v44, aRemove, 6LL) )
    {
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v55, v44, aRemove, 6LL);
      v9 = clap_builder::parser::error::MatchesError::unwrap(aRemove, 6LL, v55);
      if ( !v9
        || (v10 = core::ops::function::FnOnce::call_once(*(_QWORD *)(v9 + 8), *(_QWORD *)(v9 + 16))) == 0
        || (v12 = v10,
            v13 = v11,
            v8 = 1,
            !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v10, v11, aUnlink_0, 6LL))
        && (v8 = 2, !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v12, v13, aWipe, 4LL))
        && (v8 = 3, !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v12, v13, aWipesync, 8LL)) )
      {
        *(_QWORD *)v55 = &off_135288;
        *(_QWORD *)&v55[8] = 1LL;
        *(_QWORD *)&v55[16] = &v35;
        *(_OWORD *)&v55[24] = 0LL;
        core::panicking::panic_fmt(v55, &off_135298);
      }
    }
    else
    {
      v8 = 0;
    }
  }
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v44, aForce, 5LL);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v55, v44, aSize, 4LL);
  v14 = 4LL;
  v15 = clap_builder::parser::error::MatchesError::unwrap(aSize, 4LL, v55);
  if ( v15 )
  {
    v14 = v15;
    <alloc::string::String as core::clone::Clone>::clone(v55, v15);
    v2 = *(_QWORD *)v55;
    v52 = *(_OWORD *)&v55[8];
  }
  *(_QWORD *)v55 = v2;
  *(_OWORD *)&v55[8] = v52;
  size = uu_shred::get_size(v55, v14, v16, v17, v18, v19);
  v46 = v21;
  v22 = size;
  v23 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v44, aExact, 5LL);
  v24 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v44, aZero_0, 4LL);
  v25 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v44, aVerbose, 7LL);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v55, v44, aFile, 4LL);
  clap_builder::parser::error::MatchesError::unwrap(&v38, aFile, 4LL, v55);
  if ( !(_QWORD)v38 )
    core::option::unwrap_failed(&off_1352B0);
  v26 = v8;
  v56 = v41;
  *(_OWORD *)&v55[32] = v40;
  *(_OWORD *)&v55[16] = v39;
  *(_OWORD *)v55 = v38;
  v27 = (v22 == 1) | v23;
  v28 = v26;
  while ( 1 )
  {
    v29 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(v55);
    if ( !v29 )
      break;
    v30 = uu_shred::wipe_file(
            *(__int64 (__fastcall **)())(v29 + 8),
            *(__int64 ***)(v29 + 16),
            v47,
            v28,
            v22,
            v46,
            v27,
            v24,
            v25,
            flag);
    if ( v30 )
    {
      v36 = v30;
      v37 = v31;
      v32 = (*(unsigned int (__fastcall **)(__int64 (__fastcall *)()))(v31 + 96))(v30);
      uucore::mods::error::set_exit_code(v32);
      v42 = uucore::util_name();
      v43 = v33;
      v48 = &v42;
      v49 = <&T as core::fmt::Display>::fmt;
      v50 = &v36;
      v51 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
      *(_QWORD *)&v38 = &unk_1352C8;
      *((_QWORD *)&v38 + 1) = 3LL;
      *(_QWORD *)&v40 = 0LL;
      *(_QWORD *)&v39 = &v48;
      *((_QWORD *)&v39 + 1) = 2LL;
      std::io::stdio::_eprint(&v38);
      core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(v36, v37);
    }
  }
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v44);
  return 0LL;
}
