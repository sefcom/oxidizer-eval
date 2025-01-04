__int64 __fastcall uu_od::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  char v3; // bl
  _QWORD v5[3]; // [rsp+0h] [rbp-498h] BYREF
  _QWORD v6[3]; // [rsp+18h] [rbp-480h] BYREF
  __int128 v7; // [rsp+30h] [rbp-468h]
  __int128 v8; // [rsp+40h] [rbp-458h]
  __int128 v9; // [rsp+50h] [rbp-448h]
  __int128 v10; // [rsp+60h] [rbp-438h]
  __int128 v11; // [rsp+70h] [rbp-428h]
  __int64 v12; // [rsp+80h] [rbp-418h] BYREF
  __int64 v13; // [rsp+88h] [rbp-410h]
  _BYTE v14[40]; // [rsp+90h] [rbp-408h]
  __int128 v15; // [rsp+B8h] [rbp-3E0h]
  __int128 v16; // [rsp+C8h] [rbp-3D0h]
  __int128 v17; // [rsp+D8h] [rbp-3C0h]
  _QWORD v18[2]; // [rsp+E8h] [rbp-3B0h] BYREF
  __int128 v19; // [rsp+F8h] [rbp-3A0h]
  __int128 v20; // [rsp+108h] [rbp-390h]
  __int64 v21; // [rsp+118h] [rbp-380h]
  __int128 v22; // [rsp+120h] [rbp-378h] BYREF
  __int64 v23; // [rsp+130h] [rbp-368h]
  char v24; // [rsp+138h] [rbp-360h]
  __int128 v25; // [rsp+140h] [rbp-358h] BYREF
  __int64 v26; // [rsp+150h] [rbp-348h]
  __int64 *v27; // [rsp+158h] [rbp-340h]
  __int64 v28; // [rsp+160h] [rbp-338h]
  __int128 v29; // [rsp+168h] [rbp-330h]
  char v30; // [rsp+178h] [rbp-320h]
  __int128 v31; // [rsp+188h] [rbp-310h] BYREF
  __int64 v32; // [rsp+198h] [rbp-300h]
  _BYTE v33[728]; // [rsp+1C0h] [rbp-2D8h] BYREF

  uucore::Args::collect_ignore(v5, a1, a2);
  uu_od::uu_app(v33);
  clap_builder::builder::command::Command::try_get_matches_from(&v12, v33, v5);
  if ( v12 == 0x8000000000000000LL )
  {
    v2 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v13);
  }
  else
  {
    v21 = *(_QWORD *)&v14[32];
    v20 = *(_OWORD *)&v14[16];
    v19 = *(_OWORD *)v14;
    v18[0] = v12;
    v18[1] = v13;
    uu_od::OdOptions::new(&v12, v18, v5[1], v5[2]);
    v2 = v13;
    if ( v12 != 2 )
    {
      v11 = v17;
      v10 = v16;
      v9 = v15;
      v8 = *(_OWORD *)&v14[24];
      v7 = *(_OWORD *)&v14[8];
      v6[0] = v12;
      v6[1] = v13;
      v6[2] = *(_QWORD *)v14;
      v24 = BYTE10(v17);
      v23 = *((_QWORD *)&v16 + 1);
      v22 = *(_OWORD *)v14;
      uu_od::open_input_peek_reader(&v12, *(_QWORD *)&v14[24], *(_QWORD *)&v14[32], *((_QWORD *)&v16 + 1), v12, v13);
      v3 = BYTE9(v11);
      <u8 as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(&v31, v11 + 4);
      v27 = &v12;
      v25 = v31;
      v26 = v32;
      v28 = 4LL;
      v29 = 0LL;
      v30 = v3;
      uu_od::output_info::OutputInfo::new(&v31, v11, *((_QWORD *)&v9 + 1), v10, BYTE8(v11));
      v2 = uu_od::odfunc(&v22, (__int64)&v25, (__int64)&v31);
      core::ptr::drop_in_place<uu_od::output_info::OutputInfo>(&v31);
      core::ptr::drop_in_place<uu_od::inputdecoder::InputDecoder<uu_od::peekreader::PeekReader<uu_od::partialreader::PartialReader<uu_od::multifilereader::MultifileReader>>>>(&v25);
      core::ptr::drop_in_place<uu_od::peekreader::PeekReader<uu_od::partialreader::PartialReader<uu_od::multifilereader::MultifileReader>>>(&v12);
      core::ptr::drop_in_place<uu_od::OdOptions>(v6);
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v18);
  }
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v5);
  return v2;
}
