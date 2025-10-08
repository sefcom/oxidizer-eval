__int64 __fastcall uu_nl::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v4; // rbx
  __int64 v5; // rbp
  char *v6; // r13
  __int64 v7; // rax
  __int128 v8; // xmm0
  __int64 v9; // rax
  char *v10; // rbx
  __int64 v11; // r12
  __int64 v12; // r15
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int128 v21; // [rsp+0h] [rbp-448h] BYREF
  __int64 v22; // [rsp+10h] [rbp-438h]
  __int128 v23; // [rsp+20h] [rbp-428h] BYREF
  __int128 v24; // [rsp+30h] [rbp-418h]
  __int128 v25; // [rsp+40h] [rbp-408h]
  __int64 v26; // [rsp+50h] [rbp-3F8h]
  __int64 v27; // [rsp+70h] [rbp-3D8h] BYREF
  __int64 v28; // [rsp+78h] [rbp-3D0h]
  __int128 *v29; // [rsp+80h] [rbp-3C8h] BYREF
  __int64 (__fastcall *v30)(); // [rsp+88h] [rbp-3C0h]
  __int64 v31; // [rsp+90h] [rbp-3B8h]
  __int64 *v32; // [rsp+98h] [rbp-3B0h] BYREF
  __int64 (__fastcall *v33)(); // [rsp+A0h] [rbp-3A8h]
  char v34[8]; // [rsp+A8h] [rbp-3A0h] BYREF
  __int64 v35; // [rsp+B0h] [rbp-398h]
  __int64 v36; // [rsp+B8h] [rbp-390h]
  _OWORD v37[3]; // [rsp+C0h] [rbp-388h] BYREF
  __int64 v38; // [rsp+F0h] [rbp-358h]
  __int128 v39; // [rsp+F8h] [rbp-350h] BYREF
  __int64 v40; // [rsp+108h] [rbp-340h]
  _QWORD v41[8]; // [rsp+110h] [rbp-338h] BYREF
  _BYTE dest[96]; // [rsp+150h] [rbp-2F8h] BYREF
  __int64 v43; // [rsp+1B0h] [rbp-298h]

  uu_nl::uu_app(dest);
  clap_builder::builder::command::Command::try_get_matches_from(&v23, dest, a1, a2);
  if ( __OFSUB__(-(__int64)v23, 1LL) )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
             *((_QWORD *)&v23 + 1),
             dest,
             v2,
             -(__int64)v23);
  v38 = v26;
  v37[2] = v25;
  v37[1] = v24;
  v37[0] = v23;
  <uu_nl::Settings as core::default::Default>::default(dest);
  uu_nl::helper::parse_options(v34, dest, v37);
  if ( v36 )
  {
    alloc::str::join_generic_copy(&v23, v35);
    v22 = v24;
    v21 = v23;
    v29 = &v21;
    v30 = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v23 = &off_239370;
    *((_QWORD *)&v23 + 1) = 1LL;
    *(_QWORD *)&v25 = 0LL;
    *(_QWORD *)&v24 = &v29;
    *((_QWORD *)&v24 + 1) = 1LL;
    core::option::Option<T>::map_or_else(&v39, &v23);
    core::ptr::drop_in_place<alloc::string::String>(v21, *((_QWORD *)&v21 + 1));
    DWORD2(v24) = 1;
    v23 = v39;
    *(_QWORD *)&v24 = v40;
    v4 = alloc::boxed::Box<T>::new(&v23);
    goto LABEL_5;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v23, v37);
  clap_builder::parser::error::MatchesError::unwrap(v41, &v23);
  if ( v41[0] )
  {
    core::iter::traits::iterator::Iterator::collect(&v29, v41);
    v5 = (__int64)v30;
    *(_QWORD *)&v21 = 1LL;
    *((_QWORD *)&v21 + 1) = v43;
    v22 = 0LL;
    if ( !v31 )
    {
LABEL_23:
      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v29);
      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v34);
      core::ptr::drop_in_place<uu_nl::Settings>(dest);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v37);
      return 0LL;
    }
    v6 = (char *)v30 + 24 * v31;
  }
  else
  {
    v7 = alloc::alloc::Global::alloc_impl(8LL, 24LL);
    if ( !v7 )
      alloc::alloc::handle_alloc_error(8LL, 24LL);
    v5 = v7;
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v23, asc_4F986, 1LL);
    v8 = v23;
    *(_QWORD *)(v5 + 16) = v24;
    *(_OWORD *)v5 = v8;
    v29 = (_OWORD *)(&dword_0 + 1);
    v30 = (__int64 (__fastcall *)())v5;
    v31 = 1LL;
    *(_QWORD *)&v21 = 1LL;
    *((_QWORD *)&v21 + 1) = v43;
    v22 = 0LL;
    v6 = (char *)(v5 + 24);
  }
  v9 = v5 + 24;
  while ( 1 )
  {
    v10 = (char *)v9;
    v11 = *(_QWORD *)(v5 + 8);
    v12 = *(_QWORD *)(v5 + 16);
    if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v11, v12, asc_4F986, 1LL) )
      break;
    v17 = std::io::stdio::stdin();
    std::io::buffered::bufreader::BufReader<R>::with_capacity(&v23, v17);
    v18 = uu_nl::nl(&v23, &v21, dest);
    if ( v18 )
    {
      v4 = v18;
      core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::io::stdio::Stdin>>(
        v23,
        *((_QWORD *)&v23 + 1));
      goto LABEL_27;
    }
    core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::io::stdio::Stdin>>(v23, *((_QWORD *)&v23 + 1));
    v9 = (__int64)(v10 + 24);
    if ( v10 == v6 )
      goto LABEL_23;
LABEL_18:
    v5 = (__int64)v10;
    if ( !v10 )
      goto LABEL_23;
  }
  if ( (unsigned __int8)std::path::Path::is_dir(v11, v12, v13, v14, v15, v16, v21, *((_QWORD *)&v21 + 1), v22) )
  {
    v27 = uucore::util_name();
    v28 = v19;
    v32 = &v27;
    v33 = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v23 = &unk_2392F8;
    *((_QWORD *)&v23 + 1) = 2LL;
    *(_QWORD *)&v25 = 0LL;
    *(_QWORD *)&v24 = &v32;
    *((_QWORD *)&v24 + 1) = 1LL;
    std::io::stdio::_eprint(&v23);
    v27 = v11;
    v28 = v12;
    v32 = &v27;
    v33 = <std::path::Display as core::fmt::Display>::fmt;
    *(_QWORD *)&v23 = &unk_239380;
    *((_QWORD *)&v23 + 1) = 2LL;
    *(_QWORD *)&v25 = 0LL;
    *(_QWORD *)&v24 = &v32;
    *((_QWORD *)&v24 + 1) = 1LL;
    std::io::stdio::_eprint(&v23);
    uucore::mods::error::set_exit_code(1LL);
    v9 = (__int64)(v10 + 24);
    if ( v10 == v6 )
      goto LABEL_23;
    goto LABEL_18;
  }
  std::fs::File::open(&v23, v11, v12);
  <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
    &v27,
    &v23,
    v5);
  if ( v27 )
  {
    v4 = v27;
    goto LABEL_27;
  }
  std::io::buffered::bufreader::BufReader<R>::with_capacity(&v23, v28);
  v20 = uu_nl::nl((__int64)&v23, (__int64 *)&v21, (__int64)dest);
  if ( !v20 )
  {
    core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::fs::File>>(&v23);
    v9 = (__int64)(v10 + 24);
    if ( v10 == v6 )
      goto LABEL_23;
    goto LABEL_18;
  }
  v4 = v20;
  core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::fs::File>>(&v23);
LABEL_27:
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v29);
LABEL_5:
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v34);
  core::ptr::drop_in_place<uu_nl::Settings>(dest);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v37);
  return v4;
}