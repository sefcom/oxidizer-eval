__int64 __fastcall uu_true::uumain(__int128 a1)
{
  unsigned __int64 v1; // r12
  __int64 v2; // r13
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 i; // r15
  __int64 v8; // r14
  int v9; // eax
  __int64 v10; // r15
  __int128 v11; // rax
  __int64 v12; // rax
  __int128 v14; // [rsp+8h] [rbp-3B0h] BYREF
  _QWORD v15[2]; // [rsp+18h] [rbp-3A0h] BYREF
  __int128 v16; // [rsp+28h] [rbp-390h] BYREF
  char **v17; // [rsp+38h] [rbp-380h] BYREF
  __int128 v18; // [rsp+40h] [rbp-378h]
  __int128 v19; // [rsp+50h] [rbp-368h]
  __int64 v20; // [rsp+70h] [rbp-348h] BYREF
  void *v21; // [rsp+78h] [rbp-340h] BYREF
  __int128 v22; // [rsp+80h] [rbp-338h] BYREF
  __int128 *v23; // [rsp+90h] [rbp-328h]
  __int64 v24; // [rsp+98h] [rbp-320h]
  __int64 v25; // [rsp+A0h] [rbp-318h]
  __int128 v26; // [rsp+B0h] [rbp-308h] BYREF
  __int128 *v27; // [rsp+C0h] [rbp-2F8h]
  _BYTE v28[752]; // [rsp+C8h] [rbp-2F0h] BYREF

  uu_true::uu_app(v28);
  v16 = a1;
  <core::iter::adapters::cloned::Cloned<I> as core::iter::traits::iterator::Iterator>::size_hint(&v22, &v16);
  if ( !*((_QWORD *)&v22 + 1) )
  {
    v17 = &off_C7FD8;
    *(_QWORD *)&v18 = 1LL;
    *((_QWORD *)&v18 + 1) = 8LL;
    v19 = 0LL;
    core::panicking::panic_fmt(&v17, &off_C7FE8);
  }
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v17, v23, 0LL);
  v1 = v18;
  if ( v17 )
    alloc::raw_vec::handle_error(v18, *((_QWORD *)&v18 + 1));
  v2 = *((_QWORD *)&v18 + 1);
  v14 = v18;
  v15[0] = 0LL;
  v4 = *((_QWORD *)&v16 + 1);
  v3 = v16;
  v22 = v16;
  <core::iter::adapters::cloned::Cloned<I> as core::iter::traits::iterator::Iterator>::size_hint(&v17, &v22);
  if ( !(_QWORD)v18 )
  {
    v17 = &off_C7FD8;
    *(_QWORD *)&v18 = 1LL;
    *((_QWORD *)&v18 + 1) = 8LL;
    v19 = 0LL;
    core::panicking::panic_fmt(&v17, &off_C8000);
  }
  if ( *((_QWORD *)&v18 + 1) <= v1 )
  {
    v5 = 0LL;
  }
  else
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v14, 0LL);
    v2 = *((_QWORD *)&v14 + 1);
    v5 = v15[0];
    v4 = *((_QWORD *)&v22 + 1);
    v3 = v22;
  }
  v17 = (char **)v15;
  *(_QWORD *)&v18 = v5;
  *((_QWORD *)&v18 + 1) = v2;
  <core::iter::adapters::cloned::Cloned<I> as core::iter::traits::iterator::Iterator>::fold(v3, v4, &v17);
  v26 = v14;
  v27 = (__int128 *)v15[0];
  if ( v15[0] <= 2uLL )
  {
    v23 = v27;
    v22 = v26;
    clap_builder::builder::command::Command::try_get_matches_from_mut(&v17, v28, &v22);
    if ( v17 != (char **)0x8000000000000000LL )
      goto LABEL_22;
    v8 = v18;
    v9 = *(unsigned __int8 *)(v18 + 213);
    if ( v9 == 12 )
    {
      v10 = clap_builder::builder::command::Command::print_help(v28);
      if ( !v10 )
        goto LABEL_21;
    }
    else
    {
      if ( v9 != 14 )
        goto LABEL_21;
      v21 = (void *)std::io::stdio::stdout();
      clap_builder::builder::command::Command::render_version(&v14, v28);
      *(_QWORD *)&v16 = &v14;
      *((_QWORD *)&v16 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v22 = &unk_C8030;
      *((_QWORD *)&v22 + 1) = 2LL;
      v25 = 0LL;
      v23 = &v16;
      v24 = 1LL;
      v10 = <std::io::stdio::Stdout as std::io::Write>::write_fmt(&v21, &v22);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v14);
      if ( !v10 )
        goto LABEL_21;
    }
    v20 = v10;
    v21 = &std::io::stdio::stderr::INSTANCE;
    *(_QWORD *)&v11 = uucore::util_name();
    v16 = v11;
    *(_QWORD *)&v14 = &v16;
    *((_QWORD *)&v14 + 1) = <&T as core::fmt::Display>::fmt;
    v15[0] = &v20;
    v15[1] = <std::io::error::Error as core::fmt::Display>::fmt;
    *(_QWORD *)&v22 = &unk_C8050;
    *((_QWORD *)&v22 + 1) = 3LL;
    v25 = 0LL;
    v23 = &v14;
    v24 = 2LL;
    v12 = <std::io::stdio::Stderr as std::io::Write>::write_fmt(&v21, &v22);
    if ( v12 )
      core::ptr::drop_in_place<std::io::error::Error>(v12);
    uucore::mods::error::set_exit_code(1LL);
    core::ptr::drop_in_place<std::io::error::Error>(v20);
LABEL_21:
    core::ptr::drop_in_place<clap_builder::error::Error>(v8);
    if ( v17 == (char **)0x8000000000000000LL )
      goto LABEL_23;
LABEL_22:
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v17);
    goto LABEL_23;
  }
  v6 = *((_QWORD *)&v26 + 1);
  for ( i = v15[0] + 1LL; i != 1; --i )
  {
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v6);
    v6 += 24LL;
  }
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v26);
LABEL_23:
  core::ptr::drop_in_place<clap_builder::builder::command::Command>(v28);
  return uucore::mods::error::get_exit_code();
}
