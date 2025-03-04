__int64 __fastcall uu_uname::uumain::uumain(__int64 a1, __int64 a2)
{
  __m128i v3; // xmm0
  unsigned __int8 v4; // r14
  unsigned __int8 v5; // r15
  unsigned __int8 v6; // bl
  unsigned __int8 v7; // r13
  unsigned __int8 v8; // bp
  char v9; // al
  __int64 v10; // r14
  __int64 v11; // rdx
  unsigned __int8 v12; // [rsp+Dh] [rbp-43Bh]
  unsigned __int8 v13; // [rsp+Eh] [rbp-43Ah]
  unsigned __int8 flag; // [rsp+Fh] [rbp-439h]
  unsigned __int64 v15; // [rsp+10h] [rbp-438h] BYREF
  char v16; // [rsp+18h] [rbp-430h]
  _OWORD v17[3]; // [rsp+20h] [rbp-428h] BYREF
  __int64 v18; // [rsp+50h] [rbp-3F8h]
  _BYTE v19[8]; // [rsp+58h] [rbp-3F0h] BYREF
  __int64 v20; // [rsp+60h] [rbp-3E8h]
  __int64 v21; // [rsp+68h] [rbp-3E0h]
  _QWORD v22[2]; // [rsp+70h] [rbp-3D8h] BYREF
  _QWORD v23[2]; // [rsp+80h] [rbp-3C8h] BYREF
  __m128i v24; // [rsp+90h] [rbp-3B8h] BYREF
  _QWORD *dest; // [rsp+A0h] [rbp-3A8h] BYREF
  _QWORD dest_8[21]; // [rsp+A8h] [rbp-3A0h] BYREF
  __m128i v27; // [rsp+150h] [rbp-2F8h] BYREF
  _QWORD *v28; // [rsp+160h] [rbp-2E8h]
  _QWORD src[21]; // [rsp+168h] [rbp-2E0h] BYREF

  uu_uname::uu_app(&v27);
  clap_builder::builder::command::Command::try_get_matches_from(&v24, &v27, a1, a2);
  if ( v24.m128i_i64[0] == 0x8000000000000000LL )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v24.m128i_i64[1]);
  v18 = dest_8[3];
  v3 = _mm_loadu_si128((const __m128i *)&dest);
  v17[2] = *(_OWORD *)&dest_8[1];
  v17[1] = v3;
  v17[0] = v24;
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           v17,
           anon_fa20d908ae531394d995a480a5191403_0_llvm_9354271668978287964,
           *(&uu_uname::options::ALL + 1));
  v13 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          v17,
          anon_fa20d908ae531394d995a480a5191403_1_llvm_9354271668978287964,
          *(&uu_uname::options::KERNEL_NAME + 1));
  v12 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          v17,
          &anon_fa20d908ae531394d995a480a5191403_2_llvm_9354271668978287964,
          *(&uu_uname::options::NODENAME + 1));
  v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
         v17,
         anon_fa20d908ae531394d995a480a5191403_4_llvm_9354271668978287964,
         *(&uu_uname::options::KERNEL_RELEASE + 1));
  v5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
         v17,
         anon_fa20d908ae531394d995a480a5191403_3_llvm_9354271668978287964,
         *(&uu_uname::options::KERNEL_VERSION + 1));
  v6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
         v17,
         anon_fa20d908ae531394d995a480a5191403_5_llvm_9354271668978287964,
         *(&uu_uname::options::MACHINE + 1));
  v7 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
         v17,
         anon_fa20d908ae531394d995a480a5191403_6_llvm_9354271668978287964,
         *(&uu_uname::options::PROCESSOR + 1));
  v8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
         v17,
         anon_fa20d908ae531394d995a480a5191403_7_llvm_9354271668978287964,
         *(&uu_uname::options::HARDWARE_PLATFORM + 1));
  v9 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
         v17,
         anon_fa20d908ae531394d995a480a5191403_8_llvm_9354271668978287964,
         *(&uu_uname::options::OS + 1));
  v15 = _mm_insert_epi16(
          _mm_insert_epi16(_mm_cvtsi32_si128(flag | (v13 << 8) | (v12 << 16) | (v5 << 24)), v4 | (v6 << 8), 2),
          v7 | (v8 << 8),
          3).m128i_u64[0];
  v16 = v9;
  uu_uname::UNameOutput::new(&v27, (char *)&v15);
  v10 = v27.m128i_i64[1];
  if ( v27.m128i_i64[0] == 0x8000000000000001LL )
  {
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v17);
    return v10;
  }
  else
  {
    memcpy(dest_8, src, sizeof(dest_8));
    v24 = v27;
    dest = v28;
    uu_uname::UNameOutput::display((__int64)v19, &v24);
    v23[0] = core::str::<impl str>::trim_end_matches(v20, v21);
    v23[1] = v11;
    v22[0] = v23;
    v22[1] = <&T as core::fmt::Display>::fmt;
    v27.m128i_i64[0] = (__int64)&unk_108900;
    v27.m128i_i64[1] = 2LL;
    src[1] = 0LL;
    v28 = v22;
    src[0] = 1LL;
    std::io::stdio::_print(&v27);
    core::ptr::drop_in_place<alloc::string::String>(v19);
    core::ptr::drop_in_place<uu_uname::UNameOutput>(&v24);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v17);
    return 0LL;
  }
}
