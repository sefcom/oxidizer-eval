__int64 __fastcall uu_numfmt::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  char v3; // dl
  __int64 v4; // rax
  __int128 v6; // [rsp+0h] [rbp-478h] BYREF
  __int128 v7; // [rsp+10h] [rbp-468h]
  _QWORD v8[2]; // [rsp+28h] [rbp-450h] BYREF
  __int128 v9; // [rsp+38h] [rbp-440h]
  __int128 v10; // [rsp+48h] [rbp-430h]
  __int64 v11; // [rsp+58h] [rbp-420h]
  __int128 v12; // [rsp+60h] [rbp-418h]
  __int128 v13; // [rsp+70h] [rbp-408h]
  __int64 v14; // [rsp+80h] [rbp-3F8h] BYREF
  _BYTE v15[200]; // [rsp+88h] [rbp-3F0h] BYREF
  __int128 v16[4]; // [rsp+150h] [rbp-328h] BYREF
  _BYTE v17[40]; // [rsp+190h] [rbp-2E8h] BYREF
  _BYTE src[168]; // [rsp+1B8h] [rbp-2C0h] BYREF

  uu_numfmt::uu_app(v17);
  clap_builder::builder::command::Command::try_get_matches_from(&v14, v17, a1, a2);
  if ( v14 != 0x8000000000000000LL )
  {
    v11 = *(_QWORD *)&v15[40];
    v10 = *(_OWORD *)&v15[24];
    v9 = *(_OWORD *)&v15[8];
    v8[0] = v14;
    v8[1] = *(_QWORD *)v15;
    uu_numfmt::parse_options(v17);
    if ( *(_QWORD *)v17 == 2LL )
    {
      core::ops::function::FnOnce::call_once(&v6, &v17[8]);
      v12 = v6;
      v13 = v7;
      *(_OWORD *)&v17[16] = v7;
      *(_OWORD *)v17 = v6;
      v2 = alloc::boxed::Box<T>::new(v17);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v8);
      return v2;
    }
    v7 = *(_OWORD *)&v17[24];
    v6 = *(_OWORD *)&v17[8];
    memcpy(&v15[32], src, 0xA8uLL);
    v12 = *(_OWORD *)&v17[8];
    *(_OWORD *)v15 = *(_OWORD *)&v17[8];
    *(_OWORD *)&v15[16] = *(_OWORD *)&v17[24];
    v14 = *(_QWORD *)v17;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v17, v8, aNumber, 6LL);
    clap_builder::parser::error::MatchesError::unwrap(v16, aNumber, 6LL, v17);
    if ( *(_QWORD *)&v16[0] )
    {
      v2 = uu_numfmt::handle_args(v16, (__int64)&v14);
      if ( v2 )
        goto LABEL_9;
    }
    else
    {
      *(_QWORD *)&v6 = std::io::stdio::stdin();
      *(_QWORD *)v17 = std::io::stdio::Stdin::lock(&v6);
      v17[8] = v3 & 1;
      v2 = uu_numfmt::handle_buffer((__int64)v17, (__int64)&v14);
      core::ptr::drop_in_place<std::io::stdio::StdinLock>(*(_QWORD *)v17, *(unsigned int *)&v17[8]);
      if ( v2 )
      {
LABEL_9:
        *(_QWORD *)v17 = std::io::stdio::stdout();
        v4 = <std::io::stdio::Stdout as std::io::Write>::flush(v17);
        core::result::Result<T,E>::expect(v4);
LABEL_11:
        core::ptr::drop_in_place<uu_numfmt::options::NumfmtOptions>(&v14);
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v8);
        return v2;
      }
    }
    v2 = 0LL;
    goto LABEL_11;
  }
  return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*(_QWORD *)v15);
}
