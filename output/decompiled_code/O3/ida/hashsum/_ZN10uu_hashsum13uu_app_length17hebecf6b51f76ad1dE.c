void *__fastcall uu_hashsum::uu_app_length(void *dest)
{
  _QWORD *v1; // rax
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r12
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // rcx
  _OWORD desta[37]; // [rsp+20h] [rbp-788h] BYREF
  _OWORD src[37]; // [rsp+270h] [rbp-538h] BYREF
  _BYTE v11[744]; // [rsp+4C0h] [rbp-2E8h] BYREF

  uu_hashsum::uu_app_common(v11);
  desta[7] = 8uLL;
  desta[9] = 0LL;
  desta[10] = 8uLL;
  desta[12] = 0LL;
  desta[13] = 8uLL;
  desta[15] = 0LL;
  desta[16] = 8uLL;
  desta[18] = 0LL;
  desta[19] = 8uLL;
  desta[21] = 0LL;
  desta[22] = 8uLL;
  desta[24] = 0LL;
  desta[25] = 8uLL;
  *(_QWORD *)&desta[0] = 0LL;
  *(_QWORD *)&desta[1] = 0LL;
  *((_QWORD *)&desta[2] + 1) = 0LL;
  *((_QWORD *)&desta[3] + 1) = 0LL;
  *(_QWORD *)&desta[5] = 5LL;
  *((_QWORD *)&desta[6] + 1) = 0LL;
  *((_QWORD *)&desta[8] + 1) = 8LL;
  *((_QWORD *)&desta[11] + 1) = 8LL;
  *((_QWORD *)&desta[14] + 1) = 8LL;
  *((_QWORD *)&desta[17] + 1) = 8LL;
  *((_QWORD *)&desta[20] + 1) = 4LL;
  *((_QWORD *)&desta[23] + 1) = 8LL;
  *((_QWORD *)&desta[26] + 1) = 8LL;
  *(_QWORD *)&desta[27] = 0LL;
  *((_QWORD *)&desta[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&desta[29] = 0x8000000000000000LL;
  *((_QWORD *)&desta[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&desta[33] = aLength_0;
  *((_QWORD *)&desta[33] + 1) = 6LL;
  *(_QWORD *)&desta[34] = aLength_0;
  *((_QWORD *)&desta[34] + 1) = 6LL;
  *(_QWORD *)&desta[35] = 0LL;
  *(_QWORD *)&desta[36] = 0x11000000110000LL;
  DWORD2(desta[36]) = 0;
  WORD6(desta[36]) = 3337;
  v1 = (_QWORD *)_rust_alloc(8LL, 8LL);
  if ( !v1 )
    alloc::alloc::handle_alloc_error(8LL, 8LL);
  *v1 = core::num::<impl core::str::traits::FromStr for usize>::from_str;
  clap_builder::builder::arg::Arg::value_parser(src, desta);
  LODWORD(src[36]) = 108;
  memcpy(desta, src, sizeof(desta));
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 99LL);
  v2 = *((_QWORD *)&src[0] + 1);
  v3 = *(_QWORD *)&src[1];
  *(_OWORD *)(*((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1] + 80LL) = unk_71AB2;
  qmemcpy((void *)(v2 + v3), "digest length in bits; must not exceed the max for the blake2 algorithm and must", 80);
  *(_DWORD *)(v2 + v3 + 95) = 941647471;
  *(_QWORD *)&src[1] = v3 + 99;
  v4 = *(_QWORD *)&src[0];
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = *(_OWORD *)((char *)src + 8);
  if ( *((_QWORD *)&desta[27] + 1) != 0x8000000000000000LL && *((_QWORD *)&desta[27] + 1) )
    _rust_dealloc(*(_QWORD *)&desta[28], *((_QWORD *)&desta[27] + 1), 1LL);
  *((_QWORD *)&desta[27] + 1) = v4;
  desta[28] = src[0];
  memcpy(src, desta, sizeof(src));
  v5 = *(_QWORD *)&src[9];
  if ( *(_QWORD *)&src[9] == *(_QWORD *)&src[8] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&src[8]);
  v6 = *((_QWORD *)&src[8] + 1);
  v7 = 16 * v5;
  *(_QWORD *)(*((_QWORD *)&src[8] + 1) + v7) = aLength_0;
  *(_QWORD *)(v6 + v7 + 8) = 6LL;
  *(_QWORD *)&src[9] = v5 + 1;
  memcpy(desta, src, 0x24CuLL);
  *(_WORD *)((char *)&desta[36] + 13) = *(_WORD *)((char *)&src[36] + 13);
  HIBYTE(desta[36]) = HIBYTE(src[36]);
  BYTE12(desta[36]) = 0;
  clap_builder::builder::command::Command::arg(dest, v11);
  return dest;
}
