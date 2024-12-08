__int64 __fastcall uu_uname::uumain::uumain(__int64 a1, __int64 a2)
{
  __m128i v3; // xmm0
  unsigned __int8 v4; // r14
  unsigned __int8 v5; // r15
  unsigned __int8 v6; // bl
  unsigned __int8 v7; // r13
  __int64 v8; // r14
  __int64 v9; // rdx
  unsigned __int8 v10; // [rsp+Dh] [rbp-43Bh]
  unsigned __int8 v11; // [rsp+Eh] [rbp-43Ah]
  unsigned __int8 flag; // [rsp+Fh] [rbp-439h]
  _QWORD v13[2]; // [rsp+20h] [rbp-428h] BYREF
  __m128i v14; // [rsp+30h] [rbp-418h]
  __int128 v15; // [rsp+40h] [rbp-408h]
  __int64 v16; // [rsp+50h] [rbp-3F8h]
  _BYTE v17[8]; // [rsp+58h] [rbp-3F0h] BYREF
  __int64 v18; // [rsp+60h] [rbp-3E8h]
  __int64 v19; // [rsp+68h] [rbp-3E0h]
  _QWORD v20[2]; // [rsp+70h] [rbp-3D8h] BYREF
  _QWORD v21[2]; // [rsp+80h] [rbp-3C8h] BYREF
  void *v22; // [rsp+90h] [rbp-3B8h] BYREF
  __int64 v23; // [rsp+98h] [rbp-3B0h]
  _QWORD *dest; // [rsp+A0h] [rbp-3A8h] BYREF
  _QWORD dest_8[21]; // [rsp+A8h] [rbp-3A0h] BYREF
  void *v26; // [rsp+150h] [rbp-2F8h] BYREF
  __int64 v27; // [rsp+158h] [rbp-2F0h]
  _QWORD *v28; // [rsp+160h] [rbp-2E8h]
  _QWORD src[21]; // [rsp+168h] [rbp-2E0h] BYREF

  uu_uname::uu_app(&v26);
  clap_builder::builder::command::Command::try_get_matches_from(&v22, &v26, a1, a2);
  if ( v22 == (void *)0x8000000000000000LL )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v23);
  v16 = dest_8[3];
  v3 = _mm_loadu_si128((const __m128i *)&dest);
  v15 = *(_OWORD *)&dest_8[1];
  v14 = v3;
  v13[0] = v22;
  v13[1] = v23;
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           v13,
           anon_4269be19a65831128ce73011641135e9_0_llvm_16615371172744386299,
           *(&uu_uname::options::ALL + 1));
  v11 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          v13,
          anon_4269be19a65831128ce73011641135e9_1_llvm_16615371172744386299,
          *(&uu_uname::options::KERNEL_NAME + 1));
  v10 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          v13,
          &anon_4269be19a65831128ce73011641135e9_2_llvm_16615371172744386299,
          *(&uu_uname::options::NODENAME + 1));
  v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
         v13,
         anon_4269be19a65831128ce73011641135e9_4_llvm_16615371172744386299,
         *(&uu_uname::options::KERNEL_RELEASE + 1));
  v5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
         v13,
         anon_4269be19a65831128ce73011641135e9_3_llvm_16615371172744386299,
         *(&uu_uname::options::KERNEL_VERSION + 1));
  v6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
         v13,
         anon_4269be19a65831128ce73011641135e9_5_llvm_16615371172744386299,
         *(&uu_uname::options::MACHINE + 1));
  v7 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
         v13,
         anon_4269be19a65831128ce73011641135e9_6_llvm_16615371172744386299,
         *(&uu_uname::options::PROCESSOR + 1));
  _mm_insert_epi16(
    _mm_insert_epi16(_mm_cvtsi32_si128(flag | (v11 << 8) | (v10 << 16) | (v5 << 24)), v4 | (v6 << 8), 2),
    v7 | ((unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                             v13,
                             anon_4269be19a65831128ce73011641135e9_7_llvm_16615371172744386299,
                             *(&uu_uname::options::HARDWARE_PLATFORM + 1)) << 8),
    3);
  clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
    v13,
    anon_4269be19a65831128ce73011641135e9_8_llvm_16615371172744386299,
    *(&uu_uname::options::OS + 1));
  uu_uname::UNameOutput::new(&v26);
  v8 = v27;
  if ( v26 == (void *)0x8000000000000001LL )
  {
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v13);
    return v8;
  }
  else
  {
    memcpy(dest_8, src, sizeof(dest_8));
    v22 = v26;
    v23 = v27;
    dest = v28;
    uu_uname::UNameOutput::display(v17, &v22);
    v21[0] = core::str::<impl str>::trim_end_matches(v18, v19);
    v21[1] = v9;
    v20[0] = v21;
    v20[1] = <&T as core::fmt::Display>::fmt;
    v26 = &unk_109158;
    v27 = 2LL;
    src[1] = 0LL;
    v28 = v20;
    src[0] = 1LL;
    std::io::stdio::_print(&v26);
    core::ptr::drop_in_place<alloc::string::String>(v17);
    core::ptr::drop_in_place<uu_uname::UNameOutput>(&v22);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v13);
    return 0LL;
  }
}
