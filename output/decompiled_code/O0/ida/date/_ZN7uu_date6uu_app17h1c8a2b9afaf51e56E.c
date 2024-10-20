void *__fastcall uu_date::uu_app(void *dest)
{
  void *v1; // r13
  __int64 v2; // rax
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // r14
  __int64 v6; // r14
  __int64 v7; // r14
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 *v11; // r15
  _BYTE *v12; // r14
  __int64 v13; // rbp
  unsigned __int64 v14; // r12
  __int64 v15; // r13
  __int64 v16; // rbx
  __int128 v17; // xmm0
  char v18; // al
  __int64 v19; // r15
  __int64 v20; // r14
  __int64 v21; // r14
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  __int64 *v24; // r15
  _BYTE *v25; // r14
  __int64 v26; // rbp
  unsigned __int64 v27; // r12
  __int64 v28; // r13
  __int64 v29; // rbx
  __int128 v30; // xmm0
  char v31; // al
  __int64 v32; // r15
  __int64 v33; // r14
  __int64 v34; // r14
  __int64 v35; // r14
  __int64 v36; // r14
  __int64 v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // r14
  __int128 v42; // [rsp+0h] [rbp-4AD8h] BYREF
  unsigned __int64 v43; // [rsp+10h] [rbp-4AC8h]
  unsigned __int64 v44; // [rsp+18h] [rbp-4AC0h]
  __int128 v45; // [rsp+20h] [rbp-4AB8h] BYREF
  __m256i v46; // [rsp+30h] [rbp-4AA8h]
  __int128 v47; // [rsp+50h] [rbp-4A88h]
  __int128 v48; // [rsp+60h] [rbp-4A78h]
  __int128 v49; // [rsp+70h] [rbp-4A68h]
  __int64 v50; // [rsp+88h] [rbp-4A50h]
  __int64 v51; // [rsp+90h] [rbp-4A48h]
  __int64 v52; // [rsp+98h] [rbp-4A40h] BYREF
  __int128 v53; // [rsp+A0h] [rbp-4A38h]
  void *v54; // [rsp+B0h] [rbp-4A28h]
  __int128 v55; // [rsp+B8h] [rbp-4A20h] BYREF
  __m256i v56; // [rsp+C8h] [rbp-4A10h] BYREF
  __int128 v57; // [rsp+E8h] [rbp-49F0h]
  char v58; // [rsp+F8h] [rbp-49E0h]
  _OWORD v59[37]; // [rsp+100h] [rbp-49D8h] BYREF
  __int128 v60; // [rsp+350h] [rbp-4788h]
  __m256i v61; // [rsp+360h] [rbp-4778h]
  _OWORD v62[37]; // [rsp+380h] [rbp-4758h] BYREF
  __int128 v63; // [rsp+5D0h] [rbp-4508h] BYREF
  unsigned __int64 v64; // [rsp+5E0h] [rbp-44F8h]
  __int128 v65; // [rsp+5F0h] [rbp-44E8h] BYREF
  unsigned __int64 v66; // [rsp+600h] [rbp-44D8h]
  __int64 v67; // [rsp+608h] [rbp-44D0h] BYREF
  __int128 v68; // [rsp+610h] [rbp-44C8h]
  _BYTE v69[588]; // [rsp+620h] [rbp-44B8h] BYREF
  int v70; // [rsp+86Ch] [rbp-426Ch]
  _BYTE v71[592]; // [rsp+870h] [rbp-4268h] BYREF
  _OWORD v72[37]; // [rsp+AC0h] [rbp-4018h] BYREF
  _OWORD v73[37]; // [rsp+D10h] [rbp-3DC8h] BYREF
  __int128 v74; // [rsp+F60h] [rbp-3B78h] BYREF
  _BYTE v75[552]; // [rsp+F88h] [rbp-3B50h] BYREF
  _DWORD v76[178]; // [rsp+11B0h] [rbp-3928h] BYREF
  _OWORD v77[37]; // [rsp+1478h] [rbp-3660h] BYREF
  _OWORD v78[37]; // [rsp+16C8h] [rbp-3410h] BYREF
  _OWORD v79[37]; // [rsp+1918h] [rbp-31C0h] BYREF
  _OWORD v80[37]; // [rsp+1B68h] [rbp-2F70h] BYREF
  _QWORD v81[74]; // [rsp+1DB8h] [rbp-2D20h] BYREF
  _OWORD v82[37]; // [rsp+2008h] [rbp-2AD0h] BYREF
  _OWORD v83[37]; // [rsp+2258h] [rbp-2880h] BYREF
  _DWORD v84[178]; // [rsp+24A8h] [rbp-2630h] BYREF
  _BYTE v85[712]; // [rsp+2770h] [rbp-2368h] BYREF
  _QWORD v86[89]; // [rsp+2A38h] [rbp-20A0h] BYREF
  _BYTE v87[712]; // [rsp+2D00h] [rbp-1DD8h] BYREF
  _BYTE v88[712]; // [rsp+2FC8h] [rbp-1B10h] BYREF
  _BYTE v89[712]; // [rsp+3290h] [rbp-1848h] BYREF
  _BYTE v90[712]; // [rsp+3558h] [rbp-1580h] BYREF
  _QWORD v91[89]; // [rsp+3820h] [rbp-12B8h] BYREF
  _BYTE v92[712]; // [rsp+3AE8h] [rbp-FF0h] BYREF
  _BYTE v93[712]; // [rsp+3DB0h] [rbp-D28h] BYREF
  _BYTE v94[592]; // [rsp+4078h] [rbp-A60h] BYREF
  _BYTE v95[592]; // [rsp+42C8h] [rbp-810h] BYREF
  _QWORD src[89]; // [rsp+4518h] [rbp-5C0h] BYREF
  _BYTE desta[760]; // [rsp+47E0h] [rbp-2F8h] BYREF

  v91[81] = 0LL;
  v86[14] = 0LL;
  *(_QWORD *)&v79[25] = 0LL;
  *(_QWORD *)&v71[568] = 0LL;
  v1 = dest;
  v2 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  v3 = *(_QWORD *)(v2 + 8);
  v4 = *(_QWORD *)(v2 + 16);
  core::slice::raw::from_raw_parts::precondition_check(v3, 1LL, 1LL, v4);
  clap_builder::builder::command::Command::new::new_inner(src, v3, v4);
  src[76] = a0027;
  src[77] = 6LL;
  memcpy(desta, src, 0x2C8uLL);
  clap_builder::builder::command::Command::about(v76, desta);
  uucore::format_usage((unsigned int)&v67);
  v5 = v67;
  if ( v67 != 0x8000000000000000LL )
    v59[0] = v68;
  if ( *(_QWORD *)&v76[116] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v76[116], aOptionFormatOp);
  *(_QWORD *)&v76[116] = v5;
  *(_OWORD *)&v76[118] = v59[0];
  memcpy(v84, v76, 0x2BCuLL);
  *(_QWORD *)&v84[175] = *(_QWORD *)&v76[175] | 0x8000000080LL;
  v84[177] = v76[177];
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v62);
  *(_QWORD *)&v62[33] = "datethur]";
  *((_QWORD *)&v62[33] + 1) = 4LL;
  memcpy(v59, v62, 0x220uLL);
  v59[35] = v62[35];
  *(_QWORD *)((char *)&v59[36] + 4) = *(_QWORD *)((char *)&v62[36] + 4);
  HIDWORD(v59[36]) = HIDWORD(v62[36]);
  *(_QWORD *)&v59[34] = "datethur]";
  *((_QWORD *)&v59[34] + 1) = 4LL;
  LODWORD(v59[36]) = 100;
  *(_QWORD *)&v62[0] = aString;
  *((_QWORD *)&v62[0] + 1) = 6LL;
  clap_builder::builder::arg::Arg::value_names(v77, v59);
  *(_QWORD *)&v59[0] = 0LL;
  *((_QWORD *)&v59[0] + 1) = 1LL;
  *(_QWORD *)&v59[1] = 0LL;
  alloc::string::String::push_str(v59, aDisplayTimeDes, 43LL);
  v6 = *(_QWORD *)&v59[0];
  v62[0] = *(_OWORD *)((char *)v59 + 8);
  if ( *(_QWORD *)&v59[0] != 0x8000000000000000LL )
    v45 = v62[0];
  if ( *((_QWORD *)&v77[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v77[27] + 8, aDisplayTimeDes);
  *((_QWORD *)&v77[27] + 1) = v6;
  v77[28] = v45;
  memcpy(v59, v77, sizeof(v59));
  clap_builder::builder::command::Command::arg_internal(v84, v59);
  memcpy(v93, v84, sizeof(v93));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v62);
  *(_QWORD *)&v62[33] = aFile_0;
  *((_QWORD *)&v62[33] + 1) = 4LL;
  memcpy(v59, v62, 0x220uLL);
  v59[35] = v62[35];
  *(_QWORD *)((char *)&v59[36] + 4) = *(_QWORD *)((char *)&v62[36] + 4);
  HIDWORD(v59[36]) = HIDWORD(v62[36]);
  *(_QWORD *)&v59[34] = aFile_0;
  *((_QWORD *)&v59[34] + 1) = 4LL;
  LODWORD(v59[36]) = 102;
  *(_QWORD *)&v62[0] = aDatefile;
  *((_QWORD *)&v62[0] + 1) = 8LL;
  clap_builder::builder::arg::Arg::value_names(v94, v59);
  v94[589] = 3;
  memcpy(v78, v94, sizeof(v78));
  *(_QWORD *)&v59[0] = 0LL;
  *((_QWORD *)&v59[0] + 1) = 1LL;
  *(_QWORD *)&v59[1] = 0LL;
  alloc::string::String::push_str(v59, aLikeDateOnceFo, 43LL);
  v7 = *(_QWORD *)&v59[0];
  v62[0] = *(_OWORD *)((char *)v59 + 8);
  if ( *(_QWORD *)&v59[0] != 0x8000000000000000LL )
    v45 = v62[0];
  if ( *((_QWORD *)&v78[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v78[27] + 8, aLikeDateOnceFo);
  *((_QWORD *)&v78[27] + 1) = v7;
  v78[28] = v45;
  memcpy(v59, v78, sizeof(v59));
  clap_builder::builder::command::Command::arg_internal(v93, v59);
  memcpy(v92, v93, sizeof(v92));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v62);
  *(_QWORD *)&v62[33] = aIso8601;
  *((_QWORD *)&v62[33] + 1) = 8LL;
  memcpy(v59, v62, 0x220uLL);
  v59[35] = v62[35];
  *(_QWORD *)((char *)&v59[36] + 4) = *(_QWORD *)((char *)&v62[36] + 4);
  HIDWORD(v59[36]) = HIDWORD(v62[36]);
  *(_QWORD *)&v59[34] = aIso8601;
  *((_QWORD *)&v59[34] + 1) = 8LL;
  LODWORD(v59[36]) = 73;
  *(_QWORD *)&v62[0] = aFmt;
  *((_QWORD *)&v62[0] + 1) = 3LL;
  clap_builder::builder::arg::Arg::value_names(&v74, v59);
  *(_QWORD *)&v45 = "datethur]";
  *((_QWORD *)&v45 + 1) = 4LL;
  v46.m256i_i64[0] = (__int64)aHours;
  v46.m256i_i64[1] = 5LL;
  v46.m256i_i64[2] = (__int64)aMinutes;
  v46.m256i_i64[3] = 7LL;
  *(_QWORD *)&v47 = aSeconds;
  *((_QWORD *)&v47 + 1) = 7LL;
  *(_QWORD *)&v48 = aNs;
  *((_QWORD *)&v48 + 1) = 2LL;
  *(_QWORD *)&v49 = 0LL;
  *((_QWORD *)&v49 + 1) = 5LL;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v52, 5LL, 0LL);
  if ( v52 )
    alloc::raw_vec::handle_error(v53, *((_QWORD *)&v53 + 1));
  v8 = *((_QWORD *)&v53 + 1);
  v42 = v53;
  v43 = 0LL;
  v62[5] = v49;
  v62[0] = v45;
  *(__m256i *)&v62[1] = v46;
  v62[3] = v47;
  v62[4] = v48;
  if ( *((_QWORD *)&v49 + 1) - (_QWORD)v49 <= (unsigned __int64)v53 )
  {
    v9 = 0LL;
  }
  else
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v42, 0LL);
    v8 = *((_QWORD *)&v42 + 1);
    v9 = v43;
  }
  v59[5] = v49;
  v59[4] = v48;
  v59[3] = v47;
  *(__m256i *)&v59[1] = v46;
  v59[0] = v45;
  v51 = *((_QWORD *)&v49 + 1);
  v10 = v49;
  if ( *((_QWORD *)&v49 + 1) < (unsigned __int64)v49 )
    goto LABEL_87;
  v54 = dest;
  if ( *((_QWORD *)&v49 + 1) == (_QWORD)v49 )
  {
    if ( (unsigned __int64)v49 >= 6 )
LABEL_51:
      core::panicking::panic_nounwind(anon_45c6b7f83f4af56e17bd9f6b0f063fe4_3_llvm_6024280175120751173, 101LL, v9);
  }
  else
  {
    v11 = (__int64 *)&v59[v49] + 1;
    v50 = v49 + 1;
    v44 = v9;
    v9 *= 9LL;
    v12 = (_BYTE *)(v8 + 8 * v9 + 64);
    v13 = 0LL;
    do
    {
      if ( v50 == v13 )
LABEL_85:
        core::panicking::panic_nounwind(aUnsafePrecondi_2, 69LL, v9);
      v14 = v10 + 1;
      *(_QWORD *)&v59[5] = v10 + 1;
      if ( v10 >= 5 )
LABEL_86:
        core::panicking::panic_nounwind(aUnsafePrecondi_14, 97LL, v9);
      v15 = *(v11 - 1);
      v16 = *v11;
      <clap_builder::builder::possible_value::PossibleValue as core::default::Default>::default(&v55);
      v9 = (unsigned __int64)&v56.m256i_u64[1];
      v61 = v56;
      v17 = v55;
      v60 = v55;
      v18 = v58 & 1;
      *(__m256i *)(v12 - 48) = v56;
      *((_OWORD *)v12 - 4) = v17;
      *((_QWORD *)v12 - 2) = v15;
      *((_QWORD *)v12 - 1) = v16;
      *v12 = v18;
      v11 += 2;
      --v13;
      v12 += 72;
      v10 = v14;
    }
    while ( v51 != v14 );
    v43 = v44 - v13;
    v1 = v54;
  }
  v63 = v42;
  v64 = v43;
  clap_builder::builder::value_parser::ValueParser::new(v59, &v63, v9);
  v19 = *(_QWORD *)&v59[0];
  v62[0] = *(_OWORD *)((char *)v59 + 8);
  if ( *(_QWORD *)&v59[0] != 5LL )
    v45 = v62[0];
  if ( *(_QWORD *)&v75[40] >= 4uLL && *(_QWORD *)&v75[40] != 5LL )
    core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(&v75[48]);
  *(_QWORD *)&v75[40] = v19;
  *(_OWORD *)&v75[48] = v45;
  v59[0] = v74;
  memcpy((char *)&v59[2] + 8, v75, 0x228uLL);
  v59[1] = 1uLL;
  *(_QWORD *)&v59[2] = 1LL;
  *(_QWORD *)&v62[0] = "datethur]";
  *((_QWORD *)&v62[0] + 1) = 4LL;
  *(_QWORD *)&v62[1] = 0LL;
  *((_QWORD *)&v62[1] + 1) = 1LL;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v45, v62);
  alloc::raw_vec::RawVec<T,A>::current_memory(v62, &v59[26]);
  if ( *((_QWORD *)&v62[0] + 1) && *(_QWORD *)&v62[1] )
    _rust_dealloc(*(_QWORD *)&v62[0]);
  *(_QWORD *)&v59[27] = v46.m256i_i64[0];
  v59[26] = v45;
  memcpy(v79, v59, sizeof(v79));
  *(_QWORD *)&v59[0] = 0LL;
  *((_QWORD *)&v59[0] + 1) = 1LL;
  *(_QWORD *)&v59[1] = 0LL;
  alloc::string::String::push_str(v59, aOutputDateTime, 200LL);
  v20 = *(_QWORD *)&v59[0];
  v62[0] = *(_OWORD *)((char *)v59 + 8);
  if ( *(_QWORD *)&v59[0] != 0x8000000000000000LL )
    v45 = v62[0];
  if ( *((_QWORD *)&v79[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v79[27] + 8, aOutputDateTime);
  *((_QWORD *)&v79[27] + 1) = v20;
  v79[28] = v45;
  memcpy(v59, v79, sizeof(v59));
  clap_builder::builder::command::Command::arg_internal(v92, v59);
  memcpy(v91, v92, sizeof(v91));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v59);
  *(_QWORD *)&v59[33] = aRfcEmail_0;
  *((_QWORD *)&v59[33] + 1) = 9LL;
  memcpy(v69, v59, 0x220uLL);
  *(_OWORD *)&v69[560] = v59[35];
  *(_QWORD *)&v69[580] = *(_QWORD *)((char *)&v59[36] + 4);
  v70 = HIDWORD(v59[36]);
  *(_QWORD *)&v69[544] = aRfcEmail_0;
  *(_QWORD *)&v69[552] = 9LL;
  *(_DWORD *)&v69[576] = 82;
  *(_QWORD *)&v59[0] = 0LL;
  *((_QWORD *)&v59[0] + 1) = 1LL;
  *(_QWORD *)&v59[1] = 0LL;
  alloc::string::String::push_str(v59, aOutputDateAndT, 82LL);
  v21 = *(_QWORD *)&v59[0];
  v62[0] = *(_OWORD *)((char *)v59 + 8);
  if ( *(_QWORD *)&v59[0] != 0x8000000000000000LL )
    v45 = v62[0];
  if ( *(_QWORD *)&v69[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v69[440], aOutputDateAndT);
  *(_QWORD *)&v69[440] = v21;
  *(_OWORD *)&v69[448] = v45;
  memcpy(v59, v69, 0x24CuLL);
  *(_WORD *)((char *)&v59[36] + 13) = *(_WORD *)((char *)&v70 + 1);
  HIBYTE(v59[36]) = HIBYTE(v70);
  BYTE12(v59[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v91, v59);
  memcpy(v90, v91, sizeof(v90));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v62);
  *(_QWORD *)&v62[33] = aRfc3339;
  *((_QWORD *)&v62[33] + 1) = 8LL;
  memcpy(v59, v62, 0x220uLL);
  v59[35] = v62[35];
  v59[36] = v62[36];
  *(_QWORD *)&v59[34] = aRfc3339;
  *((_QWORD *)&v59[34] + 1) = 8LL;
  *(_QWORD *)&v62[0] = aFmt;
  *((_QWORD *)&v62[0] + 1) = 3LL;
  clap_builder::builder::arg::Arg::value_names(v81, v59);
  *(_QWORD *)&v55 = "datethur]";
  *((_QWORD *)&v55 + 1) = 4LL;
  v56.m256i_i64[0] = (__int64)aSeconds;
  v56.m256i_i64[1] = 7LL;
  v56.m256i_i64[2] = (__int64)aNs;
  v56.m256i_i64[3] = 2LL;
  *(_QWORD *)&v57 = 0LL;
  *((_QWORD *)&v57 + 1) = 3LL;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v52, 3LL, 0LL);
  if ( v52 )
    alloc::raw_vec::handle_error(v53, *((_QWORD *)&v53 + 1));
  v22 = *((_QWORD *)&v53 + 1);
  v42 = v53;
  v43 = 0LL;
  v47 = v57;
  v45 = v55;
  v46 = v56;
  v9 = *((_QWORD *)&v57 + 1) - v57;
  if ( *((_QWORD *)&v57 + 1) < (unsigned __int64)v57 )
    goto LABEL_87;
  if ( v9 <= (unsigned __int64)v53 )
  {
    v9 = 0LL;
  }
  else
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v42, 0LL);
    v22 = *((_QWORD *)&v42 + 1);
    v9 = v43;
  }
  v62[3] = v57;
  *(__m256i *)&v62[1] = v56;
  v62[0] = v55;
  v51 = *((_QWORD *)&v57 + 1);
  v23 = v57;
  if ( *((_QWORD *)&v57 + 1) < (unsigned __int64)v57 )
LABEL_87:
    core::panicking::panic_nounwind(aUnsafePrecondi_12, 69LL, v9);
  if ( *((_QWORD *)&v57 + 1) == (_QWORD)v57 )
  {
    if ( (unsigned __int64)v57 >= 4 )
      goto LABEL_51;
  }
  else
  {
    v24 = (__int64 *)&v62[v57] + 1;
    v50 = v57 + 1;
    v44 = v9;
    v9 *= 9LL;
    v25 = (_BYTE *)(v22 + 8 * v9 + 64);
    v26 = 0LL;
    do
    {
      if ( v50 == v26 )
        goto LABEL_85;
      v27 = v23 + 1;
      *(_QWORD *)&v62[3] = v23 + 1;
      if ( v23 >= 3 )
        goto LABEL_86;
      v28 = *(v24 - 1);
      v29 = *v24;
      <clap_builder::builder::possible_value::PossibleValue as core::default::Default>::default(v59);
      v9 = (unsigned __int64)&v59[1] + 8;
      v61.m256i_i64[3] = *((_QWORD *)&v59[2] + 1);
      *(_OWORD *)&v61.m256i_u64[1] = *(_OWORD *)((char *)&v59[1] + 8);
      v61.m256i_i64[0] = *(_QWORD *)&v59[1];
      v30 = v59[0];
      v60 = v59[0];
      v31 = v59[4] & 1;
      *(__m256i *)(v25 - 48) = v61;
      *((_OWORD *)v25 - 4) = v30;
      *((_QWORD *)v25 - 2) = v28;
      *((_QWORD *)v25 - 1) = v29;
      *v25 = v31;
      v24 += 2;
      --v26;
      v25 += 72;
      v23 = v27;
    }
    while ( v51 != v27 );
    v43 = v44 - v26;
    v1 = v54;
  }
  v65 = v42;
  v66 = v43;
  clap_builder::builder::value_parser::ValueParser::new(v59, &v65, v9);
  v32 = *(_QWORD *)&v59[0];
  v62[0] = *(_OWORD *)((char *)v59 + 8);
  if ( *(_QWORD *)&v59[0] != 5LL )
    v59[0] = v62[0];
  if ( v81[10] >= 4uLL && v81[10] != 5LL )
    core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(&v81[11]);
  v81[10] = v32;
  *(_OWORD *)&v81[11] = v59[0];
  memcpy(v80, v81, sizeof(v80));
  *(_QWORD *)&v59[0] = 0LL;
  *((_QWORD *)&v59[0] + 1) = 1LL;
  *(_QWORD *)&v59[1] = 0LL;
  alloc::string::String::push_str(v59, aOutputDateTime_0, 151LL);
  v33 = *(_QWORD *)&v59[0];
  v62[0] = *(_OWORD *)((char *)v59 + 8);
  if ( *(_QWORD *)&v59[0] != 0x8000000000000000LL )
    v45 = v62[0];
  if ( *((_QWORD *)&v80[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v80[27] + 8, aOutputDateTime_0);
  *((_QWORD *)&v80[27] + 1) = v33;
  v80[28] = v45;
  memcpy(v59, v80, sizeof(v59));
  clap_builder::builder::command::Command::arg_internal(v90, v59);
  memcpy(v89, v90, sizeof(v89));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v59);
  *(_QWORD *)&v59[33] = aDebug;
  *((_QWORD *)&v59[33] + 1) = 5LL;
  memcpy(v71, v59, 0x220uLL);
  *(_OWORD *)&v71[560] = v59[35];
  *(_OWORD *)&v71[576] = v59[36];
  *(_QWORD *)&v71[544] = aDebug;
  *(_QWORD *)&v71[552] = 5LL;
  *(_QWORD *)&v59[0] = 0LL;
  *((_QWORD *)&v59[0] + 1) = 1LL;
  *(_QWORD *)&v59[1] = 0LL;
  alloc::string::String::push_str(v59, aAnnotateThePar, 69LL);
  v34 = *(_QWORD *)&v59[0];
  v62[0] = *(_OWORD *)((char *)v59 + 8);
  if ( *(_QWORD *)&v59[0] != 0x8000000000000000LL )
    v45 = v62[0];
  if ( *(_QWORD *)&v71[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v71[440], aAnnotateThePar);
  *(_QWORD *)&v71[440] = v34;
  *(_OWORD *)&v71[448] = v45;
  memcpy(v59, v71, 0x24CuLL);
  *(_WORD *)((char *)&v59[36] + 13) = *(_WORD *)&v71[589];
  HIBYTE(v59[36]) = v71[591];
  BYTE12(v59[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v89, v59);
  memcpy(v88, v89, sizeof(v88));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v62);
  *(_QWORD *)&v62[33] = aReference;
  *((_QWORD *)&v62[33] + 1) = 9LL;
  memcpy(v59, v62, 0x220uLL);
  v59[35] = v62[35];
  *(_QWORD *)((char *)&v59[36] + 4) = *(_QWORD *)((char *)&v62[36] + 4);
  HIDWORD(v59[36]) = HIDWORD(v62[36]);
  *(_QWORD *)&v59[34] = aReference;
  *((_QWORD *)&v59[34] + 1) = 9LL;
  LODWORD(v59[36]) = 114;
  *(_QWORD *)&v62[0] = aFile;
  *((_QWORD *)&v62[0] + 1) = 4LL;
  clap_builder::builder::arg::Arg::value_names(v95, v59);
  v95[589] = 2;
  memcpy(v82, v95, sizeof(v82));
  *(_QWORD *)&v59[0] = 0LL;
  *((_QWORD *)&v59[0] + 1) = 1LL;
  *(_QWORD *)&v59[1] = 0LL;
  alloc::string::String::push_str(v59, aDisplayTheLast, 42LL);
  v35 = *(_QWORD *)&v59[0];
  v62[0] = *(_OWORD *)((char *)v59 + 8);
  if ( *(_QWORD *)&v59[0] != 0x8000000000000000LL )
    v45 = v62[0];
  if ( *((_QWORD *)&v82[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v82[27] + 8, aDisplayTheLast);
  *((_QWORD *)&v82[27] + 1) = v35;
  v82[28] = v45;
  memcpy(v59, v82, sizeof(v59));
  clap_builder::builder::command::Command::arg_internal(v88, v59);
  memcpy(v87, v88, sizeof(v87));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v62);
  *(_QWORD *)&v62[33] = aSet_0;
  *((_QWORD *)&v62[33] + 1) = 3LL;
  memcpy(v59, v62, 0x220uLL);
  v59[35] = v62[35];
  *(_QWORD *)((char *)&v59[36] + 4) = *(_QWORD *)((char *)&v62[36] + 4);
  HIDWORD(v59[36]) = HIDWORD(v62[36]);
  *(_QWORD *)&v59[34] = aSet_0;
  *((_QWORD *)&v59[34] + 1) = 3LL;
  LODWORD(v59[36]) = 115;
  *(_QWORD *)&v62[0] = aString;
  *((_QWORD *)&v62[0] + 1) = 6LL;
  clap_builder::builder::arg::Arg::value_names(v83, v59);
  *(_QWORD *)&v59[0] = 0LL;
  *((_QWORD *)&v59[0] + 1) = 1LL;
  *(_QWORD *)&v59[1] = 0LL;
  alloc::string::String::push_str(v59, aSetTimeDescrib, 28LL);
  v36 = *(_QWORD *)&v59[0];
  v62[0] = *(_OWORD *)((char *)v59 + 8);
  if ( *(_QWORD *)&v59[0] != 0x8000000000000000LL )
    v45 = v62[0];
  if ( *((_QWORD *)&v83[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v83[27] + 8, aSetTimeDescrib);
  *((_QWORD *)&v83[27] + 1) = v36;
  v83[28] = v45;
  memcpy(v59, v83, sizeof(v59));
  clap_builder::builder::command::Command::arg_internal(v87, v59);
  memcpy(v86, v87, sizeof(v86));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v59);
  *(_QWORD *)&v59[33] = aUniversal_0;
  *((_QWORD *)&v59[33] + 1) = 9LL;
  memcpy(v72, v59, 0x220uLL);
  v72[35] = v59[35];
  *(_QWORD *)((char *)&v72[36] + 4) = *(_QWORD *)((char *)&v59[36] + 4);
  HIDWORD(v72[36]) = HIDWORD(v59[36]);
  *(_QWORD *)&v72[34] = aUniversal_0;
  *((_QWORD *)&v72[34] + 1) = 9LL;
  LODWORD(v72[36]) = 117;
  v37 = *((_QWORD *)&v72[19] + 1);
  if ( *((_QWORD *)&v72[19] + 1) == *((_QWORD *)&v72[18] + 1) )
    alloc::raw_vec::RawVec<T,A>::grow_one((char *)&v72[18] + 8);
  v38 = *(_QWORD *)&v72[19];
  v39 = 3 * v37;
  *(_QWORD *)(*(_QWORD *)&v72[19] + 8 * v39) = &unk_66378;
  *(_QWORD *)(v38 + 8 * v39 + 8) = 3LL;
  *(_BYTE *)(v38 + 8 * v39 + 16) = 0;
  *((_QWORD *)&v72[19] + 1) = v37 + 1;
  memcpy(v73, v72, sizeof(v73));
  *(_QWORD *)&v59[0] = 0LL;
  *((_QWORD *)&v59[0] + 1) = 1LL;
  *(_QWORD *)&v59[1] = 0LL;
  alloc::string::String::push_str(v59, aPrintOrSetCoor, 45LL);
  v40 = *(_QWORD *)&v59[0];
  v62[0] = *(_OWORD *)((char *)v59 + 8);
  if ( *(_QWORD *)&v59[0] != 0x8000000000000000LL )
    v45 = v62[0];
  if ( *((_QWORD *)&v73[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v73[27] + 8, aPrintOrSetCoor);
  *((_QWORD *)&v73[27] + 1) = v40;
  v73[28] = v45;
  memcpy(v59, v73, 0x24CuLL);
  *(_WORD *)((char *)&v59[36] + 13) = *(_WORD *)((char *)&v73[36] + 13);
  HIBYTE(v59[36]) = HIBYTE(v73[36]);
  BYTE12(v59[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v86, v59);
  memcpy(v85, v86, sizeof(v85));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v62);
  *(_QWORD *)&v62[33] = &unk_663A8;
  *((_QWORD *)&v62[33] + 1) = 6LL;
  memcpy(v59, v62, sizeof(v59));
  clap_builder::builder::command::Command::arg_internal(v85, v59);
  memcpy(v1, v85, 0x2C8uLL);
  return v1;
}
