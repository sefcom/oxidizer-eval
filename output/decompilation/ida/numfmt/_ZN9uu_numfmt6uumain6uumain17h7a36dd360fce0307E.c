// bad sp value at call has been detected, the output may be wrong!
__int64 __fastcall uu_numfmt::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v4; // rbx
  char v5; // dl
  __int64 v6; // rax
  __int128 v7; // [rsp+0h] [rbp-458h] BYREF
  __int64 v8; // [rsp+10h] [rbp-448h]
  _QWORD v9[2]; // [rsp+18h] [rbp-440h] BYREF
  __int128 v10; // [rsp+28h] [rbp-430h]
  __int128 v11; // [rsp+38h] [rbp-420h]
  __int64 v12; // [rsp+48h] [rbp-410h]
  __int128 v13; // [rsp+50h] [rbp-408h]
  __int64 v14; // [rsp+60h] [rbp-3F8h]
  __int64 v15; // [rsp+68h] [rbp-3F0h] BYREF
  __int64 v16; // [rsp+70h] [rbp-3E8h]
  __int128 v17; // [rsp+78h] [rbp-3E0h]
  _BYTE dest[176]; // [rsp+88h] [rbp-3D0h] BYREF
  __int128 v19[4]; // [rsp+138h] [rbp-320h] BYREF
  __int64 v20; // [rsp+178h] [rbp-2E0h] BYREF
  _BYTE v21[24]; // [rsp+180h] [rbp-2D8h]
  __int64 v22; // [rsp+198h] [rbp-2C0h]
  _BYTE src[168]; // [rsp+1A0h] [rbp-2B8h] BYREF

  uu_numfmt::uu_app(&v20);
  clap_builder::builder::command::Command::try_get_matches_from(&v15, &v20, a1, a2);
  if ( __OFSUB__(-v15, 1LL) )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
             v16,
             &v20,
             v2,
             -v15);
  v12 = *(_QWORD *)&dest[16];
  v11 = *(_OWORD *)dest;
  v10 = v17;
  v9[0] = v15;
  v9[1] = v16;
  uu_numfmt::parse_options(&v20, v9);
  if ( v20 != 2 )
  {
    v7 = *(_OWORD *)&v21[8];
    v8 = v22;
    memcpy(&dest[8], src, 0xA8uLL);
    v13 = *(_OWORD *)&v21[8];
    v17 = *(_OWORD *)&v21[8];
    *(_QWORD *)dest = v22;
    v15 = v20;
    v16 = *(_QWORD *)v21;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v20, v9);
    clap_builder::parser::error::MatchesError::unwrap(v19, &v20);
    if ( *(_QWORD *)&v19[0] )
    {
      v4 = uu_numfmt::handle_args(v19, (__int64)&v15);
      if ( v4 )
        goto LABEL_9;
    }
    else
    {
      *(_QWORD *)&v7 = std::io::stdio::stdin();
      v20 = std::io::stdio::Stdin::lock(&v7);
      v21[0] = v5 & 1;
      v4 = uu_numfmt::handle_buffer((__int64)&v20, (__int64)&v15);
      core::ptr::drop_in_place<std::io::stdio::StdinLock>(v20, *(unsigned int *)v21);
      if ( v4 )
      {
LABEL_9:
        v20 = std::io::stdio::stdout();
        v6 = <std::io::stdio::Stdout as std::io::Write>::flush(&v20);
        core::result::Result<T,E>::expect(v6);
LABEL_11:
        core::ptr::drop_in_place<uu_numfmt::options::NumfmtOptions>(&v15);
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v9);
        return v4;
      }
    }
    v4 = 0LL;
    goto LABEL_11;
  }
  v13 = *(_OWORD *)v21;
  v14 = *(_QWORD *)&v21[16];
  v20 = 1LL;
  v4 = alloc::boxed::Box<T>::new(&v20);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v9);
  return v4;
}