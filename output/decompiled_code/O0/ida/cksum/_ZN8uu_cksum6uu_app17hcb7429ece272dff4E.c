void *__fastcall uu_cksum::uu_app(void *dest)
{
  void *v1; // r12
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rbx
  __int64 v5; // rbx
  __int64 v6; // r13
  unsigned __int64 v7; // rax
  __int64 *v8; // r15
  _BYTE *v9; // rbp
  __int64 v10; // rbx
  unsigned __int64 v11; // r12
  __int64 v12; // r13
  __int64 v13; // r14
  __int128 v14; // xmm0
  char v15; // al
  __int64 v16; // rax
  __int64 v17; // r14
  __int64 v18; // rbx
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rcx
  _QWORD *v26; // rax
  _QWORD *v27; // r14
  __int64 v28; // rbx
  __int64 v29; // rbx
  __int64 v30; // rbx
  __int64 v31; // rbx
  __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rbx
  __int64 v36; // rbx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r14
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rbx
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rbx
  __int64 v46; // rbx
  __int64 v47; // rbx
  __int64 v48; // rbx
  __int64 v49; // rbx
  __int128 v51; // [rsp+8h] [rbp-6AE0h] BYREF
  __int64 v52; // [rsp+18h] [rbp-6AD0h]
  _OWORD v53[37]; // [rsp+20h] [rbp-6AC8h] BYREF
  __int64 v54; // [rsp+278h] [rbp-6870h]
  void *v55; // [rsp+280h] [rbp-6868h]
  __int64 v56; // [rsp+288h] [rbp-6860h]
  __int64 v57; // [rsp+290h] [rbp-6858h]
  __int64 v58; // [rsp+298h] [rbp-6850h] BYREF
  __int128 v59; // [rsp+2A0h] [rbp-6848h]
  _OWORD v60[16]; // [rsp+2B0h] [rbp-6838h] BYREF
  _OWORD v61[16]; // [rsp+3B0h] [rbp-6738h] BYREF
  __int64 v62; // [rsp+4B8h] [rbp-6630h] BYREF
  __int128 v63; // [rsp+4C0h] [rbp-6628h]
  __int128 v64; // [rsp+4D0h] [rbp-6618h]
  __m256i v65; // [rsp+4E0h] [rbp-6608h]
  __int128 v66; // [rsp+508h] [rbp-65E0h] BYREF
  __m256i v67; // [rsp+518h] [rbp-65D0h]
  char v68; // [rsp+548h] [rbp-65A0h]
  _OWORD v69[36]; // [rsp+550h] [rbp-6598h] BYREF
  __int128 v70; // [rsp+790h] [rbp-6358h]
  _BYTE v71[588]; // [rsp+7A0h] [rbp-6348h] BYREF
  int v72; // [rsp+9ECh] [rbp-60FCh]
  _BYTE v73[588]; // [rsp+9F0h] [rbp-60F8h] BYREF
  int v74; // [rsp+C3Ch] [rbp-5EACh]
  _BYTE v75[588]; // [rsp+C40h] [rbp-5EA8h] BYREF
  int v76; // [rsp+E8Ch] [rbp-5C5Ch]
  _BYTE v77[588]; // [rsp+E90h] [rbp-5C58h] BYREF
  int v78; // [rsp+10DCh] [rbp-5A0Ch]
  _OWORD v79[37]; // [rsp+10E0h] [rbp-5A08h] BYREF
  _BYTE v80[592]; // [rsp+1330h] [rbp-57B8h] BYREF
  _BYTE v81[592]; // [rsp+1580h] [rbp-5568h] BYREF
  _BYTE v82[592]; // [rsp+17D0h] [rbp-5318h] BYREF
  _BYTE v83[592]; // [rsp+1A20h] [rbp-50C8h] BYREF
  _BYTE v84[592]; // [rsp+1C70h] [rbp-4E78h] BYREF
  _BYTE v85[592]; // [rsp+1EC0h] [rbp-4C28h] BYREF
  _BYTE v86[592]; // [rsp+2110h] [rbp-49D8h] BYREF
  _BYTE v87[592]; // [rsp+2360h] [rbp-4788h] BYREF
  _BYTE v88[589]; // [rsp+25B0h] [rbp-4538h] BYREF
  _BYTE v89[3]; // [rsp+27FDh] [rbp-42EBh]
  _BYTE v90[588]; // [rsp+2800h] [rbp-42E8h] BYREF
  int v91; // [rsp+2A4Ch] [rbp-409Ch]
  _QWORD v92[74]; // [rsp+2A50h] [rbp-4098h] BYREF
  _QWORD v93[74]; // [rsp+2CA0h] [rbp-3E48h] BYREF
  _QWORD v94[74]; // [rsp+2EF0h] [rbp-3BF8h] BYREF
  _QWORD v95[74]; // [rsp+3140h] [rbp-39A8h] BYREF
  _QWORD v96[74]; // [rsp+3390h] [rbp-3758h] BYREF
  _DWORD v97[178]; // [rsp+35E0h] [rbp-3508h] BYREF
  _QWORD v98[89]; // [rsp+38A8h] [rbp-3240h] BYREF
  _DWORD v99[178]; // [rsp+3B70h] [rbp-2F78h] BYREF
  _BYTE v100[712]; // [rsp+3E38h] [rbp-2CB0h] BYREF
  _BYTE v101[712]; // [rsp+4100h] [rbp-29E8h] BYREF
  _BYTE v102[712]; // [rsp+43C8h] [rbp-2720h] BYREF
  _BYTE v103[712]; // [rsp+4690h] [rbp-2458h] BYREF
  _QWORD v104[89]; // [rsp+4958h] [rbp-2190h] BYREF
  _BYTE v105[712]; // [rsp+4C20h] [rbp-1EC8h] BYREF
  _BYTE v106[712]; // [rsp+4EE8h] [rbp-1C00h] BYREF
  _BYTE v107[712]; // [rsp+51B0h] [rbp-1938h] BYREF
  _BYTE v108[712]; // [rsp+5478h] [rbp-1670h] BYREF
  _BYTE v109[712]; // [rsp+5740h] [rbp-13A8h] BYREF
  _QWORD v110[89]; // [rsp+5A08h] [rbp-10E0h] BYREF
  _BYTE v111[712]; // [rsp+5CD0h] [rbp-E18h] BYREF
  _BYTE v112[712]; // [rsp+5F98h] [rbp-B50h] BYREF
  _BYTE v113[712]; // [rsp+6260h] [rbp-888h] BYREF
  _QWORD src[89]; // [rsp+6528h] [rbp-5C0h] BYREF
  _BYTE desta[760]; // [rsp+67F0h] [rbp-2F8h] BYREF

  v110[22] = 0LL;
  v104[44] = 0LL;
  v98[66] = 0LL;
  v92[13] = 0LL;
  *(_QWORD *)&v83[152] = 0LL;
  *(_QWORD *)&v73[200] = 0LL;
  v1 = dest;
  v2 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  if ( !*(_QWORD *)(v2 + 8) || *(__int64 *)(v2 + 16) < 0 )
    core::panicking::panic_nounwind(anon_983ba386f48605eb6a2f271d0cb174c9_11_llvm_2613378195564442977, 162LL);
  clap_builder::builder::command::Command::new::new_inner(src);
  src[76] = a0027;
  src[77] = 6LL;
  memcpy(desta, src, 0x2C8uLL);
  clap_builder::builder::command::Command::about(v97, desta);
  uucore::format_usage((unsigned int)&v62);
  v3 = v62;
  if ( v62 != 0x8000000000000000LL )
    v61[0] = v63;
  if ( *(_QWORD *)&v97[116] != 0x8000000000000000LL )
  {
    alloc::raw_vec::RawVec<T,A>::current_memory(v53, &v97[116]);
    if ( *((_QWORD *)&v53[0] + 1) )
    {
      if ( *(_QWORD *)&v53[1] )
        _rust_dealloc(*(_QWORD *)&v53[0]);
    }
  }
  *(_QWORD *)&v97[116] = v3;
  *(_OWORD *)&v97[118] = v61[0];
  memcpy(v99, v97, 0x2BCuLL);
  *(_QWORD *)&v99[175] = *(_QWORD *)&v97[175] | 0x8800000088LL;
  v99[177] = v97[177];
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v53);
  *(_QWORD *)&v53[33] = aFile;
  *((_QWORD *)&v53[33] + 1) = 4LL;
  memcpy(v88, v53, 0x248uLL);
  *(_WORD *)v89 = *(_WORD *)((char *)&v53[36] + 13);
  v89[2] = HIBYTE(v53[36]);
  *(_DWORD *)&v88[584] = DWORD2(v53[36]) | 4;
  v88[588] = 1;
  if ( *(_QWORD *)&v88[80] >= 4uLL && *(_QWORD *)&v88[80] != 5LL )
  {
    if ( **(_QWORD **)&v88[96] )
      (**(void (__fastcall ***)(_QWORD))&v88[96])(*(_QWORD *)&v88[88]);
    <alloc::boxed::Box<T,A> as core::ops::drop::Drop>::drop(&v88[88]);
  }
  *(_QWORD *)&v88[80] = 2LL;
  memcpy(v53, v88, 0x24DuLL);
  BYTE13(v53[36]) = 3;
  HIWORD(v53[36]) = *(_WORD *)&v89[1];
  clap_builder::builder::command::Command::arg_internal(v99, v53);
  memcpy(v113, v99, sizeof(v113));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v53);
  *(_QWORD *)&v53[33] = aAlgorithm_0;
  *((_QWORD *)&v53[33] + 1) = 9LL;
  memcpy(v79, v53, 0x220uLL);
  v79[35] = v53[35];
  *(_QWORD *)((char *)&v79[36] + 4) = *(_QWORD *)((char *)&v53[36] + 4);
  HIDWORD(v79[36]) = HIDWORD(v53[36]);
  *(_QWORD *)&v79[34] = aAlgorithm_0;
  *((_QWORD *)&v79[34] + 1) = 9LL;
  LODWORD(v79[36]) = 97;
  <clap_builder::builder::styled_str::StyledStr as core::convert::From<&str>>::from(v53, aSelectTheDiges, 47LL);
  v4 = *(_QWORD *)&v53[0];
  v61[0] = *(_OWORD *)((char *)v53 + 8);
  if ( *(_QWORD *)&v53[0] != 0x8000000000000000LL )
    v60[0] = v61[0];
  if ( *((_QWORD *)&v79[27] + 1) != 0x8000000000000000LL )
  {
    alloc::raw_vec::RawVec<T,A>::current_memory(v53, (char *)&v79[27] + 8);
    if ( *((_QWORD *)&v53[0] + 1) )
    {
      if ( *(_QWORD *)&v53[1] )
        _rust_dealloc(*(_QWORD *)&v53[0]);
    }
  }
  *((_QWORD *)&v79[27] + 1) = v4;
  v79[28] = v60[0];
  memcpy(v53, v79, sizeof(v53));
  *(_QWORD *)&v61[0] = aAlgorithm_1;
  *((_QWORD *)&v61[0] + 1) = 9LL;
  clap_builder::builder::arg::Arg::value_names(v92, v53);
  memcpy(v60, &off_3106F0, 0xF0uLL);
  *(_QWORD *)&v60[15] = 0LL;
  *((_QWORD *)&v60[15] + 1) = 15LL;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v58, 15LL, 0LL);
  if ( v58 )
    alloc::raw_vec::handle_error(v59, *((_QWORD *)&v59 + 1));
  v5 = *((_QWORD *)&v59 + 1);
  v51 = v59;
  v52 = 0LL;
  memcpy(v61, v60, sizeof(v61));
  if ( *((_QWORD *)&v61[15] + 1) < *(_QWORD *)&v61[15]
    || (*((_QWORD *)&v61[15] + 1) - *(_QWORD *)&v61[15] <= (unsigned __int64)v59
      ? (v6 = 0LL)
      : (alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v51, 0LL), v5 = *((_QWORD *)&v51 + 1), v6 = v52),
        memcpy(v53, v60, 0x100uLL),
        v57 = *((_QWORD *)&v53[15] + 1),
        v7 = *(_QWORD *)&v53[15],
        *((_QWORD *)&v53[15] + 1) < *(_QWORD *)&v53[15]) )
  {
    core::panicking::panic_nounwind(aUnsafePrecondi_11, 69LL);
  }
  if ( *((_QWORD *)&v53[15] + 1) == *(_QWORD *)&v53[15] )
  {
    if ( *(_QWORD *)&v53[15] >= 0x10uLL )
      core::panicking::panic_nounwind(anon_45c6b7f83f4af56e17bd9f6b0f063fe4_3_llvm_6024280175120751173, 101LL);
  }
  else
  {
    v55 = dest;
    v8 = (__int64 *)&v53[*(_QWORD *)&v53[15]] + 1;
    v56 = *(_QWORD *)&v53[15] + 1LL;
    v54 = v6;
    v9 = (_BYTE *)(v5 + 72 * v6 + 64);
    v10 = 0LL;
    do
    {
      if ( v56 == v10 )
        core::panicking::panic_nounwind(aUnsafePrecondi_10, 69LL);
      v11 = v7 + 1;
      *(_QWORD *)&v53[15] = v7 + 1;
      if ( v7 >= 0xF )
        core::panicking::panic_nounwind(aUnsafePrecondi_14, 97LL);
      v12 = *(v8 - 1);
      v13 = *v8;
      <clap_builder::builder::possible_value::PossibleValue as core::default::Default>::default(&v66);
      v65 = v67;
      v14 = v66;
      v64 = v66;
      v15 = v68 & 1;
      *(__m256i *)(v9 - 48) = v67;
      *((_OWORD *)v9 - 4) = v14;
      *((_QWORD *)v9 - 2) = v12;
      *((_QWORD *)v9 - 1) = v13;
      *v9 = v15;
      v8 += 2;
      --v10;
      v9 += 72;
      v7 = v11;
    }
    while ( v57 != v11 );
    v52 = v54 - v10;
    v1 = v55;
  }
  v53[0] = v51;
  *(_QWORD *)&v53[1] = v52;
  v16 = _rust_alloc(24LL, 8LL);
  if ( !v16 )
    alloc::alloc::handle_alloc_error(8LL, 24LL);
  v17 = v16;
  *(_QWORD *)(v16 + 16) = *(_QWORD *)&v53[1];
  *(_OWORD *)v16 = v53[0];
  if ( v92[10] >= 4uLL && v92[10] != 5LL )
  {
    if ( *(_QWORD *)v92[12] )
      (*(void (__fastcall **)(_QWORD))v92[12])(v92[11]);
    <alloc::boxed::Box<T,A> as core::ops::drop::Drop>::drop(&v92[11]);
  }
  v92[10] = 4LL;
  v92[11] = v17;
  v92[12] = &off_310658;
  memcpy(v53, v92, sizeof(v53));
  clap_builder::builder::command::Command::arg_internal(v113, v53);
  memcpy(v112, v113, sizeof(v112));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v53);
  *(_QWORD *)&v53[33] = aUntagged;
  *((_QWORD *)&v53[33] + 1) = 8LL;
  memcpy(v80, v53, 0x220uLL);
  *(_OWORD *)&v80[560] = v53[35];
  *(_OWORD *)&v80[576] = v53[36];
  *(_QWORD *)&v80[544] = aUntagged;
  *(_QWORD *)&v80[552] = 8LL;
  <clap_builder::builder::styled_str::StyledStr as core::convert::From<&str>>::from(v53, aCreateAReverse, 53LL);
  v18 = *(_QWORD *)&v53[0];
  v61[0] = *(_OWORD *)((char *)v53 + 8);
  if ( *(_QWORD *)&v53[0] != 0x8000000000000000LL )
    v60[0] = v61[0];
  if ( *(_QWORD *)&v80[440] != 0x8000000000000000LL )
  {
    alloc::raw_vec::RawVec<T,A>::current_memory(v53, &v80[440]);
    if ( *((_QWORD *)&v53[0] + 1) )
    {
      if ( *(_QWORD *)&v53[1] )
        _rust_dealloc(*(_QWORD *)&v53[0]);
    }
  }
  *(_QWORD *)&v80[440] = v18;
  *(_OWORD *)&v80[448] = v60[0];
  memcpy(v93, v80, 0x24CuLL);
  *(_WORD *)((char *)&v93[73] + 5) = *(_WORD *)&v80[589];
  HIBYTE(v93[73]) = v80[591];
  BYTE4(v93[73]) = 2;
  v19 = v93[18];
  if ( v93[18] == v93[16] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v93[16]);
  v20 = v93[17];
  v21 = 16 * v19;
  *(_QWORD *)(v93[17] + v21) = aTag;
  *(_QWORD *)(v20 + v21 + 8) = 3LL;
  v93[18] = v19 + 1;
  memcpy(v53, v93, sizeof(v53));
  clap_builder::builder::command::Command::arg_internal(v112, v53);
  memcpy(v111, v112, sizeof(v111));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v53);
  *(_QWORD *)&v53[33] = aTag;
  *((_QWORD *)&v53[33] + 1) = 3LL;
  memcpy(v81, v53, 0x220uLL);
  *(_OWORD *)&v81[560] = v53[35];
  *(_OWORD *)&v81[576] = v53[36];
  *(_QWORD *)&v81[544] = aTag;
  *(_QWORD *)&v81[552] = 3LL;
  <clap_builder::builder::styled_str::StyledStr as core::convert::From<&str>>::from(v53, aCreateABsdStyl, 54LL);
  v22 = *(_QWORD *)&v53[0];
  v61[0] = *(_OWORD *)((char *)v53 + 8);
  if ( *(_QWORD *)&v53[0] != 0x8000000000000000LL )
    v60[0] = v61[0];
  if ( *(_QWORD *)&v81[440] != 0x8000000000000000LL )
  {
    alloc::raw_vec::RawVec<T,A>::current_memory(v53, &v81[440]);
    if ( *((_QWORD *)&v53[0] + 1) )
    {
      if ( *(_QWORD *)&v53[1] )
        _rust_dealloc(*(_QWORD *)&v53[0]);
    }
  }
  *(_QWORD *)&v81[440] = v22;
  *(_OWORD *)&v81[448] = v60[0];
  memcpy(v94, v81, 0x24CuLL);
  *(_WORD *)((char *)&v94[73] + 5) = *(_WORD *)&v81[589];
  HIBYTE(v94[73]) = v81[591];
  BYTE4(v94[73]) = 2;
  v23 = v94[18];
  if ( v94[18] == v94[16] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v94[16]);
  v24 = v94[17];
  v25 = 16 * v23;
  *(_QWORD *)(v94[17] + v25) = aUntagged;
  *(_QWORD *)(v24 + v25 + 8) = 8LL;
  v94[18] = v23 + 1;
  memcpy(v53, v94, sizeof(v53));
  clap_builder::builder::command::Command::arg_internal(v111, v53);
  memcpy(v110, v111, sizeof(v110));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v53);
  *(_QWORD *)&v53[33] = aLength_0;
  *((_QWORD *)&v53[33] + 1) = 6LL;
  memcpy(v69, v53, 0x220uLL);
  v69[35] = v53[35];
  v70 = v53[36];
  *(_QWORD *)&v69[34] = aLength_0;
  *((_QWORD *)&v69[34] + 1) = 6LL;
  v26 = (_QWORD *)_rust_alloc(8LL, 8LL);
  if ( !v26 )
    alloc::alloc::handle_alloc_error(8LL, 8LL);
  v27 = v26;
  *v26 = core::num::<impl core::str::traits::FromStr for usize>::from_str;
  if ( *(_QWORD *)&v69[5] >= 4uLL && *(_QWORD *)&v69[5] != 5LL )
  {
    if ( **(_QWORD **)&v69[6] )
      (**(void (__fastcall ***)(_QWORD))&v69[6])(*((_QWORD *)&v69[5] + 1));
    <alloc::boxed::Box<T,A> as core::ops::drop::Drop>::drop((char *)&v69[5] + 8);
  }
  *(_QWORD *)&v69[5] = 4LL;
  *((_QWORD *)&v69[5] + 1) = v27;
  *(_QWORD *)&v69[6] = &unk_310608;
  memcpy(v90, v69, 0x240uLL);
  *(_QWORD *)&v90[580] = *(_QWORD *)((char *)&v70 + 4);
  v91 = HIDWORD(v70);
  *(_DWORD *)&v90[576] = 108;
  <clap_builder::builder::styled_str::StyledStr as core::convert::From<&str>>::from(v53, aDigestLengthIn, 99LL);
  v28 = *(_QWORD *)&v53[0];
  v61[0] = *(_OWORD *)((char *)v53 + 8);
  if ( *(_QWORD *)&v53[0] != 0x8000000000000000LL )
    v60[0] = v61[0];
  if ( *(_QWORD *)&v90[440] != 0x8000000000000000LL )
  {
    alloc::raw_vec::RawVec<T,A>::current_memory(v53, &v90[440]);
    if ( *((_QWORD *)&v53[0] + 1) )
    {
      if ( *(_QWORD *)&v53[1] )
        _rust_dealloc(*(_QWORD *)&v53[0]);
    }
  }
  *(_QWORD *)&v90[440] = v28;
  *(_OWORD *)&v90[448] = v60[0];
  memcpy(v53, v90, 0x24CuLL);
  *(_WORD *)((char *)&v53[36] + 13) = *(_WORD *)((char *)&v91 + 1);
  HIBYTE(v53[36]) = HIBYTE(v91);
  BYTE12(v53[36]) = 0;
  clap_builder::builder::command::Command::arg_internal(v110, v53);
  memcpy(v109, v110, sizeof(v109));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v53);
  *(_QWORD *)&v53[33] = aRaw_0;
  *((_QWORD *)&v53[33] + 1) = 3LL;
  memcpy(v82, v53, 0x220uLL);
  *(_OWORD *)&v82[560] = v53[35];
  *(_OWORD *)&v82[576] = v53[36];
  *(_QWORD *)&v82[544] = aRaw_0;
  *(_QWORD *)&v82[552] = 3LL;
  <clap_builder::builder::styled_str::StyledStr as core::convert::From<&str>>::from(v53, aEmitARawBinary, 41LL);
  v29 = *(_QWORD *)&v53[0];
  v61[0] = *(_OWORD *)((char *)v53 + 8);
  if ( *(_QWORD *)&v53[0] != 0x8000000000000000LL )
    v60[0] = v61[0];
  if ( *(_QWORD *)&v82[440] != 0x8000000000000000LL )
  {
    alloc::raw_vec::RawVec<T,A>::current_memory(v53, &v82[440]);
    if ( *((_QWORD *)&v53[0] + 1) )
    {
      if ( *(_QWORD *)&v53[1] )
        _rust_dealloc(*(_QWORD *)&v53[0]);
    }
  }
  *(_QWORD *)&v82[440] = v29;
  *(_OWORD *)&v82[448] = v60[0];
  memcpy(v53, v82, 0x24CuLL);
  *(_WORD *)((char *)&v53[36] + 13) = *(_WORD *)&v82[589];
  HIBYTE(v53[36]) = v82[591];
  BYTE12(v53[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v109, v53);
  memcpy(v108, v109, sizeof(v108));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v53);
  *(_QWORD *)&v53[33] = aStrict_0;
  *((_QWORD *)&v53[33] + 1) = 6LL;
  memcpy(v83, v53, 0x220uLL);
  *(_OWORD *)&v83[560] = v53[35];
  *(_OWORD *)&v83[576] = v53[36];
  *(_QWORD *)&v83[544] = aStrict_0;
  *(_QWORD *)&v83[552] = 6LL;
  <clap_builder::builder::styled_str::StyledStr as core::convert::From<&str>>::from(v53, aExitNonZeroFor, 53LL);
  v30 = *(_QWORD *)&v53[0];
  v61[0] = *(_OWORD *)((char *)v53 + 8);
  if ( *(_QWORD *)&v53[0] != 0x8000000000000000LL )
    v60[0] = v61[0];
  if ( *(_QWORD *)&v83[440] != 0x8000000000000000LL )
  {
    alloc::raw_vec::RawVec<T,A>::current_memory(v53, &v83[440]);
    if ( *((_QWORD *)&v53[0] + 1) )
    {
      if ( *(_QWORD *)&v53[1] )
        _rust_dealloc(*(_QWORD *)&v53[0]);
    }
  }
  *(_QWORD *)&v83[440] = v30;
  *(_OWORD *)&v83[448] = v60[0];
  memcpy(v53, v83, 0x24CuLL);
  *(_WORD *)((char *)&v53[36] + 13) = *(_WORD *)&v83[589];
  HIBYTE(v53[36]) = v83[591];
  BYTE12(v53[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v108, v53);
  memcpy(v107, v108, sizeof(v107));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v53);
  *(_QWORD *)&v53[33] = aCheck_0;
  *((_QWORD *)&v53[33] + 1) = 5LL;
  memcpy(v71, v53, 0x220uLL);
  *(_OWORD *)&v71[560] = v53[35];
  *(_QWORD *)&v71[580] = *(_QWORD *)((char *)&v53[36] + 4);
  v72 = HIDWORD(v53[36]);
  *(_QWORD *)&v71[544] = aCheck_0;
  *(_QWORD *)&v71[552] = 5LL;
  *(_DWORD *)&v71[576] = 99;
  <clap_builder::builder::styled_str::StyledStr as core::convert::From<&str>>::from(v53, aReadHashsumsFr, 43LL);
  v31 = *(_QWORD *)&v53[0];
  v61[0] = *(_OWORD *)((char *)v53 + 8);
  if ( *(_QWORD *)&v53[0] != 0x8000000000000000LL )
    v60[0] = v61[0];
  if ( *(_QWORD *)&v71[440] != 0x8000000000000000LL )
  {
    alloc::raw_vec::RawVec<T,A>::current_memory(v53, &v71[440]);
    if ( *((_QWORD *)&v53[0] + 1) )
    {
      if ( *(_QWORD *)&v53[1] )
        _rust_dealloc(*(_QWORD *)&v53[0]);
    }
  }
  *(_QWORD *)&v71[440] = v31;
  *(_OWORD *)&v71[448] = v60[0];
  memcpy(v95, v71, 0x24CuLL);
  *(_WORD *)((char *)&v95[73] + 5) = *(_WORD *)((char *)&v72 + 1);
  HIBYTE(v95[73]) = HIBYTE(v72);
  BYTE4(v95[73]) = 2;
  v32 = v95[15];
  if ( v95[15] == v95[13] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v95[13]);
  v33 = v95[14];
  v34 = 16 * v32;
  *(_QWORD *)(v95[14] + v34) = aTag;
  *(_QWORD *)(v33 + v34 + 8) = 3LL;
  v95[15] = v32 + 1;
  memcpy(v53, v95, sizeof(v53));
  clap_builder::builder::command::Command::arg_internal(v107, v53);
  memcpy(v106, v107, sizeof(v106));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v53);
  *(_QWORD *)&v53[33] = aBase64_0;
  *((_QWORD *)&v53[33] + 1) = 6LL;
  memcpy(v84, v53, 0x220uLL);
  *(_OWORD *)&v84[560] = v53[35];
  *(_OWORD *)&v84[576] = v53[36];
  *(_QWORD *)&v84[544] = aBase64_0;
  *(_QWORD *)&v84[552] = 6LL;
  <clap_builder::builder::styled_str::StyledStr as core::convert::From<&str>>::from(v53, aEmitABase64Dig, 37LL);
  v35 = *(_QWORD *)&v53[0];
  v61[0] = *(_OWORD *)((char *)v53 + 8);
  if ( *(_QWORD *)&v53[0] != 0x8000000000000000LL )
    v60[0] = v61[0];
  if ( *(_QWORD *)&v84[440] != 0x8000000000000000LL )
  {
    alloc::raw_vec::RawVec<T,A>::current_memory(v53, &v84[440]);
    if ( *((_QWORD *)&v53[0] + 1) )
    {
      if ( *(_QWORD *)&v53[1] )
        _rust_dealloc(*(_QWORD *)&v53[0]);
    }
  }
  *(_QWORD *)&v84[440] = v35;
  *(_OWORD *)&v84[448] = v60[0];
  memcpy(v96, v84, 0x24CuLL);
  *(_WORD *)((char *)&v96[73] + 5) = *(_WORD *)&v84[589];
  HIBYTE(v96[73]) = v84[591];
  BYTE4(v96[73]) = 2;
  v36 = v96[15];
  if ( v96[15] == v96[13] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v96[13]);
  v37 = v96[14];
  v38 = 16 * v36;
  *(_QWORD *)(v96[14] + v38) = aRaw_0;
  *(_QWORD *)(v37 + v38 + 8) = 3LL;
  v96[15] = v36 + 1;
  memcpy(v53, v96, sizeof(v53));
  clap_builder::builder::command::Command::arg_internal(v106, v53);
  memcpy(v105, v106, sizeof(v105));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v53);
  *(_QWORD *)&v53[33] = aText;
  *((_QWORD *)&v53[33] + 1) = 4LL;
  memcpy(v73, v53, 0x220uLL);
  *(_OWORD *)&v73[560] = v53[35];
  *(_QWORD *)&v73[544] = aText;
  *(_QWORD *)&v73[552] = 4LL;
  *(_DWORD *)&v73[576] = 116;
  *(_QWORD *)&v73[580] = *(_QWORD *)((char *)&v53[36] + 4) | 0x400000000LL;
  v74 = HIDWORD(v53[36]);
  v39 = *(_QWORD *)&v73[144];
  if ( *(_QWORD *)&v73[144] == *(_QWORD *)&v73[128] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v73[128]);
  v40 = *(_QWORD *)&v73[136];
  v41 = 16 * v39;
  *(_QWORD *)(*(_QWORD *)&v73[136] + v41) = aBinary_0;
  *(_QWORD *)(v40 + v41 + 8) = 6LL;
  *(_QWORD *)&v73[144] = v39 + 1;
  memcpy(v53, v73, 0x24CuLL);
  *(_WORD *)((char *)&v53[36] + 13) = *(_WORD *)((char *)&v74 + 1);
  HIBYTE(v53[36]) = HIBYTE(v74);
  BYTE12(v53[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v105, v53);
  memcpy(v104, v105, sizeof(v104));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v53);
  *(_QWORD *)&v53[33] = aBinary_0;
  *((_QWORD *)&v53[33] + 1) = 6LL;
  memcpy(v75, v53, 0x220uLL);
  *(_OWORD *)&v75[560] = v53[35];
  *(_QWORD *)&v75[544] = aBinary_0;
  *(_QWORD *)&v75[552] = 6LL;
  *(_DWORD *)&v75[576] = 98;
  *(_QWORD *)&v75[580] = *(_QWORD *)((char *)&v53[36] + 4) | 0x400000000LL;
  v76 = HIDWORD(v53[36]);
  v42 = *(_QWORD *)&v75[144];
  if ( *(_QWORD *)&v75[144] == *(_QWORD *)&v75[128] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v75[128]);
  v43 = *(_QWORD *)&v75[136];
  v44 = 16 * v42;
  *(_QWORD *)(*(_QWORD *)&v75[136] + v44) = aText;
  *(_QWORD *)(v43 + v44 + 8) = 4LL;
  *(_QWORD *)&v75[144] = v42 + 1;
  memcpy(v53, v75, 0x24CuLL);
  *(_WORD *)((char *)&v53[36] + 13) = *(_WORD *)((char *)&v76 + 1);
  HIBYTE(v53[36]) = HIBYTE(v76);
  BYTE12(v53[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v104, v53);
  memcpy(v103, v104, sizeof(v103));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v53);
  *(_QWORD *)&v53[33] = aWarn;
  *((_QWORD *)&v53[33] + 1) = 4LL;
  memcpy(v77, v53, 0x220uLL);
  *(_OWORD *)&v77[560] = v53[35];
  *(_QWORD *)&v77[580] = *(_QWORD *)((char *)&v53[36] + 4);
  v78 = HIDWORD(v53[36]);
  *(_QWORD *)&v77[544] = aWarn;
  *(_QWORD *)&v77[552] = 4LL;
  *(_DWORD *)&v77[576] = 119;
  <clap_builder::builder::styled_str::StyledStr as core::convert::From<&str>>::from(v53, aWarnAboutImpro, 46LL);
  v45 = *(_QWORD *)&v53[0];
  v61[0] = *(_OWORD *)((char *)v53 + 8);
  if ( *(_QWORD *)&v53[0] != 0x8000000000000000LL )
    v60[0] = v61[0];
  if ( *(_QWORD *)&v77[440] != 0x8000000000000000LL )
  {
    alloc::raw_vec::RawVec<T,A>::current_memory(v53, &v77[440]);
    if ( *((_QWORD *)&v53[0] + 1) )
    {
      if ( *(_QWORD *)&v53[1] )
        _rust_dealloc(*(_QWORD *)&v53[0]);
    }
  }
  *(_QWORD *)&v77[440] = v45;
  *(_OWORD *)&v77[448] = v60[0];
  memcpy(v53, v77, 0x24CuLL);
  *(_WORD *)((char *)&v53[36] + 13) = *(_WORD *)((char *)&v78 + 1);
  HIBYTE(v53[36]) = HIBYTE(v78);
  BYTE12(v53[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v103, v53);
  memcpy(v102, v103, sizeof(v102));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v53);
  *(_QWORD *)&v53[33] = aStatus_0;
  *((_QWORD *)&v53[33] + 1) = 6LL;
  memcpy(v85, v53, 0x220uLL);
  *(_OWORD *)&v85[560] = v53[35];
  *(_OWORD *)&v85[576] = v53[36];
  *(_QWORD *)&v85[544] = aStatus_0;
  *(_QWORD *)&v85[552] = 6LL;
  <clap_builder::builder::styled_str::StyledStr as core::convert::From<&str>>::from(v53, aDonTOutputAnyt, 48LL);
  v46 = *(_QWORD *)&v53[0];
  v61[0] = *(_OWORD *)((char *)v53 + 8);
  if ( *(_QWORD *)&v53[0] != 0x8000000000000000LL )
    v60[0] = v61[0];
  if ( *(_QWORD *)&v85[440] != 0x8000000000000000LL )
  {
    alloc::raw_vec::RawVec<T,A>::current_memory(v53, &v85[440]);
    if ( *((_QWORD *)&v53[0] + 1) )
    {
      if ( *(_QWORD *)&v53[1] )
        _rust_dealloc(*(_QWORD *)&v53[0]);
    }
  }
  *(_QWORD *)&v85[440] = v46;
  *(_OWORD *)&v85[448] = v60[0];
  memcpy(v53, v85, 0x24CuLL);
  *(_WORD *)((char *)&v53[36] + 13) = *(_WORD *)&v85[589];
  HIBYTE(v53[36]) = v85[591];
  BYTE12(v53[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v102, v53);
  memcpy(v101, v102, sizeof(v101));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v53);
  *(_QWORD *)&v53[33] = aQuiet_0;
  *((_QWORD *)&v53[33] + 1) = 5LL;
  memcpy(v86, v53, 0x220uLL);
  *(_OWORD *)&v86[560] = v53[35];
  *(_OWORD *)&v86[576] = v53[36];
  *(_QWORD *)&v86[544] = aQuiet_0;
  *(_QWORD *)&v86[552] = 5LL;
  <clap_builder::builder::styled_str::StyledStr as core::convert::From<&str>>::from(v53, aDonTPrintOkFor, 50LL);
  v47 = *(_QWORD *)&v53[0];
  v61[0] = *(_OWORD *)((char *)v53 + 8);
  if ( *(_QWORD *)&v53[0] != 0x8000000000000000LL )
    v60[0] = v61[0];
  if ( *(_QWORD *)&v86[440] != 0x8000000000000000LL )
  {
    alloc::raw_vec::RawVec<T,A>::current_memory(v53, &v86[440]);
    if ( *((_QWORD *)&v53[0] + 1) )
    {
      if ( *(_QWORD *)&v53[1] )
        _rust_dealloc(*(_QWORD *)&v53[0]);
    }
  }
  *(_QWORD *)&v86[440] = v47;
  *(_OWORD *)&v86[448] = v60[0];
  memcpy(v53, v86, 0x24CuLL);
  *(_WORD *)((char *)&v53[36] + 13) = *(_WORD *)&v86[589];
  HIBYTE(v53[36]) = v86[591];
  BYTE12(v53[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v101, v53);
  memcpy(v100, v101, sizeof(v100));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v53);
  *(_QWORD *)&v53[33] = aIgnoreMissing_0;
  *((_QWORD *)&v53[33] + 1) = 14LL;
  memcpy(v87, v53, 0x220uLL);
  *(_OWORD *)&v87[560] = v53[35];
  *(_OWORD *)&v87[576] = v53[36];
  *(_QWORD *)&v87[544] = aIgnoreMissing_0;
  *(_QWORD *)&v87[552] = 14LL;
  <clap_builder::builder::styled_str::StyledStr as core::convert::From<&str>>::from(v53, aDonTFailOrRepo, 45LL);
  v48 = *(_QWORD *)&v53[0];
  v61[0] = *(_OWORD *)((char *)v53 + 8);
  if ( *(_QWORD *)&v53[0] != 0x8000000000000000LL )
    v60[0] = v61[0];
  if ( *(_QWORD *)&v87[440] != 0x8000000000000000LL )
  {
    alloc::raw_vec::RawVec<T,A>::current_memory(v53, &v87[440]);
    if ( *((_QWORD *)&v53[0] + 1) )
    {
      if ( *(_QWORD *)&v53[1] )
        _rust_dealloc(*(_QWORD *)&v53[0]);
    }
  }
  *(_QWORD *)&v87[440] = v48;
  *(_OWORD *)&v87[448] = v60[0];
  memcpy(v53, v87, 0x24CuLL);
  *(_WORD *)((char *)&v53[36] + 13) = *(_WORD *)&v87[589];
  HIBYTE(v53[36]) = v87[591];
  BYTE12(v53[36]) = 2;
  clap_builder::builder::command::Command::arg_internal(v100, v53);
  memcpy(v98, v100, sizeof(v98));
  <clap_builder::builder::styled_str::StyledStr as core::convert::From<&str>>::from(v53, aDigestDetermin, 459LL);
  v49 = *(_QWORD *)&v53[0];
  v61[0] = *(_OWORD *)((char *)v53 + 8);
  if ( *(_QWORD *)&v53[0] != 0x8000000000000000LL )
    v60[0] = v61[0];
  if ( v98[52] != 0x8000000000000000LL )
  {
    alloc::raw_vec::RawVec<T,A>::current_memory(v53, &v98[52]);
    if ( *((_QWORD *)&v53[0] + 1) )
    {
      if ( *(_QWORD *)&v53[1] )
        _rust_dealloc(*(_QWORD *)&v53[0]);
    }
  }
  v98[52] = v49;
  *(_OWORD *)&v98[53] = v60[0];
  memcpy(v1, v98, 0x2C8uLL);
  return v1;
}
