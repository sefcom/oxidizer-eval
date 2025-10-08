__int64 __fastcall uu_factor::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // r14
  char flag; // bp
  __int64 v5; // rax
  __int64 v6; // r14
  unsigned __int64 v7; // rsi
  __int64 v8; // rax
  char v9; // dl
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // r14
  __int64 v13; // rax
  _OWORD *v14; // rdx
  __int64 v15; // rax
  __int128 v16; // rax
  __int64 (__fastcall *v18)(); // rdx
  __int64 v19; // [rsp+8h] [rbp-3F0h] BYREF
  unsigned int v20; // [rsp+10h] [rbp-3E8h]
  __int64 v21; // [rsp+18h] [rbp-3E0h]
  __int64 v22; // [rsp+20h] [rbp-3D8h] BYREF
  __int64 *v23; // [rsp+28h] [rbp-3D0h] BYREF
  __int64 (__fastcall *v24)(); // [rsp+30h] [rbp-3C8h]
  _QWORD v25[2]; // [rsp+38h] [rbp-3C0h] BYREF
  __int128 v26; // [rsp+48h] [rbp-3B0h] BYREF
  __int128 v27; // [rsp+58h] [rbp-3A0h]
  __int128 v28; // [rsp+68h] [rbp-390h]
  __int128 v29; // [rsp+78h] [rbp-380h]
  unsigned __int64 v30; // [rsp+88h] [rbp-370h]
  __int64 v31; // [rsp+90h] [rbp-368h] BYREF
  __int64 v32; // [rsp+98h] [rbp-360h] BYREF
  _OWORD v33[3]; // [rsp+A0h] [rbp-358h] BYREF
  __int64 v34; // [rsp+D0h] [rbp-328h]
  _QWORD v35[5]; // [rsp+D8h] [rbp-320h] BYREF
  __int128 dest; // [rsp+100h] [rbp-2F8h] BYREF
  __int128 v37; // [rsp+110h] [rbp-2E8h] BYREF
  __int128 v38; // [rsp+120h] [rbp-2D8h]
  __int128 v39; // [rsp+130h] [rbp-2C8h]

  uu_factor::uu_app(&dest);
  clap_builder::builder::command::Command::try_get_matches_from(&v26, &dest, a1, a2);
  if ( __OFSUB__(-(__int64)v26, 1LL) )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
             *((_QWORD *)&v26 + 1),
             &dest,
             v2,
             -(__int64)v26);
  v34 = v29;
  v33[2] = v28;
  v33[1] = v27;
  v33[0] = v26;
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           v33,
           aExponents,
           *(&uu_factor::options::EXPONENTS + 1));
  v31 = std::io::stdio::stdout();
  v5 = std::io::stdio::Stdout::lock(&v31);
  std::io::buffered::bufwriter::BufWriter<W>::with_capacity(v35, v5);
  v6 = (__int64)*(&uu_factor::options::NUMBER + 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&dest, v33, aNumber, v6);
  v7 = (unsigned __int64)aNumber;
  clap_builder::parser::error::MatchesError::unwrap(&v26, aNumber, v6, &dest);
  if ( (_QWORD)v26 )
  {
    v39 = v29;
    v38 = v28;
    v37 = v27;
    dest = v26;
    while ( 1 )
    {
      v8 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&dest);
      if ( !v8 )
        break;
      v7 = *(_QWORD *)(v8 + 16);
      v3 = uu_factor::print_factors_str(*(_QWORD *)(v8 + 8), (_OWORD *)v7, v35, flag);
      if ( v3 )
        goto LABEL_17;
    }
LABEL_19:
    v15 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(v35);
    if ( v15 )
    {
      v25[0] = v15;
      *(_QWORD *)&v16 = uucore::util_name(v35, v7);
      v26 = v16;
      v23 = (__int64 *)&v26;
      v24 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&dest = &unk_144290;
      *((_QWORD *)&dest + 1) = 2LL;
      *(_QWORD *)&v38 = 0LL;
      *(_QWORD *)&v37 = &v23;
      *((_QWORD *)&v37 + 1) = 1LL;
      std::io::stdio::_eprint(&dest);
      *(_QWORD *)&v26 = v25;
      *((_QWORD *)&v26 + 1) = <std::io::error::Error as core::fmt::Display>::fmt;
      *(_QWORD *)&dest = &unk_1442B0;
      *((_QWORD *)&dest + 1) = 2LL;
      *(_QWORD *)&v38 = 0LL;
      *(_QWORD *)&v37 = &v26;
      *((_QWORD *)&v37 + 1) = 1LL;
      std::io::stdio::_eprint(&dest);
      core::ptr::drop_in_place<std::io::error::Error>(v25[0]);
    }
    else
    {
      core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(0LL);
    }
    core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(v35);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v33);
    return 0LL;
  }
  else
  {
    v32 = std::io::stdio::stdin();
    v19 = std::io::stdio::Stdin::lock(&v32);
    LOBYTE(v20) = v9 & 1;
    v30 = 0x8000000000000001LL;
    while ( 1 )
    {
      <std::io::Lines<B> as core::iter::traits::iterator::Iterator>::next(&v26, &v19);
      v10 = v26;
      if ( (_QWORD)v26 == v30 )
      {
        v7 = v20;
        core::ptr::drop_in_place<std::io::Lines<std::io::stdio::StdinLock>>(v19, v20);
        goto LABEL_19;
      }
      v11 = *((_QWORD *)&v26 + 1);
      if ( (_QWORD)v26 == 0x8000000000000000LL )
        break;
      v12 = v27;
      v21 = *((_QWORD *)&v26 + 1);
      <core::str::pattern::MultiCharEqPattern<C> as core::str::pattern::Pattern>::into_searcher(
        &v37,
        *((_QWORD *)&v26 + 1),
        v27);
      *(_QWORD *)&dest = 0LL;
      *((_QWORD *)&dest + 1) = v12;
      WORD4(v39) = 1;
      while ( 1 )
      {
        v13 = core::iter::traits::iterator::Iterator::try_fold(&dest);
        if ( !v13 )
          break;
        v3 = uu_factor::print_factors_str(v13, v14, v35, flag);
        if ( v3 )
        {
          core::ptr::drop_in_place<alloc::string::String>(v10, v21);
          goto LABEL_16;
        }
      }
      core::ptr::drop_in_place<alloc::string::String>(v10, v21);
    }
    v22 = *((_QWORD *)&v26 + 1);
    uucore::mods::error::set_exit_code(1LL);
    v23 = (__int64 *)uucore::util_name(1LL, v11);
    v24 = v18;
    v25[0] = &v23;
    v25[1] = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&dest = &unk_144290;
    *((_QWORD *)&dest + 1) = 2LL;
    *(_QWORD *)&v38 = 0LL;
    *(_QWORD *)&v37 = v25;
    *((_QWORD *)&v37 + 1) = 1LL;
    std::io::stdio::_eprint(&dest);
    v23 = &v22;
    v24 = <std::io::error::Error as core::fmt::Display>::fmt;
    *(_QWORD *)&dest = &off_144308;
    *((_QWORD *)&dest + 1) = 2LL;
    *(_QWORD *)&v38 = 0LL;
    *(_QWORD *)&v37 = &v23;
    *((_QWORD *)&v37 + 1) = 1LL;
    std::io::stdio::_eprint(&dest);
    core::ptr::drop_in_place<std::io::error::Error>(v22);
    v3 = 0LL;
LABEL_16:
    core::ptr::drop_in_place<std::io::Lines<std::io::stdio::StdinLock>>(v19, v20);
LABEL_17:
    core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(v35);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v33);
  }
  return v3;
}