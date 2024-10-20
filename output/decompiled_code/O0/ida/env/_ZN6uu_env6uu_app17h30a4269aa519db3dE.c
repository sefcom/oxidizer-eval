void *__fastcall uu_env::uu_app(void *dest)
{
  __int64 v1; // r14
  int v2; // r14d
  __int64 v3; // r14
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r14
  __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r14
  __int64 v20; // r14
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r14
  __int64 v26; // r14
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r14
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // r14
  __m128i v44; // [rsp+0h] [rbp-6198h] BYREF
  _OWORD v45[37]; // [rsp+10h] [rbp-6188h] BYREF
  __int64 v46; // [rsp+268h] [rbp-5F30h] BYREF
  __int128 v47; // [rsp+270h] [rbp-5F28h]
  _OWORD v48[35]; // [rsp+280h] [rbp-5F18h] BYREF
  __m128i v49; // [rsp+4B0h] [rbp-5CE8h] BYREF
  __int128 v50; // [rsp+4C0h] [rbp-5CD8h]
  _BYTE v51[588]; // [rsp+4D8h] [rbp-5CC0h] BYREF
  int v52; // [rsp+724h] [rbp-5A74h]
  _BYTE v53[588]; // [rsp+728h] [rbp-5A70h] BYREF
  int v54; // [rsp+974h] [rbp-5824h]
  _OWORD v55[37]; // [rsp+978h] [rbp-5820h] BYREF
  _OWORD v56[37]; // [rsp+BC8h] [rbp-55D0h] BYREF
  _OWORD v57[37]; // [rsp+E18h] [rbp-5380h] BYREF
  __m128i v58[37]; // [rsp+1068h] [rbp-5130h] BYREF
  _QWORD v59[74]; // [rsp+12B8h] [rbp-4EE0h] BYREF
  _QWORD v60[74]; // [rsp+1508h] [rbp-4C90h] BYREF
  _OWORD v61[37]; // [rsp+1758h] [rbp-4A40h] BYREF
  _OWORD v62[37]; // [rsp+19A8h] [rbp-47F0h] BYREF
  _OWORD v63[37]; // [rsp+1BF8h] [rbp-45A0h] BYREF
  _OWORD v64[37]; // [rsp+1E48h] [rbp-4350h] BYREF
  _QWORD v65[89]; // [rsp+2098h] [rbp-4100h] BYREF
  _BYTE v66[589]; // [rsp+2360h] [rbp-3E38h] BYREF
  __int16 v67; // [rsp+25AEh] [rbp-3BEAh]
  _QWORD v68[74]; // [rsp+25B0h] [rbp-3BE8h] BYREF
  _QWORD v69[74]; // [rsp+2800h] [rbp-3998h] BYREF
  _QWORD v70[74]; // [rsp+2A50h] [rbp-3748h] BYREF
  _QWORD v71[74]; // [rsp+2CA0h] [rbp-34F8h] BYREF
  _QWORD v72[89]; // [rsp+2EF0h] [rbp-32A8h] BYREF
  _BYTE v73[712]; // [rsp+31B8h] [rbp-2FE0h] BYREF
  _BYTE v74[712]; // [rsp+3480h] [rbp-2D18h] BYREF
  _BYTE v75[712]; // [rsp+3748h] [rbp-2A50h] BYREF
  _BYTE v76[712]; // [rsp+3A10h] [rbp-2788h] BYREF
  _BYTE v77[712]; // [rsp+3CD8h] [rbp-24C0h] BYREF
  _QWORD v78[89]; // [rsp+3FA0h] [rbp-21F8h] BYREF
  _BYTE v79[712]; // [rsp+4268h] [rbp-1F30h] BYREF
  _BYTE v80[712]; // [rsp+4530h] [rbp-1C68h] BYREF
  _BYTE v81[712]; // [rsp+47F8h] [rbp-19A0h] BYREF
  _BYTE v82[700]; // [rsp+4AC0h] [rbp-16D8h] BYREF
  _BYTE v83[12]; // [rsp+4D7Ch] [rbp-141Ch]
  _BYTE v84[592]; // [rsp+4D88h] [rbp-1410h] BYREF
  _QWORD v85[74]; // [rsp+4FD8h] [rbp-11C0h] BYREF
  _BYTE v86[592]; // [rsp+5228h] [rbp-F70h] BYREF
  _BYTE v87[592]; // [rsp+5478h] [rbp-D20h] BYREF
  _BYTE v88[592]; // [rsp+56C8h] [rbp-AD0h] BYREF
  _QWORD src[89]; // [rsp+5918h] [rbp-880h] BYREF
  _BYTE v90[712]; // [rsp+5BE0h] [rbp-5B8h] BYREF
  _BYTE desta[752]; // [rsp+5EA8h] [rbp-2F0h] BYREF

  v85[51] = 0LL;
  v78[58] = 0LL;
  v72[80] = 0LL;
  v65[27] = 0LL;
  v58[16].m128i_i64[1] = 0LL;
  *(_QWORD *)&v45[22] = 0LL;
  clap_builder::builder::command::Command::new::new_inner(src, aUuEnv, 6LL);
  src[76] = a0027;
  src[77] = 6LL;
  memcpy(desta, src, 0x2C8uLL);
  clap_builder::builder::command::Command::about(v65, desta);
  uucore::format_usage((unsigned int)&v46);
  v1 = v46;
  if ( v46 != 0x8000000000000000LL )
    v45[0] = v47;
  if ( v65[58] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v65[58], aOptionNameValu);
  v65[58] = v1;
  *(_OWORD *)&v65[59] = v45[0];
  memcpy(v90, v65, sizeof(v90));
  clap_builder::builder::command::Command::after_help(v82, v90);
  v2 = *(_DWORD *)v83;
  *(_QWORD *)v83 = _mm_or_si128((__m128i)*(unsigned __int64 *)v83, (__m128i)xmmword_19640).m128i_u64[0];
  memcpy(v72, v82, 0x2BCuLL);
  HIDWORD(v72[87]) = v2 | 0xA0;
  v72[88] = *(_QWORD *)&v83[4];
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v45);
  *(_QWORD *)&v45[33] = aIgnoreEnvironm;
  *((_QWORD *)&v45[33] + 1) = 18LL;
  memcpy(v51, v45, 0x220uLL);
  *(__m128i *)&v51[560] = _mm_loadu_si128((const __m128i *)&v45[35]);
  *(_QWORD *)&v51[580] = *(_QWORD *)((char *)&v45[36] + 4);
  v52 = HIDWORD(v45[36]);
  *(_QWORD *)&v51[544] = aIgnoreEnvironm;
  *(_QWORD *)&v51[552] = 18LL;
  *(_DWORD *)&v51[576] = 105;
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  alloc::string::String::push_str(v45, aStartWithAnEmp, 31LL);
  v3 = *(_QWORD *)&v45[0];
  v48[0] = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v44 = (__m128i)v48[0];
  if ( *(_QWORD *)&v51[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v51[440], aStartWithAnEmp);
  *(_QWORD *)&v51[440] = v3;
  *(__m128i *)&v51[448] = _mm_load_si128(&v44);
  memcpy(v45, v51, 0x24CuLL);
  *(_WORD *)((char *)&v45[36] + 13) = *(_WORD *)((char *)&v52 + 1);
  HIBYTE(v45[36]) = HIBYTE(v52);
  BYTE12(v45[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v72, v45);
  memcpy(v81, v72, sizeof(v81));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v48);
  *(_QWORD *)&v48[33] = aChdir_0;
  *((_QWORD *)&v48[33] + 1) = 5LL;
  v45[0] = v48[0];
  memcpy((char *)&v45[2] + 8, (char *)&v48[2] + 8, 0x1F8uLL);
  v45[35] = _mm_loadu_si128(&v49);
  *(_QWORD *)((char *)&v45[36] + 4) = *(_QWORD *)((char *)&v50 + 4);
  HIDWORD(v45[36]) = HIDWORD(v50);
  *(_QWORD *)&v45[1] = 1LL;
  *((_QWORD *)&v45[1] + 1) = 1LL;
  *(_QWORD *)&v45[2] = 1LL;
  *(_QWORD *)&v45[34] = aChdir_0;
  *((_QWORD *)&v45[34] + 1) = 5LL;
  LODWORD(v45[36]) = 67;
  *(_QWORD *)&v48[0] = aDir;
  *((_QWORD *)&v48[0] + 1) = 3LL;
  clap_builder::builder::arg::Arg::value_names(v66, v45);
  if ( *(_QWORD *)&v66[80] >= 4uLL && *(_QWORD *)&v66[80] != 5LL )
    core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(
      &v66[88],
      v45,
      v4,
      v5,
      v6,
      v7,
      v44.m128i_i64[0],
      v44.m128i_i64[1],
      *(_QWORD *)&v45[0],
      *((_QWORD *)&v45[0] + 1));
  *(_QWORD *)&v66[80] = 2LL;
  memcpy(v57, v66, 0x24DuLL);
  BYTE13(v57[36]) = 4;
  HIWORD(v57[36]) = v67;
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  alloc::string::String::push_str(v45, aChangeWorkingD, 31LL);
  v8 = *(_QWORD *)&v45[0];
  v48[0] = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v44 = (__m128i)v48[0];
  if ( *((_QWORD *)&v57[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v57[27] + 8, aChangeWorkingD);
  *((_QWORD *)&v57[27] + 1) = v8;
  v57[28] = _mm_load_si128(&v44);
  memcpy(v45, v57, sizeof(v45));
  clap_builder::builder::command::Command::arg_internal(v81, v45);
  memcpy(v80, v81, sizeof(v80));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v45);
  *(_QWORD *)&v45[33] = aNull;
  *((_QWORD *)&v45[33] + 1) = 4LL;
  memcpy(v53, v45, 0x220uLL);
  *(__m128i *)&v53[560] = _mm_loadu_si128((const __m128i *)&v45[35]);
  *(_QWORD *)&v53[580] = *(_QWORD *)((char *)&v45[36] + 4);
  v54 = HIDWORD(v45[36]);
  *(_QWORD *)&v53[544] = aNull;
  *(_QWORD *)&v53[552] = 4LL;
  *(_DWORD *)&v53[576] = 48;
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  alloc::string::String::push_str(v45, aEndEachOutputL, 99LL);
  v9 = *(_QWORD *)&v45[0];
  v48[0] = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v44 = (__m128i)v48[0];
  if ( *(_QWORD *)&v53[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v53[440], aEndEachOutputL);
  *(_QWORD *)&v53[440] = v9;
  *(__m128i *)&v53[448] = _mm_load_si128(&v44);
  memcpy(v45, v53, 0x24CuLL);
  *(_WORD *)((char *)&v45[36] + 13) = *(_WORD *)((char *)&v54 + 1);
  HIBYTE(v45[36]) = HIBYTE(v54);
  BYTE12(v45[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v80, v45);
  memcpy(v79, v80, sizeof(v79));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v48);
  *(_QWORD *)&v48[33] = aFile;
  *((_QWORD *)&v48[33] + 1) = 4LL;
  memcpy(v45, v48, 0x220uLL);
  v45[35] = _mm_loadu_si128(&v49);
  *(_QWORD *)((char *)&v45[36] + 4) = *(_QWORD *)((char *)&v50 + 4);
  HIDWORD(v45[36]) = HIDWORD(v50);
  *(_QWORD *)&v45[34] = aFile;
  *((_QWORD *)&v45[34] + 1) = 4LL;
  LODWORD(v45[36]) = 102;
  *(_QWORD *)&v48[0] = aPath;
  *((_QWORD *)&v48[0] + 1) = 4LL;
  clap_builder::builder::arg::Arg::value_names(v84, v45);
  v84[589] = 3;
  memcpy(v60, v84, sizeof(v60));
  if ( v60[10] >= 4uLL && v60[10] != 5LL )
    core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(
      &v60[11],
      v84,
      v10,
      v11,
      v12,
      v13,
      v44.m128i_i64[0],
      v44.m128i_i64[1],
      *(_QWORD *)&v45[0],
      *((_QWORD *)&v45[0] + 1));
  v60[10] = 2LL;
  memcpy(v56, v60, 0x24CuLL);
  *(_WORD *)((char *)&v56[36] + 13) = *(_WORD *)((char *)&v60[73] + 5);
  HIBYTE(v56[36]) = HIBYTE(v60[73]);
  BYTE12(v56[36]) = 1;
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  alloc::string::String::push_str(v45, aReadAndSetVari, 93LL);
  v14 = *(_QWORD *)&v45[0];
  v48[0] = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v44 = (__m128i)v48[0];
  if ( *((_QWORD *)&v56[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v56[27] + 8, aReadAndSetVari);
  *((_QWORD *)&v56[27] + 1) = v14;
  v56[28] = _mm_load_si128(&v44);
  memcpy(v45, v56, sizeof(v45));
  clap_builder::builder::command::Command::arg_internal(v79, v45);
  memcpy(v78, v79, sizeof(v78));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v48);
  *(_QWORD *)&v48[33] = aUnset;
  *((_QWORD *)&v48[33] + 1) = 5LL;
  memcpy(v45, v48, 0x220uLL);
  v45[35] = _mm_loadu_si128(&v49);
  *(_QWORD *)((char *)&v45[36] + 4) = *(_QWORD *)((char *)&v50 + 4);
  HIDWORD(v45[36]) = HIDWORD(v50);
  *(_QWORD *)&v45[34] = aUnset;
  *((_QWORD *)&v45[34] + 1) = 5LL;
  LODWORD(v45[36]) = 117;
  *(_QWORD *)&v48[0] = aName;
  *((_QWORD *)&v48[0] + 1) = 4LL;
  clap_builder::builder::arg::Arg::value_names(v85, v45);
  BYTE4(v85[73]) = 1;
  memcpy(v68, v85, sizeof(v68));
  if ( v68[10] >= 4uLL && v68[10] != 5LL )
    core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(
      &v68[11],
      v85,
      v15,
      v16,
      v17,
      v18,
      v44.m128i_i64[0],
      v44.m128i_i64[1],
      *(_QWORD *)&v45[0],
      *((_QWORD *)&v45[0] + 1));
  v68[10] = 2LL;
  memcpy(v61, v68, sizeof(v61));
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  alloc::string::String::push_str(v45, aRemoveVariable, 36LL);
  v19 = *(_QWORD *)&v45[0];
  v48[0] = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v44 = (__m128i)v48[0];
  if ( *((_QWORD *)&v61[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v61[27] + 8, aRemoveVariable);
  *((_QWORD *)&v61[27] + 1) = v19;
  v61[28] = _mm_load_si128(&v44);
  memcpy(v45, v61, sizeof(v45));
  clap_builder::builder::command::Command::arg_internal(v78, v45);
  memcpy(v77, v78, sizeof(v77));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v45);
  *(_QWORD *)&v45[33] = aDebug_0;
  *((_QWORD *)&v45[33] + 1) = 5LL;
  memcpy(v55, v45, 0x220uLL);
  v55[35] = _mm_loadu_si128((const __m128i *)&v45[35]);
  *(_WORD *)((char *)&v55[36] + 13) = *(_WORD *)((char *)&v45[36] + 13);
  HIBYTE(v55[36]) = HIBYTE(v45[36]);
  *(_QWORD *)&v55[34] = aDebug_0;
  *((_QWORD *)&v55[34] + 1) = 5LL;
  LODWORD(v55[36]) = 118;
  *(_QWORD *)((char *)&v55[36] + 4) = *(_QWORD *)((char *)&v45[36] + 4);
  BYTE12(v55[36]) = 4;
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  alloc::string::String::push_str(v45, aPrintVerboseIn, 50LL);
  v20 = *(_QWORD *)&v45[0];
  v48[0] = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v44 = (__m128i)v48[0];
  if ( *((_QWORD *)&v55[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v55[27] + 8, aPrintVerboseIn);
  *((_QWORD *)&v55[27] + 1) = v20;
  v55[28] = _mm_load_si128(&v44);
  memcpy(v45, v55, sizeof(v45));
  clap_builder::builder::command::Command::arg_internal(v77, v45);
  memcpy(v76, v77, sizeof(v76));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v48);
  *(_QWORD *)&v48[33] = aSplitString;
  *((_QWORD *)&v48[33] + 1) = 12LL;
  memcpy(v45, v48, 0x220uLL);
  v45[35] = _mm_loadu_si128(&v49);
  *(_QWORD *)((char *)&v45[36] + 4) = *(_QWORD *)((char *)&v50 + 4);
  HIDWORD(v45[36]) = HIDWORD(v50);
  *(_QWORD *)&v45[34] = aSplitString;
  *((_QWORD *)&v45[34] + 1) = 12LL;
  LODWORD(v45[36]) = 83;
  *(_QWORD *)&v48[0] = aS;
  *((_QWORD *)&v48[0] + 1) = 1LL;
  clap_builder::builder::arg::Arg::value_names(v86, v45);
  v86[588] = 0;
  memcpy(v69, v86, sizeof(v69));
  if ( v69[10] >= 4uLL && v69[10] != 5LL )
    core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(
      &v69[11],
      v86,
      v21,
      v22,
      v23,
      v24,
      v44.m128i_i64[0],
      v44.m128i_i64[1],
      *(_QWORD *)&v45[0],
      *((_QWORD *)&v45[0] + 1));
  v69[10] = 2LL;
  memcpy(v62, v69, sizeof(v62));
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  alloc::string::String::push_str(v45, aProcessAndSpli, 93LL);
  v25 = *(_QWORD *)&v45[0];
  v48[0] = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v44 = (__m128i)v48[0];
  if ( *((_QWORD *)&v62[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v62[27] + 8, aProcessAndSpli);
  *((_QWORD *)&v62[27] + 1) = v25;
  v62[28] = _mm_load_si128(&v44);
  memcpy(v45, v62, sizeof(v45));
  clap_builder::builder::command::Command::arg_internal(v76, v45);
  memcpy(v75, v76, sizeof(v75));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v45);
  *(_QWORD *)&v45[33] = aArgv0;
  *((_QWORD *)&v45[33] + 1) = 5LL;
  memcpy(v58, v45, sizeof(v58));
  v26 = v58[9].m128i_i64[0];
  if ( v58[9].m128i_i64[0] == v58[8].m128i_i64[0] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v58[8]);
  v27 = v58[8].m128i_i64[1];
  v28 = 16 * v26;
  *(_QWORD *)(v58[8].m128i_i64[1] + v28) = aArgv0;
  *(_QWORD *)(v27 + v28 + 8) = 5LL;
  v58[9].m128i_i64[0] = v26 + 1;
  memcpy(v45, v58, 0x220uLL);
  v45[35] = _mm_loadu_si128(&v58[35]);
  *(_QWORD *)((char *)&v45[36] + 4) = *(__int64 *)((char *)v58[36].m128i_i64 + 4);
  HIDWORD(v45[36]) = v58[36].m128i_i32[3];
  *(_QWORD *)&v45[34] = aArgv0;
  *((_QWORD *)&v45[34] + 1) = 5LL;
  LODWORD(v45[36]) = 97;
  *(_QWORD *)&v48[0] = aA;
  *((_QWORD *)&v48[0] + 1) = 1LL;
  clap_builder::builder::arg::Arg::value_names(v87, v45);
  v87[588] = 0;
  memcpy(v70, v87, sizeof(v70));
  if ( v70[10] >= 4uLL && v70[10] != 5LL )
    core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(
      &v70[11],
      v87,
      v29,
      v30,
      v31,
      v32,
      v44.m128i_i64[0],
      v44.m128i_i64[1],
      *(_QWORD *)&v45[0],
      *((_QWORD *)&v45[0] + 1));
  v70[10] = 2LL;
  memcpy(v63, v70, sizeof(v63));
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  alloc::string::String::push_str(v45, aOverrideTheZer, 124LL);
  v33 = *(_QWORD *)&v45[0];
  v48[0] = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v44 = (__m128i)v48[0];
  if ( *((_QWORD *)&v63[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v63[27] + 8, aOverrideTheZer);
  *((_QWORD *)&v63[27] + 1) = v33;
  v63[28] = _mm_load_si128(&v44);
  memcpy(v45, v63, sizeof(v45));
  clap_builder::builder::command::Command::arg_internal(v75, v45);
  memcpy(v74, v75, sizeof(v74));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v45);
  *(_QWORD *)&v45[33] = aVars;
  *((_QWORD *)&v45[33] + 1) = 4LL;
  memcpy(v59, v45, 0x24CuLL);
  *(_WORD *)((char *)&v59[73] + 5) = *(_WORD *)((char *)&v45[36] + 13);
  HIBYTE(v59[73]) = HIBYTE(v45[36]);
  BYTE4(v59[73]) = 1;
  if ( v59[10] >= 4uLL && v59[10] != 5LL )
    core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(
      &v59[11],
      v45,
      v34,
      v35,
      v36,
      v37,
      v44.m128i_i64[0],
      v44.m128i_i64[1],
      *(_QWORD *)&v45[0],
      *((_QWORD *)&v45[0] + 1));
  v59[10] = 2LL;
  memcpy(v45, v59, sizeof(v45));
  clap_builder::builder::command::Command::arg_internal(v74, v45);
  memcpy(v73, v74, sizeof(v73));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v48);
  *(_QWORD *)&v48[33] = aIgnoreSignal;
  *((_QWORD *)&v48[33] + 1) = 13LL;
  memcpy(v45, v48, 0x220uLL);
  v45[35] = _mm_loadu_si128(&v49);
  v45[36] = v50;
  *(_QWORD *)&v45[34] = aIgnoreSignal;
  *((_QWORD *)&v45[34] + 1) = 13LL;
  *(_QWORD *)&v48[0] = aSig;
  *((_QWORD *)&v48[0] + 1) = 3LL;
  clap_builder::builder::arg::Arg::value_names(v88, v45);
  v88[588] = 1;
  memcpy(v71, v88, sizeof(v71));
  if ( v71[10] >= 4uLL && v71[10] != 5LL )
    core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(
      &v71[11],
      v88,
      v38,
      v39,
      v40,
      v41,
      v44.m128i_i64[0],
      v44.m128i_i64[1],
      *(_QWORD *)&v45[0],
      *((_QWORD *)&v45[0] + 1));
  v71[10] = 2LL;
  memcpy(v64, v71, sizeof(v64));
  *(_QWORD *)&v45[0] = 0LL;
  *((_QWORD *)&v45[0] + 1) = 1LL;
  *(_QWORD *)&v45[1] = 0LL;
  alloc::string::String::push_str(v45, aSetHandlingOfS, 43LL);
  v42 = *(_QWORD *)&v45[0];
  v48[0] = *(_OWORD *)((char *)v45 + 8);
  if ( *(_QWORD *)&v45[0] != 0x8000000000000000LL )
    v44 = (__m128i)v48[0];
  if ( *((_QWORD *)&v64[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v64[27] + 8, aSetHandlingOfS);
  *((_QWORD *)&v64[27] + 1) = v42;
  v64[28] = _mm_load_si128(&v44);
  memcpy(v45, v64, sizeof(v45));
  clap_builder::builder::command::Command::arg_internal(v73, v45);
  memcpy(dest, v73, 0x2C8uLL);
  return dest;
}
