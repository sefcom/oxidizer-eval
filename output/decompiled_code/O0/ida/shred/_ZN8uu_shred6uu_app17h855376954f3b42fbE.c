void *__fastcall uu_shred::uu_app(void *dest)
{
  __int64 v2; // rax
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rbx
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rbx
  __int64 v22; // rbx
  __int64 v23; // rbx
  __int128 v25; // [rsp+0h] [rbp-40C8h] BYREF
  __int128 v26; // [rsp+10h] [rbp-40B8h]
  __int128 v27; // [rsp+28h] [rbp-40A0h] BYREF
  __int64 v28; // [rsp+38h] [rbp-4090h]
  _OWORD v29[37]; // [rsp+40h] [rbp-4088h] BYREF
  __int64 v30; // [rsp+298h] [rbp-3E30h] BYREF
  __int128 v31; // [rsp+2A0h] [rbp-3E28h]
  __int128 v32; // [rsp+2B0h] [rbp-3E18h]
  __int64 v33; // [rsp+2C0h] [rbp-3E08h]
  __int128 v34; // [rsp+2D0h] [rbp-3DF8h] BYREF
  __int64 v35; // [rsp+2E0h] [rbp-3DE8h]
  __int64 v36; // [rsp+2E8h] [rbp-3DE0h] BYREF
  __int128 v37; // [rsp+2F0h] [rbp-3DD8h]
  _OWORD v38[37]; // [rsp+300h] [rbp-3DC8h] BYREF
  _BYTE v39[588]; // [rsp+550h] [rbp-3B78h] BYREF
  int v40; // [rsp+79Ch] [rbp-392Ch]
  _BYTE v41[588]; // [rsp+7A0h] [rbp-3928h] BYREF
  int v42; // [rsp+9ECh] [rbp-36DCh]
  _BYTE v43[588]; // [rsp+9F0h] [rbp-36D8h] BYREF
  int v44; // [rsp+C3Ch] [rbp-348Ch]
  _BYTE v45[588]; // [rsp+C40h] [rbp-3488h] BYREF
  int v46; // [rsp+E8Ch] [rbp-323Ch]
  _OWORD v47[37]; // [rsp+E90h] [rbp-3238h] BYREF
  _BYTE v48[588]; // [rsp+10E0h] [rbp-2FE8h] BYREF
  int v49; // [rsp+132Ch] [rbp-2D9Ch]
  __int128 v50; // [rsp+1330h] [rbp-2D98h] BYREF
  _OWORD v51[34]; // [rsp+1358h] [rbp-2D70h] BYREF
  __int64 v52; // [rsp+1578h] [rbp-2B50h]
  _OWORD v53[37]; // [rsp+1580h] [rbp-2B48h] BYREF
  _DWORD v54[178]; // [rsp+17D0h] [rbp-28F8h] BYREF
  _OWORD v55[37]; // [rsp+1A98h] [rbp-2630h] BYREF
  _DWORD v56[178]; // [rsp+1CE8h] [rbp-23E0h] BYREF
  _QWORD v57[89]; // [rsp+1FB0h] [rbp-2118h] BYREF
  _BYTE v58[712]; // [rsp+2278h] [rbp-1E50h] BYREF
  _BYTE v59[712]; // [rsp+2540h] [rbp-1B88h] BYREF
  _BYTE v60[712]; // [rsp+2808h] [rbp-18C0h] BYREF
  _BYTE v61[712]; // [rsp+2AD0h] [rbp-15F8h] BYREF
  _BYTE v62[712]; // [rsp+2D98h] [rbp-1330h] BYREF
  _QWORD v63[89]; // [rsp+3060h] [rbp-1068h] BYREF
  _BYTE v64[712]; // [rsp+3328h] [rbp-DA0h] BYREF
  _QWORD src[89]; // [rsp+35F0h] [rbp-AD8h] BYREF
  _BYTE v66[592]; // [rsp+38B8h] [rbp-810h] BYREF
  _BYTE v67[712]; // [rsp+3B08h] [rbp-5C0h] BYREF
  _BYTE desta[760]; // [rsp+3DD0h] [rbp-2F8h] BYREF

  v63[7] = 0LL;
  v57[29] = 0LL;
  *((_QWORD *)&v47[32] + 1) = 0LL;
  *((_QWORD *)&v29[5] + 1) = 0LL;
  v2 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  v3 = *(_QWORD *)(v2 + 8);
  v4 = *(_QWORD *)(v2 + 16);
  core::slice::raw::from_raw_parts::precondition_check(v3, 1LL, 1LL, v4);
  clap_builder::builder::command::Command::new::new_inner(src, v3, v4);
  src[76] = a0027;
  src[77] = 6LL;
  memcpy(desta, src, 0x2C8uLL);
  clap_builder::builder::command::Command::about(v67, desta);
  clap_builder::builder::command::Command::after_help(v54, v67);
  uucore::format_usage((unsigned int)&v36);
  v5 = v36;
  if ( v36 != 0x8000000000000000LL )
    v29[0] = v37;
  if ( *(_QWORD *)&v54[116] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v54[116], aOptionFile);
  *(_QWORD *)&v54[116] = v5;
  *(_OWORD *)&v54[118] = v29[0];
  memcpy(v56, v54, 0x2BCuLL);
  *(_QWORD *)&v56[175] = *(_QWORD *)&v54[175] | 0x8000000080LL;
  v56[177] = v54[177];
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v29);
  *(_QWORD *)&v29[33] = aForce_0;
  *((_QWORD *)&v29[33] + 1) = 5LL;
  memcpy(v39, v29, 0x220uLL);
  *(_OWORD *)&v39[560] = v29[35];
  *(_QWORD *)&v39[580] = *(_QWORD *)((char *)&v29[36] + 4);
  v40 = HIDWORD(v29[36]);
  *(_QWORD *)&v39[544] = aForce_0;
  *(_QWORD *)&v39[552] = 5LL;
  *(_DWORD *)&v39[576] = 102;
  *(_QWORD *)&v29[0] = 0LL;
  *((_QWORD *)&v29[0] + 1) = 1LL;
  *(_QWORD *)&v29[1] = 0LL;
  alloc::string::String::push_str(v29, aChangePermissi, 48LL);
  v6 = *(_QWORD *)&v29[0];
  v38[0] = *(_OWORD *)((char *)v29 + 8);
  if ( *(_QWORD *)&v29[0] != 0x8000000000000000LL )
    v25 = v38[0];
  if ( *(_QWORD *)&v39[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v39[440], aChangePermissi);
  *(_QWORD *)&v39[440] = v6;
  *(_OWORD *)&v39[448] = v25;
  memcpy(v29, v39, 0x24CuLL);
  *(_WORD *)((char *)&v29[36] + 13) = *(_WORD *)((char *)&v40 + 1);
  HIBYTE(v29[36]) = HIBYTE(v40);
  BYTE12(v29[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v56, v29);
  memcpy(v64, v56, sizeof(v64));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v29);
  *(_QWORD *)&v29[33] = aIterations_0;
  *((_QWORD *)&v29[33] + 1) = 10LL;
  memcpy(v47, v29, 0x220uLL);
  v47[35] = v29[35];
  *(_QWORD *)((char *)&v47[36] + 4) = *(_QWORD *)((char *)&v29[36] + 4);
  HIDWORD(v47[36]) = HIDWORD(v29[36]);
  *(_QWORD *)&v47[34] = aIterations_0;
  *((_QWORD *)&v47[34] + 1) = 10LL;
  LODWORD(v47[36]) = 110;
  *(_QWORD *)&v29[0] = 0LL;
  *((_QWORD *)&v29[0] + 1) = 1LL;
  *(_QWORD *)&v29[1] = 0LL;
  alloc::string::String::push_str(v29, aOverwriteNTime, 44LL);
  v7 = *(_QWORD *)&v29[0];
  v38[0] = *(_OWORD *)((char *)v29 + 8);
  if ( *(_QWORD *)&v29[0] != 0x8000000000000000LL )
    v25 = v38[0];
  if ( *((_QWORD *)&v47[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v47[27] + 8, aOverwriteNTime);
  *((_QWORD *)&v47[27] + 1) = v7;
  v47[28] = v25;
  memcpy(v29, v47, sizeof(v29));
  *(_QWORD *)&v38[0] = aNumber;
  *((_QWORD *)&v38[0] + 1) = 6LL;
  clap_builder::builder::arg::Arg::value_names(v66, v29);
  memcpy(v38, v66, sizeof(v38));
  *(_QWORD *)&v25 = a3;
  *((_QWORD *)&v25 + 1) = 1LL;
  *(_QWORD *)&v26 = 0LL;
  *((_QWORD *)&v26 + 1) = 1LL;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v30, 1LL, 0LL);
  if ( v30 )
    alloc::raw_vec::handle_error(v31, *((_QWORD *)&v31 + 1));
  v8 = *((_QWORD *)&v31 + 1);
  v27 = v31;
  v28 = 0LL;
  v29[1] = v26;
  v29[0] = v25;
  if ( *((_QWORD *)&v26 + 1) - (_QWORD)v26 <= (unsigned __int64)v31 )
  {
    v9 = 0LL;
  }
  else
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v27, 0LL);
    v8 = *((_QWORD *)&v27 + 1);
    v9 = v28;
  }
  v11 = *((_QWORD *)&v29[0] + 1);
  v10 = *(_QWORD *)&v29[0];
  v12 = 16 * v9;
  *(_QWORD *)(v8 + v12) = *(_QWORD *)&v29[0];
  *(_QWORD *)(v8 + v12 + 8) = v11;
  v28 = v9 + 1;
  v33 = v28;
  v32 = v27;
  if ( *(_QWORD *)&v38[23] )
  {
    if ( *(_QWORD *)&v38[23] > 0xFFFFFFFFFFFFFFFuLL )
      goto LABEL_62;
    v13 = 16LL * *(_QWORD *)&v38[23];
    *(_QWORD *)&v29[0] = *((_QWORD *)&v38[23] + 1);
    *((_QWORD *)&v29[0] + 1) = 8LL;
    v14 = 16LL;
  }
  else
  {
    v14 = 8LL;
    v13 = 0LL;
  }
  *(_QWORD *)((char *)v29 + v14) = v13;
  if ( *((_QWORD *)&v29[0] + 1) && *(_QWORD *)&v29[1] )
    _rust_dealloc(*(_QWORD *)&v29[0]);
  *(_QWORD *)&v38[24] = v33;
  v38[23] = v32;
  memcpy(v29, v38, sizeof(v29));
  clap_builder::builder::command::Command::arg_internal(v64, v29);
  memcpy(v63, v64, sizeof(v63));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v38);
  *(_QWORD *)&v38[33] = aSize;
  *((_QWORD *)&v38[33] + 1) = 4LL;
  memcpy(v29, v38, 0x220uLL);
  v29[35] = v38[35];
  *(_QWORD *)((char *)&v29[36] + 4) = *(_QWORD *)((char *)&v38[36] + 4);
  HIDWORD(v29[36]) = HIDWORD(v38[36]);
  *(_QWORD *)&v29[34] = aSize;
  *((_QWORD *)&v29[34] + 1) = 4LL;
  LODWORD(v29[36]) = 115;
  *(_QWORD *)&v38[0] = aN;
  *((_QWORD *)&v38[0] + 1) = 1LL;
  clap_builder::builder::arg::Arg::value_names(v55, v29);
  *(_QWORD *)&v29[0] = 0LL;
  *((_QWORD *)&v29[0] + 1) = 1LL;
  *(_QWORD *)&v29[1] = 0LL;
  alloc::string::String::push_str(v29, aShredThisManyB, 54LL);
  v15 = *(_QWORD *)&v29[0];
  v38[0] = *(_OWORD *)((char *)v29 + 8);
  if ( *(_QWORD *)&v29[0] != 0x8000000000000000LL )
    v25 = v38[0];
  if ( *((_QWORD *)&v55[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v55[27] + 8, aShredThisManyB);
  *((_QWORD *)&v55[27] + 1) = v15;
  v55[28] = v25;
  memcpy(v29, v55, sizeof(v29));
  clap_builder::builder::command::Command::arg_internal(v63, v29);
  memcpy(v62, v63, sizeof(v62));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v29);
  *(_QWORD *)&v29[33] = aU_0;
  *((_QWORD *)&v29[33] + 1) = 1LL;
  memcpy(v48, v29, 0x240uLL);
  *(_QWORD *)&v48[580] = *(_QWORD *)((char *)&v29[36] + 4);
  v49 = HIDWORD(v29[36]);
  *(_DWORD *)&v48[576] = 117;
  *(_QWORD *)&v29[0] = 0LL;
  *((_QWORD *)&v29[0] + 1) = 1LL;
  *(_QWORD *)&v29[1] = 0LL;
  alloc::string::String::push_str(v29, aDeallocateAndR, 44LL);
  v16 = *(_QWORD *)&v29[0];
  v38[0] = *(_OWORD *)((char *)v29 + 8);
  if ( *(_QWORD *)&v29[0] != 0x8000000000000000LL )
    v25 = v38[0];
  if ( *(_QWORD *)&v48[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v48[440], aDeallocateAndR);
  *(_QWORD *)&v48[440] = v16;
  *(_OWORD *)&v48[448] = v25;
  memcpy(v29, v48, 0x24CuLL);
  *(_WORD *)((char *)&v29[36] + 13) = *(_WORD *)((char *)&v49 + 1);
  HIBYTE(v29[36]) = HIBYTE(v49);
  BYTE12(v29[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v62, v29);
  memcpy(v61, v62, sizeof(v61));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v38);
  *(_QWORD *)&v38[33] = aRemove_0;
  *((_QWORD *)&v38[33] + 1) = 6LL;
  memcpy(v29, v38, 0x220uLL);
  v29[35] = v38[35];
  v29[36] = v38[36];
  *(_QWORD *)&v29[34] = aRemove_0;
  *((_QWORD *)&v29[34] + 1) = 6LL;
  *(_QWORD *)&v38[0] = aHow;
  *((_QWORD *)&v38[0] + 1) = 3LL;
  clap_builder::builder::arg::Arg::value_names(&v50, v29);
  *(_QWORD *)&v29[0] = aUnlink_1;
  *((_QWORD *)&v29[0] + 1) = 6LL;
  *(_QWORD *)&v29[1] = aWipe;
  *((_QWORD *)&v29[1] + 1) = 4LL;
  *(_QWORD *)&v29[2] = aWipesync;
  *((_QWORD *)&v29[2] + 1) = 8LL;
  *(_QWORD *)&v29[3] = 0LL;
  *((_QWORD *)&v29[3] + 1) = 3LL;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(v38, v29);
  v34 = v38[0];
  v35 = *(_QWORD *)&v38[1];
  clap_builder::builder::value_parser::ValueParser::new(v29, &v34);
  v17 = *(_QWORD *)&v29[0];
  v38[0] = *(_OWORD *)((char *)v29 + 8);
  if ( *(_QWORD *)&v29[0] != 5LL )
    v25 = v38[0];
  if ( *((_QWORD *)&v51[2] + 1) >= 4uLL && *((_QWORD *)&v51[2] + 1) != 5LL )
    core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(&v51[3]);
  *((_QWORD *)&v51[2] + 1) = v17;
  v51[3] = v25;
  v29[0] = v50;
  memcpy((char *)&v29[2] + 8, v51, 0x220uLL);
  v29[1] = 1uLL;
  *(_QWORD *)&v29[2] = 1LL;
  *((_QWORD *)&v29[36] + 1) = v52 | 0x80;
  *(_QWORD *)&v38[0] = aWipesync;
  *((_QWORD *)&v38[0] + 1) = 8LL;
  *(_QWORD *)&v38[1] = 0LL;
  *((_QWORD *)&v38[1] + 1) = 1LL;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v25, v38);
  if ( !*(_QWORD *)&v29[26] )
  {
    v19 = 8LL;
    v18 = 0LL;
    goto LABEL_42;
  }
  if ( *(_QWORD *)&v29[26] > 0xFFFFFFFFFFFFFFFuLL )
LABEL_62:
    core::panicking::panic_nounwind(anon_e45d65516cdf6c355a9aa2094419ed73_18_llvm_7530283562111826792, 69LL, v10);
  v18 = 16LL * *(_QWORD *)&v29[26];
  *(_QWORD *)&v38[0] = *((_QWORD *)&v29[26] + 1);
  *((_QWORD *)&v38[0] + 1) = 8LL;
  v19 = 16LL;
LABEL_42:
  *(_QWORD *)((char *)v38 + v19) = v18;
  if ( *((_QWORD *)&v38[0] + 1) && *(_QWORD *)&v38[1] )
    _rust_dealloc(*(_QWORD *)&v38[0]);
  *(_QWORD *)&v29[27] = v26;
  v29[26] = v25;
  memcpy(v53, v29, sizeof(v53));
  *(_QWORD *)&v29[0] = 0LL;
  *((_QWORD *)&v29[0] + 1) = 1LL;
  *(_QWORD *)&v29[1] = 0LL;
  alloc::string::String::push_str(v29, aLikeUButGiveCo, 53LL);
  v20 = *(_QWORD *)&v29[0];
  v38[0] = *(_OWORD *)((char *)v29 + 8);
  if ( *(_QWORD *)&v29[0] != 0x8000000000000000LL )
    v25 = v38[0];
  if ( *((_QWORD *)&v53[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v53[27] + 8, aLikeUButGiveCo);
  *((_QWORD *)&v53[27] + 1) = v20;
  v53[28] = v25;
  memcpy(v29, v53, 0x24CuLL);
  *(_WORD *)((char *)&v29[36] + 13) = *(_WORD *)((char *)&v53[36] + 13);
  HIBYTE(v29[36]) = HIBYTE(v53[36]);
  BYTE12(v29[36]) = 0;
  clap_builder::builder::command::Command::arg_internal(v61, v29);
  memcpy(v60, v61, sizeof(v60));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v29);
  *(_QWORD *)&v29[33] = aVerbose_0;
  *((_QWORD *)&v29[33] + 1) = 7LL;
  memcpy(v41, v29, 0x220uLL);
  *(_OWORD *)&v41[560] = v29[35];
  *(_QWORD *)&v41[580] = *(_QWORD *)((char *)&v29[36] + 4);
  v42 = HIDWORD(v29[36]);
  *(_QWORD *)&v41[544] = aVerbose_0;
  *(_QWORD *)&v41[552] = 7LL;
  *(_DWORD *)&v41[576] = 118;
  *(_QWORD *)&v29[0] = 0LL;
  *((_QWORD *)&v29[0] + 1) = 1LL;
  *(_QWORD *)&v29[1] = 0LL;
  alloc::string::String::push_str(v29, aShowProgress, 13LL);
  v21 = *(_QWORD *)&v29[0];
  v38[0] = *(_OWORD *)((char *)v29 + 8);
  if ( *(_QWORD *)&v29[0] != 0x8000000000000000LL )
    v25 = v38[0];
  if ( *(_QWORD *)&v41[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v41[440], aShowProgress);
  *(_QWORD *)&v41[440] = v21;
  *(_OWORD *)&v41[448] = v25;
  memcpy(v29, v41, 0x24CuLL);
  *(_WORD *)((char *)&v29[36] + 13) = *(_WORD *)((char *)&v42 + 1);
  HIBYTE(v29[36]) = HIBYTE(v42);
  BYTE12(v29[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v60, v29);
  memcpy(v59, v60, sizeof(v59));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v29);
  *(_QWORD *)&v29[33] = aExact_0;
  *((_QWORD *)&v29[33] + 1) = 5LL;
  memcpy(v43, v29, 0x220uLL);
  *(_OWORD *)&v43[560] = v29[35];
  *(_QWORD *)&v43[580] = *(_QWORD *)((char *)&v29[36] + 4);
  v44 = HIDWORD(v29[36]);
  *(_QWORD *)&v43[544] = aExact_0;
  *(_QWORD *)&v43[552] = 5LL;
  *(_DWORD *)&v43[576] = 120;
  *(_QWORD *)&v29[0] = 0LL;
  *((_QWORD *)&v29[0] + 1) = 1LL;
  *(_QWORD *)&v29[1] = 0LL;
  alloc::string::String::push_str(v29, aDoNotRoundFile, 92LL);
  v22 = *(_QWORD *)&v29[0];
  v38[0] = *(_OWORD *)((char *)v29 + 8);
  if ( *(_QWORD *)&v29[0] != 0x8000000000000000LL )
    v25 = v38[0];
  if ( *(_QWORD *)&v43[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v43[440], aDoNotRoundFile);
  *(_QWORD *)&v43[440] = v22;
  *(_OWORD *)&v43[448] = v25;
  memcpy(v29, v43, 0x24CuLL);
  *(_WORD *)((char *)&v29[36] + 13) = *(_WORD *)((char *)&v44 + 1);
  HIBYTE(v29[36]) = HIBYTE(v44);
  BYTE12(v29[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v59, v29);
  memcpy(v58, v59, sizeof(v58));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v29);
  *(_QWORD *)&v29[33] = aZero_0;
  *((_QWORD *)&v29[33] + 1) = 4LL;
  memcpy(v45, v29, 0x220uLL);
  *(_OWORD *)&v45[560] = v29[35];
  *(_QWORD *)&v45[580] = *(_QWORD *)((char *)&v29[36] + 4);
  v46 = HIDWORD(v29[36]);
  *(_QWORD *)&v45[544] = aZero_0;
  *(_QWORD *)&v45[552] = 4LL;
  *(_DWORD *)&v45[576] = 122;
  *(_QWORD *)&v29[0] = 0LL;
  *((_QWORD *)&v29[0] + 1) = 1LL;
  *(_QWORD *)&v29[1] = 0LL;
  alloc::string::String::push_str(v29, aAddAFinalOverw, 50LL);
  v23 = *(_QWORD *)&v29[0];
  v38[0] = *(_OWORD *)((char *)v29 + 8);
  if ( *(_QWORD *)&v29[0] != 0x8000000000000000LL )
    v25 = v38[0];
  if ( *(_QWORD *)&v45[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v45[440], aAddAFinalOverw);
  *(_QWORD *)&v45[440] = v23;
  *(_OWORD *)&v45[448] = v25;
  memcpy(v29, v45, 0x24CuLL);
  *(_WORD *)((char *)&v29[36] + 13) = *(_WORD *)((char *)&v46 + 1);
  HIBYTE(v29[36]) = HIBYTE(v46);
  BYTE12(v29[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v58, v29);
  memcpy(v57, v58, sizeof(v57));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v38);
  *(_QWORD *)&v38[33] = aFile;
  *((_QWORD *)&v38[33] + 1) = 4LL;
  memcpy(v29, v38, 0x24CuLL);
  WORD6(v29[36]) = 769;
  HIWORD(v29[36]) = HIWORD(v38[36]);
  clap_builder::builder::command::Command::arg_internal(v57, v29);
  memcpy(dest, v57, 0x2C8uLL);
  return dest;
}
