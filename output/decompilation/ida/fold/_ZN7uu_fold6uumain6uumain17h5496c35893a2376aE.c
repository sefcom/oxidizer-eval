__int64 __fastcall uu_fold::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // r12
  __int64 v4; // rdx
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 v8; // rbx
  __int64 v9; // r14
  char v10; // bp
  __int64 (__fastcall **v11)(); // r13
  __int64 v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // rax
  __int128 v15; // xmm0
  unsigned __int8 v17; // [rsp+6h] [rbp-3F2h]
  unsigned __int8 flag; // [rsp+7h] [rbp-3F1h]
  __int64 v19; // [rsp+8h] [rbp-3F0h]
  char v20[8]; // [rsp+10h] [rbp-3E8h] BYREF
  __int64 v21; // [rsp+18h] [rbp-3E0h]
  __int64 v22; // [rsp+20h] [rbp-3D8h]
  _OWORD v23[3]; // [rsp+28h] [rbp-3D0h] BYREF
  __int64 v24; // [rsp+58h] [rbp-3A0h]
  __int128 v25; // [rsp+60h] [rbp-398h] BYREF
  __int64 v26; // [rsp+70h] [rbp-388h]
  __int128 v27; // [rsp+80h] [rbp-378h] BYREF
  __int128 v28; // [rsp+90h] [rbp-368h]
  __int128 v29; // [rsp+A0h] [rbp-358h]
  __int64 v30; // [rsp+B0h] [rbp-348h]
  _QWORD v31[8]; // [rsp+C0h] [rbp-338h] BYREF
  __int128 dest; // [rsp+100h] [rbp-2F8h] BYREF
  __int64 v33; // [rsp+110h] [rbp-2E8h]
  __int64 v34; // [rsp+118h] [rbp-2E0h]
  __int64 v35; // [rsp+120h] [rbp-2D8h]
  __int64 v36; // [rsp+128h] [rbp-2D0h]

  uucore::Args::collect_lossy(v20, a1, a2);
  uu_fold::handle_obsolete(&dest, v21, v22);
  v26 = v33;
  v25 = dest;
  v19 = v34;
  v2 = v35;
  v3 = v36;
  uu_fold::uu_app(&dest);
  clap_builder::builder::command::Command::try_get_matches_from(&v27, &dest, &v25);
  if ( __OFSUB__(-(__int64)v27, 1LL) )
  {
    v5 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
           *((_QWORD *)&v27 + 1),
           &dest,
           v4,
           -(__int64)v27);
LABEL_18:
    core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(v19, v2);
    goto LABEL_19;
  }
  v24 = v30;
  v23[2] = v29;
  v23[1] = v28;
  v23[0] = v27;
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           v23,
           "bytesspaceswidthillegal width value (): /home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-l"
           "inux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: \v",
           5LL);
  v17 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          v23,
          "spaceswidthillegal width value (): /home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-g"
          "nu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: \v",
          6LL);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&dest, v23);
  v6 = clap_builder::parser::error::MatchesError::unwrap(&dest);
  if ( v6 )
  {
    <alloc::string::String as core::clone::Clone>::clone(&dest, v6);
    v7 = v2;
    v8 = *((_QWORD *)&dest + 1);
    v9 = dest;
    v3 = v33;
    v10 = 1;
  }
  else
  {
    v11 = (__int64 (__fastcall **)())off_50;
    v10 = 0;
    v7 = v2;
    v8 = v2;
    v9 = v19;
    if ( v19 == 0x8000000000000000LL )
      goto LABEL_12;
  }
  core::num::<impl usize>::from_ascii_radix(&dest, v8, v3);
  if ( (_BYTE)dest )
  {
    v5 = uu_fold::uumain::uumain::{{closure}}(v8, v3, BYTE1(dest));
    if ( v5 )
    {
      core::ptr::drop_in_place<alloc::string::String>(v9, v8);
      v2 = v7;
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v23);
      goto LABEL_17;
    }
    v11 = &off_E5F18;
  }
  else
  {
    v11 = (__int64 (__fastcall **)())*((_QWORD *)&dest + 1);
  }
  core::ptr::drop_in_place<alloc::string::String>(v9, v8);
LABEL_12:
  v2 = v7;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&dest, v23);
  clap_builder::parser::error::MatchesError::unwrap(v31, &dest);
  if ( v31[0] )
  {
    core::iter::traits::iterator::Iterator::collect(&dest, v31);
    v12 = *((_QWORD *)&dest + 1);
    v13 = v33;
  }
  else
  {
    v14 = alloc::alloc::Global::alloc_impl(8LL, 24LL);
    if ( !v14 )
      alloc::alloc::handle_alloc_error(8LL, 24LL);
    v12 = v14;
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(
      &dest,
      "-bytesspaceswidthillegal width value (): /home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux"
      "-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: \v",
      1LL);
    *(_QWORD *)&v28 = v33;
    v15 = dest;
    v27 = dest;
    *(_QWORD *)(v12 + 16) = v33;
    *(_OWORD *)v12 = v15;
    *(_QWORD *)&dest = 1LL;
    *((_QWORD *)&dest + 1) = v12;
    v33 = 1LL;
    v13 = 1LL;
  }
  v5 = uu_fold::fold(v12, v13, flag, v17, v11);
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&dest);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v23);
LABEL_17:
  if ( v10 )
    goto LABEL_18;
LABEL_19:
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v20);
  return v5;
}