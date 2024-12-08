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
  __int64 v14; // rax
  __int64 size; // rax
  __int64 v16; // rdx
  __int64 v17; // r15
  char v18; // bp
  char v19; // r13
  char v20; // bl
  unsigned __int8 v21; // al
  char v22; // r12
  int v23; // ebp
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  unsigned int v27; // eax
  __int64 v28; // rdx
  char flag; // [rsp+Fh] [rbp-3F9h]
  char v30; // [rsp+10h] [rbp-3F8h] BYREF
  __int64 v31; // [rsp+18h] [rbp-3F0h] BYREF
  __int64 v32; // [rsp+20h] [rbp-3E8h]
  __int128 v33; // [rsp+28h] [rbp-3E0h] BYREF
  __int128 v34; // [rsp+38h] [rbp-3D0h]
  __int128 v35; // [rsp+48h] [rbp-3C0h]
  __int128 v36; // [rsp+58h] [rbp-3B0h]
  __int64 v37; // [rsp+68h] [rbp-3A0h] BYREF
  __int64 v38; // [rsp+70h] [rbp-398h]
  _OWORD v39[3]; // [rsp+78h] [rbp-390h] BYREF
  __int64 v40; // [rsp+A8h] [rbp-360h]
  __int64 v41; // [rsp+B0h] [rbp-358h]
  __int64 v42; // [rsp+B8h] [rbp-350h]
  __int64 *v43; // [rsp+C0h] [rbp-348h] BYREF
  __int64 (__fastcall *v44)(); // [rsp+C8h] [rbp-340h]
  __int64 *v45; // [rsp+D0h] [rbp-338h]
  __int64 (__fastcall *v46)(); // [rsp+D8h] [rbp-330h]
  __int128 v47; // [rsp+E0h] [rbp-328h]
  __int128 v48; // [rsp+F8h] [rbp-310h] BYREF
  __int64 v49; // [rsp+108h] [rbp-300h]
  _BYTE v50[48]; // [rsp+110h] [rbp-2F8h] BYREF
  __int128 v51; // [rsp+140h] [rbp-2C8h]

  v2 = 0x8000000000000000LL;
  uu_shred::uu_app(v50);
  clap_builder::builder::command::Command::try_get_matches_from(&v33, v50, a1, a2);
  if ( (_QWORD)v33 == 0x8000000000000000LL )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v33 + 1));
  v40 = v36;
  v39[2] = v35;
  v39[1] = v34;
  v39[0] = v33;
  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(v39, aFile, 4LL) )
  {
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v33);
    *(_QWORD *)&v50[16] = v34;
    *(_OWORD *)v50 = v33;
    *(_DWORD *)&v50[24] = 1;
    v7 = alloc::boxed::Box<T>::new(v50);
    goto LABEL_8;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v50, v39, aIterations, 10LL);
  v4 = clap_builder::parser::error::MatchesError::unwrap(aIterations, 10LL, v50);
  if ( !v4 )
    core::panicking::panic(aInternalErrorE_0, 40LL, &off_135270);
  v5 = *(_QWORD *)(v4 + 8);
  v6 = *(_QWORD *)(v4 + 16);
  core::num::<impl core::str::traits::FromStr for usize>::from_str(&v37, v5, v6);
  if ( (_BYTE)v37 )
  {
    *(_QWORD *)&v33 = 0LL;
    *((_QWORD *)&v33 + 1) = v5;
    *(_QWORD *)&v34 = v6;
    BYTE8(v34) = 1;
    v43 = (__int64 *)&v33;
    v44 = <os_display::Quoted as core::fmt::Display>::fmt;
    *(_QWORD *)v50 = &off_1352F8;
    *(_QWORD *)&v50[8] = 1LL;
    *(_QWORD *)&v50[32] = 0LL;
    *(_QWORD *)&v50[16] = &v43;
    *(_QWORD *)&v50[24] = 1LL;
    core::option::Option<T>::map_or_else(&v48, v50);
    *(_DWORD *)&v50[24] = 1;
    *(_OWORD *)v50 = v48;
    *(_QWORD *)&v50[16] = v49;
    v7 = alloc::boxed::Box<T>::new(v50);
LABEL_8:
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v39);
    return v7;
  }
  v42 = v38;
  v8 = 3;
  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v39, aU, 1LL) )
  {
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(v39, aRemove, 6LL) )
    {
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v50, v39, aRemove, 6LL);
      v9 = clap_builder::parser::error::MatchesError::unwrap(aRemove, 6LL, v50);
      if ( !v9
        || (v10 = core::ops::function::FnOnce::call_once(*(_QWORD *)(v9 + 8), *(_QWORD *)(v9 + 16))) == 0
        || (v12 = v10,
            v13 = v11,
            v8 = 1,
            !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v10, v11, aUnlink_0, 6LL))
        && (v8 = 2, !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v12, v13, aWipe, 4LL))
        && (v8 = 3, !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v12, v13, aWipesync, 8LL)) )
      {
        *(_QWORD *)v50 = &off_135288;
        *(_QWORD *)&v50[8] = 1LL;
        *(_QWORD *)&v50[16] = &v30;
        *(_OWORD *)&v50[24] = 0LL;
        core::panicking::panic_fmt(v50, &off_135298);
      }
    }
    else
    {
      v8 = 0;
    }
  }
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v39, aForce, 5LL);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v50, v39, aSize, 4LL);
  v14 = clap_builder::parser::error::MatchesError::unwrap(aSize, 4LL, v50);
  if ( v14 )
  {
    <alloc::string::String as core::clone::Clone>::clone(v50, v14);
    v2 = *(_QWORD *)v50;
    v47 = *(_OWORD *)&v50[8];
  }
  *(_QWORD *)v50 = v2;
  *(_OWORD *)&v50[8] = v47;
  size = uu_shred::get_size(v50);
  v41 = v16;
  v17 = size;
  v18 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v39, aExact, 5LL);
  v19 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v39, aZero_0, 4LL);
  v20 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v39, aVerbose, 7LL);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v50, v39, aFile, 4LL);
  clap_builder::parser::error::MatchesError::unwrap(&v33, aFile, 4LL, v50);
  if ( !(_QWORD)v33 )
    core::option::unwrap_failed(&off_1352B0);
  v21 = v8;
  v51 = v36;
  *(_OWORD *)&v50[32] = v35;
  *(_OWORD *)&v50[16] = v34;
  *(_OWORD *)v50 = v33;
  v22 = (v17 == 1) | v18;
  v23 = v21;
  while ( 1 )
  {
    v24 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(v50);
    if ( !v24 )
      break;
    v25 = uu_shred::wipe_file(*(_QWORD *)(v24 + 8), *(_QWORD *)(v24 + 16), v42, v23, v17, v41, v22, v19, v20, flag);
    if ( v25 )
    {
      v31 = v25;
      v32 = v26;
      v27 = (*(__int64 (__fastcall **)(__int64))(v26 + 96))(v25);
      uucore::mods::error::set_exit_code(v27);
      v37 = uucore::util_name();
      v38 = v28;
      v43 = &v37;
      v44 = <&T as core::fmt::Display>::fmt;
      v45 = &v31;
      v46 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
      *(_QWORD *)&v33 = &unk_1352C8;
      *((_QWORD *)&v33 + 1) = 3LL;
      *(_QWORD *)&v35 = 0LL;
      *(_QWORD *)&v34 = &v43;
      *((_QWORD *)&v34 + 1) = 2LL;
      std::io::stdio::_eprint(&v33);
      core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(v31, v32);
    }
  }
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v39);
  return 0LL;
}
