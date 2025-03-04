__int64 __fastcall uu_nl::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // rax
  __int64 v4; // r14
  __int128 v5; // xmm0
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 v8; // rbp
  __int64 v9; // r12
  __int64 v10; // rax
  __int128 v11; // rax
  __int128 v13; // [rsp+0h] [rbp-468h] BYREF
  __int64 v14; // [rsp+10h] [rbp-458h]
  __int128 v15; // [rsp+20h] [rbp-448h] BYREF
  __int128 v16; // [rsp+30h] [rbp-438h]
  __int128 v17; // [rsp+40h] [rbp-428h]
  __int64 v18; // [rsp+50h] [rbp-418h]
  __int128 *v19; // [rsp+68h] [rbp-400h] BYREF
  __int64 (__fastcall *v20)(); // [rsp+70h] [rbp-3F8h]
  __int64 v21; // [rsp+78h] [rbp-3F0h]
  __int128 *v22; // [rsp+80h] [rbp-3E8h] BYREF
  __int64 (__fastcall *v23)(); // [rsp+88h] [rbp-3E0h]
  __int128 v24; // [rsp+90h] [rbp-3D8h] BYREF
  __int128 v25; // [rsp+A0h] [rbp-3C8h]
  __int128 v26; // [rsp+B0h] [rbp-3B8h]
  __int128 v27; // [rsp+C0h] [rbp-3A8h]
  _BYTE v28[8]; // [rsp+D0h] [rbp-398h] BYREF
  __int64 v29; // [rsp+D8h] [rbp-390h]
  __int64 v30; // [rsp+E0h] [rbp-388h]
  _QWORD v31[2]; // [rsp+E8h] [rbp-380h] BYREF
  _OWORD v32[3]; // [rsp+F8h] [rbp-370h] BYREF
  __int64 v33; // [rsp+128h] [rbp-340h]
  _OWORD v34[4]; // [rsp+130h] [rbp-338h] BYREF
  _BYTE v35[96]; // [rsp+170h] [rbp-2F8h] BYREF
  __int64 v36; // [rsp+1D0h] [rbp-298h]

  uu_nl::uu_app(v35);
  clap_builder::builder::command::Command::try_get_matches_from(&v15, v35, a1, a2);
  if ( (_QWORD)v15 == 0x8000000000000000LL )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v15 + 1));
  v33 = v18;
  v32[2] = v17;
  v32[1] = v16;
  v32[0] = v15;
  <uu_nl::Settings as core::default::Default>::default(v35);
  uu_nl::helper::parse_options((__int64)v28, (__int64)v35, (__int64)v32);
  if ( v30 )
  {
    alloc::str::join_generic_copy(&v15, v29, v30, asc_61D65, 1LL);
    *(_QWORD *)&v25 = v16;
    v24 = v15;
    v19 = &v24;
    v20 = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v15 = &off_2D6E10;
    *((_QWORD *)&v15 + 1) = 1LL;
    *(_QWORD *)&v17 = 0LL;
    *(_QWORD *)&v16 = &v19;
    *((_QWORD *)&v16 + 1) = 1LL;
    core::option::Option<T>::map_or_else(&v13, &v15);
    core::ptr::drop_in_place<alloc::string::String>(&v24);
    *(_QWORD *)&v16 = v14;
    v15 = v13;
    DWORD2(v16) = 1;
    v2 = alloc::boxed::Box<T>::new(&v15);
    goto LABEL_5;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v15, v32, "fileEDOMmode{", 4LL);
  clap_builder::parser::error::MatchesError::unwrap(&v24, "fileEDOMmode{", 4LL, &v15);
  if ( (_QWORD)v24 )
  {
    v34[3] = v27;
    v34[2] = v26;
    v34[1] = v25;
    v34[0] = v24;
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v19, v34);
  }
  else
  {
    v3 = alloc::alloc::Global::alloc_impl(24LL);
    if ( !v3 )
      alloc::alloc::handle_alloc_error(8LL, 24LL);
    v4 = v3;
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v15, asc_64FE8, 1LL);
    v14 = v16;
    v5 = v15;
    v13 = v15;
    *(_QWORD *)(v4 + 16) = v16;
    *(_OWORD *)v4 = v5;
    alloc::slice::hack::into_vec(&v19, v4, 1LL);
  }
  *(_QWORD *)&v24 = 1LL;
  *((_QWORD *)&v24 + 1) = v36;
  *(_QWORD *)&v25 = 0LL;
  v31[0] = v20;
  v31[1] = (char *)v20 + 24 * v21;
  v6 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v31);
  if ( !v6 )
  {
LABEL_21:
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v19);
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v28);
    core::ptr::drop_in_place<uu_nl::Settings>(v35);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v32);
    return 0LL;
  }
  v7 = v6;
  while ( 1 )
  {
    v8 = *(_QWORD *)(v7 + 8);
    v9 = *(_QWORD *)(v7 + 16);
    if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v9, asc_64FE8, 1LL) )
      break;
    v10 = std::io::stdio::stdin();
    std::io::buffered::bufreader::BufReader<R>::with_capacity(&v15, 0x2000LL, v10);
    v2 = uu_nl::nl((__int64)&v15, (__int64 *)&v24, (__int64)v35);
    if ( v2 )
    {
      core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::io::stdio::Stdin>>(
        v15,
        *((_QWORD *)&v15 + 1));
      goto LABEL_26;
    }
    core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::io::stdio::Stdin>>(v15, *((_QWORD *)&v15 + 1));
LABEL_12:
    v7 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v31);
    if ( !v7 )
      goto LABEL_21;
  }
  if ( (unsigned __int8)std::path::Path::is_dir(v8, v9) )
  {
    *(_QWORD *)&v11 = uucore::util_name();
    v13 = v11;
    v22 = &v13;
    v23 = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v15 = &unk_2D6D98;
    *((_QWORD *)&v15 + 1) = 2LL;
    *(_QWORD *)&v17 = 0LL;
    *(_QWORD *)&v16 = &v22;
    *((_QWORD *)&v16 + 1) = 1LL;
    std::io::stdio::_eprint(&v15);
    *(_QWORD *)&v13 = v8;
    *((_QWORD *)&v13 + 1) = v9;
    v22 = &v13;
    v23 = <std::path::Display as core::fmt::Display>::fmt;
    *(_QWORD *)&v15 = &unk_2D6E20;
    *((_QWORD *)&v15 + 1) = 2LL;
    *(_QWORD *)&v17 = 0LL;
    *(_QWORD *)&v16 = &v22;
    *((_QWORD *)&v16 + 1) = 1LL;
    std::io::stdio::_eprint(&v15);
    uucore::mods::error::set_exit_code(1LL);
    goto LABEL_12;
  }
  std::fs::File::open(&v15, v8, v9);
  <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
    &v13,
    &v15,
    v7);
  v2 = v13;
  if ( (_QWORD)v13 )
    goto LABEL_26;
  std::io::buffered::bufreader::BufReader<R>::with_capacity(&v15, 0x2000LL, DWORD2(v13));
  v2 = uu_nl::nl((__int64)&v15, (__int64 *)&v24, (__int64)v35);
  if ( !v2 )
  {
    core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::fs::File>>(&v15);
    goto LABEL_12;
  }
  core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::fs::File>>(&v15);
LABEL_26:
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v19);
LABEL_5:
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v28);
  core::ptr::drop_in_place<uu_nl::Settings>(v35);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v32);
  return v2;
}
