void *__fastcall uu_seq::uu_app(void *dest)
{
  __int64 v1; // rax
  __int64 v2; // r14
  __int64 v3; // r15
  __m128i v4; // xmm0
  __int64 v5; // r14
  __int64 v6; // r14
  __int64 v7; // r14
  __int64 v8; // r14
  __int64 v9; // r14
  __m128i v11; // [rsp+0h] [rbp-2478h] BYREF
  __int64 v12; // [rsp+18h] [rbp-2460h] BYREF
  __m128i v13; // [rsp+20h] [rbp-2458h] BYREF
  __m128i v14[37]; // [rsp+30h] [rbp-2448h] BYREF
  _BYTE v15[588]; // [rsp+280h] [rbp-21F8h] BYREF
  __int32 v16; // [rsp+4CCh] [rbp-1FACh]
  __m128i v17[2]; // [rsp+4D0h] [rbp-1FA8h] BYREF
  _BYTE v18[548]; // [rsp+4F8h] [rbp-1F80h] BYREF
  __int16 v19; // [rsp+71Dh] [rbp-1D5Bh]
  __int8 v20; // [rsp+71Fh] [rbp-1D59h]
  _OWORD v21[37]; // [rsp+728h] [rbp-1D50h] BYREF
  _OWORD v22[37]; // [rsp+978h] [rbp-1B00h] BYREF
  _OWORD v23[37]; // [rsp+BC8h] [rbp-18B0h] BYREF
  _QWORD v24[89]; // [rsp+E18h] [rbp-1660h] BYREF
  _BYTE desta[608]; // [rsp+10E0h] [rbp-1398h] BYREF
  const char *v26; // [rsp+1340h] [rbp-1138h]
  __int64 v27; // [rsp+1348h] [rbp-1130h]
  __int128 v28; // [rsp+1350h] [rbp-1128h]
  __int128 v29; // [rsp+1360h] [rbp-1118h]
  __int128 v30; // [rsp+1370h] [rbp-1108h]
  _BYTE v31[28]; // [rsp+1380h] [rbp-10F8h]
  unsigned __int64 v32; // [rsp+139Ch] [rbp-10DCh]
  int v33; // [rsp+13A4h] [rbp-10D4h]
  _QWORD src[78]; // [rsp+13A8h] [rbp-10D0h] BYREF
  __int128 v35; // [rsp+1618h] [rbp-E60h]
  __int128 v36; // [rsp+1628h] [rbp-E50h]
  __int128 v37; // [rsp+1638h] [rbp-E40h]
  _BYTE v38[28]; // [rsp+1648h] [rbp-E30h]
  unsigned __int64 v39; // [rsp+1664h] [rbp-E14h]
  int v40; // [rsp+166Ch] [rbp-E0Ch]
  _BYTE v41[712]; // [rsp+1670h] [rbp-E08h] BYREF
  _BYTE v42[712]; // [rsp+1938h] [rbp-B40h] BYREF
  _BYTE v43[712]; // [rsp+1C00h] [rbp-878h] BYREF
  _BYTE v44[712]; // [rsp+1EC8h] [rbp-5B0h] BYREF
  _BYTE v45[744]; // [rsp+2190h] [rbp-2E8h] BYREF

  src[22] = 0LL;
  *(_QWORD *)&v15[472] = 0LL;
  v1 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  v2 = *(_QWORD *)(v1 + 8);
  v3 = *(_QWORD *)(v1 + 16);
  core::slice::raw::from_raw_parts::precondition_check(v2, 1LL, 1LL, v3);
  clap_builder::builder::command::Command::new::new_inner(src, v2, v3);
  memcpy(desta, src, sizeof(desta));
  v28 = v35;
  v29 = v36;
  v30 = v37;
  *(_OWORD *)v31 = *(_OWORD *)v38;
  *(_OWORD *)&v31[12] = *(_OWORD *)&v38[12];
  v26 = a0027;
  v27 = 6LL;
  v4 = (__m128i)v39;
  LODWORD(v39) = v39 | 0x20;
  v32 = _mm_or_si128(v4, (__m128i)xmmword_197E0).m128i_u64[0];
  v33 = v40;
  clap_builder::builder::command::Command::about(v24, desta);
  uucore::format_usage((unsigned int)&v12);
  v5 = v12;
  if ( v12 != 0x8000000000000000LL )
    v14[0] = _mm_loadu_si128(&v13);
  if ( v24[58] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v24[58], aOptionLastOpti);
  v24[58] = v5;
  *(__m128i *)&v24[59] = _mm_load_si128(v14);
  memcpy(v45, v24, 0x2C8uLL);
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v14);
  v14[33].m128i_i64[0] = (__int64)aSeparator_0;
  v14[33].m128i_i64[1] = 9LL;
  memcpy(v21, v14, 0x220uLL);
  v21[35] = _mm_loadu_si128(&v14[35]);
  *(_QWORD *)((char *)&v21[36] + 4) = *(__int64 *)((char *)v14[36].m128i_i64 + 4);
  HIDWORD(v21[36]) = v14[36].m128i_i32[3];
  *(_QWORD *)&v21[34] = aSeparator_0;
  *((_QWORD *)&v21[34] + 1) = 9LL;
  LODWORD(v21[36]) = 115;
  v14[0].m128i_i64[0] = 0LL;
  v14[0].m128i_i64[1] = 1LL;
  v14[1].m128i_i64[0] = 0LL;
  alloc::string::String::push_str(v14, aSeparatorChara, 36LL);
  v6 = v14[0].m128i_i64[0];
  v17[0] = *(__m128i *)((char *)v14 + 8);
  if ( v14[0].m128i_i64[0] != 0x8000000000000000LL )
    v11 = v17[0];
  if ( *((_QWORD *)&v21[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v21[27] + 8, aSeparatorChara);
  *((_QWORD *)&v21[27] + 1) = v6;
  v21[28] = _mm_load_si128(&v11);
  memcpy(v14, v21, sizeof(v14));
  clap_builder::builder::command::Command::arg_internal(v45, v14);
  memcpy(v44, v45, sizeof(v44));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v14);
  v14[33].m128i_i64[0] = (__int64)aTerminator_0;
  v14[33].m128i_i64[1] = 10LL;
  memcpy(v22, v14, 0x220uLL);
  v22[35] = _mm_loadu_si128(&v14[35]);
  *(_QWORD *)((char *)&v22[36] + 4) = *(__int64 *)((char *)v14[36].m128i_i64 + 4);
  HIDWORD(v22[36]) = v14[36].m128i_i32[3];
  *(_QWORD *)&v22[34] = aTerminator_0;
  *((_QWORD *)&v22[34] + 1) = 10LL;
  LODWORD(v22[36]) = 116;
  v14[0].m128i_i64[0] = 0LL;
  v14[0].m128i_i64[1] = 1LL;
  v14[1].m128i_i64[0] = 0LL;
  alloc::string::String::push_str(v14, aTerminatorChar, 37LL);
  v7 = v14[0].m128i_i64[0];
  v17[0] = *(__m128i *)((char *)v14 + 8);
  if ( v14[0].m128i_i64[0] != 0x8000000000000000LL )
    v11 = v17[0];
  if ( *((_QWORD *)&v22[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v22[27] + 8, aTerminatorChar);
  *((_QWORD *)&v22[27] + 1) = v7;
  v22[28] = _mm_load_si128(&v11);
  memcpy(v14, v22, sizeof(v14));
  clap_builder::builder::command::Command::arg_internal(v44, v14);
  memcpy(v43, v44, sizeof(v43));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v14);
  v14[33].m128i_i64[0] = (__int64)aEqualWidth_0;
  v14[33].m128i_i64[1] = 11LL;
  memcpy(v15, v14, 0x220uLL);
  *(__m128i *)&v15[560] = _mm_loadu_si128(&v14[35]);
  *(_QWORD *)&v15[580] = *(__int64 *)((char *)v14[36].m128i_i64 + 4);
  v16 = v14[36].m128i_i32[3];
  *(_QWORD *)&v15[544] = aEqualWidth_0;
  *(_QWORD *)&v15[552] = 11LL;
  *(_DWORD *)&v15[576] = 119;
  v14[0].m128i_i64[0] = 0LL;
  v14[0].m128i_i64[1] = 1LL;
  v14[1].m128i_i64[0] = 0LL;
  alloc::string::String::push_str(v14, aEqualizeWidths, 52LL);
  v8 = v14[0].m128i_i64[0];
  v17[0] = *(__m128i *)((char *)v14 + 8);
  if ( v14[0].m128i_i64[0] != 0x8000000000000000LL )
    v11 = v17[0];
  if ( *(_QWORD *)&v15[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v15[440], aEqualizeWidths);
  *(_QWORD *)&v15[440] = v8;
  *(__m128i *)&v15[448] = _mm_load_si128(&v11);
  memcpy(v14, v15, 0x24CuLL);
  *(__int16 *)((char *)&v14[36].m128i_i16[6] + 1) = *(_WORD *)((char *)&v16 + 1);
  v14[36].m128i_i8[15] = HIBYTE(v16);
  v14[36].m128i_i8[12] = 2;
  clap_builder::builder::command::Command::arg_internal(v43, v14);
  memcpy(v42, v43, sizeof(v42));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v14);
  v14[33].m128i_i64[0] = (__int64)aFormat_1;
  v14[33].m128i_i64[1] = 6LL;
  memcpy(v23, v14, 0x220uLL);
  v23[35] = _mm_loadu_si128(&v14[35]);
  *(_QWORD *)((char *)&v23[36] + 4) = *(__int64 *)((char *)v14[36].m128i_i64 + 4);
  HIDWORD(v23[36]) = v14[36].m128i_i32[3];
  *(_QWORD *)&v23[34] = aFormat_1;
  *((_QWORD *)&v23[34] + 1) = 6LL;
  LODWORD(v23[36]) = 102;
  v14[0].m128i_i64[0] = 0LL;
  v14[0].m128i_i64[1] = 1LL;
  v14[1].m128i_i64[0] = 0LL;
  alloc::string::String::push_str(v14, aUsePrintfStyle, 38LL);
  v9 = v14[0].m128i_i64[0];
  v17[0] = *(__m128i *)((char *)v14 + 8);
  if ( v14[0].m128i_i64[0] != 0x8000000000000000LL )
    v11 = v17[0];
  if ( *((_QWORD *)&v23[27] + 1) != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v23[27] + 8, aUsePrintfStyle);
  *((_QWORD *)&v23[27] + 1) = v9;
  v23[28] = _mm_load_si128(&v11);
  memcpy(v14, v23, sizeof(v14));
  clap_builder::builder::command::Command::arg_internal(v42, v14);
  memcpy(v41, v42, sizeof(v41));
  <clap_builder::builder::arg::Arg as core::default::Default>::default(v17);
  *(_QWORD *)&v18[488] = aNumbers_0;
  *(_QWORD *)&v18[496] = 7LL;
  v14[0] = _mm_loadu_si128(v17);
  memcpy(&v14[2].m128i_u64[1], v18, 0x224uLL);
  *(__int16 *)((char *)&v14[36].m128i_i16[6] + 1) = v19;
  v14[36].m128i_i8[15] = v20;
  v14[1].m128i_i64[0] = 1LL;
  v14[1].m128i_i64[1] = 1LL;
  v14[2].m128i_i64[0] = 3LL;
  v14[36].m128i_i8[12] = 1;
  clap_builder::builder::command::Command::arg_internal(v41, v14);
  memcpy(dest, v41, 0x2C8uLL);
  return dest;
}
