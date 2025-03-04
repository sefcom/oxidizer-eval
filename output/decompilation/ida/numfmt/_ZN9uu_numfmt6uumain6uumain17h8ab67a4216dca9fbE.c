__int64 __fastcall uu_numfmt::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  char v7; // dl
  __int64 v8; // rax
  __int128 v10; // [rsp+0h] [rbp-478h] BYREF
  __int128 v11; // [rsp+10h] [rbp-468h]
  _QWORD v12[2]; // [rsp+28h] [rbp-450h] BYREF
  __int128 v13; // [rsp+38h] [rbp-440h]
  __int128 v14; // [rsp+48h] [rbp-430h]
  __int64 v15; // [rsp+58h] [rbp-420h]
  __int128 v16; // [rsp+60h] [rbp-418h]
  __int128 v17; // [rsp+70h] [rbp-408h]
  __int64 v18; // [rsp+80h] [rbp-3F8h] BYREF
  _BYTE v19[200]; // [rsp+88h] [rbp-3F0h] BYREF
  __int128 v20[4]; // [rsp+150h] [rbp-328h] BYREF
  _BYTE v21[40]; // [rsp+190h] [rbp-2E8h] BYREF
  _BYTE src[168]; // [rsp+1B8h] [rbp-2C0h] BYREF

  uu_numfmt::uu_app(v21);
  clap_builder::builder::command::Command::try_get_matches_from(&v18, v21, a1, a2);
  if ( v18 != 0x8000000000000000LL )
  {
    v15 = *(_QWORD *)&v19[40];
    v14 = *(_OWORD *)&v19[24];
    v13 = *(_OWORD *)&v19[8];
    v12[0] = v18;
    v12[1] = *(_QWORD *)v19;
    uu_numfmt::parse_options(v21, (__int64)v12);
    if ( *(_QWORD *)v21 == 2LL )
    {
      core::ops::function::FnOnce::call_once(&v10, &v21[8]);
      v16 = v10;
      v17 = v11;
      *(_OWORD *)&v21[16] = v11;
      *(_OWORD *)v21 = v10;
      v2 = alloc::boxed::Box<T>::new(v21);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v12);
      return v2;
    }
    v11 = *(_OWORD *)&v21[24];
    v10 = *(_OWORD *)&v21[8];
    memcpy(&v19[32], src, 0xA8uLL);
    v16 = *(_OWORD *)&v21[8];
    *(_OWORD *)v19 = *(_OWORD *)&v21[8];
    *(_OWORD *)&v19[16] = *(_OWORD *)&v21[24];
    v18 = *(_QWORD *)v21;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v21, v12, aNumber, 6LL);
    clap_builder::parser::error::MatchesError::unwrap(v20, aNumber, 6LL, v21);
    if ( *(_QWORD *)&v20[0] )
    {
      v2 = uu_numfmt::handle_args(v20, (__int64)&v18, v3, v4, v5, v6);
      if ( v2 )
        goto LABEL_9;
    }
    else
    {
      *(_QWORD *)&v10 = std::io::stdio::stdin();
      *(_QWORD *)v21 = std::io::stdio::Stdin::lock(&v10);
      v21[8] = v7 & 1;
      v2 = uu_numfmt::handle_buffer((__int64)v21, (__int64)&v18);
      core::ptr::drop_in_place<std::io::stdio::StdinLock>(*(_QWORD *)v21, *(unsigned int *)&v21[8]);
      if ( v2 )
      {
LABEL_9:
        *(_QWORD *)v21 = std::io::stdio::stdout();
        v8 = <std::io::stdio::Stdout as std::io::Write>::flush(v21);
        core::result::Result<T,E>::expect(v8);
LABEL_11:
        core::ptr::drop_in_place<uu_numfmt::options::NumfmtOptions>(&v18);
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v12);
        return v2;
      }
    }
    v2 = 0LL;
    goto LABEL_11;
  }
  return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*(_QWORD *)v19);
}
