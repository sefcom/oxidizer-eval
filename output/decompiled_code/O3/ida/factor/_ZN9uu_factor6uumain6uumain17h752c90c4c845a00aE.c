__int64 __fastcall uu_factor::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  char flag; // bp
  __int64 v4; // rax
  __int64 v5; // r14
  __int128 *v6; // rsi
  __int64 v7; // rax
  char v8; // dl
  __int64 (__fastcall *v9)(); // rsi
  __int64 v10; // r15
  __int64 v11; // rax
  __int128 *v12; // rdx
  __int64 v13; // rax
  __int128 v14; // rax
  __int64 (__fastcall *v16)(); // rdx
  __int64 v17; // [rsp+0h] [rbp-408h] BYREF
  unsigned int v18; // [rsp+8h] [rbp-400h]
  __int64 (__fastcall **v19)(); // [rsp+10h] [rbp-3F8h] BYREF
  __int64 (__fastcall *v20)(); // [rsp+18h] [rbp-3F0h]
  __int64 v21; // [rsp+20h] [rbp-3E8h]
  __int64 (__fastcall *v22)(); // [rsp+28h] [rbp-3E0h] BYREF
  __int64 (__fastcall **v23)(); // [rsp+30h] [rbp-3D8h] BYREF
  __int64 (__fastcall *v24)(); // [rsp+38h] [rbp-3D0h]
  __int64 v25; // [rsp+40h] [rbp-3C8h]
  __int128 v26; // [rsp+48h] [rbp-3C0h] BYREF
  __int128 v27; // [rsp+58h] [rbp-3B0h]
  __int128 v28; // [rsp+68h] [rbp-3A0h]
  __int128 v29; // [rsp+78h] [rbp-390h]
  unsigned __int64 v30; // [rsp+88h] [rbp-380h]
  __int64 v31; // [rsp+90h] [rbp-378h] BYREF
  __int64 v32; // [rsp+98h] [rbp-370h] BYREF
  _QWORD v33[2]; // [rsp+A0h] [rbp-368h] BYREF
  _OWORD v34[3]; // [rsp+B0h] [rbp-358h] BYREF
  __int64 v35; // [rsp+E0h] [rbp-328h]
  _QWORD v36[5]; // [rsp+E8h] [rbp-320h] BYREF
  __int128 dest; // [rsp+110h] [rbp-2F8h] BYREF
  __int128 v38; // [rsp+120h] [rbp-2E8h] BYREF
  __int128 v39; // [rsp+130h] [rbp-2D8h]
  __int128 v40; // [rsp+140h] [rbp-2C8h]
  char v41[696]; // [rsp+150h] [rbp-2B8h] BYREF

  uu_factor::uu_app(&dest, a2);
  clap_builder::builder::command::Command::try_get_matches_from(&v26, &dest, a1, a2);
  if ( (_QWORD)v26 == 0x8000000000000000LL )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v26 + 1));
  v35 = v29;
  v34[2] = v28;
  v34[1] = v27;
  v34[0] = v26;
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           v34,
           aExponents,
           *(&uu_factor::options::EXPONENTS + 1));
  v31 = std::io::stdio::stdout();
  v4 = std::io::stdio::Stdout::lock(&v31);
  std::io::buffered::bufwriter::BufWriter<W>::with_capacity(v36, 4096LL, v4);
  v5 = (__int64)*(&uu_factor::options::NUMBER + 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&dest, v34, aNumber, v5);
  v6 = (__int128 *)aNumber;
  clap_builder::parser::error::MatchesError::unwrap(&v26, aNumber, v5, &dest);
  if ( (_QWORD)v26 )
  {
    v40 = v29;
    v39 = v28;
    v38 = v27;
    dest = v26;
    while ( 1 )
    {
      v7 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&dest);
      if ( !v7 )
        break;
      v6 = *(__int128 **)(v7 + 16);
      v2 = uu_factor::print_factors_str(*(_QWORD *)(v7 + 8), v6, v36, flag);
      if ( v2 )
        goto LABEL_17;
    }
LABEL_19:
    v13 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(v36);
    if ( v13 )
    {
      v23 = (__int64 (__fastcall **)())v13;
      *(_QWORD *)&v14 = uucore::util_name(v36, v6);
      v26 = v14;
      v19 = (__int64 (__fastcall **)())&v26;
      v20 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&dest = &unk_18AD68;
      *((_QWORD *)&dest + 1) = 2LL;
      *(_QWORD *)&v39 = 0LL;
      *(_QWORD *)&v38 = &v19;
      *((_QWORD *)&v38 + 1) = 1LL;
      std::io::stdio::_eprint(&dest);
      *(_QWORD *)&v26 = &v23;
      *((_QWORD *)&v26 + 1) = <std::io::error::Error as core::fmt::Display>::fmt;
      *(_QWORD *)&dest = &unk_18AD88;
      *((_QWORD *)&dest + 1) = 2LL;
      *(_QWORD *)&v39 = 0LL;
      *(_QWORD *)&v38 = &v26;
      *((_QWORD *)&v38 + 1) = 1LL;
      std::io::stdio::_eprint(&dest);
      core::ptr::drop_in_place<std::io::error::Error>(v23);
    }
    core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(v36);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v34);
    return 0LL;
  }
  else
  {
    v32 = std::io::stdio::stdin();
    v17 = std::io::stdio::Stdin::lock(&v32);
    LOBYTE(v18) = v8 & 1;
    v30 = 0x8000000000000001LL;
    while ( 1 )
    {
      <std::io::Lines<B> as core::iter::traits::iterator::Iterator>::next(&v23, &v17);
      if ( v23 == (__int64 (__fastcall **)())v30 )
      {
        v6 = (__int128 *)v18;
        core::ptr::drop_in_place<std::io::Lines<std::io::stdio::StdinLock>>(v17, v18);
        goto LABEL_19;
      }
      v9 = v24;
      if ( v23 == (__int64 (__fastcall **)())0x8000000000000000LL )
        break;
      v10 = v25;
      v19 = v23;
      v20 = v24;
      v21 = v25;
      <core::str::pattern::MultiCharEqPattern<C> as core::str::pattern::Pattern>::into_searcher(&v38, v24, v25);
      *(_QWORD *)&dest = 0LL;
      *((_QWORD *)&dest + 1) = v10;
      WORD4(v40) = 1;
      while ( 1 )
      {
        v11 = core::iter::traits::iterator::Iterator::try_fold(&dest, v41);
        if ( !v11 )
          break;
        v2 = uu_factor::print_factors_str(v11, v12, v36, flag);
        if ( v2 )
        {
          core::ptr::drop_in_place<alloc::string::String>(&v19);
          goto LABEL_16;
        }
      }
      core::ptr::drop_in_place<alloc::string::String>(&v19);
    }
    v22 = v24;
    uucore::mods::error::set_exit_code(1LL);
    v19 = (__int64 (__fastcall **)())uucore::util_name(1LL, v9);
    v20 = v16;
    v33[0] = &v19;
    v33[1] = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&dest = &unk_18AD68;
    *((_QWORD *)&dest + 1) = 2LL;
    *(_QWORD *)&v39 = 0LL;
    *(_QWORD *)&v38 = v33;
    *((_QWORD *)&v38 + 1) = 1LL;
    std::io::stdio::_eprint(&dest);
    v19 = &v22;
    v20 = <std::io::error::Error as core::fmt::Display>::fmt;
    *(_QWORD *)&dest = &off_18ADC8;
    *((_QWORD *)&dest + 1) = 2LL;
    *(_QWORD *)&v39 = 0LL;
    *(_QWORD *)&v38 = &v19;
    *((_QWORD *)&v38 + 1) = 1LL;
    std::io::stdio::_eprint(&dest);
    core::ptr::drop_in_place<std::io::error::Error>(v22);
    v2 = 0LL;
LABEL_16:
    core::ptr::drop_in_place<std::io::Lines<std::io::stdio::StdinLock>>(v17, v18);
LABEL_17:
    core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(v36);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v34);
  }
  return v2;
}
