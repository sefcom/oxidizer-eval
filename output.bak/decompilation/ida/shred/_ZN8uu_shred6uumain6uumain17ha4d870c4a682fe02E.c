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
  __int64 size; // rax
  __int64 v17; // rdx
  __int64 v18; // r15
  char v19; // bp
  char v20; // r13
  unsigned __int8 v21; // bl
  unsigned __int8 v22; // al
  unsigned __int8 v23; // r12
  int v24; // ebp
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rdi
  unsigned __int64 v29; // rdx
  char flag; // [rsp+Fh] [rbp-3F9h]
  char v31; // [rsp+10h] [rbp-3F8h] BYREF
  __int64 v32; // [rsp+18h] [rbp-3F0h] BYREF
  __int64 v33; // [rsp+20h] [rbp-3E8h]
  __int128 v34; // [rsp+28h] [rbp-3E0h] BYREF
  __int128 v35; // [rsp+38h] [rbp-3D0h]
  __int128 v36; // [rsp+48h] [rbp-3C0h]
  __int128 v37; // [rsp+58h] [rbp-3B0h]
  __int64 v38; // [rsp+68h] [rbp-3A0h] BYREF
  unsigned __int64 v39; // [rsp+70h] [rbp-398h]
  _OWORD v40[3]; // [rsp+78h] [rbp-390h] BYREF
  __int64 v41; // [rsp+A8h] [rbp-360h]
  __int64 v42; // [rsp+B0h] [rbp-358h]
  unsigned __int64 v43; // [rsp+B8h] [rbp-350h]
  __int64 *v44; // [rsp+C0h] [rbp-348h] BYREF
  __int64 (__fastcall *v45)(); // [rsp+C8h] [rbp-340h]
  __int64 *v46; // [rsp+D0h] [rbp-338h]
  __int64 (__fastcall *v47)(); // [rsp+D8h] [rbp-330h]
  __int128 v48; // [rsp+E0h] [rbp-328h]
  __int128 v49; // [rsp+F8h] [rbp-310h] BYREF
  __int64 v50; // [rsp+108h] [rbp-300h]
  _BYTE v51[48]; // [rsp+110h] [rbp-2F8h] BYREF
  __int128 v52; // [rsp+140h] [rbp-2C8h]

  v2 = 0x8000000000000000LL;
  uu_shred::uu_app(v51);
  clap_builder::builder::command::Command::try_get_matches_from(&v34, v51, a1, a2);
  if ( (_QWORD)v34 == 0x8000000000000000LL )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v34 + 1));
  v41 = v37;
  v40[2] = v36;
  v40[1] = v35;
  v40[0] = v34;
  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(v40, aFile, 4LL) )
  {
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v34);
    *(_QWORD *)&v51[16] = v35;
    *(_OWORD *)v51 = v34;
    *(_DWORD *)&v51[24] = 1;
    v7 = alloc::boxed::Box<T>::new(v51);
    goto LABEL_8;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v51, v40, aIterations, 10LL);
  v4 = clap_builder::parser::error::MatchesError::unwrap(aIterations, 10LL, v51);
  if ( !v4 )
    core::panicking::panic(aInternalErrorE_1, 40LL, &off_135E60);
  v5 = *(_QWORD *)(v4 + 8);
  v6 = *(_QWORD *)(v4 + 16);
  core::num::<impl core::str::traits::FromStr for usize>::from_str(&v38, v5, v6);
  if ( (_BYTE)v38 )
  {
    *(_QWORD *)&v34 = 0LL;
    *((_QWORD *)&v34 + 1) = v5;
    *(_QWORD *)&v35 = v6;
    BYTE8(v35) = 1;
    v44 = (__int64 *)&v34;
    v45 = <os_display::Quoted as core::fmt::Display>::fmt;
    *(_QWORD *)v51 = &off_135D80;
    *(_QWORD *)&v51[8] = 1LL;
    *(_QWORD *)&v51[32] = 0LL;
    *(_QWORD *)&v51[16] = &v44;
    *(_QWORD *)&v51[24] = 1LL;
    core::option::Option<T>::map_or_else(&v49, v51);
    *(_DWORD *)&v51[24] = 1;
    *(_OWORD *)v51 = v49;
    *(_QWORD *)&v51[16] = v50;
    v7 = alloc::boxed::Box<T>::new(v51);
LABEL_8:
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v40);
    return v7;
  }
  v43 = v39;
  v8 = 3;
  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v40, aU, 1LL) )
  {
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(v40, aRemove, 6LL) )
    {
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v51, v40, aRemove, 6LL);
      v9 = clap_builder::parser::error::MatchesError::unwrap(aRemove, 6LL, v51);
      if ( !v9
        || (v10 = core::ops::function::FnOnce::call_once(*(_QWORD *)(v9 + 8), *(_QWORD *)(v9 + 16))) == 0
        || (v12 = v10,
            v13 = v11,
            v8 = 1,
            !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v10, v11, aUnlink_0, 6LL))
        && (v8 = 2, !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v12, v13, aWipe, 4LL))
        && (v8 = 3, !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v12, v13, aWipesync, 8LL)) )
      {
        *(_QWORD *)v51 = &off_135D90;
        *(_QWORD *)&v51[8] = 1LL;
        *(_QWORD *)&v51[16] = &v31;
        *(_OWORD *)&v51[24] = 0LL;
        core::panicking::panic_fmt(v51, &off_135E78);
      }
    }
    else
    {
      v8 = 0;
    }
  }
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v40, aForce, 5LL);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v51, v40, aSize, 4LL);
  v14 = 4LL;
  v15 = clap_builder::parser::error::MatchesError::unwrap(aSize, 4LL, v51);
  if ( v15 )
  {
    v14 = v15;
    <alloc::string::String as core::clone::Clone>::clone(v51, v15);
    v2 = *(_QWORD *)v51;
    v48 = *(_OWORD *)&v51[8];
  }
  *(_QWORD *)v51 = v2;
  *(_OWORD *)&v51[8] = v48;
  size = uu_shred::get_size(v51, v14);
  v42 = v17;
  v18 = size;
  v19 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v40, aExact, 5LL);
  v20 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v40, aZero_0, 4LL);
  v21 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v40, aVerbose, 7LL);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v51, v40, aFile, 4LL);
  clap_builder::parser::error::MatchesError::unwrap(&v34, aFile, 4LL, v51);
  if ( !(_QWORD)v34 )
    core::option::unwrap_failed(&off_135E90);
  v22 = v8;
  v52 = v37;
  *(_OWORD *)&v51[32] = v36;
  *(_OWORD *)&v51[16] = v35;
  *(_OWORD *)v51 = v34;
  v23 = (v18 == 1) | v19;
  v24 = v22;
  while ( 1 )
  {
    v25 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(v51);
    if ( !v25 )
      break;
    v26 = uu_shred::wipe_file(
            *(__int64 (__fastcall **)())(v25 + 8),
            *(__int64 ***)(v25 + 16),
            v43,
            v24,
            v18,
            v42,
            v23,
            v20,
            v21,
            flag);
    if ( v26 )
    {
      v32 = v26;
      v33 = v27;
      v28 = (*(unsigned int (__fastcall **)(__int64))(v27 + 96))(v26);
      uucore::mods::error::set_exit_code(v28);
      v38 = uucore::util_name();
      v39 = v29;
      v44 = &v38;
      v45 = <&T as core::fmt::Display>::fmt;
      v46 = &v32;
      v47 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
      *(_QWORD *)&v34 = &unk_135DA0;
      *((_QWORD *)&v34 + 1) = 3LL;
      *(_QWORD *)&v36 = 0LL;
      *(_QWORD *)&v35 = &v44;
      *((_QWORD *)&v35 + 1) = 2LL;
      std::io::stdio::_eprint(&v34);
      core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(v32, v33);
    }
  }
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v40);
  return 0LL;
}
