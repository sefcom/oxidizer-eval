void *__fastcall uu_od::uu_app(void *a1)
{
  __int64 v1; // rax
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // r14
  __m128i v5; // xmm0
  __int64 v6; // r14
  __int64 v7; // r14
  __int64 v8; // r14
  __int64 v9; // r14
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 v14; // r15
  __int64 v15; // r15
  __int64 v16; // r15
  __int64 v17; // r15
  __int64 v18; // r15
  __int64 v19; // r15
  __int64 v20; // r15
  __int64 v21; // r15
  __int64 v22; // r15
  __int64 v23; // r15
  __int64 v24; // r15
  __int64 v25; // r15
  __int64 v26; // r15
  __int64 v27; // r15
  __int64 v28; // r15
  __int64 v29; // r15
  __int64 v30; // r15
  __int64 v31; // r15
  __int64 v32; // r15
  __int64 v33; // r15
  __int64 v34; // r15
  __int64 v35; // r14
  __m128i v37; // [rsp-A000h] [rbp-BC08h] BYREF
  __int64 v38; // [rsp-9FF0h] [rbp-BBF8h]
  __m128i v39[37]; // [rsp-9FE0h] [rbp-BBE8h] BYREF
  __m128i v40[37]; // [rsp-9D90h] [rbp-B998h] BYREF
  __m128i v41; // [rsp-9B40h] [rbp-B748h] BYREF
  __int64 v42; // [rsp-9B30h] [rbp-B738h]
  __int64 v43; // [rsp-9B28h] [rbp-B730h] BYREF
  __m128i v44; // [rsp-9B20h] [rbp-B728h]
  _BYTE v45[588]; // [rsp-9B10h] [rbp-B718h] BYREF
  __int32 v46; // [rsp-98C4h] [rbp-B4CCh]
  _BYTE v47[588]; // [rsp-98C0h] [rbp-B4C8h] BYREF
  __int32 v48; // [rsp-9674h] [rbp-B27Ch]
  _BYTE v49[592]; // [rsp-9670h] [rbp-B278h] BYREF
  _OWORD v50[37]; // [rsp-9420h] [rbp-B028h] BYREF
  _OWORD v51[37]; // [rsp-91D0h] [rbp-ADD8h] BYREF
  _OWORD v52[37]; // [rsp-8F80h] [rbp-AB88h] BYREF
  _OWORD v53[37]; // [rsp-8D30h] [rbp-A938h] BYREF
  _OWORD v54[37]; // [rsp-8AE0h] [rbp-A6E8h] BYREF
  _BYTE v55[592]; // [rsp-8890h] [rbp-A498h] BYREF
  _BYTE v56[588]; // [rsp-8640h] [rbp-A248h] BYREF
  __int32 v57; // [rsp-83F4h] [rbp-9FFCh]
  _BYTE v58[588]; // [rsp-83F0h] [rbp-9FF8h] BYREF
  __int32 v59; // [rsp-81A4h] [rbp-9DACh]
  _BYTE v60[588]; // [rsp-81A0h] [rbp-9DA8h] BYREF
  __int32 v61; // [rsp-7F54h] [rbp-9B5Ch]
  _BYTE v62[588]; // [rsp-7F50h] [rbp-9B58h] BYREF
  __int32 v63; // [rsp-7D04h] [rbp-990Ch]
  _BYTE v64[588]; // [rsp-7D00h] [rbp-9908h] BYREF
  __int32 v65; // [rsp-7AB4h] [rbp-96BCh]
  _BYTE v66[588]; // [rsp-7AB0h] [rbp-96B8h] BYREF
  __int32 v67; // [rsp-7864h] [rbp-946Ch]
  _BYTE v68[588]; // [rsp-7860h] [rbp-9468h] BYREF
  __int32 v69; // [rsp-7614h] [rbp-921Ch]
  _BYTE v70[588]; // [rsp-7610h] [rbp-9218h] BYREF
  __int32 v71; // [rsp-73C4h] [rbp-8FCCh]
  _BYTE v72[588]; // [rsp-73C0h] [rbp-8FC8h] BYREF
  __int32 v73; // [rsp-7174h] [rbp-8D7Ch]
  _BYTE v74[588]; // [rsp-7170h] [rbp-8D78h] BYREF
  __int32 v75; // [rsp-6F24h] [rbp-8B2Ch]
  _BYTE v76[588]; // [rsp-6F20h] [rbp-8B28h] BYREF
  __int32 v77; // [rsp-6CD4h] [rbp-88DCh]
  _BYTE v78[588]; // [rsp-6CD0h] [rbp-88D8h] BYREF
  __int32 v79; // [rsp-6A84h] [rbp-868Ch]
  _BYTE v80[588]; // [rsp-6A80h] [rbp-8688h] BYREF
  __int32 v81; // [rsp-6834h] [rbp-843Ch]
  _BYTE v82[588]; // [rsp-6830h] [rbp-8438h] BYREF
  __int32 v83; // [rsp-65E4h] [rbp-81ECh]
  _BYTE v84[588]; // [rsp-65E0h] [rbp-81E8h] BYREF
  __int32 v85; // [rsp-6394h] [rbp-7F9Ch]
  _BYTE v86[588]; // [rsp-6390h] [rbp-7F98h] BYREF
  __int32 v87; // [rsp-6144h] [rbp-7D4Ch]
  _BYTE v88[588]; // [rsp-6140h] [rbp-7D48h] BYREF
  __int32 v89; // [rsp-5EF4h] [rbp-7AFCh]
  _BYTE v90[588]; // [rsp-5EF0h] [rbp-7AF8h] BYREF
  __int32 v91; // [rsp-5CA4h] [rbp-78ACh]
  _BYTE v92[588]; // [rsp-5CA0h] [rbp-78A8h] BYREF
  __int32 v93; // [rsp-5A54h] [rbp-765Ch]
  _OWORD v94[37]; // [rsp-5A50h] [rbp-7658h] BYREF
  _QWORD v95[74]; // [rsp-5800h] [rbp-7408h] BYREF
  _QWORD v96[89]; // [rsp-55B0h] [rbp-71B8h] BYREF
  _DWORD v97[178]; // [rsp-52E8h] [rbp-6EF0h] BYREF
  _QWORD v98[74]; // [rsp-5020h] [rbp-6C28h] BYREF
  _BYTE v99[712]; // [rsp-4DD0h] [rbp-69D8h] BYREF
  _BYTE v100[712]; // [rsp-4B08h] [rbp-6710h] BYREF
  _BYTE v101[712]; // [rsp-4840h] [rbp-6448h] BYREF
  _BYTE v102[712]; // [rsp-4578h] [rbp-6180h] BYREF
  _BYTE v103[712]; // [rsp-42B0h] [rbp-5EB8h] BYREF
  _BYTE v104[712]; // [rsp-3FE8h] [rbp-5BF0h] BYREF
  _BYTE v105[712]; // [rsp-3D20h] [rbp-5928h] BYREF
  _BYTE v106[712]; // [rsp-3A58h] [rbp-5660h] BYREF
  _BYTE v107[712]; // [rsp-3790h] [rbp-5398h] BYREF
  _BYTE v108[712]; // [rsp-34C8h] [rbp-50D0h] BYREF
  _BYTE v109[712]; // [rsp-3200h] [rbp-4E08h] BYREF
  _BYTE v110[712]; // [rsp-2F38h] [rbp-4B40h] BYREF
  _BYTE v111[712]; // [rsp-2C70h] [rbp-4878h] BYREF
  _BYTE v112[712]; // [rsp-29A8h] [rbp-45B0h] BYREF
  _BYTE v113[712]; // [rsp-26E0h] [rbp-42E8h] BYREF
  _BYTE v114[712]; // [rsp-2418h] [rbp-4020h] BYREF
  _BYTE v115[712]; // [rsp-2150h] [rbp-3D58h] BYREF
  _BYTE v116[712]; // [rsp-1E88h] [rbp-3A90h] BYREF
  _BYTE v117[712]; // [rsp-1BC0h] [rbp-37C8h] BYREF
  _BYTE v118[712]; // [rsp-18F8h] [rbp-3500h] BYREF
  _BYTE v119[712]; // [rsp-1630h] [rbp-3238h] BYREF
  _BYTE v120[712]; // [rsp-1368h] [rbp-2F70h] BYREF
  _BYTE v121[712]; // [rsp-10A0h] [rbp-2CA8h] BYREF
  _BYTE v122[712]; // [rsp-DD8h] [rbp-29E0h] BYREF
  _BYTE v123[712]; // [rsp-B10h] [rbp-2718h] BYREF
  _BYTE v124[712]; // [rsp-848h] [rbp-2450h] BYREF
  _BYTE v125[712]; // [rsp-580h] [rbp-2188h] BYREF
  _QWORD v126[89]; // [rsp-2B8h] [rbp-1EC0h] BYREF
  _BYTE v127[712]; // [rsp+10h] [rbp-1BF8h] BYREF
  _BYTE v128[700]; // [rsp+2D8h] [rbp-1930h] BYREF
  unsigned __int64 v129; // [rsp+594h] [rbp-1674h]
  int v130; // [rsp+59Ch] [rbp-166Ch]
  _BYTE v131[712]; // [rsp+5A0h] [rbp-1668h] BYREF
  _QWORD v132[74]; // [rsp+868h] [rbp-13A0h] BYREF
  _QWORD v133[74]; // [rsp+AB8h] [rbp-1150h] BYREF
  _QWORD v134[74]; // [rsp+D08h] [rbp-F00h] BYREF
  _QWORD v135[74]; // [rsp+F58h] [rbp-CB0h] BYREF
  _QWORD v136[74]; // [rsp+11A8h] [rbp-A60h] BYREF
  _QWORD v137[74]; // [rsp+13F8h] [rbp-810h] BYREF
  _QWORD v138[89]; // [rsp+1648h] [rbp-5C0h] BYREF
  _OWORD v139[47]; // [rsp+1910h] [rbp-2F8h] BYREF

  do
    *(_QWORD *)&v49[584] = 0LL;
  while ( &v49[584] != &v56[-44520] );
  v1 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  v2 = *(_QWORD *)(v1 + 8);
  v3 = *(_QWORD *)(v1 + 16);
  core::slice::raw::from_raw_parts::precondition_check(v2, 1LL, 1LL, v3);
  ((void (__fastcall *)(_BYTE *, __int64, __int64))clap_builder::builder::command::Command::new::new_inner)(
    v131,
    v2,
    v3);
  *(_QWORD *)&v131[608] = a0027;
  *(_QWORD *)&v131[616] = 6LL;
  memcpy(v139, v131, 0x2C8uLL);
  clap_builder::builder::command::Command::about(v96, v139);
  uucore::format_usage((unsigned int)&v43);
  v4 = v43;
  if ( v43 != 0x8000000000000000LL )
    v39[0] = v44;
  if ( v96[58] != 0x8000000000000000LL )
    ((void (__fastcall *)(_QWORD *, const char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(
      &v96[58],
      aOptionFilename);
  v96[58] = v4;
  *(__m128i *)&v96[59] = v39[0];
  memcpy(v138, v96, sizeof(v138));
  clap_builder::builder::command::Command::after_help(v128, v138);
  memcpy(v97, v128, 0x2BCuLL);
  v5 = (__m128i)v129;
  LODWORD(v129) = v129 | 0x20;
  *(_QWORD *)&v97[175] = _mm_or_si128(v5, (__m128i)xmmword_1A290).m128i_u64[0];
  v97[177] = v130;
  ((void (__fastcall *)(__m128i *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v39);
  v39[33].m128i_i64[0] = (__int64)anon_4999ac20243338206a266e5086c65117_52_llvm_11097290929893828502;
  v39[33].m128i_i64[1] = 4LL;
  memcpy(v49, v39, 0x220uLL);
  *(__m128i *)&v49[560] = _mm_loadu_si128(&v39[35]);
  *(__m128i *)&v49[576] = v39[36];
  *(_QWORD *)&v49[544] = anon_4999ac20243338206a266e5086c65117_52_llvm_11097290929893828502;
  *(_QWORD *)&v49[552] = 4LL;
  v39[0].m128i_i64[0] = 0LL;
  v39[0].m128i_i64[1] = 1LL;
  v39[1].m128i_i64[0] = 0LL;
  ((void (__fastcall *)(__m128i *, const char *, __int64))alloc::string::String::push_str)(v39, aPrintHelpInfor, 23LL);
  v6 = v39[0].m128i_i64[0];
  v40[0] = *(__m128i *)((char *)v39 + 8);
  if ( v39[0].m128i_i64[0] != 0x8000000000000000LL )
    v37 = v40[0];
  if ( *(_QWORD *)&v49[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v49[440]);
  *(_QWORD *)&v49[440] = v6;
  *(__m128i *)&v49[448] = _mm_load_si128(&v37);
  memcpy(v39, v49, 0x24CuLL);
  *(__int16 *)((char *)&v39[36].m128i_i16[6] + 1) = *(_WORD *)&v49[589];
  v39[36].m128i_i8[15] = v49[591];
  v39[36].m128i_i8[12] = 5;
  ((void (__fastcall *)(_DWORD *, __m128i *))clap_builder::builder::command::Command::arg_internal)(v97, v39);
  memcpy(v127, v97, sizeof(v127));
  ((void (__fastcall *)(__m128i *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v39);
  v39[33].m128i_i64[0] = (__int64)aAddressRadix_0;
  v39[33].m128i_i64[1] = 13LL;
  memcpy(v50, v39, 0x220uLL);
  v50[35] = _mm_loadu_si128(&v39[35]);
  *(_QWORD *)((char *)&v50[36] + 4) = *(__int64 *)((char *)v39[36].m128i_i64 + 4);
  HIDWORD(v50[36]) = v39[36].m128i_i32[3];
  *(_QWORD *)&v50[34] = aAddressRadix_0;
  *((_QWORD *)&v50[34] + 1) = 13LL;
  LODWORD(v50[36]) = 65;
  v39[0].m128i_i64[0] = 0LL;
  v39[0].m128i_i64[1] = 1LL;
  v39[1].m128i_i64[0] = 0LL;
  ((void (__fastcall *)(__m128i *, const char *, __int64))alloc::string::String::push_str)(v39, aSelectTheBaseI, 50LL);
  v7 = v39[0].m128i_i64[0];
  v40[0] = *(__m128i *)((char *)v39 + 8);
  if ( v39[0].m128i_i64[0] != 0x8000000000000000LL )
    v37 = v40[0];
  if ( *((_QWORD *)&v50[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v50[27] + 8);
  *((_QWORD *)&v50[27] + 1) = v7;
  v50[28] = _mm_load_si128(&v37);
  memcpy(v39, v50, sizeof(v39));
  v40[0].m128i_i64[0] = (__int64)aRadix;
  v40[0].m128i_i64[1] = 5LL;
  clap_builder::builder::arg::Arg::value_names(v132, v39);
  memcpy(v39, v132, sizeof(v39));
  ((void (__fastcall *)(_BYTE *, __m128i *))clap_builder::builder::command::Command::arg_internal)(v127, v39);
  memcpy(v126, v127, sizeof(v126));
  ((void (__fastcall *)(__m128i *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v39);
  v39[33].m128i_i64[0] = (__int64)aSkipBytes_0;
  v39[33].m128i_i64[1] = 10LL;
  memcpy(v51, v39, 0x220uLL);
  v51[35] = _mm_loadu_si128(&v39[35]);
  *(_QWORD *)((char *)&v51[36] + 4) = *(__int64 *)((char *)v39[36].m128i_i64 + 4);
  HIDWORD(v51[36]) = v39[36].m128i_i32[3];
  *(_QWORD *)&v51[34] = aSkipBytes_0;
  *((_QWORD *)&v51[34] + 1) = 10LL;
  LODWORD(v51[36]) = 106;
  v39[0].m128i_i64[0] = 0LL;
  v39[0].m128i_i64[1] = 1LL;
  v39[1].m128i_i64[0] = 0LL;
  ((void (__fastcall *)(__m128i *, const char *, __int64))alloc::string::String::push_str)(v39, aSkipBytesInput, 53LL);
  v8 = v39[0].m128i_i64[0];
  v40[0] = *(__m128i *)((char *)v39 + 8);
  if ( v39[0].m128i_i64[0] != 0x8000000000000000LL )
    v37 = v40[0];
  if ( *((_QWORD *)&v51[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v51[27] + 8);
  *((_QWORD *)&v51[27] + 1) = v8;
  v51[28] = _mm_load_si128(&v37);
  memcpy(v39, v51, sizeof(v39));
  v40[0].m128i_i64[0] = (__int64)aBytes_0;
  v40[0].m128i_i64[1] = 5LL;
  clap_builder::builder::arg::Arg::value_names(v133, v39);
  memcpy(v39, v133, sizeof(v39));
  ((void (__fastcall *)(_QWORD *, __m128i *))clap_builder::builder::command::Command::arg_internal)(v126, v39);
  memcpy(v125, v126, sizeof(v125));
  ((void (__fastcall *)(__m128i *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v39);
  v39[33].m128i_i64[0] = (__int64)aReadBytes_0;
  v39[33].m128i_i64[1] = 10LL;
  memcpy(v52, v39, 0x220uLL);
  v52[35] = _mm_loadu_si128(&v39[35]);
  *(_QWORD *)((char *)&v52[36] + 4) = *(__int64 *)((char *)v39[36].m128i_i64 + 4);
  HIDWORD(v52[36]) = v39[36].m128i_i32[3];
  *(_QWORD *)&v52[34] = aReadBytes_0;
  *((_QWORD *)&v52[34] + 1) = 10LL;
  LODWORD(v52[36]) = 78;
  v39[0].m128i_i64[0] = 0LL;
  v39[0].m128i_i64[1] = 1LL;
  v39[1].m128i_i64[0] = 0LL;
  ((void (__fastcall *)(__m128i *, const char *, __int64))alloc::string::String::push_str)(v39, aLimitDumpToByt, 31LL);
  v9 = v39[0].m128i_i64[0];
  v40[0] = *(__m128i *)((char *)v39 + 8);
  if ( v39[0].m128i_i64[0] != 0x8000000000000000LL )
    v37 = v40[0];
  if ( *((_QWORD *)&v52[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v52[27] + 8);
  *((_QWORD *)&v52[27] + 1) = v9;
  v52[28] = _mm_load_si128(&v37);
  memcpy(v39, v52, sizeof(v39));
  v40[0].m128i_i64[0] = (__int64)aBytes_0;
  v40[0].m128i_i64[1] = 5LL;
  clap_builder::builder::arg::Arg::value_names(v134, v39);
  memcpy(v39, v134, sizeof(v39));
  ((void (__fastcall *)(_BYTE *, __m128i *))clap_builder::builder::command::Command::arg_internal)(v125, v39);
  memcpy(v124, v125, sizeof(v124));
  ((void (__fastcall *)(__m128i *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v39);
  v39[33].m128i_i64[0] = (__int64)aEndian;
  v39[33].m128i_i64[1] = 6LL;
  memcpy(v94, v39, 0x220uLL);
  v94[35] = _mm_loadu_si128(&v39[35]);
  v94[36] = v39[36];
  *(_QWORD *)&v94[34] = aEndian;
  *((_QWORD *)&v94[34] + 1) = 6LL;
  v39[0].m128i_i64[0] = 0LL;
  v39[0].m128i_i64[1] = 1LL;
  v39[1].m128i_i64[0] = 0LL;
  ((void (__fastcall *)(__m128i *, const char *, __int64))alloc::string::String::push_str)(v39, aByteOrderToUse, 40LL);
  v10 = v39[0].m128i_i64[0];
  v40[0] = *(__m128i *)((char *)v39 + 8);
  if ( v39[0].m128i_i64[0] != 0x8000000000000000LL )
    v39[0] = v40[0];
  if ( *((_QWORD *)&v94[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v94[27] + 8);
  *((_QWORD *)&v94[27] + 1) = v10;
  v94[28] = _mm_load_si128(v39);
  memcpy(v95, v94, sizeof(v95));
  v39[0].m128i_i64[0] = (__int64)aBig;
  v39[0].m128i_i64[1] = 3LL;
  v39[1].m128i_i64[0] = (__int64)aLittle;
  v39[1].m128i_i64[1] = 6LL;
  v39[2].m128i_i64[0] = 0LL;
  v39[2].m128i_i64[1] = 2LL;
  ((void (__fastcall *)(__m128i *, __m128i *))<alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter)(
    v40,
    v39);
  v41 = _mm_loadu_si128(v40);
  v42 = v40[1].m128i_i64[0];
  ((void (__fastcall *)(__m128i *, __m128i *))clap_builder::builder::value_parser::ValueParser::new)(v39, &v41);
  v11 = v39[0].m128i_i64[0];
  v40[0] = *(__m128i *)((char *)v39 + 8);
  if ( v39[0].m128i_i64[0] != 5 )
    v37 = v40[0];
  if ( v95[10] >= 4uLL && v95[10] != 5LL )
    ((void (__fastcall *)(_QWORD *))core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>)(&v95[11]);
  v95[10] = v11;
  *(__m128i *)&v95[11] = _mm_load_si128(&v37);
  memcpy(v39, v95, sizeof(v39));
  v40[0].m128i_i64[0] = (__int64)aBigLittle;
  v40[0].m128i_i64[1] = 10LL;
  clap_builder::builder::arg::Arg::value_names(v135, v39);
  memcpy(v39, v135, sizeof(v39));
  ((void (__fastcall *)(_BYTE *, __m128i *))clap_builder::builder::command::Command::arg_internal)(v124, v39);
  memcpy(v123, v124, sizeof(v123));
  ((void (__fastcall *)(__m128i *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v39);
  v39[33].m128i_i64[0] = (__int64)aStrings;
  v39[33].m128i_i64[1] = 7LL;
  memcpy(v53, v39, 0x220uLL);
  v53[35] = _mm_loadu_si128(&v39[35]);
  *(_QWORD *)((char *)&v53[36] + 4) = *(__int64 *)((char *)v39[36].m128i_i64 + 4);
  HIDWORD(v53[36]) = v39[36].m128i_i32[3];
  *(_QWORD *)&v53[34] = aStrings;
  *((_QWORD *)&v53[34] + 1) = 7LL;
  LODWORD(v53[36]) = 83;
  v39[0].m128i_i64[0] = 0LL;
  v39[0].m128i_i64[1] = 1LL;
  v39[1].m128i_i64[0] = 0LL;
  ((void (__fastcall *)(__m128i *, const char *, __int64))alloc::string::String::push_str)(v39, aNotimplemented, 105LL);
  v12 = v39[0].m128i_i64[0];
  v37 = *(__m128i *)((char *)v39 + 8);
  if ( v39[0].m128i_i64[0] != 0x8000000000000000LL )
    v39[0] = v37;
  if ( *((_QWORD *)&v53[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v53[27] + 8);
  *((_QWORD *)&v53[27] + 1) = v12;
  v53[28] = _mm_load_si128(v39);
  memcpy(v40, v53, sizeof(v40));
  v39[0].m128i_i64[0] = (__int64)a3;
  v39[0].m128i_i64[1] = 1LL;
  v39[1].m128i_i64[0] = 0LL;
  v39[1].m128i_i64[1] = 1LL;
  ((void (__fastcall *)(__m128i *, __m128i *))<alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter)(
    &v37,
    v39);
  ((void (__fastcall *)(__m128i *, __m128i *))alloc::raw_vec::RawVec<T,A>::current_memory)(v39, &v40[26]);
  if ( v39[0].m128i_i64[1] && v39[1].m128i_i64[0] )
    _rust_dealloc(v39[0].m128i_i64[0], v39[1].m128i_i64[0], v39[0].m128i_i64[1]);
  v40[27].m128i_i64[0] = v38;
  v40[26] = _mm_loadu_si128(&v37);
  memcpy(v39, v40, sizeof(v39));
  v40[0].m128i_i64[0] = (__int64)aBytes_0;
  v40[0].m128i_i64[1] = 5LL;
  clap_builder::builder::arg::Arg::value_names(v136, v39);
  memcpy(v39, v136, sizeof(v39));
  ((void (__fastcall *)(_BYTE *, __m128i *))clap_builder::builder::command::Command::arg_internal)(v123, v39);
  memcpy(v122, v123, sizeof(v122));
  ((void (__fastcall *)(__m128i *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v39);
  v39[33].m128i_i64[0] = (__int64)aA;
  v39[33].m128i_i64[1] = 1LL;
  memcpy(v56, v39, 0x240uLL);
  *(_QWORD *)&v56[580] = *(__int64 *)((char *)v39[36].m128i_i64 + 4);
  v57 = v39[36].m128i_i32[3];
  *(_DWORD *)&v56[576] = 97;
  v39[0].m128i_i64[0] = 0LL;
  v39[0].m128i_i64[1] = 1LL;
  v39[1].m128i_i64[0] = 0LL;
  ((void (__fastcall *)(__m128i *, const char *, __int64))alloc::string::String::push_str)(v39, aNamedCharacter, 41LL);
  v13 = v39[0].m128i_i64[0];
  v40[0] = *(__m128i *)((char *)v39 + 8);
  if ( v39[0].m128i_i64[0] != 0x8000000000000000LL )
    v37 = v40[0];
  if ( *(_QWORD *)&v56[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v56[440]);
  *(_QWORD *)&v56[440] = v13;
  *(__m128i *)&v56[448] = _mm_load_si128(&v37);
  memcpy(v39, v56, 0x24CuLL);
  *(__int16 *)((char *)&v39[36].m128i_i16[6] + 1) = *(_WORD *)((char *)&v57 + 1);
  v39[36].m128i_i8[15] = HIBYTE(v57);
  v39[36].m128i_i8[12] = 2;
  ((void (__fastcall *)(_BYTE *, __m128i *))clap_builder::builder::command::Command::arg_internal)(v122, v39);
  memcpy(v121, v122, sizeof(v121));
  ((void (__fastcall *)(__m128i *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v39);
  v39[33].m128i_i64[0] = (__int64)aB;
  v39[33].m128i_i64[1] = 1LL;
  memcpy(v58, v39, 0x240uLL);
  *(_QWORD *)&v58[580] = *(__int64 *)((char *)v39[36].m128i_i64 + 4);
  v59 = v39[36].m128i_i32[3];
  *(_DWORD *)&v58[576] = 98;
  v39[0].m128i_i64[0] = 0LL;
  v39[0].m128i_i64[1] = 1LL;
  v39[1].m128i_i64[0] = 0LL;
  ((void (__fastcall *)(__m128i *, const char *, __int64))alloc::string::String::push_str)(v39, aOctalBytes, 11LL);
  v14 = v39[0].m128i_i64[0];
  v40[0] = *(__m128i *)((char *)v39 + 8);
  if ( v39[0].m128i_i64[0] != 0x8000000000000000LL )
    v37 = v40[0];
  if ( *(_QWORD *)&v58[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v58[440]);
  *(_QWORD *)&v58[440] = v14;
  *(__m128i *)&v58[448] = _mm_load_si128(&v37);
  memcpy(v39, v58, 0x24CuLL);
  *(__int16 *)((char *)&v39[36].m128i_i16[6] + 1) = *(_WORD *)((char *)&v59 + 1);
  v39[36].m128i_i8[15] = HIBYTE(v59);
  v39[36].m128i_i8[12] = 2;
  ((void (__fastcall *)(_BYTE *, __m128i *))clap_builder::builder::command::Command::arg_internal)(v121, v39);
  memcpy(v120, v121, sizeof(v120));
  ((void (__fastcall *)(__m128i *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v39);
  v39[33].m128i_i64[0] = (__int64)aC;
  v39[33].m128i_i64[1] = 1LL;
  memcpy(v60, v39, 0x240uLL);
  *(_QWORD *)&v60[580] = *(__int64 *)((char *)v39[36].m128i_i64 + 4);
  v61 = v39[36].m128i_i32[3];
  *(_DWORD *)&v60[576] = 99;
  v39[0].m128i_i64[0] = 0LL;
  v39[0].m128i_i64[1] = 1LL;
  v39[1].m128i_i64[0] = 0LL;
  ((void (__fastcall *)(__m128i *, const char *, __int64))alloc::string::String::push_str)(v39, aAsciiCharacter, 37LL);
  v15 = v39[0].m128i_i64[0];
  v40[0] = *(__m128i *)((char *)v39 + 8);
  if ( v39[0].m128i_i64[0] != 0x8000000000000000LL )
    v37 = v40[0];
  if ( *(_QWORD *)&v60[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v60[440]);
  *(_QWORD *)&v60[440] = v15;
  *(__m128i *)&v60[448] = _mm_load_si128(&v37);
  memcpy(v39, v60, 0x24CuLL);
  *(__int16 *)((char *)&v39[36].m128i_i16[6] + 1) = *(_WORD *)((char *)&v61 + 1);
  v39[36].m128i_i8[15] = HIBYTE(v61);
  v39[36].m128i_i8[12] = 2;
  ((void (__fastcall *)(_BYTE *, __m128i *))clap_builder::builder::command::Command::arg_internal)(v120, v39);
  memcpy(v119, v120, sizeof(v119));
  ((void (__fastcall *)(__m128i *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v39);
  v39[33].m128i_i64[0] = (__int64)aD_0;
  v39[33].m128i_i64[1] = 1LL;
  memcpy(v62, v39, 0x240uLL);
  *(_QWORD *)&v62[580] = *(__int64 *)((char *)v39[36].m128i_i64 + 4);
  v63 = v39[36].m128i_i32[3];
  *(_DWORD *)&v62[576] = 100;
  v39[0].m128i_i64[0] = 0LL;
  v39[0].m128i_i64[1] = 1LL;
  v39[1].m128i_i64[0] = 0LL;
  ((void (__fastcall *)(__m128i *, const char *, __int64))alloc::string::String::push_str)(v39, aUnsignedDecima, 29LL);
  v16 = v39[0].m128i_i64[0];
  v40[0] = *(__m128i *)((char *)v39 + 8);
  if ( v39[0].m128i_i64[0] != 0x8000000000000000LL )
    v37 = v40[0];
  if ( *(_QWORD *)&v62[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v62[440]);
  *(_QWORD *)&v62[440] = v16;
  *(__m128i *)&v62[448] = _mm_load_si128(&v37);
  memcpy(v39, v62, 0x24CuLL);
  *(__int16 *)((char *)&v39[36].m128i_i16[6] + 1) = *(_WORD *)((char *)&v63 + 1);
  v39[36].m128i_i8[15] = HIBYTE(v63);
  v39[36].m128i_i8[12] = 2;
  ((void (__fastcall *)(_BYTE *, __m128i *))clap_builder::builder::command::Command::arg_internal)(v119, v39);
  memcpy(v118, v119, sizeof(v118));
  ((void (__fastcall *)(__m128i *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v39);
  v39[33].m128i_i64[0] = (__int64)aD_1;
  v39[33].m128i_i64[1] = 1LL;
  memcpy(v64, v39, 0x240uLL);
  *(_QWORD *)&v64[580] = *(__int64 *)((char *)v39[36].m128i_i64 + 4);
  v65 = v39[36].m128i_i32[3];
  *(_DWORD *)&v64[576] = 68;
  v39[0].m128i_i64[0] = 0LL;
  v39[0].m128i_i64[1] = 1LL;
  v39[1].m128i_i64[0] = 0LL;
  ((void (__fastcall *)(__m128i *, const char *, __int64))alloc::string::String::push_str)(v39, aUnsignedDecima_0, 29LL);
  v17 = v39[0].m128i_i64[0];
  v40[0] = *(__m128i *)((char *)v39 + 8);
  if ( v39[0].m128i_i64[0] != 0x8000000000000000LL )
    v37 = v40[0];
  if ( *(_QWORD *)&v64[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v64[440]);
  *(_QWORD *)&v64[440] = v17;
  *(__m128i *)&v64[448] = _mm_load_si128(&v37);
  memcpy(v39, v64, 0x24CuLL);
  *(__int16 *)((char *)&v39[36].m128i_i16[6] + 1) = *(_WORD *)((char *)&v65 + 1);
  v39[36].m128i_i8[15] = HIBYTE(v65);
  v39[36].m128i_i8[12] = 2;
  ((void (__fastcall *)(_BYTE *, __m128i *))clap_builder::builder::command::Command::arg_internal)(v118, v39);
  memcpy(v117, v118, sizeof(v117));
  ((void (__fastcall *)(__m128i *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v39);
  v39[33].m128i_i64[0] = (__int64)aO;
  v39[33].m128i_i64[1] = 1LL;
  memcpy(v66, v39, 0x240uLL);
  *(_QWORD *)&v66[580] = *(__int64 *)((char *)v39[36].m128i_i64 + 4);
  v67 = v39[36].m128i_i32[3];
  *(_DWORD *)&v66[576] = 111;
  v39[0].m128i_i64[0] = 0LL;
  v39[0].m128i_i64[1] = 1LL;
  v39[1].m128i_i64[0] = 0LL;
  ((void (__fastcall *)(__m128i *, const char *, __int64))alloc::string::String::push_str)(v39, aOctal2ByteUnit, 18LL);
  v18 = v39[0].m128i_i64[0];
  v40[0] = *(__m128i *)((char *)v39 + 8);
  if ( v39[0].m128i_i64[0] != 0x8000000000000000LL )
    v37 = v40[0];
  if ( *(_QWORD *)&v66[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v66[440]);
  *(_QWORD *)&v66[440] = v18;
  *(__m128i *)&v66[448] = _mm_load_si128(&v37);
  memcpy(v39, v66, 0x24CuLL);
  *(__int16 *)((char *)&v39[36].m128i_i16[6] + 1) = *(_WORD *)((char *)&v67 + 1);
  v39[36].m128i_i8[15] = HIBYTE(v67);
  v39[36].m128i_i8[12] = 2;
  ((void (__fastcall *)(_BYTE *, __m128i *))clap_builder::builder::command::Command::arg_internal)(v117, v39);
  memcpy(v116, v117, sizeof(v116));
  ((void (__fastcall *)(__m128i *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v39);
  v39[33].m128i_i64[0] = (__int64)aI;
  v39[33].m128i_i64[1] = 1LL;
  memcpy(v68, v39, 0x240uLL);
  *(_QWORD *)&v68[580] = *(__int64 *)((char *)v39[36].m128i_i64 + 4);
  v69 = v39[36].m128i_i32[3];
  *(_DWORD *)&v68[576] = 73;
  v39[0].m128i_i64[0] = 0LL;
  v39[0].m128i_i64[1] = 1LL;
  v39[1].m128i_i64[0] = 0LL;
  ((void (__fastcall *)(__m128i *, const char *, __int64))alloc::string::String::push_str)(v39, aDecimal8ByteUn, 20LL);
  v19 = v39[0].m128i_i64[0];
  v40[0] = *(__m128i *)((char *)v39 + 8);
  if ( v39[0].m128i_i64[0] != 0x8000000000000000LL )
    v37 = v40[0];
  if ( *(_QWORD *)&v68[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v68[440]);
  *(_QWORD *)&v68[440] = v19;
  *(__m128i *)&v68[448] = _mm_load_si128(&v37);
  memcpy(v39, v68, 0x24CuLL);
  *(__int16 *)((char *)&v39[36].m128i_i16[6] + 1) = *(_WORD *)((char *)&v69 + 1);
  v39[36].m128i_i8[15] = HIBYTE(v69);
  v39[36].m128i_i8[12] = 2;
  ((void (__fastcall *)(_BYTE *, __m128i *))clap_builder::builder::command::Command::arg_internal)(v116, v39);
  memcpy(v115, v116, sizeof(v115));
  ((void (__fastcall *)(__m128i *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v39);
  v39[33].m128i_i64[0] = (__int64)asc_256B8;
  v39[33].m128i_i64[1] = 1LL;
  memcpy(v70, v39, 0x240uLL);
  *(_QWORD *)&v70[580] = *(__int64 *)((char *)v39[36].m128i_i64 + 4);
  v71 = v39[36].m128i_i32[3];
  *(_DWORD *)&v70[576] = 76;
  v39[0].m128i_i64[0] = 0LL;
  v39[0].m128i_i64[1] = 1LL;
  v39[1].m128i_i64[0] = 0LL;
  ((void (__fastcall *)(__m128i *, const char *, __int64))alloc::string::String::push_str)(v39, aDecimal8ByteUn, 20LL);
  v20 = v39[0].m128i_i64[0];
  v40[0] = *(__m128i *)((char *)v39 + 8);
  if ( v39[0].m128i_i64[0] != 0x8000000000000000LL )
    v37 = v40[0];
  if ( *(_QWORD *)&v70[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v70[440]);
  *(_QWORD *)&v70[440] = v20;
  *(__m128i *)&v70[448] = _mm_load_si128(&v37);
  memcpy(v39, v70, 0x24CuLL);
  *(__int16 *)((char *)&v39[36].m128i_i16[6] + 1) = *(_WORD *)((char *)&v71 + 1);
  v39[36].m128i_i8[15] = HIBYTE(v71);
  v39[36].m128i_i8[12] = 2;
  ((void (__fastcall *)(_BYTE *, __m128i *))clap_builder::builder::command::Command::arg_internal)(v115, v39);
  memcpy(v114, v115, sizeof(v114));
  ((void (__fastcall *)(__m128i *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v39);
  v39[33].m128i_i64[0] = (__int64)aI_0;
  v39[33].m128i_i64[1] = 1LL;
  memcpy(v72, v39, 0x240uLL);
  *(_QWORD *)&v72[580] = *(__int64 *)((char *)v39[36].m128i_i64 + 4);
  v73 = v39[36].m128i_i32[3];
  *(_DWORD *)&v72[576] = 105;
  v39[0].m128i_i64[0] = 0LL;
  v39[0].m128i_i64[1] = 1LL;
  v39[1].m128i_i64[0] = 0LL;
  ((void (__fastcall *)(__m128i *, const char *, __int64))alloc::string::String::push_str)(v39, aDecimal4ByteUn, 20LL);
  v21 = v39[0].m128i_i64[0];
  v40[0] = *(__m128i *)((char *)v39 + 8);
  if ( v39[0].m128i_i64[0] != 0x8000000000000000LL )
    v37 = v40[0];
  if ( *(_QWORD *)&v72[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v72[440]);
  *(_QWORD *)&v72[440] = v21;
  *(__m128i *)&v72[448] = _mm_load_si128(&v37);
  memcpy(v39, v72, 0x24CuLL);
  *(__int16 *)((char *)&v39[36].m128i_i16[6] + 1) = *(_WORD *)((char *)&v73 + 1);
  v39[36].m128i_i8[15] = HIBYTE(v73);
  v39[36].m128i_i8[12] = 2;
  ((void (__fastcall *)(_BYTE *, __m128i *))clap_builder::builder::command::Command::arg_internal)(v114, v39);
  memcpy(v113, v114, sizeof(v113));
  ((void (__fastcall *)(__m128i *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v39);
  v39[33].m128i_i64[0] = (__int64)asc_256CE;
  v39[33].m128i_i64[1] = 1LL;
  memcpy(v74, v39, 0x240uLL);
  *(_QWORD *)&v74[580] = *(__int64 *)((char *)v39[36].m128i_i64 + 4);
  v75 = v39[36].m128i_i32[3];
  *(_DWORD *)&v74[576] = 108;
  v39[0].m128i_i64[0] = 0LL;
  v39[0].m128i_i64[1] = 1LL;
  v39[1].m128i_i64[0] = 0LL;
  ((void (__fastcall *)(__m128i *, const char *, __int64))alloc::string::String::push_str)(v39, aDecimal8ByteUn, 20LL);
  v22 = v39[0].m128i_i64[0];
  v40[0] = *(__m128i *)((char *)v39 + 8);
  if ( v39[0].m128i_i64[0] != 0x8000000000000000LL )
    v37 = v40[0];
  if ( *(_QWORD *)&v74[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v74[440]);
  *(_QWORD *)&v74[440] = v22;
  *(__m128i *)&v74[448] = _mm_load_si128(&v37);
  memcpy(v39, v74, 0x24CuLL);
  *(__int16 *)((char *)&v39[36].m128i_i16[6] + 1) = *(_WORD *)((char *)&v75 + 1);
  v39[36].m128i_i8[15] = HIBYTE(v75);
  v39[36].m128i_i8[12] = 2;
  ((void (__fastcall *)(_BYTE *, __m128i *))clap_builder::builder::command::Command::arg_internal)(v113, v39);
  memcpy(v112, v113, sizeof(v112));
  ((void (__fastcall *)(__m128i *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v39);
  v39[33].m128i_i64[0] = (__int64)asc_256CF;
  v39[33].m128i_i64[1] = 1LL;
  memcpy(v76, v39, 0x240uLL);
  *(_QWORD *)&v76[580] = *(__int64 *)((char *)v39[36].m128i_i64 + 4);
  v77 = v39[36].m128i_i32[3];
  *(_DWORD *)&v76[576] = 120;
  v39[0].m128i_i64[0] = 0LL;
  v39[0].m128i_i64[1] = 1LL;
  v39[1].m128i_i64[0] = 0LL;
  ((void (__fastcall *)(__m128i *, const char *, __int64))alloc::string::String::push_str)(v39, aHexadecimal2By, 24LL);
  v23 = v39[0].m128i_i64[0];
  v40[0] = *(__m128i *)((char *)v39 + 8);
  if ( v39[0].m128i_i64[0] != 0x8000000000000000LL )
    v37 = v40[0];
  if ( *(_QWORD *)&v76[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v76[440]);
  *(_QWORD *)&v76[440] = v23;
  *(__m128i *)&v76[448] = _mm_load_si128(&v37);
  memcpy(v39, v76, 0x24CuLL);
  *(__int16 *)((char *)&v39[36].m128i_i16[6] + 1) = *(_WORD *)((char *)&v77 + 1);
  v39[36].m128i_i8[15] = HIBYTE(v77);
  v39[36].m128i_i8[12] = 2;
  ((void (__fastcall *)(_BYTE *, __m128i *))clap_builder::builder::command::Command::arg_internal)(v112, v39);
  memcpy(v111, v112, sizeof(v111));
  ((void (__fastcall *)(__m128i *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v39);
  v39[33].m128i_i64[0] = (__int64)asc_256E8;
  v39[33].m128i_i64[1] = 1LL;
  memcpy(v78, v39, 0x240uLL);
  *(_QWORD *)&v78[580] = *(__int64 *)((char *)v39[36].m128i_i64 + 4);
  v79 = v39[36].m128i_i32[3];
  *(_DWORD *)&v78[576] = 104;
  v39[0].m128i_i64[0] = 0LL;
  v39[0].m128i_i64[1] = 1LL;
  v39[1].m128i_i64[0] = 0LL;
  ((void (__fastcall *)(__m128i *, const char *, __int64))alloc::string::String::push_str)(v39, aHexadecimal2By, 24LL);
  v24 = v39[0].m128i_i64[0];
  v40[0] = *(__m128i *)((char *)v39 + 8);
  if ( v39[0].m128i_i64[0] != 0x8000000000000000LL )
    v37 = v40[0];
  if ( *(_QWORD *)&v78[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v78[440]);
  *(_QWORD *)&v78[440] = v24;
  *(__m128i *)&v78[448] = _mm_load_si128(&v37);
  memcpy(v39, v78, 0x24CuLL);
  *(__int16 *)((char *)&v39[36].m128i_i16[6] + 1) = *(_WORD *)((char *)&v79 + 1);
  v39[36].m128i_i8[15] = HIBYTE(v79);
  v39[36].m128i_i8[12] = 2;
  ((void (__fastcall *)(_BYTE *, __m128i *))clap_builder::builder::command::Command::arg_internal)(v111, v39);
  memcpy(v110, v111, sizeof(v110));
  ((void (__fastcall *)(__m128i *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v39);
  v39[33].m128i_i64[0] = (__int64)aO_0;
  v39[33].m128i_i64[1] = 1LL;
  memcpy(v80, v39, 0x240uLL);
  *(_QWORD *)&v80[580] = *(__int64 *)((char *)v39[36].m128i_i64 + 4);
  v81 = v39[36].m128i_i32[3];
  *(_DWORD *)&v80[576] = 79;
  v39[0].m128i_i64[0] = 0LL;
  v39[0].m128i_i64[1] = 1LL;
  v39[1].m128i_i64[0] = 0LL;
  ((void (__fastcall *)(__m128i *, const char *, __int64))alloc::string::String::push_str)(v39, aOctal4ByteUnit, 18LL);
  v25 = v39[0].m128i_i64[0];
  v40[0] = *(__m128i *)((char *)v39 + 8);
  if ( v39[0].m128i_i64[0] != 0x8000000000000000LL )
    v37 = v40[0];
  if ( *(_QWORD *)&v80[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v80[440]);
  *(_QWORD *)&v80[440] = v25;
  *(__m128i *)&v80[448] = _mm_load_si128(&v37);
  memcpy(v39, v80, 0x24CuLL);
  *(__int16 *)((char *)&v39[36].m128i_i16[6] + 1) = *(_WORD *)((char *)&v81 + 1);
  v39[36].m128i_i8[15] = HIBYTE(v81);
  v39[36].m128i_i8[12] = 2;
  ((void (__fastcall *)(_BYTE *, __m128i *))clap_builder::builder::command::Command::arg_internal)(v110, v39);
  memcpy(v109, v110, sizeof(v109));
  ((void (__fastcall *)(__m128i *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v39);
  v39[33].m128i_i64[0] = (__int64)aS;
  v39[33].m128i_i64[1] = 1LL;
  memcpy(v82, v39, 0x240uLL);
  *(_QWORD *)&v82[580] = *(__int64 *)((char *)v39[36].m128i_i64 + 4);
  v83 = v39[36].m128i_i32[3];
  *(_DWORD *)&v82[576] = 115;
  v39[0].m128i_i64[0] = 0LL;
  v39[0].m128i_i64[1] = 1LL;
  v39[1].m128i_i64[0] = 0LL;
  ((void (__fastcall *)(__m128i *, const char *, __int64))alloc::string::String::push_str)(v39, aDecimal2ByteUn, 20LL);
  v26 = v39[0].m128i_i64[0];
  v40[0] = *(__m128i *)((char *)v39 + 8);
  if ( v39[0].m128i_i64[0] != 0x8000000000000000LL )
    v37 = v40[0];
  if ( *(_QWORD *)&v82[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v82[440]);
  *(_QWORD *)&v82[440] = v26;
  *(__m128i *)&v82[448] = _mm_load_si128(&v37);
  memcpy(v39, v82, 0x24CuLL);
  *(__int16 *)((char *)&v39[36].m128i_i16[6] + 1) = *(_WORD *)((char *)&v83 + 1);
  v39[36].m128i_i8[15] = HIBYTE(v83);
  v39[36].m128i_i8[12] = 2;
  ((void (__fastcall *)(_BYTE *, __m128i *))clap_builder::builder::command::Command::arg_internal)(v109, v39);
  memcpy(v108, v109, sizeof(v108));
  ((void (__fastcall *)(__m128i *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v39);
  v39[33].m128i_i64[0] = (__int64)asc_25711;
  v39[33].m128i_i64[1] = 1LL;
  memcpy(v84, v39, 0x240uLL);
  *(_QWORD *)&v84[580] = *(__int64 *)((char *)v39[36].m128i_i64 + 4);
  v85 = v39[36].m128i_i32[3];
  *(_DWORD *)&v84[576] = 88;
  v39[0].m128i_i64[0] = 0LL;
  v39[0].m128i_i64[1] = 1LL;
  v39[1].m128i_i64[0] = 0LL;
  ((void (__fastcall *)(__m128i *, const char *, __int64))alloc::string::String::push_str)(v39, aHexadecimal4By, 24LL);
  v27 = v39[0].m128i_i64[0];
  v40[0] = *(__m128i *)((char *)v39 + 8);
  if ( v39[0].m128i_i64[0] != 0x8000000000000000LL )
    v37 = v40[0];
  if ( *(_QWORD *)&v84[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v84[440]);
  *(_QWORD *)&v84[440] = v27;
  *(__m128i *)&v84[448] = _mm_load_si128(&v37);
  memcpy(v39, v84, 0x24CuLL);
  *(__int16 *)((char *)&v39[36].m128i_i16[6] + 1) = *(_WORD *)((char *)&v85 + 1);
  v39[36].m128i_i8[15] = HIBYTE(v85);
  v39[36].m128i_i8[12] = 2;
  ((void (__fastcall *)(_BYTE *, __m128i *))clap_builder::builder::command::Command::arg_internal)(v108, v39);
  memcpy(v107, v108, sizeof(v107));
  ((void (__fastcall *)(__m128i *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v39);
  v39[33].m128i_i64[0] = (__int64)asc_2572A;
  v39[33].m128i_i64[1] = 1LL;
  memcpy(v86, v39, 0x240uLL);
  *(_QWORD *)&v86[580] = *(__int64 *)((char *)v39[36].m128i_i64 + 4);
  v87 = v39[36].m128i_i32[3];
  *(_DWORD *)&v86[576] = 72;
  v39[0].m128i_i64[0] = 0LL;
  v39[0].m128i_i64[1] = 1LL;
  v39[1].m128i_i64[0] = 0LL;
  ((void (__fastcall *)(__m128i *, const char *, __int64))alloc::string::String::push_str)(v39, aHexadecimal4By, 24LL);
  v28 = v39[0].m128i_i64[0];
  v40[0] = *(__m128i *)((char *)v39 + 8);
  if ( v39[0].m128i_i64[0] != 0x8000000000000000LL )
    v37 = v40[0];
  if ( *(_QWORD *)&v86[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v86[440]);
  *(_QWORD *)&v86[440] = v28;
  *(__m128i *)&v86[448] = _mm_load_si128(&v37);
  memcpy(v39, v86, 0x24CuLL);
  *(__int16 *)((char *)&v39[36].m128i_i16[6] + 1) = *(_WORD *)((char *)&v87 + 1);
  v39[36].m128i_i8[15] = HIBYTE(v87);
  v39[36].m128i_i8[12] = 2;
  ((void (__fastcall *)(_BYTE *, __m128i *))clap_builder::builder::command::Command::arg_internal)(v107, v39);
  memcpy(v106, v107, sizeof(v106));
  ((void (__fastcall *)(__m128i *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v39);
  v39[33].m128i_i64[0] = (__int64)aE;
  v39[33].m128i_i64[1] = 1LL;
  memcpy(v88, v39, 0x240uLL);
  *(_QWORD *)&v88[580] = *(__int64 *)((char *)v39[36].m128i_i64 + 4);
  v89 = v39[36].m128i_i32[3];
  *(_DWORD *)&v88[576] = 101;
  v39[0].m128i_i64[0] = 0LL;
  v39[0].m128i_i64[1] = 1LL;
  v39[1].m128i_i64[0] = 0LL;
  ((void (__fastcall *)(__m128i *, const char *, __int64))alloc::string::String::push_str)(v39, aFloatingPointD, 46LL);
  v29 = v39[0].m128i_i64[0];
  v40[0] = *(__m128i *)((char *)v39 + 8);
  if ( v39[0].m128i_i64[0] != 0x8000000000000000LL )
    v37 = v40[0];
  if ( *(_QWORD *)&v88[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v88[440]);
  *(_QWORD *)&v88[440] = v29;
  *(__m128i *)&v88[448] = _mm_load_si128(&v37);
  memcpy(v39, v88, 0x24CuLL);
  *(__int16 *)((char *)&v39[36].m128i_i16[6] + 1) = *(_WORD *)((char *)&v89 + 1);
  v39[36].m128i_i8[15] = HIBYTE(v89);
  v39[36].m128i_i8[12] = 2;
  ((void (__fastcall *)(_BYTE *, __m128i *))clap_builder::builder::command::Command::arg_internal)(v106, v39);
  memcpy(v105, v106, sizeof(v105));
  ((void (__fastcall *)(__m128i *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v39);
  v39[33].m128i_i64[0] = (__int64)asc_2575A;
  v39[33].m128i_i64[1] = 1LL;
  memcpy(v90, v39, 0x240uLL);
  *(_QWORD *)&v90[580] = *(__int64 *)((char *)v39[36].m128i_i64 + 4);
  v91 = v39[36].m128i_i32[3];
  *(_DWORD *)&v90[576] = 102;
  v39[0].m128i_i64[0] = 0LL;
  v39[0].m128i_i64[1] = 1LL;
  v39[1].m128i_i64[0] = 0LL;
  ((void (__fastcall *)(__m128i *, const char *, __int64))alloc::string::String::push_str)(v39, aFloatingPointD_0, 46LL);
  v30 = v39[0].m128i_i64[0];
  v40[0] = *(__m128i *)((char *)v39 + 8);
  if ( v39[0].m128i_i64[0] != 0x8000000000000000LL )
    v37 = v40[0];
  if ( *(_QWORD *)&v90[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v90[440]);
  *(_QWORD *)&v90[440] = v30;
  *(__m128i *)&v90[448] = _mm_load_si128(&v37);
  memcpy(v39, v90, 0x24CuLL);
  *(__int16 *)((char *)&v39[36].m128i_i16[6] + 1) = *(_WORD *)((char *)&v91 + 1);
  v39[36].m128i_i8[15] = HIBYTE(v91);
  v39[36].m128i_i8[12] = 2;
  ((void (__fastcall *)(_BYTE *, __m128i *))clap_builder::builder::command::Command::arg_internal)(v105, v39);
  memcpy(v104, v105, sizeof(v104));
  ((void (__fastcall *)(__m128i *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v39);
  v39[33].m128i_i64[0] = (__int64)asc_25789;
  v39[33].m128i_i64[1] = 1LL;
  memcpy(v92, v39, 0x240uLL);
  *(_QWORD *)&v92[580] = *(__int64 *)((char *)v39[36].m128i_i64 + 4);
  v93 = v39[36].m128i_i32[3];
  *(_DWORD *)&v92[576] = 70;
  v39[0].m128i_i64[0] = 0LL;
  v39[0].m128i_i64[1] = 1LL;
  v39[1].m128i_i64[0] = 0LL;
  ((void (__fastcall *)(__m128i *, const char *, __int64))alloc::string::String::push_str)(v39, aFloatingPointD, 46LL);
  v31 = v39[0].m128i_i64[0];
  v40[0] = *(__m128i *)((char *)v39 + 8);
  if ( v39[0].m128i_i64[0] != 0x8000000000000000LL )
    v37 = v40[0];
  if ( *(_QWORD *)&v92[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v92[440]);
  *(_QWORD *)&v92[440] = v31;
  *(__m128i *)&v92[448] = _mm_load_si128(&v37);
  memcpy(v39, v92, 0x24CuLL);
  *(__int16 *)((char *)&v39[36].m128i_i16[6] + 1) = *(_WORD *)((char *)&v93 + 1);
  v39[36].m128i_i8[15] = HIBYTE(v93);
  v39[36].m128i_i8[12] = 2;
  ((void (__fastcall *)(_BYTE *, __m128i *))clap_builder::builder::command::Command::arg_internal)(v104, v39);
  memcpy(v103, v104, sizeof(v103));
  ((void (__fastcall *)(__m128i *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v39);
  v39[33].m128i_i64[0] = (__int64)aFormat_0;
  v39[33].m128i_i64[1] = 6LL;
  memcpy(v45, v39, 0x220uLL);
  *(__m128i *)&v45[560] = _mm_loadu_si128(&v39[35]);
  *(_QWORD *)&v45[580] = *(__int64 *)((char *)v39[36].m128i_i64 + 4);
  v46 = v39[36].m128i_i32[3];
  *(_QWORD *)&v45[544] = aFormat_0;
  *(_QWORD *)&v45[552] = 6LL;
  *(_DWORD *)&v45[576] = 116;
  v39[0].m128i_i64[0] = 0LL;
  v39[0].m128i_i64[1] = 1LL;
  v39[1].m128i_i64[0] = 0LL;
  ((void (__fastcall *)(__m128i *, const char *, __int64))alloc::string::String::push_str)(v39, aSelectOutputFo, 31LL);
  v32 = v39[0].m128i_i64[0];
  v40[0] = *(__m128i *)((char *)v39 + 8);
  if ( v39[0].m128i_i64[0] != 0x8000000000000000LL )
    v37 = v40[0];
  if ( *(_QWORD *)&v45[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v45[440]);
  *(_QWORD *)&v45[440] = v32;
  *(__m128i *)&v45[448] = v37;
  v39[0] = _mm_loadu_si128((const __m128i *)v45);
  memcpy(&v39[2].m128i_u64[1], &v45[40], 0x224uLL);
  *(__int16 *)((char *)&v39[36].m128i_i16[6] + 1) = *(_WORD *)((char *)&v46 + 1);
  v39[36].m128i_i8[15] = HIBYTE(v46);
  v39[1].m128i_i64[0] = 1LL;
  v39[1].m128i_i64[1] = 1LL;
  v39[2].m128i_i64[0] = 1LL;
  v39[36].m128i_i8[12] = 1;
  v40[0].m128i_i64[0] = (__int64)aType;
  v40[0].m128i_i64[1] = 4LL;
  clap_builder::builder::arg::Arg::value_names(v137, v39);
  memcpy(v39, v137, sizeof(v39));
  ((void (__fastcall *)(_BYTE *, __m128i *))clap_builder::builder::command::Command::arg_internal)(v103, v39);
  memcpy(v102, v103, sizeof(v102));
  ((void (__fastcall *)(__m128i *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v39);
  v39[33].m128i_i64[0] = (__int64)aOutputDuplicat_0;
  v39[33].m128i_i64[1] = 17LL;
  memcpy(v47, v39, 0x220uLL);
  *(__m128i *)&v47[560] = _mm_loadu_si128(&v39[35]);
  *(_QWORD *)&v47[580] = *(__int64 *)((char *)v39[36].m128i_i64 + 4);
  v48 = v39[36].m128i_i32[3];
  *(_QWORD *)&v47[544] = aOutputDuplicat_0;
  *(_QWORD *)&v47[552] = 17LL;
  *(_DWORD *)&v47[576] = 118;
  v39[0].m128i_i64[0] = 0LL;
  v39[0].m128i_i64[1] = 1LL;
  v39[1].m128i_i64[0] = 0LL;
  ((void (__fastcall *)(__m128i *, const char *, __int64))alloc::string::String::push_str)(v39, aDoNotUseToMark, 37LL);
  v33 = v39[0].m128i_i64[0];
  v40[0] = *(__m128i *)((char *)v39 + 8);
  if ( v39[0].m128i_i64[0] != 0x8000000000000000LL )
    v37 = v40[0];
  if ( *(_QWORD *)&v47[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v47[440]);
  *(_QWORD *)&v47[440] = v33;
  *(__m128i *)&v47[448] = _mm_load_si128(&v37);
  memcpy(v39, v47, 0x24CuLL);
  *(__int16 *)((char *)&v39[36].m128i_i16[6] + 1) = *(_WORD *)((char *)&v48 + 1);
  v39[36].m128i_i8[15] = HIBYTE(v48);
  v39[36].m128i_i8[12] = 2;
  ((void (__fastcall *)(_BYTE *, __m128i *))clap_builder::builder::command::Command::arg_internal)(v102, v39);
  memcpy(v101, v102, sizeof(v101));
  ((void (__fastcall *)(__m128i *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v39);
  v39[33].m128i_i64[0] = (__int64)aWidth_0;
  v39[33].m128i_i64[1] = 5LL;
  memcpy(v54, v39, 0x220uLL);
  v54[35] = _mm_loadu_si128(&v39[35]);
  *(_QWORD *)((char *)&v54[36] + 4) = *(__int64 *)((char *)v39[36].m128i_i64 + 4);
  HIDWORD(v54[36]) = v39[36].m128i_i32[3];
  *(_QWORD *)&v54[34] = aWidth_0;
  *((_QWORD *)&v54[34] + 1) = 5LL;
  LODWORD(v54[36]) = 119;
  v39[0].m128i_i64[0] = 0LL;
  v39[0].m128i_i64[1] = 1LL;
  v39[1].m128i_i64[0] = 0LL;
  ((void (__fastcall *)(__m128i *, const char *, __int64))alloc::string::String::push_str)(v39, aOutputBytesByt, 78LL);
  v34 = v39[0].m128i_i64[0];
  v37 = *(__m128i *)((char *)v39 + 8);
  if ( v39[0].m128i_i64[0] != 0x8000000000000000LL )
    v39[0] = v37;
  if ( *((_QWORD *)&v54[27] + 1) != 0x8000000000000000LL )
    ((void (__fastcall *)(char *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)((char *)&v54[27] + 8);
  *((_QWORD *)&v54[27] + 1) = v34;
  v54[28] = _mm_load_si128(v39);
  memcpy(v40, v54, sizeof(v40));
  v39[0].m128i_i64[0] = (__int64)a32;
  v39[0].m128i_i64[1] = 2LL;
  v39[1].m128i_i64[0] = 0LL;
  v39[1].m128i_i64[1] = 1LL;
  ((void (__fastcall *)(__m128i *, __m128i *))<alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter)(
    &v37,
    v39);
  ((void (__fastcall *)(__m128i *, __m128i *))alloc::raw_vec::RawVec<T,A>::current_memory)(v39, &v40[26]);
  if ( v39[0].m128i_i64[1] && v39[1].m128i_i64[0] )
    _rust_dealloc(v39[0].m128i_i64[0], v39[1].m128i_i64[0], v39[0].m128i_i64[1]);
  v40[27].m128i_i64[0] = v38;
  v40[26] = _mm_loadu_si128(&v37);
  memcpy(v39, v40, sizeof(v39));
  v40[0].m128i_i64[0] = (__int64)aBytes_0;
  v40[0].m128i_i64[1] = 5LL;
  clap_builder::builder::arg::Arg::value_names(v98, v39);
  v98[2] = 1LL;
  v98[3] = 0LL;
  v98[4] = 1LL;
  memcpy(v39, v98, sizeof(v39));
  ((void (__fastcall *)(_BYTE *, __m128i *))clap_builder::builder::command::Command::arg_internal)(v101, v39);
  memcpy(v100, v101, sizeof(v100));
  ((void (__fastcall *)(__m128i *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v39);
  v39[33].m128i_i64[0] = (__int64)aTraditional_0;
  v39[33].m128i_i64[1] = 11LL;
  memcpy(v55, v39, 0x220uLL);
  *(__m128i *)&v55[560] = _mm_loadu_si128(&v39[35]);
  *(__m128i *)&v55[576] = v39[36];
  *(_QWORD *)&v55[544] = aTraditional_0;
  *(_QWORD *)&v55[552] = 11LL;
  v39[0].m128i_i64[0] = 0LL;
  v39[0].m128i_i64[1] = 1LL;
  v39[1].m128i_i64[0] = 0LL;
  ((void (__fastcall *)(__m128i *, const char *, __int64))alloc::string::String::push_str)(v39, aCompatibilityM, 52LL);
  v35 = v39[0].m128i_i64[0];
  v40[0] = *(__m128i *)((char *)v39 + 8);
  if ( v39[0].m128i_i64[0] != 0x8000000000000000LL )
    v37 = v40[0];
  if ( *(_QWORD *)&v55[440] != 0x8000000000000000LL )
    ((void (__fastcall *)(_BYTE *))<alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop)(&v55[440]);
  *(_QWORD *)&v55[440] = v35;
  *(__m128i *)&v55[448] = _mm_load_si128(&v37);
  memcpy(v39, v55, 0x24CuLL);
  *(__int16 *)((char *)&v39[36].m128i_i16[6] + 1) = *(_WORD *)&v55[589];
  v39[36].m128i_i8[15] = v55[591];
  v39[36].m128i_i8[12] = 2;
  ((void (__fastcall *)(_BYTE *, __m128i *))clap_builder::builder::command::Command::arg_internal)(v100, v39);
  memcpy(v99, v100, sizeof(v99));
  ((void (__fastcall *)(__m128i *))<clap_builder::builder::arg::Arg as core::default::Default>::default)(v40);
  v40[33].m128i_i64[0] = (__int64)aFilename;
  v40[33].m128i_i64[1] = 8LL;
  memcpy(v39, v40, 0x248uLL);
  v39[36].m128i_i32[2] = v40[36].m128i_i32[2] | 4;
  v39[36].m128i_i16[6] = 769;
  v39[36].m128i_i16[7] = v40[36].m128i_i16[7];
  ((void (__fastcall *)(_BYTE *, __m128i *))clap_builder::builder::command::Command::arg_internal)(v99, v39);
  memcpy(a1, v99, 0x2C8uLL);
  return a1;
}
