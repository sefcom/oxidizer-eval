void *__fastcall uu_numfmt::uu_app(void *a1)
{
  __int64 v1; // rax
  __int64 v2; // r14
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r14
  void *v22; // rbx
  __int128 v24; // [rsp-7000h] [rbp-8C48h] BYREF
  __int64 v25; // [rsp-6FF0h] [rbp-8C38h]
  _OWORD v26[37]; // [rsp-6FE8h] [rbp-8C30h] BYREF
  void *v27; // [rsp-6D98h] [rbp-89E0h]
  _OWORD v28[38]; // [rsp-6D90h] [rbp-89D8h] BYREF
  __int64 v29; // [rsp-6B30h] [rbp-8778h]
  __int64 v30; // [rsp-6B28h] [rbp-8770h] BYREF
  __int128 v31; // [rsp-6B20h] [rbp-8768h]
  _QWORD v32[74]; // [rsp-6B10h] [rbp-8758h] BYREF
  _QWORD v33[89]; // [rsp-68C0h] [rbp-8508h] BYREF
  _QWORD v34[89]; // [rsp-65F8h] [rbp-8240h] BYREF
  _DWORD v35[178]; // [rsp-6330h] [rbp-7F78h] BYREF
  _BYTE v36[544]; // [rsp-6068h] [rbp-7CB0h] BYREF
  const char *v37; // [rsp-5E48h] [rbp-7A90h]
  __int64 v38; // [rsp-5E40h] [rbp-7A88h]
  __int128 v39; // [rsp-5E38h] [rbp-7A80h]
  __int128 v40; // [rsp-5E28h] [rbp-7A70h]
  _BYTE v41[544]; // [rsp-5E18h] [rbp-7A60h] BYREF
  const char *v42; // [rsp-5BF8h] [rbp-7840h]
  __int64 v43; // [rsp-5BF0h] [rbp-7838h]
  __int128 v44; // [rsp-5BE8h] [rbp-7830h]
  __int128 v45; // [rsp-5BD8h] [rbp-7820h]
  _BYTE v46[544]; // [rsp-5BC8h] [rbp-7810h] BYREF
  void *v47; // [rsp-59A8h] [rbp-75F0h]
  __int64 v48; // [rsp-59A0h] [rbp-75E8h]
  __int128 v49; // [rsp-5998h] [rbp-75E0h]
  __int128 v50; // [rsp-5988h] [rbp-75D0h]
  _BYTE v51[544]; // [rsp-5978h] [rbp-75C0h] BYREF
  const char *v52; // [rsp-5758h] [rbp-73A0h]
  __int64 v53; // [rsp-5750h] [rbp-7398h]
  __int128 v54; // [rsp-5748h] [rbp-7390h]
  __int128 v55; // [rsp-5738h] [rbp-7380h]
  _BYTE v56[544]; // [rsp-5728h] [rbp-7370h] BYREF
  const char *v57; // [rsp-5508h] [rbp-7150h]
  __int64 v58; // [rsp-5500h] [rbp-7148h]
  __int128 v59; // [rsp-54F8h] [rbp-7140h]
  __int128 v60; // [rsp-54E8h] [rbp-7130h]
  _BYTE v61[544]; // [rsp-54D8h] [rbp-7120h] BYREF
  const char *v62; // [rsp-52B8h] [rbp-6F00h]
  __int64 v63; // [rsp-52B0h] [rbp-6EF8h]
  __int128 v64; // [rsp-52A8h] [rbp-6EF0h]
  __int128 v65; // [rsp-5298h] [rbp-6EE0h]
  _BYTE v66[544]; // [rsp-5288h] [rbp-6ED0h] BYREF
  const char *v67; // [rsp-5068h] [rbp-6CB0h]
  __int64 v68; // [rsp-5060h] [rbp-6CA8h]
  __int128 v69; // [rsp-5058h] [rbp-6CA0h]
  __int128 v70; // [rsp-5048h] [rbp-6C90h]
  _QWORD v71[74]; // [rsp-5038h] [rbp-6C80h] BYREF
  _BYTE v72[544]; // [rsp-4DE8h] [rbp-6A30h] BYREF
  const char *v73; // [rsp-4BC8h] [rbp-6810h]
  __int64 v74; // [rsp-4BC0h] [rbp-6808h]
  __int128 v75; // [rsp-4BB8h] [rbp-6800h]
  __int128 v76; // [rsp-4BA8h] [rbp-67F0h]
  _BYTE v77[544]; // [rsp-4B98h] [rbp-67E0h] BYREF
  const char *v78; // [rsp-4978h] [rbp-65C0h]
  __int64 v79; // [rsp-4970h] [rbp-65B8h]
  __int128 v80; // [rsp-4968h] [rbp-65B0h]
  __int128 v81; // [rsp-4958h] [rbp-65A0h]
  _BYTE v82[544]; // [rsp-4948h] [rbp-6590h] BYREF
  const char *v83; // [rsp-4728h] [rbp-6370h]
  __int64 v84; // [rsp-4720h] [rbp-6368h]
  __int128 v85; // [rsp-4718h] [rbp-6360h]
  __int128 v86; // [rsp-4708h] [rbp-6350h]
  _BYTE v87[544]; // [rsp-46F8h] [rbp-6340h] BYREF
  const char *v88; // [rsp-44D8h] [rbp-6120h]
  __int64 v89; // [rsp-44D0h] [rbp-6118h]
  __int128 v90; // [rsp-44C8h] [rbp-6110h]
  __int128 v91; // [rsp-44B8h] [rbp-6100h]
  _BYTE v92[712]; // [rsp-44A8h] [rbp-60F0h] BYREF
  _BYTE v93[712]; // [rsp-41E0h] [rbp-5E28h] BYREF
  _BYTE v94[712]; // [rsp-3F18h] [rbp-5B60h] BYREF
  _BYTE v95[712]; // [rsp-3C50h] [rbp-5898h] BYREF
  _BYTE v96[712]; // [rsp-3988h] [rbp-55D0h] BYREF
  _BYTE v97[712]; // [rsp-36C0h] [rbp-5308h] BYREF
  _BYTE v98[712]; // [rsp-33F8h] [rbp-5040h] BYREF
  _BYTE v99[712]; // [rsp-3130h] [rbp-4D78h] BYREF
  _BYTE v100[712]; // [rsp-2E68h] [rbp-4AB0h] BYREF
  _BYTE v101[712]; // [rsp-2BA0h] [rbp-47E8h] BYREF
  _BYTE v102[712]; // [rsp-28D8h] [rbp-4520h] BYREF
  _BYTE v103[712]; // [rsp-2610h] [rbp-4258h] BYREF
  _BYTE v104[592]; // [rsp-2348h] [rbp-3F90h] BYREF
  _BYTE v105[592]; // [rsp-20F8h] [rbp-3D40h] BYREF
  _BYTE v106[592]; // [rsp-1EA8h] [rbp-3AF0h] BYREF
  _QWORD v107[89]; // [rsp-1C58h] [rbp-38A0h] BYREF
  _BYTE v108[592]; // [rsp-1990h] [rbp-35D8h] BYREF
  _BYTE v109[592]; // [rsp-1740h] [rbp-3388h] BYREF
  _BYTE v110[592]; // [rsp-14F0h] [rbp-3138h] BYREF
  _BYTE v111[592]; // [rsp-12A0h] [rbp-2EE8h] BYREF
  _BYTE v112[592]; // [rsp-1050h] [rbp-2C98h] BYREF
  _BYTE v113[592]; // [rsp-E00h] [rbp-2A48h] BYREF
  _BYTE v114[592]; // [rsp-BB0h] [rbp-27F8h] BYREF
  _BYTE v115[592]; // [rsp-960h] [rbp-25A8h] BYREF
  _BYTE v116[592]; // [rsp-710h] [rbp-2358h] BYREF
  _BYTE v117[592]; // [rsp-4C0h] [rbp-2108h] BYREF
  _BYTE v118[592]; // [rsp-270h] [rbp-1EB8h] BYREF
  _OWORD v119[37]; // [rsp-20h] [rbp-1C68h] BYREF
  void *v120[74]; // [rsp+230h] [rbp-1A18h] BYREF
  _OWORD v121[37]; // [rsp+480h] [rbp-17C8h] BYREF
  _QWORD v122[74]; // [rsp+6D0h] [rbp-1578h] BYREF
  _DWORD v123[148]; // [rsp+920h] [rbp-1328h] BYREF
  _QWORD v124[74]; // [rsp+B70h] [rbp-10D8h] BYREF
  _DWORD v125[148]; // [rsp+DC0h] [rbp-E88h] BYREF
  _QWORD v126[74]; // [rsp+1010h] [rbp-C38h] BYREF
  _QWORD v127[74]; // [rsp+1260h] [rbp-9E8h] BYREF
  _QWORD v128[74]; // [rsp+14B0h] [rbp-798h] BYREF
  _QWORD v129[74]; // [rsp+1700h] [rbp-548h] BYREF
  _QWORD v130[95]; // [rsp+1950h] [rbp-2F8h] BYREF

  do
    v34[66] = 0LL;
  while ( &v34[66] != (_QWORD *)&v61[-32528] );
  v27 = a1;
  v1 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  if ( !*(_QWORD *)(v1 + 8) || *(__int64 *)(v1 + 16) < 0 )
    core::panicking::panic_nounwind(anon_983ba386f48605eb6a2f271d0cb174c9_11_llvm_2613378195564442977, 162LL);
  ((void (__fastcall *)(_QWORD *))clap_builder::builder::command::Command::new::new_inner)(v107);
  v107[76] = a0027;
  v107[77] = 6LL;
  memcpy(v130, v107, 0x2C8uLL);
  clap_builder::builder::command::Command::about(v34, v130);
  *(_QWORD *)&v26[0] = 0LL;
  *((_QWORD *)&v26[0] + 1) = 1LL;
  *(_QWORD *)&v26[1] = 0LL;
  ((void (__fastcall *)(void *, __int64, __int64, __int64))core::slice::raw::from_raw_parts::precondition_check)(
    &unk_23E1F,
    1LL,
    1LL,
    1082LL);
  ((void (__fastcall *)(_OWORD *, void *, __int64))alloc::vec::Vec<T,A>::append_elements)(v26, &unk_23E1F, 1082LL);
  v2 = *(_QWORD *)&v26[0];
  v28[0] = *(_OWORD *)((char *)v26 + 8);
  if ( *(_QWORD *)&v26[0] != 0x8000000000000000LL )
    v24 = v28[0];
  if ( v34[52] != 0x8000000000000000LL )
  {
    ((void (__fastcall *)(_OWORD *, _QWORD *))alloc::raw_vec::RawVec<T,A>::current_memory)(v26, &v34[52]);
    if ( *((_QWORD *)&v26[0] + 1) )
      ((void (__fastcall *)(_QWORD *, _QWORD, _QWORD, _QWORD))<alloc::alloc::Global as core::alloc::Allocator>::deallocate)(
        &v34[54],
        *(_QWORD *)&v26[0],
        *((_QWORD *)&v26[0] + 1),
        *(_QWORD *)&v26[1]);
  }
  v34[52] = v2;
  *(_OWORD *)&v34[53] = v24;
  memcpy(v33, v34, sizeof(v33));
  uucore::format_usage((unsigned int)&v30);
  v3 = v30;
  if ( v30 != 0x8000000000000000LL )
    v28[0] = v31;
  if ( v33[58] != 0x8000000000000000LL )
  {
    ((void (__fastcall *)(_OWORD *, _QWORD *))alloc::raw_vec::RawVec<T,A>::current_memory)(v26, &v33[58]);
    if ( *((_QWORD *)&v26[0] + 1) )
      ((void (__fastcall *)(_QWORD *, _QWORD, _QWORD, _QWORD))<alloc::alloc::Global as core::alloc::Allocator>::deallocate)(
        &v33[60],
        *(_QWORD *)&v26[0],
        *((_QWORD *)&v26[0] + 1),
        *(_QWORD *)&v26[1]);
  }
  v33[58] = v3;
  *(_OWORD *)&v33[59] = v28[0];
  memcpy(v35, v33, 0x2BCuLL);
  *(_QWORD *)&v35[175] = *(_QWORD *)((char *)&v33[87] + 4) | 0x8000000084LL;
  v35[177] = HIDWORD(v33[88]);
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v28);
  *(_QWORD *)&v28[33] = aDelimiter;
  *((_QWORD *)&v28[33] + 1) = 9LL;
  memcpy(v26, v28, 0x220uLL);
  v26[35] = v28[35];
  *(_QWORD *)((char *)&v26[36] + 4) = *(_QWORD *)((char *)&v28[36] + 4);
  HIDWORD(v26[36]) = HIDWORD(v28[36]);
  *(_QWORD *)&v26[34] = aDelimiter;
  *((_QWORD *)&v26[34] + 1) = 9LL;
  LODWORD(v26[36]) = 100;
  *(_QWORD *)&v28[0] = asc_24273;
  *((_QWORD *)&v28[0] + 1) = 1LL;
  clap_builder::builder::arg::Arg::value_names(v109, v26);
  clap_builder::builder::arg::Arg::help(v108, v109);
  memcpy(v26, v108, sizeof(v26));
  ((void (__fastcall *)(_DWORD *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v35, v26);
  memcpy(v103, v35, sizeof(v103));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v26);
  *(_QWORD *)&v26[33] = aField;
  *((_QWORD *)&v26[33] + 1) = 5LL;
  memcpy(v36, v26, sizeof(v36));
  v39 = v26[35];
  v40 = v26[36];
  v37 = aField;
  v38 = 5LL;
  clap_builder::builder::arg::Arg::help(v110, v36);
  memcpy(v26, v110, sizeof(v26));
  *(_QWORD *)&v28[0] = aFields;
  *((_QWORD *)&v28[0] + 1) = 6LL;
  clap_builder::builder::arg::Arg::value_names(v104, v26);
  v104[584] |= 0x20u;
  memcpy(v28, v104, 0x250uLL);
  *(_QWORD *)&v26[0] = ::a1;
  *((_QWORD *)&v26[0] + 1) = 1LL;
  *(_QWORD *)&v26[1] = 0LL;
  *((_QWORD *)&v26[1] + 1) = 1LL;
  ((void (__fastcall *)(__int128 *, _OWORD *))<alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter)(
    &v24,
    v26);
  if ( *(_QWORD *)&v28[23] )
  {
    if ( *(_QWORD *)&v28[23] > 0xFFFFFFFFFFFFFFFuLL )
      goto LABEL_77;
    v4 = 16LL * *(_QWORD *)&v28[23];
    *(_QWORD *)&v26[0] = *((_QWORD *)&v28[23] + 1);
    *((_QWORD *)&v26[0] + 1) = 8LL;
    v5 = 16LL;
  }
  else
  {
    v5 = 8LL;
    v4 = 0LL;
  }
  *(_QWORD *)((char *)v26 + v5) = v4;
  if ( *((_QWORD *)&v26[0] + 1) && *(_QWORD *)&v26[1] )
    ((void (__fastcall *)(_QWORD))_rust_dealloc)(*(_QWORD *)&v26[0]);
  *(_QWORD *)&v28[24] = v25;
  v28[23] = v24;
  memcpy(v26, v28, sizeof(v26));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v103, v26);
  memcpy(v102, v103, sizeof(v102));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v26);
  *(_QWORD *)&v26[33] = aFormat_0;
  *((_QWORD *)&v26[33] + 1) = 6LL;
  memcpy(v41, v26, sizeof(v41));
  v44 = v26[35];
  v45 = v26[36];
  v42 = aFormat_0;
  v43 = 6LL;
  clap_builder::builder::arg::Arg::help(v111, v41);
  memcpy(v26, v111, sizeof(v26));
  *(_QWORD *)&v28[0] = aFormat_1;
  *((_QWORD *)&v28[0] + 1) = 6LL;
  clap_builder::builder::arg::Arg::value_names(v105, v26);
  v105[584] |= 0x20u;
  memcpy(v26, v105, sizeof(v26));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v102, v26);
  memcpy(v101, v102, sizeof(v101));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v26);
  *(_QWORD *)&v26[33] = &unk_1973C;
  *((_QWORD *)&v26[33] + 1) = 4LL;
  memcpy(v46, v26, sizeof(v46));
  v49 = v26[35];
  v50 = v26[36];
  v47 = &unk_1973C;
  v48 = 4LL;
  clap_builder::builder::arg::Arg::help(v113, v46);
  memcpy(v26, v113, sizeof(v26));
  *(_QWORD *)&v28[0] = aUnit;
  *((_QWORD *)&v28[0] + 1) = 4LL;
  clap_builder::builder::arg::Arg::value_names(v112, v26);
  memcpy(v28, v112, 0x250uLL);
  *(_QWORD *)&v26[0] = aNone;
  *((_QWORD *)&v26[0] + 1) = 4LL;
  *(_QWORD *)&v26[1] = 0LL;
  *((_QWORD *)&v26[1] + 1) = 1LL;
  ((void (__fastcall *)(__int128 *, _OWORD *))<alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter)(
    &v24,
    v26);
  if ( *(_QWORD *)&v28[23] )
  {
    if ( *(_QWORD *)&v28[23] > 0xFFFFFFFFFFFFFFFuLL )
      goto LABEL_77;
    v6 = 16LL * *(_QWORD *)&v28[23];
    *(_QWORD *)&v26[0] = *((_QWORD *)&v28[23] + 1);
    *((_QWORD *)&v26[0] + 1) = 8LL;
    v7 = 16LL;
  }
  else
  {
    v7 = 8LL;
    v6 = 0LL;
  }
  *(_QWORD *)((char *)v26 + v7) = v6;
  if ( *((_QWORD *)&v26[0] + 1) && *(_QWORD *)&v26[1] )
    ((void (__fastcall *)(_QWORD))_rust_dealloc)(*(_QWORD *)&v26[0]);
  *(_QWORD *)&v28[24] = v25;
  v28[23] = v24;
  memcpy(v26, v28, sizeof(v26));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v101, v26);
  memcpy(v100, v101, sizeof(v100));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v26);
  *(_QWORD *)&v26[33] = aFromUnit;
  *((_QWORD *)&v26[33] + 1) = 9LL;
  memcpy(v51, v26, sizeof(v51));
  v54 = v26[35];
  v55 = v26[36];
  v52 = aFromUnit;
  v53 = 9LL;
  clap_builder::builder::arg::Arg::help(v115, v51);
  memcpy(v26, v115, sizeof(v26));
  *(_QWORD *)&v28[0] = aN;
  *((_QWORD *)&v28[0] + 1) = 1LL;
  clap_builder::builder::arg::Arg::value_names(v114, v26);
  memcpy(v28, v114, 0x250uLL);
  *(_QWORD *)&v26[0] = ::a1;
  *((_QWORD *)&v26[0] + 1) = 1LL;
  *(_QWORD *)&v26[1] = 0LL;
  *((_QWORD *)&v26[1] + 1) = 1LL;
  ((void (__fastcall *)(__int128 *, _OWORD *))<alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter)(
    &v24,
    v26);
  if ( *(_QWORD *)&v28[23] )
  {
    if ( *(_QWORD *)&v28[23] > 0xFFFFFFFFFFFFFFFuLL )
      goto LABEL_77;
    v8 = 16LL * *(_QWORD *)&v28[23];
    *(_QWORD *)&v26[0] = *((_QWORD *)&v28[23] + 1);
    *((_QWORD *)&v26[0] + 1) = 8LL;
    v9 = 16LL;
  }
  else
  {
    v9 = 8LL;
    v8 = 0LL;
  }
  *(_QWORD *)((char *)v26 + v9) = v8;
  if ( *((_QWORD *)&v26[0] + 1) && *(_QWORD *)&v26[1] )
    ((void (__fastcall *)(_QWORD))_rust_dealloc)(*(_QWORD *)&v26[0]);
  *(_QWORD *)&v28[24] = v25;
  v28[23] = v24;
  memcpy(v26, v28, sizeof(v26));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v100, v26);
  memcpy(v99, v100, sizeof(v99));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v26);
  *(_QWORD *)&v26[33] = aTo;
  *((_QWORD *)&v26[33] + 1) = 2LL;
  memcpy(v56, v26, sizeof(v56));
  v59 = v26[35];
  v60 = v26[36];
  v57 = aTo;
  v58 = 2LL;
  clap_builder::builder::arg::Arg::help(v117, v56);
  memcpy(v26, v117, sizeof(v26));
  *(_QWORD *)&v28[0] = aUnit;
  *((_QWORD *)&v28[0] + 1) = 4LL;
  clap_builder::builder::arg::Arg::value_names(v116, v26);
  memcpy(v28, v116, 0x250uLL);
  *(_QWORD *)&v26[0] = aNone;
  *((_QWORD *)&v26[0] + 1) = 4LL;
  *(_QWORD *)&v26[1] = 0LL;
  *((_QWORD *)&v26[1] + 1) = 1LL;
  ((void (__fastcall *)(__int128 *, _OWORD *))<alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter)(
    &v24,
    v26);
  if ( *(_QWORD *)&v28[23] )
  {
    if ( *(_QWORD *)&v28[23] > 0xFFFFFFFFFFFFFFFuLL )
      goto LABEL_77;
    v10 = 16LL * *(_QWORD *)&v28[23];
    *(_QWORD *)&v26[0] = *((_QWORD *)&v28[23] + 1);
    *((_QWORD *)&v26[0] + 1) = 8LL;
    v11 = 16LL;
  }
  else
  {
    v11 = 8LL;
    v10 = 0LL;
  }
  *(_QWORD *)((char *)v26 + v11) = v10;
  if ( *((_QWORD *)&v26[0] + 1) && *(_QWORD *)&v26[1] )
    ((void (__fastcall *)(_QWORD))_rust_dealloc)(*(_QWORD *)&v26[0]);
  *(_QWORD *)&v28[24] = v25;
  v28[23] = v24;
  memcpy(v26, v28, sizeof(v26));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v99, v26);
  memcpy(v98, v99, sizeof(v98));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v26);
  *(_QWORD *)&v26[33] = aToUnit;
  *((_QWORD *)&v26[33] + 1) = 7LL;
  memcpy(v61, v26, sizeof(v61));
  v64 = v26[35];
  v65 = v26[36];
  v62 = aToUnit;
  v63 = 7LL;
  clap_builder::builder::arg::Arg::help(v119, v61);
  memcpy(v26, v119, sizeof(v26));
  *(_QWORD *)&v28[0] = aN;
  *((_QWORD *)&v28[0] + 1) = 1LL;
  clap_builder::builder::arg::Arg::value_names(v118, v26);
  memcpy(v28, v118, 0x250uLL);
  *(_QWORD *)&v26[0] = ::a1;
  *((_QWORD *)&v26[0] + 1) = 1LL;
  *(_QWORD *)&v26[1] = 0LL;
  *((_QWORD *)&v26[1] + 1) = 1LL;
  ((void (__fastcall *)(__int128 *, _OWORD *))<alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter)(
    &v24,
    v26);
  if ( *(_QWORD *)&v28[23] )
  {
    if ( *(_QWORD *)&v28[23] > 0xFFFFFFFFFFFFFFFuLL )
      goto LABEL_77;
    v12 = 16LL * *(_QWORD *)&v28[23];
    *(_QWORD *)&v26[0] = *((_QWORD *)&v28[23] + 1);
    *((_QWORD *)&v26[0] + 1) = 8LL;
    v13 = 16LL;
  }
  else
  {
    v13 = 8LL;
    v12 = 0LL;
  }
  *(_QWORD *)((char *)v26 + v13) = v12;
  if ( *((_QWORD *)&v26[0] + 1) && *(_QWORD *)&v26[1] )
    ((void (__fastcall *)(_QWORD))_rust_dealloc)(*(_QWORD *)&v26[0]);
  *(_QWORD *)&v28[24] = v25;
  v28[23] = v24;
  memcpy(v26, v28, sizeof(v26));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v98, v26);
  memcpy(v97, v98, sizeof(v97));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v26);
  *(_QWORD *)&v26[33] = aPadding;
  *((_QWORD *)&v26[33] + 1) = 7LL;
  memcpy(v66, v26, sizeof(v66));
  v69 = v26[35];
  v70 = v26[36];
  v67 = aPadding;
  v68 = 7LL;
  clap_builder::builder::arg::Arg::help(v121, v66);
  memcpy(v26, v121, sizeof(v26));
  *(_QWORD *)&v28[0] = aN;
  *((_QWORD *)&v28[0] + 1) = 1LL;
  clap_builder::builder::arg::Arg::value_names(v120, v26);
  memcpy(v26, v120, sizeof(v26));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v97, v26);
  memcpy(v96, v97, sizeof(v96));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v26);
  *(_QWORD *)&v26[33] = aHeader;
  *((_QWORD *)&v26[33] + 1) = 6LL;
  memcpy(v72, v26, sizeof(v72));
  v75 = v26[35];
  v76 = v26[36];
  v73 = aHeader;
  v74 = 6LL;
  clap_builder::builder::arg::Arg::help(v71, v72);
  v71[2] = 1LL;
  v71[3] = 0LL;
  v71[4] = 1LL;
  memcpy(v26, v71, sizeof(v26));
  *(_QWORD *)&v28[0] = aN;
  *((_QWORD *)&v28[0] + 1) = 1LL;
  clap_builder::builder::arg::Arg::value_names(v122, v26);
  memcpy(v28, v122, 0x250uLL);
  *(_QWORD *)&v26[0] = ::a1;
  *((_QWORD *)&v26[0] + 1) = 1LL;
  *(_QWORD *)&v26[1] = 0LL;
  *((_QWORD *)&v26[1] + 1) = 1LL;
  ((void (__fastcall *)(__int128 *, _OWORD *))<alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter)(
    &v24,
    v26);
  if ( *(_QWORD *)&v28[26] )
  {
    if ( *(_QWORD *)&v28[26] > 0xFFFFFFFFFFFFFFFuLL )
      goto LABEL_77;
    v14 = 16LL * *(_QWORD *)&v28[26];
    *(_QWORD *)&v26[0] = *((_QWORD *)&v28[26] + 1);
    *((_QWORD *)&v26[0] + 1) = 8LL;
    v15 = 16LL;
  }
  else
  {
    v15 = 8LL;
    v14 = 0LL;
  }
  *(_QWORD *)((char *)v26 + v15) = v14;
  if ( *((_QWORD *)&v26[0] + 1) && *(_QWORD *)&v26[1] )
    ((void (__fastcall *)(_QWORD))_rust_dealloc)(*(_QWORD *)&v26[0]);
  *(_QWORD *)&v28[27] = v25;
  v28[26] = v24;
  memcpy(v26, v28, 0x248uLL);
  *((_QWORD *)&v26[36] + 1) = *((_QWORD *)&v28[36] + 1) | 0x400LL;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v96, v26);
  memcpy(v95, v96, sizeof(v95));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v26);
  *(_QWORD *)&v26[33] = aRound_0;
  *((_QWORD *)&v26[33] + 1) = 5LL;
  memcpy(v77, v26, sizeof(v77));
  v80 = v26[35];
  v81 = v26[36];
  v78 = aRound_0;
  v79 = 5LL;
  clap_builder::builder::arg::Arg::help(v125, v77);
  memcpy(v26, v125, sizeof(v26));
  *(_QWORD *)&v28[0] = aMethod;
  *((_QWORD *)&v28[0] + 1) = 6LL;
  clap_builder::builder::arg::Arg::value_names(v124, v26);
  memcpy(v26, v124, sizeof(v26));
  *(_QWORD *)&v28[0] = aFromZero;
  *((_QWORD *)&v28[0] + 1) = 9LL;
  *(_QWORD *)&v28[1] = 0LL;
  *((_QWORD *)&v28[1] + 1) = 1LL;
  ((void (__fastcall *)(__int128 *, _OWORD *))<alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter)(
    &v24,
    v28);
  if ( *(_QWORD *)&v26[23] )
  {
    if ( *(_QWORD *)&v26[23] > 0xFFFFFFFFFFFFFFFuLL )
      goto LABEL_77;
    v16 = 16LL * *(_QWORD *)&v26[23];
    *(_QWORD *)&v28[0] = *((_QWORD *)&v26[23] + 1);
    *((_QWORD *)&v28[0] + 1) = 8LL;
    v17 = 16LL;
  }
  else
  {
    v17 = 8LL;
    v16 = 0LL;
  }
  *(_QWORD *)((char *)v28 + v17) = v16;
  if ( *((_QWORD *)&v28[0] + 1) && *(_QWORD *)&v28[1] )
    ((void (__fastcall *)(_QWORD))_rust_dealloc)(*(_QWORD *)&v28[0]);
  *(_QWORD *)&v26[24] = v25;
  v26[23] = v24;
  memcpy(v106, v26, sizeof(v106));
  *(_QWORD *)&v26[0] = aUp;
  *((_QWORD *)&v26[0] + 1) = 2LL;
  *(_QWORD *)&v26[1] = aDown;
  *((_QWORD *)&v26[1] + 1) = 4LL;
  *(_QWORD *)&v26[2] = aFromZero;
  *((_QWORD *)&v26[2] + 1) = 9LL;
  *(_QWORD *)&v26[3] = aTowardsZero;
  *((_QWORD *)&v26[3] + 1) = 12LL;
  *(_QWORD *)&v26[4] = aNearest;
  *((_QWORD *)&v26[4] + 1) = 7LL;
  *(_QWORD *)&v26[5] = 0LL;
  *((_QWORD *)&v26[5] + 1) = 5LL;
  ((void (__fastcall *)(_OWORD *, _OWORD *))<alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter)(
    v28,
    v26);
  v28[37] = v28[0];
  v29 = *(_QWORD *)&v28[1];
  clap_builder::builder::arg::Arg::value_parser(v123, v106);
  memcpy(v26, v123, sizeof(v26));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v95, v26);
  memcpy(v94, v95, sizeof(v94));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v26);
  *(_QWORD *)&v26[33] = aSuffix;
  *((_QWORD *)&v26[33] + 1) = 6LL;
  memcpy(v82, v26, sizeof(v82));
  v85 = v26[35];
  v86 = v26[36];
  v83 = aSuffix;
  v84 = 6LL;
  clap_builder::builder::arg::Arg::help(v127, v82);
  memcpy(v26, v127, sizeof(v26));
  *(_QWORD *)&v28[0] = aSuffix_0;
  *((_QWORD *)&v28[0] + 1) = 6LL;
  clap_builder::builder::arg::Arg::value_names(v126, v26);
  memcpy(v26, v126, sizeof(v26));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v94, v26);
  memcpy(v93, v94, sizeof(v93));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v26);
  *(_QWORD *)&v26[33] = aInvalid;
  *((_QWORD *)&v26[33] + 1) = 7LL;
  memcpy(v87, v26, sizeof(v87));
  v90 = v26[35];
  v91 = v26[36];
  v88 = aInvalid;
  v89 = 7LL;
  clap_builder::builder::arg::Arg::help(v129, v87);
  memcpy(v26, v129, sizeof(v26));
  *(_QWORD *)&v28[0] = aAbort_0;
  *((_QWORD *)&v28[0] + 1) = 5LL;
  *(_QWORD *)&v28[1] = 0LL;
  *((_QWORD *)&v28[1] + 1) = 1LL;
  ((void (__fastcall *)(__int128 *, _OWORD *))<alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter)(
    &v24,
    v28);
  if ( !*(_QWORD *)&v26[23] )
  {
    v19 = 8LL;
    v18 = 0LL;
    goto LABEL_67;
  }
  if ( *(_QWORD *)&v26[23] > 0xFFFFFFFFFFFFFFFuLL )
LABEL_77:
    core::panicking::panic_nounwind(anon_e45d65516cdf6c355a9aa2094419ed73_18_llvm_7530283562111826792, 69LL);
  v18 = 16LL * *(_QWORD *)&v26[23];
  *(_QWORD *)&v28[0] = *((_QWORD *)&v26[23] + 1);
  *((_QWORD *)&v28[0] + 1) = 8LL;
  v19 = 16LL;
LABEL_67:
  *(_QWORD *)((char *)v28 + v19) = v18;
  if ( *((_QWORD *)&v28[0] + 1) && *(_QWORD *)&v28[1] )
    ((void (__fastcall *)(_QWORD))_rust_dealloc)(*(_QWORD *)&v28[0]);
  *(_QWORD *)&v26[24] = v25;
  v26[23] = v24;
  memcpy(v32, v26, sizeof(v32));
  *(_QWORD *)&v26[0] = aAbort_0;
  *((_QWORD *)&v26[0] + 1) = 5LL;
  *(_QWORD *)&v26[1] = aFail;
  *((_QWORD *)&v26[1] + 1) = 4LL;
  *(_QWORD *)&v26[2] = aWarn;
  *((_QWORD *)&v26[2] + 1) = 4LL;
  *(_QWORD *)&v26[3] = aIgnore;
  *((_QWORD *)&v26[3] + 1) = 6LL;
  *(_QWORD *)&v26[4] = 0LL;
  *((_QWORD *)&v26[4] + 1) = 4LL;
  ((void (__fastcall *)(_OWORD *, _OWORD *))<alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter)(
    v28,
    v26);
  v20 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 24LL, 0LL);
  v21 = v20;
  if ( !v20 )
    alloc::alloc::handle_alloc_error(8LL, 24LL);
  *(_QWORD *)(v20 + 16) = *(_QWORD *)&v28[1];
  *(_OWORD *)v20 = v28[0];
  if ( v32[10] >= 4uLL && v32[10] != 5LL )
  {
    if ( *(_QWORD *)v32[12] )
      (*(void (__fastcall **)(_QWORD))v32[12])(v32[11]);
    ((void (__fastcall *)(_QWORD *))<alloc::boxed::Box<T,A> as core::ops::drop::Drop>::drop)(&v32[11]);
  }
  v32[10] = 4LL;
  v32[11] = v21;
  v32[12] = &off_11EC68;
  memcpy(v26, v32, sizeof(v26));
  *(_QWORD *)&v28[0] = aInvalid_0;
  *((_QWORD *)&v28[0] + 1) = 7LL;
  clap_builder::builder::arg::Arg::value_names(v128, v26);
  memcpy(v26, v128, sizeof(v26));
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v93, v26);
  memcpy(v92, v93, sizeof(v92));
  ((void (__fastcall *)(_OWORD *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v28);
  *(_QWORD *)&v28[33] = aNumber_0;
  *((_QWORD *)&v28[33] + 1) = 6LL;
  memcpy(v26, v28, 0x248uLL);
  *(_WORD *)((char *)&v26[36] + 13) = *(_WORD *)((char *)&v28[36] + 13);
  HIBYTE(v26[36]) = HIBYTE(v28[36]);
  DWORD2(v26[36]) = DWORD2(v28[36]) | 4;
  BYTE12(v26[36]) = 1;
  ((void (__fastcall *)(_BYTE *, _OWORD *))clap_builder::builder::command::Command::arg_internal)(v92, v26);
  v22 = v27;
  memcpy(v27, v92, 0x2C8uLL);
  return v22;
}
