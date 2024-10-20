void *__fastcall uu_readlink::uu_app(void *a1)
{
  __int64 v1; // rcx
  __int64 v2; // rsi
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rbx
  __int64 v10; // r14
  int v11; // r12d
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // r14
  __int64 v19; // r12
  int v20; // r13d
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rbp
  __int64 v26; // r12
  __int64 v27; // r14
  int v28; // r13d
  __int64 v29; // rcx
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rbp
  __int64 v35; // r14
  __int64 v36; // r12
  int v37; // r13d
  __int64 v38; // rcx
  __int64 v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // r15
  __int64 v44; // r13
  __int64 v45; // r14
  __int64 v46; // rsi
  __int64 v47; // rbx
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // r12
  __int64 v52; // r15
  __int64 v53; // rbp
  __int64 v54; // rdx
  __int64 v55; // rbx
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // r13
  __int64 v60; // rbp
  __int64 v61; // r14
  int v62; // ebx
  __int64 v63; // rsi
  __int64 v64; // rbx
  __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // r12
  __int64 v69; // r15
  __int64 v70; // r13
  __int64 v71; // rdx
  __int64 v72; // rbx
  __int64 v73; // rbx
  void *v74; // r14
  _OWORD dest[45]; // [rsp+60h] [rbp-7A8h] BYREF
  _BYTE src[712]; // [rsp+330h] [rbp-4D8h] BYREF
  __int64 v78; // [rsp+5F8h] [rbp-210h]
  _OWORD v79[29]; // [rsp+600h] [rbp-208h] BYREF
  void *v80; // [rsp+7D0h] [rbp-38h]

  if ( uucore::UTIL_NAME != 2 )
    once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  *(_OWORD *)&src[72] = 0LL;
  *(_OWORD *)&src[96] = 0LL;
  *(_OWORD *)&src[144] = 0LL;
  *(_OWORD *)&src[168] = 0LL;
  *(_OWORD *)&src[192] = 0LL;
  *(_OWORD *)&src[240] = 0LL;
  *(_QWORD *)src = 0LL;
  *(_OWORD *)&src[16] = 1uLL;
  *(_QWORD *)&src[32] = 5LL;
  *(_QWORD *)&src[56] = 0LL;
  *(_QWORD *)&src[64] = 8LL;
  *(_QWORD *)&src[88] = 4LL;
  *(_QWORD *)&src[112] = 8LL;
  *(_OWORD *)&src[120] = 0LL;
  *(_QWORD *)&src[136] = 8LL;
  *(_QWORD *)&src[160] = 8LL;
  *(_QWORD *)&src[184] = 8LL;
  *(_QWORD *)&src[208] = 8LL;
  *(_OWORD *)&src[216] = 0LL;
  *(_QWORD *)&src[232] = 8LL;
  *(_QWORD *)&src[256] = 8LL;
  *(_QWORD *)&src[264] = 0LL;
  *(_QWORD *)&src[272] = 0x8000000000000000LL;
  *(_QWORD *)&src[296] = 0x8000000000000000LL;
  *(_QWORD *)&src[320] = 0x8000000000000000LL;
  *(_QWORD *)&src[344] = 0x8000000000000000LL;
  *(_QWORD *)&src[368] = 0x8000000000000000LL;
  *(_QWORD *)&src[392] = 0x8000000000000000LL;
  *(_QWORD *)&src[416] = 0x8000000000000000LL;
  *(_QWORD *)&src[440] = 0x8000000000000000LL;
  *(_QWORD *)&src[464] = 0x8000000000000000LL;
  *(_QWORD *)&src[488] = 0x8000000000000000LL;
  *(_QWORD *)&src[512] = 0x8000000000000000LL;
  *(_QWORD *)&src[536] = 0x8000000000000000LL;
  *(_OWORD *)&src[560] = xmmword_EBB78;
  *(_QWORD *)&src[576] = 0LL;
  *(_QWORD *)&src[592] = 0LL;
  *(_QWORD *)&src[608] = a0027;
  *(_QWORD *)&src[616] = 6LL;
  *(_QWORD *)&src[624] = 0LL;
  *(_QWORD *)&src[640] = 0LL;
  *(_QWORD *)&src[656] = 0LL;
  *(_QWORD *)&src[672] = 0LL;
  *(_QWORD *)&src[688] = 0LL;
  *(_DWORD *)&src[696] = 1114112;
  src[708] = 0;
  *(_QWORD *)&src[700] = 0LL;
  *(_QWORD *)&dest[0] = 0LL;
  *((_QWORD *)&dest[0] + 1) = 1LL;
  *(_QWORD *)&dest[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(dest, 0LL, 54LL);
  v1 = *((_QWORD *)&dest[0] + 1);
  v2 = *(_QWORD *)&dest[1];
  *(_OWORD *)(*((_QWORD *)&dest[0] + 1) + *(_QWORD *)&dest[1] + 32LL) = *(_OWORD *)&aPrintValueOfAS[32];
  qmemcpy((void *)(v1 + v2), "Print value of a symbolic link o", 32);
  *(_QWORD *)(v1 + v2 + 46) = 0x2E656D616E20656CLL;
  *(_QWORD *)&dest[1] = v2 + 54;
  v3 = *(_QWORD *)&dest[0];
  v79[0] = *(_OWORD *)((char *)dest + 8);
  if ( *(_QWORD *)&dest[0] != 0x8000000000000000LL )
    dest[0] = v79[0];
  *(_QWORD *)&src[320] = v3;
  *(_OWORD *)&src[328] = dest[0];
  memcpy(dest, src, 0x2C8uLL);
  uucore::format_usage(v79, aOptionFile, 24LL);
  v4 = *(_QWORD *)&v79[0];
  if ( *(_QWORD *)&v79[0] != 0x8000000000000000LL )
    *(_OWORD *)src = *(_OWORD *)((char *)v79 + 8);
  if ( 2LL * *(_QWORD *)&dest[29] )
    _rust_dealloc(*((_QWORD *)&dest[29] + 1), *(_QWORD *)&dest[29], 1LL);
  *(_QWORD *)&dest[29] = v4;
  *(_OWORD *)((char *)&dest[29] + 8) = *(_OWORD *)src;
  memcpy(src, dest, 0x2BCuLL);
  *(_QWORD *)&src[700] = *(_QWORD *)((char *)&dest[43] + 12) | 0x8000000080LL;
  *(_DWORD *)&src[708] = DWORD1(dest[44]);
  dest[7] = 8uLL;
  dest[9] = 0LL;
  dest[10] = 8uLL;
  dest[12] = 0LL;
  dest[13] = 8uLL;
  dest[15] = 0LL;
  dest[16] = 8uLL;
  dest[18] = 0LL;
  dest[19] = 8uLL;
  dest[21] = 0LL;
  dest[22] = 8uLL;
  dest[24] = 0LL;
  dest[25] = 8uLL;
  *(_QWORD *)&dest[0] = 0LL;
  *(_QWORD *)&dest[1] = 0LL;
  *((_QWORD *)&dest[2] + 1) = 0LL;
  *((_QWORD *)&dest[3] + 1) = 0LL;
  *(_QWORD *)&dest[5] = 5LL;
  *((_QWORD *)&dest[6] + 1) = 0LL;
  *((_QWORD *)&dest[8] + 1) = 8LL;
  *((_QWORD *)&dest[11] + 1) = 8LL;
  *((_QWORD *)&dest[14] + 1) = 8LL;
  *((_QWORD *)&dest[17] + 1) = 8LL;
  *((_QWORD *)&dest[20] + 1) = 4LL;
  *((_QWORD *)&dest[23] + 1) = 8LL;
  *((_QWORD *)&dest[26] + 1) = 8LL;
  *(_QWORD *)&dest[27] = 0LL;
  *((_QWORD *)&dest[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&dest[29] = 0x8000000000000000LL;
  *((_QWORD *)&dest[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&dest[33] = aCanonicalize_0;
  *((_QWORD *)&dest[33] + 1) = 12LL;
  *(_QWORD *)&dest[34] = aCanonicalize_0;
  *(_OWORD *)((char *)&dest[34] + 8) = 0xCuLL;
  *(_QWORD *)&dest[36] = 0x11000000000066LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  *(_QWORD *)&v79[0] = 0LL;
  *((_QWORD *)&v79[0] + 1) = 1LL;
  *(_QWORD *)&v79[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v79, 0LL, 127LL);
  v80 = a1;
  v5 = *((_QWORD *)&v79[0] + 1);
  v6 = *(_QWORD *)&v79[1];
  *(_OWORD *)(*((_QWORD *)&v79[0] + 1) + *(_QWORD *)&v79[1] + 111LL) = unk_19D7B;
  qmemcpy(
    (void *)(v5 + v6),
    "canonicalize by following every symlink in every component of the given name recursively; all but the last compo",
    112);
  *(_QWORD *)&v79[1] = v6 + 127;
  v7 = *(_QWORD *)&v79[0];
  if ( *(_QWORD *)&v79[0] != 0x8000000000000000LL )
    v79[0] = *(_OWORD *)((char *)v79 + 8);
  *((_QWORD *)&dest[27] + 1) = v7;
  dest[28] = v79[0];
  v8 = *(_QWORD *)&dest[0];
  v10 = *((_QWORD *)&dest[4] + 1);
  v9 = *(_QWORD *)&dest[4];
  memcpy(v79, &dest[5], sizeof(v79));
  if ( !*(_QWORD *)&src[16] )
  {
    v11 = dest[36];
LABEL_18:
    v12 = *((_QWORD *)&dest[0] + 1);
    goto LABEL_19;
  }
  v11 = dest[36];
  if ( !*(_QWORD *)&dest[34] && LODWORD(dest[36]) == 1114112 )
    goto LABEL_18;
  v12 = *((_QWORD *)&dest[0] + 1);
  if ( !*(_QWORD *)&dest[0] )
    v12 = *(_QWORD *)&src[24];
  v8 = (*(_QWORD *)&dest[0] == 0LL) + *(_QWORD *)&dest[0];
  ++*(_QWORD *)&src[24];
LABEL_19:
  if ( !*((_QWORD *)&dest[3] + 1) )
  {
    v10 = *(_QWORD *)&src[648];
    v9 = *(_QWORD *)&src[640];
  }
  *(_QWORD *)&dest[0] = v8;
  *((_QWORD *)&dest[0] + 1) = v12;
  *((_QWORD *)&dest[3] + 1) += *((_QWORD *)&dest[3] + 1) == 0LL;
  *(_QWORD *)&dest[4] = v9;
  *((_QWORD *)&dest[4] + 1) = v10;
  memcpy(&dest[5], v79, 0x1D0uLL);
  LODWORD(dest[36]) = v11;
  BYTE12(dest[36]) = 2;
  v13 = *(_QWORD *)&src[144];
  if ( *(_QWORD *)&src[144] == *(_QWORD *)&src[128] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&src[128]);
  memmove((void *)(*(_QWORD *)&src[136] + 592 * v13), dest, 0x250uLL);
  *(_QWORD *)&src[144] = v13 + 1;
  memcpy(dest, src, 0x2C8uLL);
  *(_OWORD *)&src[120] = 0LL;
  *(_OWORD *)&src[144] = 0LL;
  *(_OWORD *)&src[168] = 0LL;
  *(_OWORD *)&src[192] = 0LL;
  *(_OWORD *)&src[216] = 0LL;
  *(_OWORD *)&src[240] = 0LL;
  *(_OWORD *)&src[264] = 0LL;
  *(_OWORD *)&src[288] = 0LL;
  *(_OWORD *)&src[312] = 0LL;
  *(_OWORD *)&src[336] = 0LL;
  *(_OWORD *)&src[360] = 0LL;
  *(_OWORD *)&src[384] = 0LL;
  *(_OWORD *)&src[408] = 0LL;
  *(_QWORD *)src = 0LL;
  *(_QWORD *)&src[16] = 0LL;
  *(_QWORD *)&src[40] = 0LL;
  *(_QWORD *)&src[56] = 0LL;
  *(_QWORD *)&src[80] = 5LL;
  *(_QWORD *)&src[104] = 0LL;
  *(_QWORD *)&src[112] = 8LL;
  *(_QWORD *)&src[136] = 8LL;
  *(_QWORD *)&src[160] = 8LL;
  *(_QWORD *)&src[184] = 8LL;
  *(_QWORD *)&src[208] = 8LL;
  *(_QWORD *)&src[232] = 8LL;
  *(_QWORD *)&src[256] = 8LL;
  *(_QWORD *)&src[280] = 8LL;
  *(_QWORD *)&src[304] = 8LL;
  *(_QWORD *)&src[328] = 4LL;
  *(_QWORD *)&src[352] = 8LL;
  *(_QWORD *)&src[376] = 8LL;
  *(_QWORD *)&src[400] = 8LL;
  *(_QWORD *)&src[424] = 8LL;
  *(_QWORD *)&src[432] = 0LL;
  *(_QWORD *)&src[440] = 0x8000000000000000LL;
  *(_QWORD *)&src[464] = 0x8000000000000000LL;
  *(_QWORD *)&src[504] = 0x8000000000000001LL;
  *(_QWORD *)&src[528] = aCanonicalizeEx_0;
  *(_QWORD *)&src[536] = 21LL;
  *(_QWORD *)&src[544] = aCanonicalizeEx_0;
  *(_OWORD *)&src[552] = 0x15uLL;
  *(_QWORD *)&src[576] = 0x11000000000065LL;
  *(_DWORD *)&src[584] = 0;
  *(_WORD *)&src[588] = 3337;
  *(_QWORD *)&v79[0] = 0LL;
  *((_QWORD *)&v79[0] + 1) = 1LL;
  *(_QWORD *)&v79[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v79, 0LL, 115LL);
  v14 = *((_QWORD *)&v79[0] + 1);
  v15 = *(_QWORD *)&v79[1];
  *(_OWORD *)(*((_QWORD *)&v79[0] + 1) + *(_QWORD *)&v79[1] + 96LL) = unk_19E00;
  qmemcpy(
    (void *)(v14 + v15),
    "canonicalize by following every symlink in every component of the given name recursively, all co",
    96);
  *(_DWORD *)(v14 + v15 + 111) = 1953720696;
  *(_QWORD *)&v79[1] = v15 + 115;
  v16 = *(_QWORD *)&v79[0];
  if ( *(_QWORD *)&v79[0] != 0x8000000000000000LL )
    v79[0] = *(_OWORD *)((char *)v79 + 8);
  *(_QWORD *)&src[440] = v16;
  *(_OWORD *)&src[448] = v79[0];
  v17 = *(_QWORD *)src;
  v18 = *(_QWORD *)&src[64];
  v19 = *(_QWORD *)&src[72];
  memcpy(v79, &src[80], sizeof(v79));
  if ( !*(_QWORD *)&dest[1] )
  {
    v20 = *(_DWORD *)&src[576];
LABEL_32:
    v21 = *(_QWORD *)&src[8];
    goto LABEL_33;
  }
  v20 = *(_DWORD *)&src[576];
  if ( !*(_QWORD *)&src[544] && *(_DWORD *)&src[576] == 1114112 )
    goto LABEL_32;
  v21 = *(_QWORD *)&src[8];
  if ( !*(_QWORD *)src )
    v21 = *((_QWORD *)&dest[1] + 1);
  v17 = (*(_QWORD *)src == 0LL) + *(_QWORD *)src;
  ++*((_QWORD *)&dest[1] + 1);
LABEL_33:
  if ( !*(_QWORD *)&src[56] )
  {
    v19 = *((_QWORD *)&dest[40] + 1);
    v18 = *(_QWORD *)&dest[40];
  }
  *(_QWORD *)src = v17;
  *(_QWORD *)&src[8] = v21;
  *(_QWORD *)&src[56] += *(_QWORD *)&src[56] == 0LL;
  *(_QWORD *)&src[64] = v18;
  *(_QWORD *)&src[72] = v19;
  memcpy(&src[80], v79, 0x1D0uLL);
  *(_DWORD *)&src[576] = v20;
  src[588] = 2;
  v22 = *(_QWORD *)&dest[9];
  if ( *(_QWORD *)&dest[9] == *(_QWORD *)&dest[8] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&dest[8]);
  memmove((void *)(*((_QWORD *)&dest[8] + 1) + 592 * v22), src, 0x250uLL);
  *(_QWORD *)&dest[9] = v22 + 1;
  memcpy(src, dest, sizeof(src));
  dest[7] = 8uLL;
  dest[9] = 0LL;
  dest[10] = 8uLL;
  dest[12] = 0LL;
  dest[13] = 8uLL;
  dest[15] = 0LL;
  dest[16] = 8uLL;
  dest[18] = 0LL;
  dest[19] = 8uLL;
  dest[21] = 0LL;
  dest[22] = 8uLL;
  dest[24] = 0LL;
  dest[25] = 8uLL;
  *(_QWORD *)&dest[0] = 0LL;
  *(_QWORD *)&dest[1] = 0LL;
  *((_QWORD *)&dest[2] + 1) = 0LL;
  *((_QWORD *)&dest[3] + 1) = 0LL;
  *(_QWORD *)&dest[5] = 5LL;
  *((_QWORD *)&dest[6] + 1) = 0LL;
  *((_QWORD *)&dest[8] + 1) = 8LL;
  *((_QWORD *)&dest[11] + 1) = 8LL;
  *((_QWORD *)&dest[14] + 1) = 8LL;
  *((_QWORD *)&dest[17] + 1) = 8LL;
  *((_QWORD *)&dest[20] + 1) = 4LL;
  *((_QWORD *)&dest[23] + 1) = 8LL;
  *((_QWORD *)&dest[26] + 1) = 8LL;
  *(_QWORD *)&dest[27] = 0LL;
  *((_QWORD *)&dest[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&dest[29] = 0x8000000000000000LL;
  *((_QWORD *)&dest[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&dest[33] = aCanonicalizeMi_0;
  *((_QWORD *)&dest[33] + 1) = 20LL;
  *(_QWORD *)&dest[34] = aCanonicalizeMi_0;
  *(_OWORD *)((char *)&dest[34] + 8) = 0x14uLL;
  *(_QWORD *)&dest[36] = 0x1100000000006DLL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  *(_QWORD *)&v79[0] = 0LL;
  *((_QWORD *)&v79[0] + 1) = 1LL;
  *(_QWORD *)&v79[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v79, 0LL, 134LL);
  v23 = *(_QWORD *)&v79[1];
  memcpy((void *)(*(_QWORD *)&v79[1] + *((_QWORD *)&v79[0] + 1)), aCanonicalizeBy, 0x86uLL);
  *(_QWORD *)&v79[1] = v23 + 134;
  v24 = *(_QWORD *)&v79[0];
  if ( *(_QWORD *)&v79[0] != 0x8000000000000000LL )
    v79[0] = *(_OWORD *)((char *)v79 + 8);
  *((_QWORD *)&dest[27] + 1) = v24;
  dest[28] = v79[0];
  v25 = *(_QWORD *)&dest[0];
  v26 = *((_QWORD *)&dest[4] + 1);
  v27 = *(_QWORD *)&dest[4];
  memcpy(v79, &dest[5], sizeof(v79));
  if ( !*(_QWORD *)&src[16] )
  {
    v28 = dest[36];
LABEL_46:
    v29 = *((_QWORD *)&dest[0] + 1);
    goto LABEL_47;
  }
  v28 = dest[36];
  if ( !*(_QWORD *)&dest[34] && LODWORD(dest[36]) == 1114112 )
    goto LABEL_46;
  v29 = *((_QWORD *)&dest[0] + 1);
  if ( !*(_QWORD *)&dest[0] )
    v29 = *(_QWORD *)&src[24];
  v25 = (*(_QWORD *)&dest[0] == 0LL) + *(_QWORD *)&dest[0];
  ++*(_QWORD *)&src[24];
LABEL_47:
  if ( !*((_QWORD *)&dest[3] + 1) )
  {
    v26 = *(_QWORD *)&src[648];
    v27 = *(_QWORD *)&src[640];
  }
  *(_QWORD *)&dest[0] = v25;
  *((_QWORD *)&dest[0] + 1) = v29;
  *((_QWORD *)&dest[3] + 1) += *((_QWORD *)&dest[3] + 1) == 0LL;
  *(_QWORD *)&dest[4] = v27;
  *((_QWORD *)&dest[4] + 1) = v26;
  memcpy(&dest[5], v79, 0x1D0uLL);
  LODWORD(dest[36]) = v28;
  BYTE12(dest[36]) = 2;
  v30 = *(_QWORD *)&src[144];
  if ( *(_QWORD *)&src[144] == *(_QWORD *)&src[128] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&src[128]);
  memmove((void *)(*(_QWORD *)&src[136] + 592 * v30), dest, 0x250uLL);
  *(_QWORD *)&src[144] = v30 + 1;
  memcpy(dest, src, 0x2C8uLL);
  *(_OWORD *)&src[120] = 0LL;
  *(_OWORD *)&src[144] = 0LL;
  *(_OWORD *)&src[168] = 0LL;
  *(_OWORD *)&src[192] = 0LL;
  *(_OWORD *)&src[216] = 0LL;
  *(_OWORD *)&src[240] = 0LL;
  *(_OWORD *)&src[264] = 0LL;
  *(_OWORD *)&src[288] = 0LL;
  *(_OWORD *)&src[312] = 0LL;
  *(_OWORD *)&src[336] = 0LL;
  *(_OWORD *)&src[360] = 0LL;
  *(_OWORD *)&src[384] = 0LL;
  *(_OWORD *)&src[408] = 0LL;
  *(_QWORD *)src = 0LL;
  *(_QWORD *)&src[16] = 0LL;
  *(_QWORD *)&src[40] = 0LL;
  *(_QWORD *)&src[56] = 0LL;
  *(_QWORD *)&src[80] = 5LL;
  *(_QWORD *)&src[104] = 0LL;
  *(_QWORD *)&src[112] = 8LL;
  *(_QWORD *)&src[136] = 8LL;
  *(_QWORD *)&src[160] = 8LL;
  *(_QWORD *)&src[184] = 8LL;
  *(_QWORD *)&src[208] = 8LL;
  *(_QWORD *)&src[232] = 8LL;
  *(_QWORD *)&src[256] = 8LL;
  *(_QWORD *)&src[280] = 8LL;
  *(_QWORD *)&src[304] = 8LL;
  *(_QWORD *)&src[328] = 4LL;
  *(_QWORD *)&src[352] = 8LL;
  *(_QWORD *)&src[376] = 8LL;
  *(_QWORD *)&src[400] = 8LL;
  *(_QWORD *)&src[424] = 8LL;
  *(_QWORD *)&src[432] = 0LL;
  *(_QWORD *)&src[440] = 0x8000000000000000LL;
  *(_QWORD *)&src[464] = 0x8000000000000000LL;
  *(_QWORD *)&src[504] = 0x8000000000000001LL;
  *(_QWORD *)&src[528] = aNoNewline_0;
  *(_QWORD *)&src[536] = 10LL;
  *(_QWORD *)&src[544] = aNoNewline_0;
  *(_OWORD *)&src[552] = 0xAuLL;
  *(_QWORD *)&src[576] = 0x1100000000006ELL;
  *(_DWORD *)&src[584] = 0;
  *(_WORD *)&src[588] = 3337;
  *(_QWORD *)&v79[0] = 0LL;
  *((_QWORD *)&v79[0] + 1) = 1LL;
  *(_QWORD *)&v79[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v79, 0LL, 36LL);
  v31 = *((_QWORD *)&v79[0] + 1);
  v32 = *(_QWORD *)&v79[1];
  *(_OWORD *)(*((_QWORD *)&v79[0] + 1) + *(_QWORD *)&v79[1] + 16LL) = unk_19EC7;
  *(_OWORD *)(v31 + v32) = unk_19EB7;
  *(_DWORD *)(v31 + v32 + 32) = 1919251561;
  *(_QWORD *)&v79[1] = v32 + 36;
  v33 = *(_QWORD *)&v79[0];
  if ( *(_QWORD *)&v79[0] != 0x8000000000000000LL )
    v79[0] = *(_OWORD *)((char *)v79 + 8);
  *(_QWORD *)&src[440] = v33;
  *(_OWORD *)&src[448] = v79[0];
  v34 = *(_QWORD *)src;
  v35 = *(_QWORD *)&src[64];
  v36 = *(_QWORD *)&src[72];
  memcpy(v79, &src[80], sizeof(v79));
  if ( !*(_QWORD *)&dest[1] )
  {
    v37 = *(_DWORD *)&src[576];
LABEL_60:
    v38 = *(_QWORD *)&src[8];
    goto LABEL_61;
  }
  v37 = *(_DWORD *)&src[576];
  if ( !*(_QWORD *)&src[544] && *(_DWORD *)&src[576] == 1114112 )
    goto LABEL_60;
  v38 = *(_QWORD *)&src[8];
  if ( !*(_QWORD *)src )
    v38 = *((_QWORD *)&dest[1] + 1);
  v34 = (*(_QWORD *)src == 0LL) + *(_QWORD *)src;
  ++*((_QWORD *)&dest[1] + 1);
LABEL_61:
  if ( !*(_QWORD *)&src[56] )
  {
    v36 = *((_QWORD *)&dest[40] + 1);
    v35 = *(_QWORD *)&dest[40];
  }
  *(_QWORD *)src = v34;
  *(_QWORD *)&src[8] = v38;
  *(_QWORD *)&src[56] += *(_QWORD *)&src[56] == 0LL;
  *(_QWORD *)&src[64] = v35;
  *(_QWORD *)&src[72] = v36;
  memcpy(&src[80], v79, 0x1D0uLL);
  *(_DWORD *)&src[576] = v37;
  src[588] = 2;
  v39 = *(_QWORD *)&dest[9];
  if ( *(_QWORD *)&dest[9] == *(_QWORD *)&dest[8] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&dest[8]);
  memmove((void *)(*((_QWORD *)&dest[8] + 1) + 592 * v39), src, 0x250uLL);
  *(_QWORD *)&dest[9] = v39 + 1;
  memcpy(src, dest, sizeof(src));
  dest[7] = 8uLL;
  dest[9] = 0LL;
  dest[10] = 8uLL;
  dest[12] = 0LL;
  dest[13] = 8uLL;
  dest[15] = 0LL;
  dest[16] = 8uLL;
  dest[18] = 0LL;
  dest[19] = 8uLL;
  dest[21] = 0LL;
  dest[22] = 8uLL;
  dest[24] = 0LL;
  dest[25] = 8uLL;
  *(_QWORD *)&dest[0] = 0LL;
  *(_QWORD *)&dest[1] = 0LL;
  *((_QWORD *)&dest[2] + 1) = 0LL;
  *((_QWORD *)&dest[3] + 1) = 0LL;
  *(_QWORD *)&dest[5] = 5LL;
  *((_QWORD *)&dest[6] + 1) = 0LL;
  *((_QWORD *)&dest[8] + 1) = 8LL;
  *((_QWORD *)&dest[11] + 1) = 8LL;
  *((_QWORD *)&dest[14] + 1) = 8LL;
  *((_QWORD *)&dest[17] + 1) = 8LL;
  *((_QWORD *)&dest[20] + 1) = 4LL;
  *((_QWORD *)&dest[23] + 1) = 8LL;
  *((_QWORD *)&dest[26] + 1) = 8LL;
  *(_QWORD *)&dest[27] = 0LL;
  *((_QWORD *)&dest[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&dest[29] = 0x8000000000000000LL;
  *((_QWORD *)&dest[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&dest[33] = aQuiet_0;
  *((_QWORD *)&dest[33] + 1) = 5LL;
  *(_QWORD *)&dest[34] = aQuiet_0;
  *(_OWORD *)((char *)&dest[34] + 8) = 5uLL;
  *(_QWORD *)&dest[36] = 0x11000000000071LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  *(_QWORD *)&v79[0] = 0LL;
  *((_QWORD *)&v79[0] + 1) = 1LL;
  *(_QWORD *)&v79[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v79, 0LL, 28LL);
  v40 = *((_QWORD *)&v79[0] + 1);
  v41 = *(_QWORD *)&v79[1];
  *(_OWORD *)(*((_QWORD *)&v79[0] + 1) + *(_QWORD *)&v79[1] + 12LL) = unk_19EEC;
  *(_OWORD *)(v40 + v41) = unk_19EE0;
  *(_QWORD *)&v79[1] = v41 + 28;
  v42 = *(_QWORD *)&v79[0];
  if ( *(_QWORD *)&v79[0] != 0x8000000000000000LL )
    v79[0] = *(_OWORD *)((char *)v79 + 8);
  *((_QWORD *)&dest[27] + 1) = v42;
  dest[28] = v79[0];
  v43 = *(_QWORD *)&dest[0];
  v45 = *((_QWORD *)&dest[4] + 1);
  v44 = *(_QWORD *)&dest[4];
  memcpy(v79, &dest[5], sizeof(v79));
  if ( *(_QWORD *)&src[16] && (*(_QWORD *)&dest[34] || LODWORD(dest[36]) != 1114112) )
  {
    v46 = *((_QWORD *)&dest[0] + 1);
    if ( !*(_QWORD *)&dest[0] )
      v46 = *(_QWORD *)&src[24];
    v43 = (*(_QWORD *)&dest[0] == 0LL) + *(_QWORD *)&dest[0];
    ++*(_QWORD *)&src[24];
  }
  else
  {
    v46 = *((_QWORD *)&dest[0] + 1);
  }
  if ( !*((_QWORD *)&dest[3] + 1) )
  {
    v45 = *(_QWORD *)&src[648];
    v44 = *(_QWORD *)&src[640];
  }
  *(_QWORD *)&dest[0] = v43;
  *((_QWORD *)&dest[0] + 1) = v46;
  *((_QWORD *)&dest[3] + 1) += *((_QWORD *)&dest[3] + 1) == 0LL;
  *(_QWORD *)&dest[4] = v44;
  *((_QWORD *)&dest[4] + 1) = v45;
  memcpy(&dest[5], v79, 0x1D0uLL);
  BYTE12(dest[36]) = 2;
  v47 = *(_QWORD *)&src[144];
  if ( *(_QWORD *)&src[144] == *(_QWORD *)&src[128] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&src[128]);
  memmove((void *)(*(_QWORD *)&src[136] + 592 * v47), dest, 0x250uLL);
  *(_QWORD *)&src[144] = v47 + 1;
  memcpy(dest, src, 0x2C8uLL);
  *(_OWORD *)&src[120] = 0LL;
  *(_OWORD *)&src[144] = 0LL;
  *(_OWORD *)&src[168] = 0LL;
  *(_OWORD *)&src[192] = 0LL;
  *(_OWORD *)&src[216] = 0LL;
  *(_OWORD *)&src[240] = 0LL;
  *(_OWORD *)&src[264] = 0LL;
  *(_OWORD *)&src[288] = 0LL;
  *(_OWORD *)&src[312] = 0LL;
  *(_OWORD *)&src[336] = 0LL;
  *(_OWORD *)&src[360] = 0LL;
  *(_OWORD *)&src[384] = 0LL;
  *(_OWORD *)&src[408] = 0LL;
  *(_QWORD *)src = 0LL;
  *(_QWORD *)&src[16] = 0LL;
  *(_QWORD *)&src[40] = 0LL;
  *(_QWORD *)&src[56] = 0LL;
  *(_QWORD *)&src[80] = 5LL;
  *(_QWORD *)&src[104] = 0LL;
  *(_QWORD *)&src[112] = 8LL;
  *(_QWORD *)&src[136] = 8LL;
  *(_QWORD *)&src[160] = 8LL;
  *(_QWORD *)&src[184] = 8LL;
  *(_QWORD *)&src[208] = 8LL;
  *(_QWORD *)&src[232] = 8LL;
  *(_QWORD *)&src[256] = 8LL;
  *(_QWORD *)&src[280] = 8LL;
  *(_QWORD *)&src[304] = 8LL;
  *(_QWORD *)&src[328] = 4LL;
  *(_QWORD *)&src[352] = 8LL;
  *(_QWORD *)&src[376] = 8LL;
  *(_QWORD *)&src[400] = 8LL;
  *(_QWORD *)&src[424] = 8LL;
  *(_QWORD *)&src[432] = 0LL;
  *(_QWORD *)&src[440] = 0x8000000000000000LL;
  *(_QWORD *)&src[464] = 0x8000000000000000LL;
  *(_QWORD *)&src[504] = 0x8000000000000001LL;
  *(_QWORD *)&src[528] = aSilent_0;
  *(_QWORD *)&src[536] = 6LL;
  *(_QWORD *)&src[544] = aSilent_0;
  *(_OWORD *)&src[552] = 6uLL;
  *(_QWORD *)&src[576] = 0x11000000000073LL;
  *(_DWORD *)&src[584] = 0;
  *(_WORD *)&src[588] = 3337;
  *(_QWORD *)&v79[0] = 0LL;
  *((_QWORD *)&v79[0] + 1) = 1LL;
  *(_QWORD *)&v79[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v79, 0LL, 28LL);
  v48 = *((_QWORD *)&v79[0] + 1);
  v49 = *(_QWORD *)&v79[1];
  *(_OWORD *)(*((_QWORD *)&v79[0] + 1) + *(_QWORD *)&v79[1] + 12LL) = unk_19EEC;
  *(_OWORD *)(v48 + v49) = unk_19EE0;
  *(_QWORD *)&v79[1] = v49 + 28;
  v50 = *(_QWORD *)&v79[0];
  if ( *(_QWORD *)&v79[0] != 0x8000000000000000LL )
    v79[0] = *(_OWORD *)((char *)v79 + 8);
  *(_QWORD *)&src[440] = v50;
  *(_OWORD *)&src[448] = v79[0];
  v52 = *(_QWORD *)&src[8];
  v51 = *(_QWORD *)src;
  v78 = *(_QWORD *)&src[64];
  v53 = *(_QWORD *)&src[72];
  memcpy(v79, &src[80], sizeof(v79));
  if ( *(_QWORD *)&dest[1] && (*(_QWORD *)&src[544] || *(_DWORD *)&src[576] != 1114112) )
  {
    if ( !*(_QWORD *)src )
      v52 = *((_QWORD *)&dest[1] + 1);
    ++*((_QWORD *)&dest[1] + 1);
    v51 = (*(_QWORD *)src == 0LL) + *(_QWORD *)src;
  }
  v54 = v78;
  if ( !*(_QWORD *)&src[56] )
  {
    v53 = *((_QWORD *)&dest[40] + 1);
    v54 = *(_QWORD *)&dest[40];
  }
  *(_QWORD *)src = v51;
  *(_QWORD *)&src[8] = v52;
  *(_QWORD *)&src[56] += *(_QWORD *)&src[56] == 0LL;
  *(_QWORD *)&src[64] = v54;
  *(_QWORD *)&src[72] = v53;
  memcpy(&src[80], v79, 0x1D0uLL);
  src[588] = 2;
  v55 = *(_QWORD *)&dest[9];
  if ( *(_QWORD *)&dest[9] == *(_QWORD *)&dest[8] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&dest[8]);
  memmove((void *)(*((_QWORD *)&dest[8] + 1) + 592 * v55), src, 0x250uLL);
  *(_QWORD *)&dest[9] = v55 + 1;
  memcpy(src, dest, sizeof(src));
  dest[7] = 8uLL;
  dest[9] = 0LL;
  dest[10] = 8uLL;
  dest[12] = 0LL;
  dest[13] = 8uLL;
  dest[15] = 0LL;
  dest[16] = 8uLL;
  dest[18] = 0LL;
  dest[19] = 8uLL;
  dest[21] = 0LL;
  dest[22] = 8uLL;
  dest[24] = 0LL;
  dest[25] = 8uLL;
  *(_QWORD *)&dest[0] = 0LL;
  *(_QWORD *)&dest[1] = 0LL;
  *((_QWORD *)&dest[2] + 1) = 0LL;
  *((_QWORD *)&dest[3] + 1) = 0LL;
  *(_QWORD *)&dest[5] = 5LL;
  *((_QWORD *)&dest[6] + 1) = 0LL;
  *((_QWORD *)&dest[8] + 1) = 8LL;
  *((_QWORD *)&dest[11] + 1) = 8LL;
  *((_QWORD *)&dest[14] + 1) = 8LL;
  *((_QWORD *)&dest[17] + 1) = 8LL;
  *((_QWORD *)&dest[20] + 1) = 4LL;
  *((_QWORD *)&dest[23] + 1) = 8LL;
  *((_QWORD *)&dest[26] + 1) = 8LL;
  *(_QWORD *)&dest[27] = 0LL;
  *((_QWORD *)&dest[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&dest[29] = 0x8000000000000000LL;
  *((_QWORD *)&dest[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&dest[33] = aVerbose_0;
  *((_QWORD *)&dest[33] + 1) = 7LL;
  *(_QWORD *)&dest[34] = aVerbose_0;
  *(_OWORD *)((char *)&dest[34] + 8) = 7uLL;
  *(_QWORD *)&dest[36] = 0x11000000000076LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 3337;
  *(_QWORD *)&v79[0] = 0LL;
  *((_QWORD *)&v79[0] + 1) = 1LL;
  *(_QWORD *)&v79[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v79, 0LL, 20LL);
  v56 = *((_QWORD *)&v79[0] + 1);
  v57 = *(_QWORD *)&v79[1];
  *(_OWORD *)(*((_QWORD *)&v79[0] + 1) + *(_QWORD *)&v79[1]) = unk_19F09;
  *(_DWORD *)(v56 + v57 + 16) = 1701273971;
  *(_QWORD *)&v79[1] = v57 + 20;
  v58 = *(_QWORD *)&v79[0];
  if ( *(_QWORD *)&v79[0] != 0x8000000000000000LL )
    v79[0] = *(_OWORD *)((char *)v79 + 8);
  *((_QWORD *)&dest[27] + 1) = v58;
  dest[28] = v79[0];
  v59 = *(_QWORD *)&dest[0];
  v61 = *((_QWORD *)&dest[4] + 1);
  v60 = *(_QWORD *)&dest[4];
  memcpy(v79, &dest[5], sizeof(v79));
  if ( !*(_QWORD *)&src[16] )
  {
    v62 = dest[36];
LABEL_99:
    v63 = *((_QWORD *)&dest[0] + 1);
    goto LABEL_100;
  }
  v62 = dest[36];
  if ( !*(_QWORD *)&dest[34] && LODWORD(dest[36]) == 1114112 )
    goto LABEL_99;
  v63 = *((_QWORD *)&dest[0] + 1);
  if ( !*(_QWORD *)&dest[0] )
    v63 = *(_QWORD *)&src[24];
  ++*(_QWORD *)&src[24];
  v59 = (*(_QWORD *)&dest[0] == 0LL) + *(_QWORD *)&dest[0];
LABEL_100:
  if ( !*((_QWORD *)&dest[3] + 1) )
  {
    v61 = *(_QWORD *)&src[648];
    v60 = *(_QWORD *)&src[640];
  }
  *(_QWORD *)&dest[0] = v59;
  *((_QWORD *)&dest[0] + 1) = v63;
  *((_QWORD *)&dest[3] + 1) += *((_QWORD *)&dest[3] + 1) == 0LL;
  *(_QWORD *)&dest[4] = v60;
  *((_QWORD *)&dest[4] + 1) = v61;
  memcpy(&dest[5], v79, 0x1D0uLL);
  LODWORD(dest[36]) = v62;
  BYTE12(dest[36]) = 2;
  v64 = *(_QWORD *)&src[144];
  if ( *(_QWORD *)&src[144] == *(_QWORD *)&src[128] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&src[128]);
  memmove((void *)(*(_QWORD *)&src[136] + 592 * v64), dest, 0x250uLL);
  *(_QWORD *)&src[144] = v64 + 1;
  memcpy(dest, src, 0x2C8uLL);
  *(_OWORD *)&src[120] = 0LL;
  *(_OWORD *)&src[144] = 0LL;
  *(_OWORD *)&src[168] = 0LL;
  *(_OWORD *)&src[192] = 0LL;
  *(_OWORD *)&src[216] = 0LL;
  *(_OWORD *)&src[240] = 0LL;
  *(_OWORD *)&src[264] = 0LL;
  *(_OWORD *)&src[288] = 0LL;
  *(_OWORD *)&src[312] = 0LL;
  *(_OWORD *)&src[336] = 0LL;
  *(_OWORD *)&src[360] = 0LL;
  *(_OWORD *)&src[384] = 0LL;
  *(_OWORD *)&src[408] = 0LL;
  *(_QWORD *)src = 0LL;
  *(_QWORD *)&src[16] = 0LL;
  *(_QWORD *)&src[40] = 0LL;
  *(_QWORD *)&src[56] = 0LL;
  *(_QWORD *)&src[80] = 5LL;
  *(_QWORD *)&src[104] = 0LL;
  *(_QWORD *)&src[112] = 8LL;
  *(_QWORD *)&src[136] = 8LL;
  *(_QWORD *)&src[160] = 8LL;
  *(_QWORD *)&src[184] = 8LL;
  *(_QWORD *)&src[208] = 8LL;
  *(_QWORD *)&src[232] = 8LL;
  *(_QWORD *)&src[256] = 8LL;
  *(_QWORD *)&src[280] = 8LL;
  *(_QWORD *)&src[304] = 8LL;
  *(_QWORD *)&src[328] = 4LL;
  *(_QWORD *)&src[352] = 8LL;
  *(_QWORD *)&src[376] = 8LL;
  *(_QWORD *)&src[400] = 8LL;
  *(_QWORD *)&src[424] = 8LL;
  *(_QWORD *)&src[432] = 0LL;
  *(_QWORD *)&src[440] = 0x8000000000000000LL;
  *(_QWORD *)&src[464] = 0x8000000000000000LL;
  *(_QWORD *)&src[504] = 0x8000000000000001LL;
  *(_QWORD *)&src[528] = aZero;
  *(_QWORD *)&src[536] = 4LL;
  *(_QWORD *)&src[544] = aZero;
  *(_OWORD *)&src[552] = 4uLL;
  *(_QWORD *)&src[576] = 0x1100000000007ALL;
  *(_DWORD *)&src[584] = 0;
  *(_WORD *)&src[588] = 3337;
  *(_QWORD *)&v79[0] = 0LL;
  *((_QWORD *)&v79[0] + 1) = 1LL;
  *(_QWORD *)&v79[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v79, 0LL, 44LL);
  v65 = *((_QWORD *)&v79[0] + 1);
  v66 = *(_QWORD *)&v79[1];
  *(_OWORD *)(*((_QWORD *)&v79[0] + 1) + *(_QWORD *)&v79[1] + 28LL) = unk_19F39;
  qmemcpy((void *)(v65 + v66), "separate output with NUL rather ", 32);
  *(_QWORD *)&v79[1] = v66 + 44;
  v67 = *(_QWORD *)&v79[0];
  if ( *(_QWORD *)&v79[0] != 0x8000000000000000LL )
    v79[0] = *(_OWORD *)((char *)v79 + 8);
  *(_QWORD *)&src[440] = v67;
  *(_OWORD *)&src[448] = v79[0];
  v69 = *(_QWORD *)&src[8];
  v68 = *(_QWORD *)src;
  v78 = *(_QWORD *)&src[64];
  v70 = *(_QWORD *)&src[72];
  memcpy(v79, &src[80], sizeof(v79));
  if ( *(_QWORD *)&dest[1] && (*(_QWORD *)&src[544] || *(_DWORD *)&src[576] != 1114112) )
  {
    if ( !*(_QWORD *)src )
      v69 = *((_QWORD *)&dest[1] + 1);
    ++*((_QWORD *)&dest[1] + 1);
    v68 = (*(_QWORD *)src == 0LL) + *(_QWORD *)src;
  }
  v71 = v78;
  if ( !*(_QWORD *)&src[56] )
  {
    v70 = *((_QWORD *)&dest[40] + 1);
    v71 = *(_QWORD *)&dest[40];
  }
  *(_QWORD *)src = v68;
  *(_QWORD *)&src[8] = v69;
  *(_QWORD *)&src[56] += *(_QWORD *)&src[56] == 0LL;
  *(_QWORD *)&src[64] = v71;
  *(_QWORD *)&src[72] = v70;
  memcpy(&src[80], v79, 0x1D0uLL);
  src[588] = 2;
  v72 = *(_QWORD *)&dest[9];
  if ( *(_QWORD *)&dest[9] == *(_QWORD *)&dest[8] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&dest[8]);
  memmove((void *)(*((_QWORD *)&dest[8] + 1) + 592 * v72), src, 0x250uLL);
  *(_QWORD *)&dest[9] = v72 + 1;
  memcpy(src, dest, sizeof(src));
  dest[7] = 8uLL;
  dest[9] = 0LL;
  dest[10] = 8uLL;
  dest[12] = 0LL;
  dest[13] = 8uLL;
  dest[15] = 0LL;
  dest[16] = 8uLL;
  dest[18] = 0LL;
  dest[19] = 8uLL;
  dest[21] = 0LL;
  dest[22] = 8uLL;
  dest[24] = 0LL;
  dest[25] = 8uLL;
  *(_QWORD *)&dest[0] = 0LL;
  *(_QWORD *)&dest[1] = 0LL;
  *((_QWORD *)&dest[2] + 1) = 0LL;
  *((_QWORD *)&dest[3] + 1) = 1LL;
  dest[4] = *(_OWORD *)&src[640];
  *(_QWORD *)&dest[5] = 5LL;
  *((_QWORD *)&dest[6] + 1) = 0LL;
  *((_QWORD *)&dest[8] + 1) = 8LL;
  *((_QWORD *)&dest[11] + 1) = 8LL;
  *((_QWORD *)&dest[14] + 1) = 8LL;
  *((_QWORD *)&dest[17] + 1) = 8LL;
  *((_QWORD *)&dest[20] + 1) = 4LL;
  *((_QWORD *)&dest[23] + 1) = 8LL;
  *((_QWORD *)&dest[26] + 1) = 8LL;
  *(_QWORD *)&dest[27] = 0LL;
  *((_QWORD *)&dest[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&dest[29] = 0x8000000000000000LL;
  *((_QWORD *)&dest[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&dest[33] = aFiles_0;
  *((_QWORD *)&dest[33] + 1) = 5LL;
  *(_QWORD *)&dest[34] = 0LL;
  *(_QWORD *)&dest[35] = 0LL;
  *(_QWORD *)&dest[36] = 0x11000000110000LL;
  DWORD2(dest[36]) = 0;
  WORD6(dest[36]) = 513;
  v73 = *(_QWORD *)&src[144];
  v74 = v80;
  if ( *(_QWORD *)&src[144] == *(_QWORD *)&src[128] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&src[128]);
  memmove((void *)(*(_QWORD *)&src[136] + 592 * v73), dest, 0x250uLL);
  *(_QWORD *)&src[144] = v73 + 1;
  memcpy(v74, src, 0x2C8uLL);
  return v74;
}
