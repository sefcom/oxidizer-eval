void *__fastcall uu_unexpand::uu_app(void *dest)
{
  __int64 v1; // rax
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 v5; // r14
  __int64 v6; // r14
  __int64 v7; // r14
  __int64 v8; // r14
  __int128 v10; // [rsp+0h] [rbp-2998h]
  _OWORD v11[37]; // [rsp+10h] [rbp-2988h] BYREF
  __int64 v12; // [rsp+268h] [rbp-2730h] BYREF
  __int128 v13; // [rsp+270h] [rbp-2728h]
  _BYTE v14[584]; // [rsp+280h] [rbp-2718h] BYREF
  int v15; // [rsp+4C8h] [rbp-24D0h]
  __int16 v16; // [rsp+4CEh] [rbp-24CAh]
  _BYTE v17[588]; // [rsp+4D8h] [rbp-24C0h] BYREF
  int v18; // [rsp+724h] [rbp-2274h]
  _BYTE v19[592]; // [rsp+728h] [rbp-2270h] BYREF
  _BYTE v20[588]; // [rsp+978h] [rbp-2020h] BYREF
  int v21; // [rsp+BC4h] [rbp-1DD4h]
  _BYTE v22[592]; // [rsp+BC8h] [rbp-1DD0h] BYREF
  _QWORD desta[89]; // [rsp+E18h] [rbp-1B80h] BYREF
  _BYTE v24[712]; // [rsp+10E0h] [rbp-18B8h] BYREF
  _BYTE v25[712]; // [rsp+13A8h] [rbp-15F0h] BYREF
  _BYTE v26[712]; // [rsp+1670h] [rbp-1328h] BYREF
  _QWORD v27[89]; // [rsp+1938h] [rbp-1060h] BYREF
  _BYTE v28[712]; // [rsp+1C00h] [rbp-D98h] BYREF
  _QWORD src[89]; // [rsp+1EC8h] [rbp-AD0h] BYREF
  _BYTE v30[592]; // [rsp+2190h] [rbp-808h] BYREF
  _DWORD v31[178]; // [rsp+23E0h] [rbp-5B8h] BYREF
  _BYTE v32[752]; // [rsp+26A8h] [rbp-2F0h] BYREF

  v27[7] = 0LL;
  *(_QWORD *)&v19[584] = 0LL;
  v1 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  v2 = *(_QWORD *)(v1 + 8);
  v3 = *(_QWORD *)(v1 + 16);
  core::slice::raw::from_raw_parts::precondition_check(v2, 1LL, 1LL, v3);
  clap_builder::builder::command::Command::new::new_inner(src, v2, v3);
  src[76] = "0.0.27{} [OPTION]... [FILE]...Convert blanks in each `FILE` to tabs, writing to standard output.\n"
            "With no `FILE`, or when `FILE` is `-`, read standard input.convert all blanks, instead of just initial blank"
            "sconvert only leading sequences of blanks (overrides -a)use comma separated LIST of tab positions or have ta"
            "bs N characters apart instead of 8 (enables -a)N, LISTinterpret input file as 8-bit ASCII rather than UTF-8\t: \n ";
  src[77] = 6LL;
  memcpy(desta, src, sizeof(desta));
  uucore::format_usage((unsigned int)&v12);
  v4 = v12;
  if ( v12 != 0x8000000000000000LL )
    v11[0] = v13;
  if ( desta[58] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(
      &desta[58],
      "{} [OPTION]... [FILE]...Convert blanks in each `FILE` to tabs, writing to standard output.\n"
      "With no `FILE`, or when `FILE` is `-`, read standard input.convert all blanks, instead of just initial blanksconve"
      "rt only leading sequences of blanks (overrides -a)use comma separated LIST of tab positions or have tabs N charact"
      "ers apart instead of 8 (enables -a)N, LISTinterpret input file as 8-bit ASCII rather than UTF-8\t: \n"
      " ");
  desta[58] = v4;
  *(_OWORD *)&desta[59] = v11[0];
  memcpy(v32, desta, 0x2C8uLL);
  clap_builder::builder::command::Command::about(v31, v32);
  *(_QWORD *)&v31[175] |= 0x8000000080uLL;
  memcpy(v28, v31, sizeof(v28));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v14);
  *(_QWORD *)&v14[528] = aFile;
  *(_QWORD *)&v14[536] = 4LL;
  memcpy(v11, v14, 0x248uLL);
  DWORD2(v11[36]) = v15 | 4;
  WORD6(v11[36]) = 769;
  HIWORD(v11[36]) = v16;
  clap_builder::builder::command::Command::arg_internal(v28, v11);
  memcpy(v27, v28, sizeof(v27));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v11);
  *(_QWORD *)&v11[33] = aAll;
  *((_QWORD *)&v11[33] + 1) = 3LL;
  memcpy(v17, v11, 0x220uLL);
  *(_OWORD *)&v17[560] = v11[35];
  *(_QWORD *)&v17[580] = *(_QWORD *)((char *)&v11[36] + 4);
  v18 = HIDWORD(v11[36]);
  *(_QWORD *)&v17[544] = aAll;
  *(_QWORD *)&v17[552] = 3LL;
  *(_DWORD *)&v17[576] = 97;
  *(_QWORD *)&v11[0] = 0LL;
  *((_QWORD *)&v11[0] + 1) = 1LL;
  *(_QWORD *)&v11[1] = 0LL;
  alloc::string::String::push_str(
    v11,
    "convert all blanks, instead of just initial blanksconvert only leading sequences of blanks (overrides -a)use comma s"
    "eparated LIST of tab positions or have tabs N characters apart instead of 8 (enables -a)N, LISTinterpret input file "
    "as 8-bit ASCII rather than UTF-8\t: \n"
    " ",
    50LL);
  v5 = *(_QWORD *)&v11[0];
  *(_OWORD *)v14 = *(_OWORD *)((char *)v11 + 8);
  if ( *(_QWORD *)&v11[0] != 0x8000000000000000LL )
    v10 = *(_OWORD *)v14;
  if ( *(_QWORD *)&v17[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(
      &v17[440],
      "convert all blanks, instead of just initial blanksconvert only leading sequences of blanks (overrides -a)use comma"
      " separated LIST of tab positions or have tabs N characters apart instead of 8 (enables -a)N, LISTinterpret input f"
      "ile as 8-bit ASCII rather than UTF-8\t: \n"
      " ");
  *(_QWORD *)&v17[440] = v5;
  *(_OWORD *)&v17[448] = v10;
  memcpy(v11, v17, 0x24CuLL);
  *(_WORD *)((char *)&v11[36] + 13) = *(_WORD *)((char *)&v18 + 1);
  HIBYTE(v11[36]) = HIBYTE(v18);
  BYTE12(v11[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v27, v11);
  memcpy(v26, v27, sizeof(v26));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v11);
  *(_QWORD *)&v11[33] = aFirstOnly;
  *((_QWORD *)&v11[33] + 1) = 10LL;
  memcpy(v22, v11, 0x220uLL);
  *(_OWORD *)&v22[560] = v11[35];
  *(_OWORD *)&v22[576] = v11[36];
  *(_QWORD *)&v22[544] = aFirstOnly;
  *(_QWORD *)&v22[552] = 10LL;
  *(_QWORD *)&v11[0] = 0LL;
  *((_QWORD *)&v11[0] + 1) = 1LL;
  *(_QWORD *)&v11[1] = 0LL;
  alloc::string::String::push_str(
    v11,
    "convert only leading sequences of blanks (overrides -a)use comma separated LIST of tab positions or have tabs N char"
    "acters apart instead of 8 (enables -a)N, LISTinterpret input file as 8-bit ASCII rather than UTF-8\t: \n"
    " ",
    55LL);
  v6 = *(_QWORD *)&v11[0];
  *(_OWORD *)v14 = *(_OWORD *)((char *)v11 + 8);
  if ( *(_QWORD *)&v11[0] != 0x8000000000000000LL )
    v10 = *(_OWORD *)v14;
  if ( *(_QWORD *)&v22[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(
      &v22[440],
      "convert only leading sequences of blanks (overrides -a)use comma separated LIST of tab positions or have tabs N ch"
      "aracters apart instead of 8 (enables -a)N, LISTinterpret input file as 8-bit ASCII rather than UTF-8\t: \n"
      " ");
  *(_QWORD *)&v22[440] = v6;
  *(_OWORD *)&v22[448] = v10;
  memcpy(v11, v22, 0x24CuLL);
  *(_WORD *)((char *)&v11[36] + 13) = *(_WORD *)&v22[589];
  HIBYTE(v11[36]) = v22[591];
  BYTE12(v11[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v26, v11);
  memcpy(v25, v26, sizeof(v25));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v11);
  *(_QWORD *)&v11[33] = &unk_183DC;
  *((_QWORD *)&v11[33] + 1) = 4LL;
  memcpy(v19, v11, 0x220uLL);
  *(_OWORD *)&v19[560] = v11[35];
  *(_QWORD *)&v19[580] = *(_QWORD *)((char *)&v11[36] + 4);
  *(_DWORD *)&v19[588] = HIDWORD(v11[36]);
  *(_QWORD *)&v19[544] = &unk_183DC;
  *(_QWORD *)&v19[552] = 4LL;
  *(_DWORD *)&v19[576] = 116;
  *(_QWORD *)&v11[0] = 0LL;
  *((_QWORD *)&v11[0] + 1) = 1LL;
  *(_QWORD *)&v11[1] = 0LL;
  alloc::string::String::push_str(
    v11,
    "use comma separated LIST of tab positions or have tabs N characters apart instead of 8 (enables -a)N, LISTinterpret "
    "input file as 8-bit ASCII rather than UTF-8\t: \n"
    " ",
    99LL);
  v7 = *(_QWORD *)&v11[0];
  *(_OWORD *)v14 = *(_OWORD *)((char *)v11 + 8);
  if ( *(_QWORD *)&v11[0] != 0x8000000000000000LL )
    v10 = *(_OWORD *)v14;
  if ( *(_QWORD *)&v19[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(
      &v19[440],
      "use comma separated LIST of tab positions or have tabs N characters apart instead of 8 (enables -a)N, LISTinterpre"
      "t input file as 8-bit ASCII rather than UTF-8\t: \n"
      " ");
  *(_QWORD *)&v19[440] = v7;
  *(_OWORD *)&v19[448] = v10;
  memcpy(v11, v19, 0x24CuLL);
  *(_WORD *)((char *)&v11[36] + 13) = *(_WORD *)&v19[589];
  HIBYTE(v11[36]) = v19[591];
  BYTE12(v11[36]) = 1;
  *(_QWORD *)v14 = "N, LISTinterpret input file as 8-bit ASCII rather than UTF-8\t: \n ";
  *(_QWORD *)&v14[8] = 7LL;
  clap_builder::builder::arg::Arg::value_names(v30, v11);
  memcpy(v11, v30, sizeof(v11));
  clap_builder::builder::command::Command::arg_internal(v25, v11);
  memcpy(v24, v25, sizeof(v24));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v11);
  *(_QWORD *)&v11[33] = aNoUtf8;
  *((_QWORD *)&v11[33] + 1) = 7LL;
  memcpy(v20, v11, 0x220uLL);
  *(_OWORD *)&v20[560] = v11[35];
  *(_QWORD *)&v20[580] = *(_QWORD *)((char *)&v11[36] + 4);
  v21 = HIDWORD(v11[36]);
  *(_QWORD *)&v20[544] = aNoUtf8;
  *(_QWORD *)&v20[552] = 7LL;
  *(_DWORD *)&v20[576] = 85;
  *(_QWORD *)&v11[0] = 0LL;
  *((_QWORD *)&v11[0] + 1) = 1LL;
  *(_QWORD *)&v11[1] = 0LL;
  alloc::string::String::push_str(v11, "interpret input file as 8-bit ASCII rather than UTF-8\t: \n ", 53LL);
  v8 = *(_QWORD *)&v11[0];
  *(_OWORD *)v14 = *(_OWORD *)((char *)v11 + 8);
  if ( *(_QWORD *)&v11[0] != 0x8000000000000000LL )
    v10 = *(_OWORD *)v14;
  if ( *(_QWORD *)&v20[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(
      &v20[440],
      "interpret input file as 8-bit ASCII rather than UTF-8\t: \n ");
  *(_QWORD *)&v20[440] = v8;
  *(_OWORD *)&v20[448] = v10;
  memcpy(v11, v20, 0x24CuLL);
  *(_WORD *)((char *)&v11[36] + 13) = *(_WORD *)((char *)&v21 + 1);
  HIBYTE(v11[36]) = HIBYTE(v21);
  BYTE12(v11[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v24, v11);
  memcpy(dest, v24, 0x2C8uLL);
  return dest;
}
