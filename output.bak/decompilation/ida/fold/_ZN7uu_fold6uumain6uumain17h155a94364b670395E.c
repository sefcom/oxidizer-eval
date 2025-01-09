__int64 __fastcall uu_fold::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  char flag; // bl
  unsigned __int8 v4; // bp
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 v7; // rax
  char v8; // r12
  __int64 (__fastcall **v9)(); // r14
  __int64 v10; // rax
  __int64 v11; // r15
  __int128 v12; // xmm0
  _BYTE v14[24]; // [rsp+0h] [rbp-438h] BYREF
  _BYTE v15[8]; // [rsp+20h] [rbp-418h] BYREF
  __int64 v16; // [rsp+28h] [rbp-410h]
  __int64 v17; // [rsp+30h] [rbp-408h]
  __int128 v18; // [rsp+38h] [rbp-400h] BYREF
  __int128 v19; // [rsp+48h] [rbp-3F0h]
  __int128 v20; // [rsp+58h] [rbp-3E0h]
  __int128 v21; // [rsp+68h] [rbp-3D0h]
  _OWORD v22[3]; // [rsp+78h] [rbp-3C0h] BYREF
  __int64 v23; // [rsp+A8h] [rbp-390h]
  __int128 v24; // [rsp+B0h] [rbp-388h]
  __int64 v25; // [rsp+C0h] [rbp-378h]
  __int128 v26; // [rsp+D0h] [rbp-368h] BYREF
  __int64 v27; // [rsp+E0h] [rbp-358h]
  __int128 v28; // [rsp+F0h] [rbp-348h]
  _OWORD v29[4]; // [rsp+100h] [rbp-338h] BYREF
  _QWORD v30[95]; // [rsp+140h] [rbp-2F8h] BYREF

  uucore::Args::collect_lossy(v15, a1, a2);
  uu_fold::handle_obsolete((__int64)v30, v16, v17);
  v25 = v30[2];
  v24 = *(_OWORD *)v30;
  *(_QWORD *)&v14[16] = v30[5];
  *(_OWORD *)v14 = *(_OWORD *)&v30[3];
  uu_fold::uu_app(v30);
  v27 = v25;
  v26 = v24;
  clap_builder::builder::command::Command::try_get_matches_from(&v18, v30, &v26);
  if ( (_QWORD)v18 == 0x8000000000000000LL )
  {
    v2 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v18 + 1));
LABEL_19:
    core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(v14);
    goto LABEL_20;
  }
  v23 = v21;
  v22[2] = v20;
  v22[1] = v19;
  v22[0] = v18;
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v22, aBytes_0, 5LL);
  v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v22, aSpaces, 6LL);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v30, v22, aWidth, 5LL);
  v5 = clap_builder::parser::error::MatchesError::unwrap(aWidth, 5LL, v30);
  v6 = v5;
  if ( v5 )
  {
    <alloc::string::String as core::clone::Clone>::clone(v30, v5);
    v7 = v30[0];
    v28 = *(_OWORD *)&v30[1];
    v8 = 1;
  }
  else
  {
    v7 = *(_QWORD *)v14;
    v28 = *(_OWORD *)&v14[8];
    v9 = (__int64 (__fastcall **)())off_50;
    v8 = 0;
    if ( *(_QWORD *)v14 == 0x8000000000000000LL )
      goto LABEL_14;
  }
  v30[0] = v7;
  *(_OWORD *)&v30[1] = v28;
  core::num::<impl core::str::traits::FromStr for usize>::from_str(&v18, v28, *((_QWORD *)&v28 + 1));
  if ( (_BYTE)v18 )
  {
    v2 = uu_fold::uumain::uumain::{{closure}}(v30[1], v30[2], BYTE1(v18));
    if ( v2 )
    {
      core::ptr::drop_in_place<alloc::string::String>(v30);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v22);
      if ( !v6 )
        goto LABEL_20;
      goto LABEL_19;
    }
    v9 = &off_117FB8;
  }
  else
  {
    v9 = (__int64 (__fastcall **)())*((_QWORD *)&v18 + 1);
  }
  core::ptr::drop_in_place<alloc::string::String>(v30);
LABEL_14:
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v30, v22, aFile, 4LL);
  clap_builder::parser::error::MatchesError::unwrap(&v18, aFile, 4LL, v30);
  if ( (_QWORD)v18 )
  {
    v29[3] = v21;
    v29[2] = v20;
    v29[1] = v19;
    v29[0] = v18;
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v30, v29);
  }
  else
  {
    v10 = alloc::alloc::Global::alloc_impl(24LL);
    if ( !v10 )
      alloc::alloc::handle_alloc_error(8LL, 24LL);
    v11 = v10;
    <T as alloc::slice::hack::ConvertVec>::to_vec(v30);
    v27 = v30[2];
    v12 = *(_OWORD *)v30;
    v26 = *(_OWORD *)v30;
    *(_QWORD *)(v11 + 16) = v30[2];
    *(_OWORD *)v11 = v12;
    alloc::slice::hack::into_vec(v30, v11);
  }
  v2 = uu_fold::fold(v30[1], v30[2], flag, v4, (__int64)v9);
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v30);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v22);
  if ( v8 )
    goto LABEL_19;
LABEL_20:
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v15);
  return v2;
}
