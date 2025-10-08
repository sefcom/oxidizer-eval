__int64 __fastcall uu_uname::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __m128i v4; // xmm0
  unsigned __int8 v5; // r14
  unsigned __int8 v6; // r12
  unsigned __int8 v7; // r15
  unsigned __int8 v8; // bl
  unsigned __int8 v9; // r13
  unsigned __int8 v10; // bp
  char v11; // al
  __int64 v12; // r14
  __int64 v13; // rbx
  __int64 v14; // rdx
  unsigned __int8 v15; // [rsp+Eh] [rbp-43Ah]
  unsigned __int8 flag; // [rsp+Fh] [rbp-439h]
  unsigned __int64 v17; // [rsp+10h] [rbp-438h] BYREF
  char v18; // [rsp+18h] [rbp-430h]
  _QWORD v19[2]; // [rsp+20h] [rbp-428h] BYREF
  __m128i v20; // [rsp+30h] [rbp-418h]
  __int128 v21; // [rsp+40h] [rbp-408h]
  __int64 v22; // [rsp+50h] [rbp-3F8h]
  __int64 v23; // [rsp+58h] [rbp-3F0h] BYREF
  __int64 v24; // [rsp+60h] [rbp-3E8h]
  __int64 v25; // [rsp+68h] [rbp-3E0h]
  _QWORD v26[2]; // [rsp+70h] [rbp-3D8h] BYREF
  _QWORD v27[2]; // [rsp+80h] [rbp-3C8h] BYREF
  __int64 v28; // [rsp+90h] [rbp-3B8h] BYREF
  __int64 v29; // [rsp+98h] [rbp-3B0h]
  _QWORD *dest; // [rsp+A0h] [rbp-3A8h] BYREF
  _QWORD dest_8[21]; // [rsp+A8h] [rbp-3A0h] BYREF
  void *v32; // [rsp+150h] [rbp-2F8h] BYREF
  __int64 v33; // [rsp+158h] [rbp-2F0h]
  _QWORD *v34; // [rsp+160h] [rbp-2E8h]
  _QWORD src[21]; // [rsp+168h] [rbp-2E0h] BYREF

  uu_uname::uu_app(&v32);
  clap_builder::builder::command::Command::try_get_matches_from(&v28, &v32, a1, a2);
  if ( __OFSUB__(-v28, 1LL) )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
             v29,
             &v32,
             v2,
             -v28);
  v22 = dest_8[3];
  v4 = _mm_loadu_si128((const __m128i *)&dest);
  v21 = *(_OWORD *)&dest_8[1];
  v20 = v4;
  v19[0] = v28;
  v19[1] = v29;
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v19, aAll, *(&uu_uname::options::ALL + 1));
  v15 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          v19,
          aKernelName,
          *(&uu_uname::options::KERNEL_NAME + 1));
  v5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
         v19,
         &unk_16F88,
         *(&uu_uname::options::NODENAME + 1));
  v6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
         v19,
         aKernelRelease,
         *(&uu_uname::options::KERNEL_RELEASE + 1));
  v7 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
         v19,
         aKernelVersion,
         *(&uu_uname::options::KERNEL_VERSION + 1));
  v8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
         v19,
         aMachine,
         *(&uu_uname::options::MACHINE + 1));
  v9 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
         v19,
         aProcessor,
         *(&uu_uname::options::PROCESSOR + 1));
  v10 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          v19,
          aHardwarePlatfo,
          *(&uu_uname::options::HARDWARE_PLATFORM + 1));
  v11 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          v19,
          aOperatingSyste,
          *(&uu_uname::options::OS + 1));
  v17 = _mm_insert_epi16(
          _mm_insert_epi16(_mm_cvtsi32_si128(flag | (v15 << 8) | (v5 << 16) | (v7 << 24)), v6 | (v8 << 8), 2),
          v9 | (v10 << 8),
          3).m128i_u64[0];
  v18 = v11;
  uu_uname::UNameOutput::new(&v32, &v17);
  v12 = v33;
  if ( v32 == (void *)0x8000000000000001LL )
  {
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v19);
    return v12;
  }
  else
  {
    memcpy(dest_8, src, sizeof(dest_8));
    v28 = (__int64)v32;
    v29 = v33;
    dest = v34;
    uu_uname::UNameOutput::display(&v23, &v28);
    v13 = v24;
    v27[0] = core::str::<impl str>::trim_end_matches(v24, v25);
    v27[1] = v14;
    v26[0] = v27;
    v26[1] = <&T as core::fmt::Display>::fmt;
    v32 = &unk_D9788;
    v33 = 2LL;
    src[1] = 0LL;
    v34 = v26;
    src[0] = 1LL;
    std::io::stdio::_print(&v32);
    core::ptr::drop_in_place<alloc::string::String>(v23, v13);
    core::ptr::drop_in_place<uu_uname::UNameOutput>(&v28);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v19);
    return 0LL;
  }
}