__int64 __fastcall uu_od::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r14
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // rbx
  char v7; // bp
  __int64 v9; // [rsp+0h] [rbp-4B8h] BYREF
  __int64 v10; // [rsp+8h] [rbp-4B0h]
  __int64 v11; // [rsp+10h] [rbp-4A8h]
  _QWORD v12[3]; // [rsp+18h] [rbp-4A0h] BYREF
  __int128 v13; // [rsp+30h] [rbp-488h]
  __int128 v14; // [rsp+40h] [rbp-478h]
  __int128 v15; // [rsp+50h] [rbp-468h]
  __int128 v16; // [rsp+60h] [rbp-458h]
  __int128 v17; // [rsp+70h] [rbp-448h]
  __int128 v18; // [rsp+80h] [rbp-438h] BYREF
  __int64 v19; // [rsp+90h] [rbp-428h]
  __int64 *v20; // [rsp+98h] [rbp-420h]
  __int64 v21; // [rsp+A0h] [rbp-418h]
  __int128 v22; // [rsp+A8h] [rbp-410h]
  char v23; // [rsp+B8h] [rbp-400h]
  _QWORD v24[2]; // [rsp+C0h] [rbp-3F8h] BYREF
  __int128 v25; // [rsp+D0h] [rbp-3E8h]
  __int128 v26; // [rsp+E0h] [rbp-3D8h]
  __int64 v27; // [rsp+F0h] [rbp-3C8h]
  __int128 v28; // [rsp+F8h] [rbp-3C0h] BYREF
  __int64 v29; // [rsp+108h] [rbp-3B0h]
  __int128 v30; // [rsp+130h] [rbp-388h] BYREF
  __int64 v31; // [rsp+140h] [rbp-378h]
  char v32; // [rsp+148h] [rbp-370h]
  __int64 v33; // [rsp+150h] [rbp-368h] BYREF
  __int64 v34; // [rsp+158h] [rbp-360h]
  _BYTE v35[40]; // [rsp+160h] [rbp-358h]
  __int128 v36; // [rsp+188h] [rbp-330h]
  __int128 v37; // [rsp+198h] [rbp-320h]
  __int128 v38; // [rsp+1A8h] [rbp-310h]
  _BYTE dest[736]; // [rsp+1D8h] [rbp-2E0h] BYREF

  uucore::Args::collect_ignore(&v9, a1, a2);
  uu_od::uu_app(dest);
  v2 = v10;
  v3 = v11;
  clap_builder::builder::command::Command::try_get_matches_from(&v33, dest, v10, v11);
  if ( __OFSUB__(-v33, 1LL) )
  {
    v5 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
           v34,
           dest,
           v4,
           -v33);
  }
  else
  {
    v27 = *(_QWORD *)&v35[32];
    v26 = *(_OWORD *)&v35[16];
    v25 = *(_OWORD *)v35;
    v24[0] = v33;
    v24[1] = v34;
    uu_od::OdOptions::new(&v33, v24, v2, v3);
    v5 = v34;
    if ( v33 != 2 )
    {
      v17 = v38;
      v16 = v37;
      v15 = v36;
      v14 = *(_OWORD *)&v35[24];
      v13 = *(_OWORD *)&v35[8];
      v12[0] = v33;
      v12[1] = v34;
      v12[2] = *(_QWORD *)v35;
      v32 = BYTE10(v38);
      v31 = *((_QWORD *)&v37 + 1);
      v30 = *(_OWORD *)v35;
      uu_od::open_input_peek_reader(&v33, *(_QWORD *)&v35[24], *(_QWORD *)&v35[32], *((_QWORD *)&v37 + 1), v33, v34);
      v6 = v17;
      v7 = BYTE9(v17);
      <u8 as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(&v28, v17 + 4);
      v20 = &v33;
      v18 = v28;
      v19 = v29;
      v21 = 4LL;
      v22 = 0LL;
      v23 = v7;
      uu_od::output_info::OutputInfo::new(&v28, v6, *((_QWORD *)&v15 + 1), v16, BYTE8(v17));
      v5 = uu_od::odfunc((__int64)&v30, (__int64)&v18, (__int64)&v28);
      core::ptr::drop_in_place<uu_od::output_info::OutputInfo>(v28, *((_QWORD *)&v28 + 1));
      core::ptr::drop_in_place<uu_od::inputdecoder::InputDecoder<uu_od::peekreader::PeekReader<std::io::buffered::bufreader::BufReader<uu_od::partialreader::PartialReader<uu_od::multifilereader::MultifileReader>>>>>(
        v18,
        *((_QWORD *)&v18 + 1));
      core::ptr::drop_in_place<uu_od::peekreader::PeekReader<std::io::buffered::bufreader::BufReader<uu_od::partialreader::PartialReader<uu_od::multifilereader::MultifileReader>>>>(&v33);
      core::ptr::drop_in_place<uu_od::OdOptions>(v12);
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v24);
  }
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v9);
  return v5;
}