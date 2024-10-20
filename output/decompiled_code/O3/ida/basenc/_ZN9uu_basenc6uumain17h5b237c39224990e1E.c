__int64 __fastcall uu_basenc::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // r15
  __int64 (__fastcall **v5)(); // r12
  char **v6; // rax
  unsigned __int8 v7; // bl
  unsigned __int64 v8; // r13
  __int64 (__fastcall **v9)(); // r13
  __int64 (__fastcall **v10)(); // rdx
  unsigned __int128 v11; // kr10_16
  __int64 v12; // rsi
  unsigned __int128 v13; // rax
  unsigned __int128 v14; // rax
  unsigned int v15; // ebx
  __int128 v16; // kr20_16
  __int64 v17; // rsi
  __int64 v19; // rdi
  __int64 v20; // rax
  _OWORD *v21; // rax
  __int128 v22; // xmm0
  __int128 v23; // [rsp+0h] [rbp-3B8h] BYREF
  __int64 v24; // [rsp+10h] [rbp-3A8h]
  unsigned __int128 v25; // [rsp+18h] [rbp-3A0h] BYREF
  int v26; // [rsp+28h] [rbp-390h]
  __int128 v27; // [rsp+2Ch] [rbp-38Ch]
  __int128 v28; // [rsp+3Ch] [rbp-37Ch]
  int v29; // [rsp+4Ch] [rbp-36Ch]
  unsigned __int128 v30; // [rsp+50h] [rbp-368h] BYREF
  _BYTE v31[36]; // [rsp+60h] [rbp-358h] BYREF
  int v32; // [rsp+84h] [rbp-334h]
  unsigned __int128 *v33; // [rsp+90h] [rbp-328h] BYREF
  __int64 (__fastcall *v34)(); // [rsp+98h] [rbp-320h]
  unsigned __int128 v35; // [rsp+A8h] [rbp-310h] BYREF
  __int64 v36; // [rsp+B8h] [rbp-300h]
  _BYTE v37[720]; // [rsp+C0h] [rbp-2F8h] BYREF

  uu_basenc::uu_app(v37);
  uucore::Args::collect_lossy(&v33, a1, a2);
  clap_builder::builder::command::Command::try_get_matches_from(&v30, v37, &v33);
  v2 = *((_QWORD *)&v30 + 1);
  if ( (_QWORD)v30 == 0x8000000000000000LL )
  {
    *(_QWORD *)v37 = *((_QWORD *)&v30 + 1);
    *(_DWORD *)&v37[8] = 1;
    v3 = _rust_alloc(16LL, 8LL);
    if ( !v3 )
      alloc::alloc::handle_alloc_error(8LL, 16LL);
    v4 = v3;
    *(_QWORD *)v3 = v2;
    *(_DWORD *)(v3 + 8) = 1;
    v5 = &off_103670;
    goto LABEL_31;
  }
  v27 = *(_OWORD *)&v31[4];
  v28 = *(_OWORD *)&v31[20];
  v29 = v32;
  v25 = v30;
  v26 = *(_DWORD *)v31;
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v25, aBase64, 6LL) )
  {
    v6 = &off_103450;
  }
  else if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v25, aBase64url, 9LL) )
  {
    v6 = &off_103478;
  }
  else if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v25, aBase32, 6LL) )
  {
    v6 = &off_1034A0;
  }
  else if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v25, aBase32hex, 9LL) )
  {
    v6 = &off_1034C8;
  }
  else if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v25, aBase16, 6LL) )
  {
    v6 = &off_1034F0;
  }
  else if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v25, aBase2lsbf, 9LL) )
  {
    v6 = &off_103518;
  }
  else if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v25, aBase2msbf, 9LL) )
  {
    v6 = &off_103540;
  }
  else
  {
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v25, aZ85, 3LL) )
    {
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(v37, 21LL, 0LL);
      v19 = *(_QWORD *)&v37[8];
      if ( *(_QWORD *)v37 )
        alloc::raw_vec::handle_error(*(_QWORD *)&v37[8], *(_QWORD *)&v37[16]);
      v20 = *(_QWORD *)&v37[16];
      **(_OWORD **)&v37[16] = unk_127EF;
      *(_QWORD *)(v20 + 13) = 0x6570797420676E69LL;
      *(_DWORD *)&v37[24] = 1;
      *(_QWORD *)v37 = v19;
      *(_QWORD *)&v37[8] = v20;
      *(_QWORD *)&v37[16] = 21LL;
      v21 = (_OWORD *)_rust_alloc(32LL, 8LL);
      if ( !v21 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v4 = (__int64)v21;
      v22 = *(_OWORD *)v37;
      v21[1] = *(_OWORD *)&v37[16];
      *v21 = v22;
      v5 = &off_1035C8;
      goto LABEL_21;
    }
    v6 = &off_103568;
  }
  v7 = *((_BYTE *)v6 + 16);
  uu_base32::base_common::Config::from(v37, &v25);
  v4 = *(_QWORD *)&v37[8];
  v8 = *(_QWORD *)v37;
  v5 = *(__int64 (__fastcall ***)())&v37[16];
  if ( *(_QWORD *)v37 == 2LL )
  {
LABEL_21:
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v25);
    goto LABEL_31;
  }
  v24 = *(_QWORD *)&v37[40];
  v23 = *(_OWORD *)&v37[24];
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v25);
  v30 = __PAIR128__(v4, v8);
  *(_QWORD *)v31 = v5;
  *(_OWORD *)&v31[8] = v23;
  *(_QWORD *)&v31[24] = v24;
  uu_base32::base_common::get_input(v37, &v30);
  v4 = *(_QWORD *)&v37[8];
  v9 = *(__int64 (__fastcall ***)())&v37[16];
  if ( *(_QWORD *)v37 )
  {
    if ( v5 != (__int64 (__fastcall **)())0x8000000000000000LL )
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v31);
    v5 = v9;
  }
  else
  {
    v25 = *(_OWORD *)&v37[8];
    *(__m256i *)&v37[16] = *(__m256i *)v31;
    *(_OWORD *)v37 = v30;
    v4 = uu_base32::base_common::handle_input(&v25, v7, v37);
    v5 = v10;
    v11 = v25;
    if ( **((_QWORD **)&v25 + 1) )
      (**((void (__fastcall ***)(_QWORD))&v25 + 1))(v25);
    v12 = *(_QWORD *)(*((_QWORD *)&v11 + 1) + 8LL);
    if ( v12 )
      _rust_dealloc(v11, v12, *(_QWORD *)(*((_QWORD *)&v11 + 1) + 16LL));
    if ( !v4 )
      return (unsigned int)uucore::mods::error::get_exit_code();
  }
LABEL_31:
  *(_QWORD *)&v23 = v4;
  *((_QWORD *)&v23 + 1) = v5;
  *(_QWORD *)&v30 = &v23;
  *((_QWORD *)&v30 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
  *(_QWORD *)v37 = &unk_12400;
  *(_QWORD *)&v37[8] = 1LL;
  *(_QWORD *)&v37[16] = &v30;
  *(_OWORD *)&v37[24] = 1uLL;
  alloc::fmt::format::format_inner(&v35, v37);
  v30 = v35;
  *(_QWORD *)v31 = v36;
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((_QWORD *)&v35 + 1), v36, 1LL, 0LL) )
  {
    *(_QWORD *)&v13 = uucore::util_name();
    v25 = v13;
    v33 = &v25;
    v34 = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)v37 = &unk_1036E0;
    *(_QWORD *)&v37[8] = 2LL;
    *(_QWORD *)&v37[16] = &v33;
    *(_OWORD *)&v37[24] = 1uLL;
    std::io::stdio::_eprint(v37);
    *(_QWORD *)&v25 = &v30;
    *((_QWORD *)&v25 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)v37 = &unk_103700;
    *(_QWORD *)&v37[8] = 2LL;
    *(_QWORD *)&v37[16] = &v25;
    *(_OWORD *)&v37[24] = 1uLL;
    std::io::stdio::_eprint(v37);
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*((_QWORD *)&v23 + 1) + 104LL))(v23) )
  {
    *(_QWORD *)&v14 = uucore::execution_phrase();
    v25 = v14;
    v33 = &v25;
    v34 = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)v37 = &off_103720;
    *(_QWORD *)&v37[8] = 2LL;
    *(_QWORD *)&v37[16] = &v33;
    *(_OWORD *)&v37[24] = 1uLL;
    std::io::stdio::_eprint(v37);
  }
  v15 = (*(__int64 (__fastcall **)(_QWORD))(*((_QWORD *)&v23 + 1) + 96LL))(v23);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v30);
  v16 = v23;
  if ( **((_QWORD **)&v23 + 1) )
    (**((void (__fastcall ***)(_QWORD))&v23 + 1))(v23);
  v17 = *(_QWORD *)(*((_QWORD *)&v16 + 1) + 8LL);
  if ( v17 )
    _rust_dealloc(v16, v17, *(_QWORD *)(*((_QWORD *)&v16 + 1) + 16LL));
  return v15;
}
