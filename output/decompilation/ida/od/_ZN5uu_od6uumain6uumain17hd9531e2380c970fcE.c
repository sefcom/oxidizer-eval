__int64 __fastcall uu_od::uumain::uumain(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rbx
  char v4; // bl
  __int64 v6[3]; // [rsp+0h] [rbp-498h] BYREF
  _QWORD v7[3]; // [rsp+18h] [rbp-480h] BYREF
  __int128 v8; // [rsp+30h] [rbp-468h]
  __int128 v9; // [rsp+40h] [rbp-458h]
  __int128 v10; // [rsp+50h] [rbp-448h]
  __int128 v11; // [rsp+60h] [rbp-438h]
  __int128 v12; // [rsp+70h] [rbp-428h]
  __int64 v13; // [rsp+80h] [rbp-418h] BYREF
  __int64 v14; // [rsp+88h] [rbp-410h]
  _BYTE v15[40]; // [rsp+90h] [rbp-408h]
  __int128 v16; // [rsp+B8h] [rbp-3E0h]
  __int128 v17; // [rsp+C8h] [rbp-3D0h]
  __int128 v18; // [rsp+D8h] [rbp-3C0h]
  _QWORD v19[2]; // [rsp+E8h] [rbp-3B0h] BYREF
  __int128 v20; // [rsp+F8h] [rbp-3A0h]
  __int128 v21; // [rsp+108h] [rbp-390h]
  __int64 v22; // [rsp+118h] [rbp-380h]
  __int128 v23; // [rsp+120h] [rbp-378h] BYREF
  __int64 v24; // [rsp+130h] [rbp-368h]
  char v25; // [rsp+138h] [rbp-360h]
  __int128 v26; // [rsp+140h] [rbp-358h] BYREF
  __int64 v27; // [rsp+150h] [rbp-348h]
  __int64 *v28; // [rsp+158h] [rbp-340h]
  __int64 v29; // [rsp+160h] [rbp-338h]
  __int128 v30; // [rsp+168h] [rbp-330h]
  char v31; // [rsp+178h] [rbp-320h]
  __int128 v32; // [rsp+188h] [rbp-310h] BYREF
  __int64 v33; // [rsp+198h] [rbp-300h]
  _BYTE v34[728]; // [rsp+1C0h] [rbp-2D8h] BYREF

  uucore::Args::collect_ignore(v6, a1, a2);
  uu_od::uu_app(v34, a3);
  clap_builder::builder::command::Command::try_get_matches_from(&v13, v34, v6);
  if ( v13 == 0x8000000000000000LL )
  {
    v3 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v14);
  }
  else
  {
    v22 = *(_QWORD *)&v15[32];
    v21 = *(_OWORD *)&v15[16];
    v20 = *(_OWORD *)v15;
    v19[0] = v13;
    v19[1] = v14;
    uu_od::OdOptions::new((__int64)&v13, (__int64)v19, v6[1], v6[2]);
    v3 = v14;
    if ( v13 != 2 )
    {
      v12 = v18;
      v11 = v17;
      v10 = v16;
      v9 = *(_OWORD *)&v15[24];
      v8 = *(_OWORD *)&v15[8];
      v7[0] = v13;
      v7[1] = v14;
      v7[2] = *(_QWORD *)v15;
      v25 = BYTE10(v18);
      v24 = *((_QWORD *)&v17 + 1);
      v23 = *(_OWORD *)v15;
      uu_od::open_input_peek_reader(&v13, *(__int64 *)&v15[24], *(__int64 *)&v15[32], *((__int64 *)&v17 + 1), v13, v14);
      v4 = BYTE9(v12);
      <u8 as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(&v32, v12 + 4);
      v28 = &v13;
      v26 = v32;
      v27 = v33;
      v29 = 4LL;
      v30 = 0LL;
      v31 = v4;
      uu_od::output_info::OutputInfo::new((__int64)&v32, v12, *((__int64 *)&v10 + 1), v11, SBYTE8(v12));
      v3 = uu_od::odfunc((__int64 *)&v23, (__int64)&v26, (__int64)&v32, 0.0);
      core::ptr::drop_in_place<uu_od::output_info::OutputInfo>(&v32);
      core::ptr::drop_in_place<uu_od::inputdecoder::InputDecoder<uu_od::peekreader::PeekReader<uu_od::partialreader::PartialReader<uu_od::multifilereader::MultifileReader>>>>(&v26);
      core::ptr::drop_in_place<uu_od::peekreader::PeekReader<uu_od::partialreader::PartialReader<uu_od::multifilereader::MultifileReader>>>(&v13);
      core::ptr::drop_in_place<uu_od::OdOptions>(v7);
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v19);
  }
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v6);
  return v3;
}
