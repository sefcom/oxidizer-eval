void *__fastcall uu_tee::uu_app(void *dest)
{
  __int64 v1; // rax
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // r14
  int v5; // ebp
  int v6; // r14d
  __int64 v7; // r14
  __int64 v8; // r14
  __int64 v9; // r14
  __int64 v10; // r14
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // r14
  __int64 v15; // rbp
  __int64 v16; // r14
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // rcx
  __int128 v21; // [rsp+0h] [rbp-3708h]
  __int128 v22; // [rsp+10h] [rbp-36F8h]
  unsigned __int64 v23; // [rsp+28h] [rbp-36E0h]
  __int128 v24; // [rsp+30h] [rbp-36D8h]
  __int128 v25; // [rsp+40h] [rbp-36C8h]
  __int64 v26; // [rsp+50h] [rbp-36B8h]
  __int128 v27; // [rsp+58h] [rbp-36B0h]
  __int64 v28; // [rsp+68h] [rbp-36A0h]
  unsigned __int64 v29; // [rsp+70h] [rbp-3698h] BYREF
  __int128 v30; // [rsp+78h] [rbp-3690h]
  __int128 v31; // [rsp+88h] [rbp-3680h]
  __int64 v32; // [rsp+98h] [rbp-3670h]
  __int128 v33; // [rsp+A0h] [rbp-3668h]
  __int64 v34; // [rsp+B0h] [rbp-3658h]
  unsigned __int64 v35; // [rsp+B8h] [rbp-3650h] BYREF
  __int128 v36; // [rsp+C0h] [rbp-3648h]
  __int128 v37; // [rsp+D0h] [rbp-3638h]
  __int64 v38; // [rsp+E0h] [rbp-3628h]
  __int128 v39; // [rsp+E8h] [rbp-3620h]
  __int64 v40; // [rsp+F8h] [rbp-3610h]
  unsigned __int64 v41; // [rsp+100h] [rbp-3608h] BYREF
  __int128 v42; // [rsp+108h] [rbp-3600h]
  __int128 v43; // [rsp+118h] [rbp-35F0h]
  __int64 v44; // [rsp+128h] [rbp-35E0h]
  _OWORD v45[37]; // [rsp+130h] [rbp-35D8h] BYREF
  __int128 v46; // [rsp+380h] [rbp-3388h]
  __int128 v47; // [rsp+390h] [rbp-3378h]
  __int128 v48; // [rsp+3A0h] [rbp-3368h]
  __int128 v49; // [rsp+3B0h] [rbp-3358h]
  __int64 v50; // [rsp+3C0h] [rbp-3348h]
  __int128 v51; // [rsp+3D0h] [rbp-3338h]
  __int128 v52; // [rsp+3E0h] [rbp-3328h]
  __int128 v53; // [rsp+3F0h] [rbp-3318h]
  __int128 v54; // [rsp+400h] [rbp-3308h]
  __int64 v55; // [rsp+410h] [rbp-32F8h]
  __int128 v56; // [rsp+420h] [rbp-32E8h]
  __int128 v57; // [rsp+430h] [rbp-32D8h]
  __int128 v58; // [rsp+440h] [rbp-32C8h]
  __int128 v59; // [rsp+450h] [rbp-32B8h]
  __int64 v60; // [rsp+460h] [rbp-32A8h]
  __int128 v61; // [rsp+470h] [rbp-3298h] BYREF
  __int64 v62; // [rsp+480h] [rbp-3288h]
  __int64 v63; // [rsp+488h] [rbp-3280h] BYREF
  __int128 v64; // [rsp+490h] [rbp-3278h]
  _OWORD v65[18]; // [rsp+4A0h] [rbp-3268h] BYREF
  _BYTE v66[588]; // [rsp+5C0h] [rbp-3148h] BYREF
  __int16 v67; // [rsp+80Eh] [rbp-2EFAh]
  _OWORD v68[37]; // [rsp+810h] [rbp-2EF8h] BYREF
  _BYTE v69[588]; // [rsp+A60h] [rbp-2CA8h] BYREF
  int v70; // [rsp+CACh] [rbp-2A5Ch]
  _BYTE v71[588]; // [rsp+CB0h] [rbp-2A58h] BYREF
  int v72; // [rsp+EFCh] [rbp-280Ch]
  _BYTE v73[588]; // [rsp+F00h] [rbp-2808h] BYREF
  int v74; // [rsp+114Ch] [rbp-25BCh]
  _BYTE v75[588]; // [rsp+1150h] [rbp-25B8h] BYREF
  int v76; // [rsp+139Ch] [rbp-236Ch]
  _OWORD v77[37]; // [rsp+13A0h] [rbp-2368h] BYREF
  _QWORD v78[89]; // [rsp+15F0h] [rbp-2118h] BYREF
  _QWORD v79[74]; // [rsp+18B8h] [rbp-1E50h] BYREF
  _DWORD v80[178]; // [rsp+1B08h] [rbp-1C00h] BYREF
  _BYTE v81[700]; // [rsp+1DD0h] [rbp-1938h] BYREF
  int v82; // [rsp+208Ch] [rbp-167Ch]
  int v83; // [rsp+2090h] [rbp-1678h]
  int v84; // [rsp+2094h] [rbp-1674h]
  _BYTE v85[712]; // [rsp+2098h] [rbp-1670h] BYREF
  _BYTE v86[712]; // [rsp+2360h] [rbp-13A8h] BYREF
  _QWORD v87[89]; // [rsp+2628h] [rbp-10E0h] BYREF
  _BYTE v88[712]; // [rsp+28F0h] [rbp-E18h] BYREF
  _BYTE v89[712]; // [rsp+2BB8h] [rbp-B50h] BYREF
  _QWORD src[89]; // [rsp+2E80h] [rbp-888h] BYREF
  _BYTE v91[712]; // [rsp+3148h] [rbp-5C0h] BYREF
  _BYTE desta[760]; // [rsp+3410h] [rbp-2F8h] BYREF

  v87[22] = 0LL;
  v78[29] = 0LL;
  *(_QWORD *)&v66[280] = 0LL;
  v1 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  v2 = *(_QWORD *)(v1 + 8);
  v3 = *(_QWORD *)(v1 + 16);
  core::slice::raw::from_raw_parts::precondition_check(v2, 1LL, 1LL, v3);
  clap_builder::builder::command::Command::new::new_inner(src, v2, v3);
  src[76] = a0027;
  src[77] = 6LL;
  memcpy(desta, src, 0x2C8uLL);
  clap_builder::builder::command::Command::about(v78, desta);
  uucore::format_usage((unsigned int)&v63);
  v4 = v63;
  if ( v63 != 0x8000000000000000LL )
    v45[0] = v64;
  if ( v78[58] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v78[58], aOptionFile);
  v78[58] = v4;
  *(_OWORD *)&v78[59] = v45[0];
  memcpy(v91, v78, sizeof(v91));
  clap_builder::builder::command::Command::after_help(v81, v91);
  v5 = v82;
  v6 = v83;
  v82 |= 0x80u;
  v83 |= 0x80u;
  memcpy(v80, v81, 0x2BCuLL);
  v80[175] = v5 | 0x40080;
  v80[176] = v6 | 0x40080;
  v80[177] = v84;
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v45);
  *(_QWORD *)&v45[33] = aHelp;
  *((_QWORD *)&v45[33] + 1) = 6LL;
  memcpy(v69, v45, 0x220uLL);
  *(_OWORD *)&v69[560] = v45[35];
  *(_QWORD *)&v69[580] = *(_QWORD *)((char *)&v45[36] + 4);
  v70 = HIDWORD(v45[36]);
  *(_QWORD *)&v69[544] = anon_4999ac20243338206a266e5086c65117_52_llvm_11097290929893828502;
  *(_QWORD *)&v69[552] = 4LL;
  *(_DWORD *)&v69[576] = 104;
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  alloc::string::String::push_str(v45, aPrintHelp, 10LL);
  v7 = *(_QWORD *)&v45[0];
  *(_OWORD *)v66 = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v21 = *(_OWORD *)v66;
  if ( *(_QWORD *)&v69[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v69[440], aPrintHelp);
  *(_QWORD *)&v69[440] = v7;
  *(_OWORD *)&v69[448] = v21;
  memcpy(v45, v69, 0x24CuLL);
  *(_WORD *)((char *)&v45[36] + 13) = *(_WORD *)((char *)&v70 + 1);
  HIBYTE(v45[36]) = HIBYTE(v70);
  BYTE12(v45[36]) = 7;
  clap_builder::builder::command::Command::arg_internal(v80, v45);
  memcpy(v89, v80, sizeof(v89));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v45);
  *(_QWORD *)&v45[33] = aAppend_0;
  *((_QWORD *)&v45[33] + 1) = 6LL;
  memcpy(v71, v45, 0x220uLL);
  *(_OWORD *)&v71[560] = v45[35];
  *(_QWORD *)&v71[580] = *(_QWORD *)((char *)&v45[36] + 4);
  v72 = HIDWORD(v45[36]);
  *(_QWORD *)&v71[544] = aAppend_0;
  *(_QWORD *)&v71[552] = 6LL;
  *(_DWORD *)&v71[576] = 97;
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  alloc::string::String::push_str(v45, aAppendToTheGiv, 43LL);
  v8 = *(_QWORD *)&v45[0];
  *(_OWORD *)v66 = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v21 = *(_OWORD *)v66;
  if ( *(_QWORD *)&v71[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v71[440], aAppendToTheGiv);
  *(_QWORD *)&v71[440] = v8;
  *(_OWORD *)&v71[448] = v21;
  memcpy(v45, v71, 0x24CuLL);
  *(_WORD *)((char *)&v45[36] + 13) = *(_WORD *)((char *)&v72 + 1);
  HIBYTE(v45[36]) = HIBYTE(v72);
  BYTE12(v45[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v89, v45);
  memcpy(v88, v89, sizeof(v88));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v45);
  *(_QWORD *)&v45[33] = aIgnoreInterrup_0;
  *((_QWORD *)&v45[33] + 1) = 17LL;
  memcpy(v73, v45, 0x220uLL);
  *(_OWORD *)&v73[560] = v45[35];
  *(_QWORD *)&v73[580] = *(_QWORD *)((char *)&v45[36] + 4);
  v74 = HIDWORD(v45[36]);
  *(_QWORD *)&v73[544] = aIgnoreInterrup_0;
  *(_QWORD *)&v73[552] = 17LL;
  *(_DWORD *)&v73[576] = 105;
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  alloc::string::String::push_str(v45, aIgnoreInterrup_1, 56LL);
  v9 = *(_QWORD *)&v45[0];
  *(_OWORD *)v66 = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v21 = *(_OWORD *)v66;
  if ( *(_QWORD *)&v73[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v73[440], aIgnoreInterrup_1);
  *(_QWORD *)&v73[440] = v9;
  *(_OWORD *)&v73[448] = v21;
  memcpy(v45, v73, 0x24CuLL);
  *(_WORD *)((char *)&v45[36] + 13) = *(_WORD *)((char *)&v74 + 1);
  HIBYTE(v45[36]) = HIBYTE(v74);
  BYTE12(v45[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v88, v45);
  memcpy(v87, v88, sizeof(v87));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v66);
  *(_QWORD *)&v66[528] = aFile;
  *(_QWORD *)&v66[536] = 4LL;
  memcpy(v45, v66, 0x24CuLL);
  WORD6(v45[36]) = 769;
  HIWORD(v45[36]) = v67;
  clap_builder::builder::command::Command::arg_internal(v87, v45);
  memcpy(v86, v87, sizeof(v86));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v45);
  *(_QWORD *)&v45[33] = aIgnorePipeErro_0;
  *((_QWORD *)&v45[33] + 1) = 18LL;
  memcpy(v75, v45, 0x240uLL);
  *(_QWORD *)&v75[580] = *(_QWORD *)((char *)&v45[36] + 4);
  v76 = HIDWORD(v45[36]);
  *(_DWORD *)&v75[576] = 112;
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  alloc::string::String::push_str(v45, aSetWriteErrorB, 56LL);
  v10 = *(_QWORD *)&v45[0];
  *(_OWORD *)v66 = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v21 = *(_OWORD *)v66;
  if ( *(_QWORD *)&v75[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v75[440], aSetWriteErrorB);
  *(_QWORD *)&v75[440] = v10;
  *(_OWORD *)&v75[448] = v21;
  memcpy(v45, v75, 0x24CuLL);
  *(_WORD *)((char *)&v45[36] + 13) = *(_WORD *)((char *)&v76 + 1);
  HIBYTE(v45[36]) = HIBYTE(v76);
  BYTE12(v45[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v86, v45);
  memcpy(v85, v86, sizeof(v85));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v45);
  *(_QWORD *)&v45[33] = aOutputError_0;
  *((_QWORD *)&v45[33] + 1) = 12LL;
  v68[0] = v45[0];
  memcpy((char *)&v68[2] + 8, (char *)&v45[2] + 8, 0x1F8uLL);
  v68[35] = v45[35];
  *(_QWORD *)&v68[36] = *(_QWORD *)&v45[36];
  v68[1] = 1uLL;
  *(_QWORD *)&v68[2] = 1LL;
  *(_QWORD *)&v68[34] = aOutputError_0;
  *((_QWORD *)&v68[34] + 1) = 12LL;
  *((_QWORD *)&v68[36] + 1) = *((_QWORD *)&v45[36] + 1) | 0x80LL;
  *(_QWORD *)&v25 = aWarn;
  *((_QWORD *)&v25 + 1) = 4LL;
  v23 = 0x8000000000000000LL;
  *(_QWORD *)&v22 = 0LL;
  *((_QWORD *)&v22 + 1) = 8LL;
  LOBYTE(v26) = 0;
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  alloc::string::String::push_str(v45, aProduceWarning, 49LL);
  v11 = *(_QWORD *)&v45[0];
  *(_OWORD *)v66 = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v45[0] = *(_OWORD *)v66;
  v23 = v11;
  v24 = v45[0];
  v46 = v22;
  v48 = v45[0];
  v49 = v25;
  v50 = v26;
  *(_QWORD *)&v47 = 0LL;
  *((_QWORD *)&v47 + 1) = v11;
  *(_QWORD *)&v31 = aWarnNopipe_0;
  *((_QWORD *)&v31 + 1) = 11LL;
  v29 = 0x8000000000000000LL;
  *(_QWORD *)&v27 = 0LL;
  *((_QWORD *)&v27 + 1) = 8LL;
  v28 = 0LL;
  LOBYTE(v32) = 0;
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  alloc::string::String::push_str(v45, aProduceWarning_0, 84LL);
  v12 = *(_QWORD *)&v45[0];
  *(_OWORD *)v66 = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v45[0] = *(_OWORD *)v66;
  if ( v29 != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v29, aProduceWarning_0);
  v29 = v12;
  v30 = v45[0];
  v51 = v27;
  v53 = v45[0];
  v54 = v31;
  v55 = v32;
  *(_QWORD *)&v52 = v28;
  *((_QWORD *)&v52 + 1) = v12;
  *(_QWORD *)&v37 = aExit_0;
  *((_QWORD *)&v37 + 1) = 4LL;
  v35 = 0x8000000000000000LL;
  *(_QWORD *)&v33 = 0LL;
  *((_QWORD *)&v33 + 1) = 8LL;
  v34 = 0LL;
  LOBYTE(v38) = 0;
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  alloc::string::String::push_str(v45, aExitOnWriteErr, 34LL);
  v13 = *(_QWORD *)&v45[0];
  *(_OWORD *)v66 = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v45[0] = *(_OWORD *)v66;
  if ( v35 != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v35, aExitOnWriteErr);
  v35 = v13;
  v36 = v45[0];
  v56 = v33;
  v58 = v45[0];
  v59 = v37;
  v60 = v38;
  *(_QWORD *)&v57 = v34;
  *((_QWORD *)&v57 + 1) = v13;
  *(_QWORD *)&v43 = aExitNopipe_0;
  *((_QWORD *)&v43 + 1) = 11LL;
  v41 = 0x8000000000000000LL;
  *(_QWORD *)&v39 = 0LL;
  *((_QWORD *)&v39 + 1) = 8LL;
  v40 = 0LL;
  LOBYTE(v44) = 0;
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  alloc::string::String::push_str(v45, aExitOnWriteErr_0, 102LL);
  v14 = *(_QWORD *)&v45[0];
  *(_OWORD *)v66 = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v45[0] = *(_OWORD *)v66;
  if ( v41 != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v41, aExitOnWriteErr_0);
  v41 = v14;
  v42 = v45[0];
  *(_OWORD *)((char *)&v65[13] + 8) = v39;
  *(_OWORD *)((char *)&v65[15] + 8) = v45[0];
  *(_OWORD *)((char *)&v65[16] + 8) = v43;
  *((_QWORD *)&v65[17] + 1) = v44;
  *((_QWORD *)&v65[14] + 1) = v40;
  *(_QWORD *)&v65[15] = v14;
  v65[0] = v46;
  v65[1] = v47;
  v65[2] = v48;
  v65[3] = v49;
  *(_QWORD *)&v65[4] = v50;
  *((_QWORD *)&v65[8] + 1) = v55;
  *(_OWORD *)((char *)&v65[7] + 8) = v54;
  *(_OWORD *)((char *)&v65[6] + 8) = v53;
  *(_OWORD *)((char *)&v65[5] + 8) = v52;
  *(_OWORD *)((char *)&v65[4] + 8) = v51;
  *(_QWORD *)&v65[13] = v60;
  v65[12] = v59;
  v65[11] = v58;
  v65[10] = v57;
  v65[9] = v56;
  memcpy(v45, v65, 0x120uLL);
  *(_QWORD *)&v45[18] = 0LL;
  *((_QWORD *)&v45[18] + 1) = 4LL;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(v66, v45);
  v61 = *(_OWORD *)v66;
  v62 = *(_QWORD *)&v66[16];
  clap_builder::builder::value_parser::ValueParser::new(v45, &v61);
  v15 = *(_QWORD *)&v45[0];
  *(_OWORD *)v66 = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 5LL )
    v45[0] = *(_OWORD *)v66;
  if ( *(_QWORD *)&v68[5] >= 4uLL && *(_QWORD *)&v68[5] != 5LL )
    core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>((char *)&v68[5] + 8);
  *(_QWORD *)&v68[5] = v15;
  *(_OWORD *)((char *)&v68[5] + 8) = v45[0];
  memcpy(v77, v68, sizeof(v77));
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  alloc::string::String::push_str(v45, aSetWriteErrorB_0, 24LL);
  v16 = *(_QWORD *)&v45[0];
  *(_OWORD *)v66 = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v45[0] = *(_OWORD *)v66;
  if ( *((_QWORD *)&v77[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v77[27] + 8, aSetWriteErrorB_0);
  *((_QWORD *)&v77[27] + 1) = v16;
  v77[28] = v45[0];
  memcpy(v79, v77, sizeof(v79));
  v17 = v79[15];
  if ( v79[15] == v79[13] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v79[13]);
  v18 = v79[14];
  v19 = 16 * v17;
  *(_QWORD *)(v79[14] + v19) = aIgnorePipeErro_0;
  *(_QWORD *)(v18 + v19 + 8) = 18LL;
  v79[15] = v17 + 1;
  memcpy(v45, v79, sizeof(v45));
  clap_builder::builder::command::Command::arg_internal(v85, v45);
  memcpy(dest, v85, 0x2C8uLL);
  return dest;
}
