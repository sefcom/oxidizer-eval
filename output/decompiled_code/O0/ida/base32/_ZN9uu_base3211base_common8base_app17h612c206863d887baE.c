void *__fastcall uu_base32::base_common::base_app(void *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // r15
  __int64 v10; // r12
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r12
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r12
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rcx
  _QWORD v23[2]; // [rsp+10h] [rbp-2668h] BYREF
  __int64 v24; // [rsp+20h] [rbp-2658h] BYREF
  __int128 v25; // [rsp+28h] [rbp-2650h]
  __int64 v26; // [rsp+38h] [rbp-2640h] BYREF
  __int128 v27; // [rsp+40h] [rbp-2638h]
  _OWORD v28[37]; // [rsp+50h] [rbp-2628h] BYREF
  _BYTE v29[588]; // [rsp+2A0h] [rbp-23D8h] BYREF
  int v30; // [rsp+4ECh] [rbp-218Ch]
  _BYTE v31[588]; // [rsp+4F0h] [rbp-2188h] BYREF
  int v32; // [rsp+73Ch] [rbp-1F3Ch]
  _BYTE v33[588]; // [rsp+740h] [rbp-1F38h] BYREF
  int v34; // [rsp+98Ch] [rbp-1CECh]
  _QWORD v35[74]; // [rsp+990h] [rbp-1CE8h] BYREF
  _QWORD v36[74]; // [rsp+BE0h] [rbp-1A98h] BYREF
  _OWORD v37[37]; // [rsp+E30h] [rbp-1848h] BYREF
  _DWORD v38[178]; // [rsp+1080h] [rbp-15F8h] BYREF
  _QWORD v39[74]; // [rsp+1348h] [rbp-1330h] BYREF
  _QWORD v40[89]; // [rsp+1598h] [rbp-10E0h] BYREF
  _BYTE v41[712]; // [rsp+1860h] [rbp-E18h] BYREF
  _BYTE v42[712]; // [rsp+1B28h] [rbp-B50h] BYREF
  _BYTE v43[712]; // [rsp+1DF0h] [rbp-888h] BYREF
  _QWORD src[89]; // [rsp+20B8h] [rbp-5C0h] BYREF
  _BYTE dest[760]; // [rsp+2380h] [rbp-2F8h] BYREF

  v40[22] = 0LL;
  *(_QWORD *)&v31[344] = 0LL;
  v5 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  v6 = *(_QWORD *)(v5 + 8);
  v7 = *(_QWORD *)(v5 + 16);
  core::slice::raw::from_raw_parts::precondition_check(v6, 1LL, 1LL, v7);
  clap_builder::builder::command::Command::new::new_inner(src, v6, v7);
  src[76] = a0027;
  src[77] = 6LL;
  memcpy(dest, src, 0x2C8uLL);
  clap_builder::builder::command::Command::about(v38, dest);
  v8 = a4;
  uucore::format_usage((unsigned int)&v24);
  v9 = v24;
  if ( v24 != 0x8000000000000000LL )
    v28[0] = v25;
  if ( *(_QWORD *)&v38[116] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v38[116], v8);
  *(_QWORD *)&v38[116] = v9;
  *(_OWORD *)&v38[118] = v28[0];
  memcpy(v40, v38, 0x2BCuLL);
  *(_QWORD *)((char *)&v40[87] + 4) = *(_QWORD *)&v38[175] | 0x8000000080LL;
  HIDWORD(v40[88]) = v38[177];
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v28);
  *(_QWORD *)&v28[33] = anon_fab1997b4aa932db2117a172ac34a10e_49_llvm_952428305046595287;
  *((_QWORD *)&v28[33] + 1) = 6LL;
  memcpy(v31, v28, 0x220uLL);
  *(_OWORD *)&v31[560] = v28[35];
  *(_QWORD *)&v31[580] = *(_QWORD *)((char *)&v28[36] + 4);
  v32 = HIDWORD(v28[36]);
  *(_QWORD *)&v31[544] = anon_fab1997b4aa932db2117a172ac34a10e_49_llvm_952428305046595287;
  *(_QWORD *)&v31[552] = 6LL;
  *(_DWORD *)&v31[576] = 100;
  *(_QWORD *)&v28[0] = 0LL;
  *((_QWORD *)&v28[0] + 1) = 1LL;
  *(_QWORD *)&v28[1] = 0LL;
  alloc::string::String::push_str(v28, aDecodeData, 11LL);
  v10 = *(_QWORD *)&v28[0];
  *(_OWORD *)v29 = *(_OWORD *)((char *)v28 + 8);
  if ( *(_QWORD *)&v28[0] != 0x8000000000000000LL )
    v28[0] = *(_OWORD *)v29;
  if ( *(_QWORD *)&v31[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v31[440], aDecodeData);
  *(_QWORD *)&v31[440] = v10;
  *(_OWORD *)&v31[448] = v28[0];
  memcpy(v35, v31, 0x24CuLL);
  *(_WORD *)((char *)&v35[73] + 5) = *(_WORD *)((char *)&v32 + 1);
  HIBYTE(v35[73]) = HIBYTE(v32);
  BYTE4(v35[73]) = 2;
  v11 = v35[18];
  if ( v35[18] == v35[16] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v35[16]);
  v12 = v35[17];
  v13 = 16 * v11;
  *(_QWORD *)(v35[17] + v13) = anon_fab1997b4aa932db2117a172ac34a10e_49_llvm_952428305046595287;
  *(_QWORD *)(v12 + v13 + 8) = 6LL;
  v35[18] = v11 + 1;
  memcpy(v28, v35, sizeof(v28));
  clap_builder::builder::command::Command::arg_internal(v40, v28);
  memcpy(v43, v40, sizeof(v43));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v28);
  *(_QWORD *)&v28[33] = anon_fab1997b4aa932db2117a172ac34a10e_51_llvm_952428305046595287;
  *((_QWORD *)&v28[33] + 1) = 14LL;
  memcpy(v33, v28, 0x220uLL);
  *(_OWORD *)&v33[560] = v28[35];
  *(_QWORD *)&v33[580] = *(_QWORD *)((char *)&v28[36] + 4);
  v34 = HIDWORD(v28[36]);
  *(_QWORD *)&v33[544] = anon_fab1997b4aa932db2117a172ac34a10e_51_llvm_952428305046595287;
  *(_QWORD *)&v33[552] = 14LL;
  *(_DWORD *)&v33[576] = 105;
  *(_QWORD *)&v28[0] = 0LL;
  *((_QWORD *)&v28[0] + 1) = 1LL;
  *(_QWORD *)&v28[1] = 0LL;
  alloc::string::String::push_str(v28, aWhenDecodingIg, 47LL);
  v14 = *(_QWORD *)&v28[0];
  *(_OWORD *)v29 = *(_OWORD *)((char *)v28 + 8);
  if ( *(_QWORD *)&v28[0] != 0x8000000000000000LL )
    v28[0] = *(_OWORD *)v29;
  if ( *(_QWORD *)&v33[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v33[440], aWhenDecodingIg);
  *(_QWORD *)&v33[440] = v14;
  *(_OWORD *)&v33[448] = v28[0];
  memcpy(v36, v33, 0x24CuLL);
  *(_WORD *)((char *)&v36[73] + 5) = *(_WORD *)((char *)&v34 + 1);
  HIBYTE(v36[73]) = HIBYTE(v34);
  BYTE4(v36[73]) = 2;
  v15 = v36[18];
  if ( v36[18] == v36[16] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v36[16]);
  v16 = v36[17];
  v17 = 16 * v15;
  *(_QWORD *)(v36[17] + v17) = anon_fab1997b4aa932db2117a172ac34a10e_51_llvm_952428305046595287;
  *(_QWORD *)(v16 + v17 + 8) = 14LL;
  v36[18] = v15 + 1;
  memcpy(v28, v36, sizeof(v28));
  clap_builder::builder::command::Command::arg_internal(v43, v28);
  memcpy(v42, v43, sizeof(v42));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v29);
  *(_QWORD *)&v29[528] = anon_fab1997b4aa932db2117a172ac34a10e_50_llvm_952428305046595287;
  *(_QWORD *)&v29[536] = 4LL;
  memcpy(v28, v29, 0x220uLL);
  v28[35] = *(_OWORD *)&v29[560];
  *(_QWORD *)((char *)&v28[36] + 4) = *(_QWORD *)&v29[580];
  HIDWORD(v28[36]) = v30;
  *(_QWORD *)&v28[34] = anon_fab1997b4aa932db2117a172ac34a10e_50_llvm_952428305046595287;
  *((_QWORD *)&v28[34] + 1) = 4LL;
  LODWORD(v28[36]) = 119;
  *(_QWORD *)v29 = aCols;
  *(_QWORD *)&v29[8] = 4LL;
  clap_builder::builder::arg::Arg::value_names(v37, v28);
  v23[0] = &unk_19E28;
  v23[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
  *(_QWORD *)&v28[0] = &off_12C500;
  *((_QWORD *)&v28[0] + 1) = 2LL;
  *(_QWORD *)&v28[1] = v23;
  *((_QWORD *)&v28[1] + 1) = 1LL;
  *(_QWORD *)&v28[2] = 0LL;
  alloc::fmt::format::format_inner(&v26, v28);
  v18 = v26;
  if ( v26 != 0x8000000000000000LL )
    v28[0] = v27;
  if ( *((_QWORD *)&v37[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v37[27] + 8, v28);
  *((_QWORD *)&v37[27] + 1) = v18;
  v37[28] = v28[0];
  memcpy(v39, v37, sizeof(v39));
  v19 = v39[18];
  if ( v39[18] == v39[16] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v39[16]);
  v20 = v39[17];
  v21 = 16 * v19;
  *(_QWORD *)(v39[17] + v21) = anon_fab1997b4aa932db2117a172ac34a10e_50_llvm_952428305046595287;
  *(_QWORD *)(v20 + v21 + 8) = 4LL;
  v39[18] = v19 + 1;
  memcpy(v28, v39, sizeof(v28));
  clap_builder::builder::command::Command::arg_internal(v42, v28);
  memcpy(v41, v42, sizeof(v41));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v29);
  *(_QWORD *)&v29[528] = anon_fab1997b4aa932db2117a172ac34a10e_52_llvm_952428305046595287;
  *(_QWORD *)&v29[536] = 4LL;
  *(_QWORD *)&v28[2] = *(_QWORD *)&v29[32];
  v28[1] = *(_OWORD *)&v29[16];
  v28[0] = *(_OWORD *)v29;
  memcpy((char *)&v28[3] + 8, &v29[56], 0x214uLL);
  *((_QWORD *)&v28[2] + 1) = 1LL;
  *(_QWORD *)&v28[3] = 1LL;
  WORD6(v28[36]) = 769;
  HIWORD(v28[36]) = HIWORD(v30);
  clap_builder::builder::command::Command::arg_internal(v41, v28);
  memcpy(a1, v41, 0x2C8uLL);
  return a1;
}
