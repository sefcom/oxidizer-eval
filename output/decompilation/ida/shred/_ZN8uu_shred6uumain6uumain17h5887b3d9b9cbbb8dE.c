__int64 __fastcall uu_shred::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rbx
  char v8; // r12
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // r15
  char flag; // r13
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 size; // rax
  __int64 v16; // rdx
  __int64 v17; // r15
  char v18; // bp
  char v19; // bl
  unsigned __int8 v20; // al
  char v21; // r12
  int v22; // ebp
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  unsigned int v26; // eax
  __int64 v27; // rdx
  char v28; // [rsp+Fh] [rbp-3F9h]
  char v29; // [rsp+10h] [rbp-3F8h] BYREF
  __int64 v30; // [rsp+18h] [rbp-3F0h] BYREF
  __int64 v31; // [rsp+20h] [rbp-3E8h]
  __int128 v32; // [rsp+28h] [rbp-3E0h] BYREF
  __int128 v33; // [rsp+38h] [rbp-3D0h]
  __int128 v34; // [rsp+48h] [rbp-3C0h]
  __int128 v35; // [rsp+58h] [rbp-3B0h]
  __int64 v36; // [rsp+68h] [rbp-3A0h] BYREF
  __int64 v37; // [rsp+70h] [rbp-398h]
  _OWORD v38[3]; // [rsp+78h] [rbp-390h] BYREF
  __int64 v39; // [rsp+A8h] [rbp-360h]
  __int64 v40; // [rsp+B0h] [rbp-358h]
  __int64 v41; // [rsp+B8h] [rbp-350h]
  __int64 *v42; // [rsp+C0h] [rbp-348h] BYREF
  __int64 (__fastcall *v43)(); // [rsp+C8h] [rbp-340h]
  __int64 *v44; // [rsp+D0h] [rbp-338h]
  __int64 (__fastcall *v45)(); // [rsp+D8h] [rbp-330h]
  __int128 v46; // [rsp+E0h] [rbp-328h]
  __int128 v47; // [rsp+F8h] [rbp-310h] BYREF
  __int64 v48; // [rsp+108h] [rbp-300h]
  _BYTE dest[48]; // [rsp+110h] [rbp-2F8h] BYREF
  __int128 v50; // [rsp+140h] [rbp-2C8h]

  uu_shred::uu_app(dest);
  clap_builder::builder::command::Command::try_get_matches_from(&v32, dest, a1, a2);
  if ( __OFSUB__(-(__int64)v32, 1LL) )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
             *((_QWORD *)&v32 + 1),
             dest,
             v2,
             -(__int64)v32);
  v39 = v35;
  v38[2] = v34;
  v38[1] = v33;
  v38[0] = v32;
  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(v38, aFile, 4LL) )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v32, aMissingFileOpe, 20LL);
    *(_QWORD *)&dest[16] = v33;
    *(_OWORD *)dest = v32;
    *(_DWORD *)&dest[24] = 1;
    v7 = alloc::boxed::Box<T>::new(dest);
    goto LABEL_8;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(dest, v38, aIterations, 10LL);
  v4 = clap_builder::parser::error::MatchesError::unwrap(aIterations, 10LL, dest);
  if ( !v4 )
    core::panicking::panic(aInternalErrorE, 40LL, &off_F91F8);
  v5 = *(_QWORD *)(v4 + 8);
  v6 = *(_QWORD *)(v4 + 16);
  core::num::<impl usize>::from_ascii_radix(&v36, v5, v6);
  if ( (_BYTE)v36 )
  {
    *(_QWORD *)&v32 = 0LL;
    *((_QWORD *)&v32 + 1) = v5;
    *(_QWORD *)&v33 = v6;
    BYTE8(v33) = 1;
    v42 = (__int64 *)&v32;
    v43 = <os_display::Quoted as core::fmt::Display>::fmt;
    *(_QWORD *)dest = &off_F9120;
    *(_QWORD *)&dest[8] = 1LL;
    *(_QWORD *)&dest[32] = 0LL;
    *(_QWORD *)&dest[16] = &v42;
    *(_QWORD *)&dest[24] = 1LL;
    core::option::Option<T>::map_or_else(&v47, dest);
    *(_DWORD *)&dest[24] = 1;
    *(_OWORD *)dest = v47;
    *(_QWORD *)&dest[16] = v48;
    v7 = alloc::boxed::Box<T>::new(dest);
LABEL_8:
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v38);
    return v7;
  }
  v41 = v37;
  v8 = 3;
  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v38, aU, 1LL) )
  {
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(v38, aRemove, 6LL) )
    {
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(dest, v38, aRemove, 6LL);
      v9 = clap_builder::parser::error::MatchesError::unwrap(aRemove, 6LL, dest);
      if ( !v9
        || (v10 = *(_QWORD *)(v9 + 8),
            v11 = *(_QWORD *)(v9 + 16),
            v8 = 1,
            !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v10, v11, aUnlink_0, 6LL))
        && (v8 = 2, !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v10, v11, aWipe, 4LL))
        && (v8 = 3, !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v10, v11, aWipesync, 8LL)) )
      {
        *(_QWORD *)dest = &off_F9130;
        *(_QWORD *)&dest[8] = 1LL;
        *(_QWORD *)&dest[16] = &v29;
        *(_OWORD *)&dest[24] = 0LL;
        core::panicking::panic_fmt(dest, &off_F9210);
      }
    }
    else
    {
      v8 = 0;
    }
  }
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v38, aForce, 5LL);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(dest, v38, aSize, 4LL);
  v13 = clap_builder::parser::error::MatchesError::unwrap(aSize, 4LL, dest);
  if ( v13 )
  {
    <alloc::string::String as core::clone::Clone>::clone(dest, v13);
    v14 = *(_QWORD *)dest;
    v46 = *(_OWORD *)&dest[8];
  }
  else
  {
    v14 = 0x8000000000000000LL;
  }
  *(_QWORD *)dest = v14;
  *(_OWORD *)&dest[8] = v46;
  size = uu_shred::get_size(dest);
  v40 = v16;
  v17 = size;
  v18 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v38, aExact, 5LL);
  v28 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v38, aZero, 4LL);
  v19 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v38, aVerbose, 7LL);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(dest, v38);
  clap_builder::parser::error::MatchesError::unwrap(&v32, dest);
  if ( !(_QWORD)v32 )
    core::option::unwrap_failed(&off_F9228);
  v20 = v8;
  v50 = v35;
  *(_OWORD *)&dest[32] = v34;
  *(_OWORD *)&dest[16] = v33;
  *(_OWORD *)dest = v32;
  v21 = (v17 == 1) | v18;
  v22 = v20;
  while ( 1 )
  {
    v23 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(dest);
    if ( !v23 )
      break;
    v24 = uu_shred::wipe_file(*(_QWORD *)(v23 + 8), *(_QWORD *)(v23 + 16), v41, v22, v17, v40, v21, v28, v19, flag);
    if ( v24 )
    {
      v30 = v24;
      v31 = v25;
      v26 = (*(__int64 (__fastcall **)(__int64))(v25 + 88))(v24);
      uucore::mods::error::set_exit_code(v26);
      v36 = uucore::util_name();
      v37 = v27;
      v42 = &v36;
      v43 = <&T as core::fmt::Display>::fmt;
      v44 = &v30;
      v45 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
      *(_QWORD *)&v32 = &unk_F9140;
      *((_QWORD *)&v32 + 1) = 3LL;
      *(_QWORD *)&v34 = 0LL;
      *(_QWORD *)&v33 = &v42;
      *((_QWORD *)&v33 + 1) = 2LL;
      std::io::stdio::_eprint(&v32);
      core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v30, v31);
    }
    else
    {
      core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(0LL, v25);
    }
  }
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v38);
  return 0LL;
}