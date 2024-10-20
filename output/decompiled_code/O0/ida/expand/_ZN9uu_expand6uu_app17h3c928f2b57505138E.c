void *__fastcall uu_expand::uu_app(void *dest)
{
  __int64 v1; // rax
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 v5; // r14
  __int64 v6; // r14
  __int64 v7; // r14
  __int128 v9; // [rsp+0h] [rbp-2478h]
  __int64 v10; // [rsp+18h] [rbp-2460h] BYREF
  __int128 v11; // [rsp+20h] [rbp-2458h]
  _OWORD v12[37]; // [rsp+30h] [rbp-2448h] BYREF
  _BYTE v13[588]; // [rsp+280h] [rbp-21F8h] BYREF
  int v14; // [rsp+4CCh] [rbp-1FACh]
  _BYTE v15[588]; // [rsp+4D0h] [rbp-1FA8h] BYREF
  int v16; // [rsp+71Ch] [rbp-1D5Ch]
  _BYTE v17[588]; // [rsp+720h] [rbp-1D58h] BYREF
  int v18; // [rsp+96Ch] [rbp-1B0Ch]
  _DWORD v19[178]; // [rsp+970h] [rbp-1B08h] BYREF
  _OWORD v20[37]; // [rsp+C38h] [rbp-1840h] BYREF
  _DWORD v21[178]; // [rsp+E88h] [rbp-15F0h] BYREF
  _BYTE v22[712]; // [rsp+1150h] [rbp-1328h] BYREF
  _QWORD v23[89]; // [rsp+1418h] [rbp-1060h] BYREF
  _BYTE v24[712]; // [rsp+16E0h] [rbp-D98h] BYREF
  _BYTE v25[592]; // [rsp+19A8h] [rbp-AD0h] BYREF
  _QWORD src[89]; // [rsp+1BF8h] [rbp-880h] BYREF
  _BYTE v27[712]; // [rsp+1EC0h] [rbp-5B8h] BYREF
  _BYTE desta[752]; // [rsp+2188h] [rbp-2F0h] BYREF

  v23[7] = 0LL;
  *(_QWORD *)&v13[464] = 0LL;
  v1 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  v2 = *(_QWORD *)(v1 + 8);
  v3 = *(_QWORD *)(v1 + 16);
  core::slice::raw::from_raw_parts::precondition_check(v2, 1LL, 1LL, v3);
  clap_builder::builder::command::Command::new::new_inner(src, v2, v3);
  src[76] = "0.0.27Convert tabs in each `FILE` to spaces, writing to standard output.\n"
            "With no `FILE`, or when `FILE` is `-`, read standard input.{} [OPTION]... [FILE]...do not convert tabs after"
            " non blanksN, LISThave tabs N characters apart, not 8 or use comma separated list of explicit tab positionsi"
            "nterpret input file as 8-bit ASCII rather than UTF-8: \n"
            ": Is a directory\n"
            "failed to write output";
  src[77] = 6LL;
  memcpy(desta, src, 0x2C8uLL);
  clap_builder::builder::command::Command::about(v27, desta);
  clap_builder::builder::command::Command::after_help(v19, v27);
  uucore::format_usage((unsigned int)&v10);
  v4 = v10;
  if ( v10 != 0x8000000000000000LL )
    v12[0] = v11;
  if ( *(_QWORD *)&v19[116] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(
      &v19[116],
      "{} [OPTION]... [FILE]...do not convert tabs after non blanksN, LISThave tabs N characters apart, not 8 or use comm"
      "a separated list of explicit tab positionsinterpret input file as 8-bit ASCII rather than UTF-8: \n"
      ": Is a directory\n"
      "failed to write output");
  *(_QWORD *)&v19[116] = v4;
  *(_OWORD *)&v19[118] = v12[0];
  memcpy(v21, v19, 0x2BCuLL);
  *(_QWORD *)&v21[175] = *(_QWORD *)&v19[175] | 0x8800000088LL;
  v21[177] = v19[177];
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v12);
  *(_QWORD *)&v12[33] = anon_aaac0ddc4ff511c8d0d06f52b75d74e5_46_llvm_5208339479224688215;
  *((_QWORD *)&v12[33] + 1) = 7LL;
  memcpy(v15, v12, 0x220uLL);
  *(_OWORD *)&v15[560] = v12[35];
  *(_QWORD *)&v15[580] = *(_QWORD *)((char *)&v12[36] + 4);
  v16 = HIDWORD(v12[36]);
  *(_QWORD *)&v15[544] = anon_aaac0ddc4ff511c8d0d06f52b75d74e5_46_llvm_5208339479224688215;
  *(_QWORD *)&v15[552] = 7LL;
  *(_DWORD *)&v15[576] = 105;
  *(_QWORD *)&v12[0] = 0LL;
  *((_QWORD *)&v12[0] + 1) = 1LL;
  *(_QWORD *)&v12[1] = 0LL;
  alloc::string::String::push_str(
    v12,
    "do not convert tabs after non blanksN, LISThave tabs N characters apart, not 8 or use comma separated list of explic"
    "it tab positionsinterpret input file as 8-bit ASCII rather than UTF-8: \n"
    ": Is a directory\n"
    "failed to write output",
    36LL);
  v5 = *(_QWORD *)&v12[0];
  *(_OWORD *)v13 = *(_OWORD *)((char *)v12 + 8);
  if ( *(_QWORD *)&v12[0] != 0x8000000000000000LL )
    v9 = *(_OWORD *)v13;
  if ( *(_QWORD *)&v15[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(
      &v15[440],
      "do not convert tabs after non blanksN, LISThave tabs N characters apart, not 8 or use comma separated list of expl"
      "icit tab positionsinterpret input file as 8-bit ASCII rather than UTF-8: \n"
      ": Is a directory\n"
      "failed to write output");
  *(_QWORD *)&v15[440] = v5;
  *(_OWORD *)&v15[448] = v9;
  memcpy(v12, v15, 0x24CuLL);
  *(_WORD *)((char *)&v12[36] + 13) = *(_WORD *)((char *)&v16 + 1);
  HIBYTE(v12[36]) = HIBYTE(v16);
  BYTE12(v12[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v21, v12);
  memcpy(v24, v21, sizeof(v24));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v13);
  *(_QWORD *)&v13[528] = &anon_aaac0ddc4ff511c8d0d06f52b75d74e5_45_llvm_5208339479224688215;
  *(_QWORD *)&v13[536] = 4LL;
  memcpy(v12, v13, 0x220uLL);
  v12[35] = *(_OWORD *)&v13[560];
  *(_QWORD *)((char *)&v12[36] + 4) = *(_QWORD *)&v13[580];
  HIDWORD(v12[36]) = v14;
  *(_QWORD *)&v12[34] = &anon_aaac0ddc4ff511c8d0d06f52b75d74e5_45_llvm_5208339479224688215;
  *((_QWORD *)&v12[34] + 1) = 4LL;
  LODWORD(v12[36]) = 116;
  *(_QWORD *)v13 = "N, LISThave tabs N characters apart, not 8 or use comma separated list of explicit tab positionsinter"
                   "pret input file as 8-bit ASCII rather than UTF-8: \n"
                   ": Is a directory\n"
                   "failed to write output";
  *(_QWORD *)&v13[8] = 7LL;
  clap_builder::builder::arg::Arg::value_names(v25, v12);
  v25[588] = 1;
  memcpy(v20, v25, sizeof(v20));
  *(_QWORD *)&v12[0] = 0LL;
  *((_QWORD *)&v12[0] + 1) = 1LL;
  *(_QWORD *)&v12[1] = 0LL;
  alloc::string::String::push_str(
    v12,
    "have tabs N characters apart, not 8 or use comma separated list of explicit tab positionsinterpret input file as 8-b"
    "it ASCII rather than UTF-8: \n"
    ": Is a directory\n"
    "failed to write output",
    89LL);
  v6 = *(_QWORD *)&v12[0];
  *(_OWORD *)v13 = *(_OWORD *)((char *)v12 + 8);
  if ( *(_QWORD *)&v12[0] != 0x8000000000000000LL )
    v9 = *(_OWORD *)v13;
  if ( *((_QWORD *)&v20[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(
      (char *)&v20[27] + 8,
      "have tabs N characters apart, not 8 or use comma separated list of explicit tab positionsinterpret input file as 8"
      "-bit ASCII rather than UTF-8: \n"
      ": Is a directory\n"
      "failed to write output");
  *((_QWORD *)&v20[27] + 1) = v6;
  v20[28] = v9;
  memcpy(v12, v20, sizeof(v12));
  clap_builder::builder::command::Command::arg_internal(v24, v12);
  memcpy(v23, v24, sizeof(v23));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v12);
  *(_QWORD *)&v12[33] = anon_aaac0ddc4ff511c8d0d06f52b75d74e5_47_llvm_5208339479224688215;
  *((_QWORD *)&v12[33] + 1) = 7LL;
  memcpy(v17, v12, 0x220uLL);
  *(_OWORD *)&v17[560] = v12[35];
  *(_QWORD *)&v17[580] = *(_QWORD *)((char *)&v12[36] + 4);
  v18 = HIDWORD(v12[36]);
  *(_QWORD *)&v17[544] = anon_aaac0ddc4ff511c8d0d06f52b75d74e5_47_llvm_5208339479224688215;
  *(_QWORD *)&v17[552] = 7LL;
  *(_DWORD *)&v17[576] = 85;
  *(_QWORD *)&v12[0] = 0LL;
  *((_QWORD *)&v12[0] + 1) = 1LL;
  *(_QWORD *)&v12[1] = 0LL;
  alloc::string::String::push_str(
    v12,
    "interpret input file as 8-bit ASCII rather than UTF-8: \n: Is a directory\nfailed to write output",
    53LL);
  v7 = *(_QWORD *)&v12[0];
  *(_OWORD *)v13 = *(_OWORD *)((char *)v12 + 8);
  if ( *(_QWORD *)&v12[0] != 0x8000000000000000LL )
    v9 = *(_OWORD *)v13;
  if ( *(_QWORD *)&v17[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(
      &v17[440],
      "interpret input file as 8-bit ASCII rather than UTF-8: \n: Is a directory\nfailed to write output");
  *(_QWORD *)&v17[440] = v7;
  *(_OWORD *)&v17[448] = v9;
  memcpy(v12, v17, 0x24CuLL);
  *(_WORD *)((char *)&v12[36] + 13) = *(_WORD *)((char *)&v18 + 1);
  HIBYTE(v12[36]) = HIBYTE(v18);
  BYTE12(v12[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v23, v12);
  memcpy(v22, v23, sizeof(v22));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v13);
  *(_QWORD *)&v13[528] = anon_aaac0ddc4ff511c8d0d06f52b75d74e5_48_llvm_5208339479224688215;
  *(_QWORD *)&v13[536] = 5LL;
  memcpy(v12, v13, 0x248uLL);
  DWORD2(v12[36]) = *(_DWORD *)&v13[584] | 4;
  WORD6(v12[36]) = 769;
  HIWORD(v12[36]) = HIWORD(v14);
  clap_builder::builder::command::Command::arg_internal(v22, v12);
  memcpy(dest, v22, 0x2C8uLL);
  return dest;
}
