void *__fastcall uu_rmdir::uu_app(void *a1)
{
  __int64 v1; // rcx
  __int64 v2; // rsi
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r13
  __int64 v9; // rbx
  __int64 v10; // r12
  int v11; // ebp
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r13
  __int64 v18; // rbx
  __int64 v19; // rbp
  int v20; // r12d
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // r13
  __int64 v28; // rbp
  int v29; // r14d
  __int64 v30; // rsi
  __int64 v31; // rbx
  __int64 v32; // rbx
  void *v33; // r14
  _OWORD src[45]; // [rsp+60h] [rbp-7A8h] BYREF
  _BYTE dest[712]; // [rsp+330h] [rbp-4D8h] BYREF
  void *v37; // [rsp+5F8h] [rbp-210h]
  _OWORD v38[32]; // [rsp+600h] [rbp-208h] BYREF

  if ( uucore::UTIL_NAME != 2 )
    once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
  src[4] = 8uLL;
  src[6] = 0LL;
  src[9] = 0LL;
  src[10] = 8uLL;
  src[12] = 0LL;
  src[15] = 0LL;
  *(_QWORD *)&src[0] = 0LL;
  src[1] = 1uLL;
  *(_QWORD *)&src[2] = 5LL;
  *((_QWORD *)&src[3] + 1) = 0LL;
  *((_QWORD *)&src[5] + 1) = 4LL;
  src[7] = 8uLL;
  *((_QWORD *)&src[8] + 1) = 8LL;
  *((_QWORD *)&src[11] + 1) = 8LL;
  src[13] = 8uLL;
  *((_QWORD *)&src[14] + 1) = 8LL;
  src[16] = 8uLL;
  *(_QWORD *)&src[17] = 0x8000000000000000LL;
  *((_QWORD *)&src[18] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&src[20] = 0x8000000000000000LL;
  *((_QWORD *)&src[21] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&src[23] = 0x8000000000000000LL;
  *((_QWORD *)&src[24] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&src[26] = 0x8000000000000000LL;
  *((_QWORD *)&src[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&src[29] = 0x8000000000000000LL;
  *((_QWORD *)&src[30] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&src[32] = 0x8000000000000000LL;
  *((_QWORD *)&src[33] + 1) = 0x8000000000000000LL;
  src[35] = xmmword_E0A38;
  *(_QWORD *)&src[36] = 0LL;
  *(_QWORD *)&src[37] = 0LL;
  *(_QWORD *)&src[38] = a0027;
  *((_QWORD *)&src[38] + 1) = 6LL;
  *(_QWORD *)&src[39] = 0LL;
  *(_QWORD *)&src[40] = 0LL;
  *(_QWORD *)&src[41] = 0LL;
  *(_QWORD *)&src[42] = 0LL;
  *(_QWORD *)&src[43] = 0LL;
  DWORD2(src[43]) = 1114112;
  BYTE4(src[44]) = 0;
  *(_QWORD *)((char *)&src[43] + 12) = 0LL;
  *(_QWORD *)dest = 0LL;
  *(_QWORD *)&dest[8] = 1LL;
  *(_QWORD *)&dest[16] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(dest, 0LL, 45LL);
  v1 = *(_QWORD *)&dest[8];
  v2 = *(_QWORD *)&dest[16];
  *(_OWORD *)(*(_QWORD *)&dest[8] + *(_QWORD *)&dest[16] + 29LL) = *(__int128 *)((char *)&xmmword_1864C + 13);
  qmemcpy((void *)(v1 + v2), "Remove the DIRECTORY(ies), if th", 32);
  *(_QWORD *)&dest[16] = v2 + 45;
  v3 = *(_QWORD *)dest;
  v38[0] = *(_OWORD *)&dest[8];
  if ( *(_QWORD *)dest != 0x8000000000000000LL )
    *(_OWORD *)dest = v38[0];
  *(_QWORD *)&src[20] = v3;
  *(_OWORD *)((char *)&src[20] + 8) = *(_OWORD *)dest;
  memcpy(dest, src, sizeof(dest));
  uucore::format_usage(v38, aOptionDirector, 27LL);
  v4 = *(_QWORD *)&v38[0];
  if ( *(_QWORD *)&v38[0] != 0x8000000000000000LL )
    src[0] = *(_OWORD *)((char *)v38 + 8);
  if ( 2LL * *(_QWORD *)&dest[464] )
    _rust_dealloc(*(_QWORD *)&dest[472], *(_QWORD *)&dest[464], 1LL);
  *(_QWORD *)&dest[464] = v4;
  *(_OWORD *)&dest[472] = src[0];
  memcpy(src, dest, 0x2BCuLL);
  *(_QWORD *)((char *)&src[43] + 12) = *(_QWORD *)&dest[700] | 0x8000000080LL;
  DWORD1(src[44]) = *(_DWORD *)&dest[708];
  *(_OWORD *)&dest[120] = 0LL;
  *(_OWORD *)&dest[144] = 0LL;
  *(_OWORD *)&dest[168] = 0LL;
  *(_OWORD *)&dest[192] = 0LL;
  *(_OWORD *)&dest[216] = 0LL;
  *(_OWORD *)&dest[240] = 0LL;
  *(_OWORD *)&dest[264] = 0LL;
  *(_OWORD *)&dest[288] = 0LL;
  *(_OWORD *)&dest[312] = 0LL;
  *(_OWORD *)&dest[336] = 0LL;
  *(_OWORD *)&dest[360] = 0LL;
  *(_OWORD *)&dest[384] = 0LL;
  *(_OWORD *)&dest[408] = 0LL;
  *(_QWORD *)dest = 0LL;
  *(_QWORD *)&dest[16] = 0LL;
  *(_QWORD *)&dest[40] = 0LL;
  *(_QWORD *)&dest[56] = 0LL;
  *(_QWORD *)&dest[80] = 5LL;
  *(_QWORD *)&dest[104] = 0LL;
  *(_QWORD *)&dest[112] = 8LL;
  *(_QWORD *)&dest[136] = 8LL;
  *(_QWORD *)&dest[160] = 8LL;
  *(_QWORD *)&dest[184] = 8LL;
  *(_QWORD *)&dest[208] = 8LL;
  *(_QWORD *)&dest[232] = 8LL;
  *(_QWORD *)&dest[256] = 8LL;
  *(_QWORD *)&dest[280] = 8LL;
  *(_QWORD *)&dest[304] = 8LL;
  *(_QWORD *)&dest[328] = 4LL;
  *(_QWORD *)&dest[352] = 8LL;
  *(_QWORD *)&dest[376] = 8LL;
  *(_QWORD *)&dest[400] = 8LL;
  *(_QWORD *)&dest[424] = 8LL;
  *(_QWORD *)&dest[432] = 0LL;
  *(_QWORD *)&dest[440] = 0x8000000000000000LL;
  *(_QWORD *)&dest[464] = 0x8000000000000000LL;
  *(_QWORD *)&dest[504] = 0x8000000000000001LL;
  *(_QWORD *)&dest[528] = aIgnoreFailOnNo;
  *(_QWORD *)&dest[536] = 24LL;
  *(_QWORD *)&dest[544] = aIgnoreFailOnNo;
  *(_OWORD *)&dest[552] = 0x18uLL;
  *(_QWORD *)&dest[576] = 0x11000000110000LL;
  *(_DWORD *)&dest[584] = 0;
  *(_WORD *)&dest[588] = 3337;
  *(_QWORD *)&v38[0] = 0LL;
  *((_QWORD *)&v38[0] + 1) = 1LL;
  *(_QWORD *)&v38[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v38, 0LL, 67LL);
  v37 = a1;
  v5 = *((_QWORD *)&v38[0] + 1);
  v6 = *(_QWORD *)&v38[1];
  *(_OWORD *)(*((_QWORD *)&v38[0] + 1) + *(_QWORD *)&v38[1] + 48LL) = unk_186F7;
  qmemcpy((void *)(v5 + v6), "ignore each failure that is solely because a dir", 48);
  *(_DWORD *)(v5 + v6 + 63) = 2037674093;
  *(_QWORD *)&v38[1] = v6 + 67;
  v7 = *(_QWORD *)&v38[0];
  if ( *(_QWORD *)&v38[0] != 0x8000000000000000LL )
    v38[0] = *(_OWORD *)((char *)v38 + 8);
  *(_QWORD *)&dest[440] = v7;
  *(_OWORD *)&dest[448] = v38[0];
  v8 = *(_QWORD *)dest;
  v9 = *(_QWORD *)&dest[64];
  v10 = *(_QWORD *)&dest[72];
  memcpy(v38, &dest[80], 0x1D0uLL);
  if ( !*(_QWORD *)&src[1] )
  {
    v11 = *(_DWORD *)&dest[576];
LABEL_18:
    v12 = *(_QWORD *)&dest[8];
    goto LABEL_19;
  }
  v11 = *(_DWORD *)&dest[576];
  if ( !*(_QWORD *)&dest[544] && *(_DWORD *)&dest[576] == 1114112 )
    goto LABEL_18;
  v12 = *(_QWORD *)&dest[8];
  if ( !*(_QWORD *)dest )
    v12 = *((_QWORD *)&src[1] + 1);
  v8 = (*(_QWORD *)dest == 0LL) + *(_QWORD *)dest;
  ++*((_QWORD *)&src[1] + 1);
LABEL_19:
  if ( !*(_QWORD *)&dest[56] )
  {
    v10 = *((_QWORD *)&src[40] + 1);
    v9 = *(_QWORD *)&src[40];
  }
  *(_QWORD *)dest = v8;
  *(_QWORD *)&dest[8] = v12;
  *(_QWORD *)&dest[56] += *(_QWORD *)&dest[56] == 0LL;
  *(_QWORD *)&dest[64] = v9;
  *(_QWORD *)&dest[72] = v10;
  memcpy(&dest[80], v38, 0x1D0uLL);
  *(_DWORD *)&dest[576] = v11;
  dest[588] = 2;
  v13 = *(_QWORD *)&src[9];
  if ( *(_QWORD *)&src[9] == *(_QWORD *)&src[8] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&src[8]);
  memmove((void *)(*((_QWORD *)&src[8] + 1) + 592 * v13), dest, 0x250uLL);
  *(_QWORD *)&src[9] = v13 + 1;
  memcpy(dest, src, sizeof(dest));
  src[7] = 8uLL;
  src[9] = 0LL;
  src[10] = 8uLL;
  src[12] = 0LL;
  src[13] = 8uLL;
  src[15] = 0LL;
  src[16] = 8uLL;
  src[18] = 0LL;
  src[19] = 8uLL;
  src[21] = 0LL;
  src[22] = 8uLL;
  src[24] = 0LL;
  src[25] = 8uLL;
  *(_QWORD *)&src[0] = 0LL;
  *(_QWORD *)&src[1] = 0LL;
  *((_QWORD *)&src[2] + 1) = 0LL;
  *((_QWORD *)&src[3] + 1) = 0LL;
  *(_QWORD *)&src[5] = 5LL;
  *((_QWORD *)&src[6] + 1) = 0LL;
  *((_QWORD *)&src[8] + 1) = 8LL;
  *((_QWORD *)&src[11] + 1) = 8LL;
  *((_QWORD *)&src[14] + 1) = 8LL;
  *((_QWORD *)&src[17] + 1) = 8LL;
  *((_QWORD *)&src[20] + 1) = 4LL;
  *((_QWORD *)&src[23] + 1) = 8LL;
  *((_QWORD *)&src[26] + 1) = 8LL;
  *(_QWORD *)&src[27] = 0LL;
  *((_QWORD *)&src[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&src[29] = 0x8000000000000000LL;
  *((_QWORD *)&src[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&src[33] = aParents;
  *((_QWORD *)&src[33] + 1) = 7LL;
  *(_QWORD *)&src[34] = aParents;
  *(_OWORD *)((char *)&src[34] + 8) = 7uLL;
  *(_QWORD *)&src[36] = 0x11000000000070LL;
  DWORD2(src[36]) = 0;
  WORD6(src[36]) = 3337;
  *(_QWORD *)&v38[0] = 0LL;
  *((_QWORD *)&v38[0] + 1) = 1LL;
  *(_QWORD *)&v38[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v38, 0LL, 108LL);
  v14 = *((_QWORD *)&v38[0] + 1);
  v15 = *(_QWORD *)&v38[1];
  *(_OWORD *)(*((_QWORD *)&v38[0] + 1) + *(_QWORD *)&v38[1] + 92LL) = unk_18766;
  qmemcpy(
    (void *)(v14 + v15),
    "remove DIRECTORY and its ancestors; e.g.,\n                  'rmdir -p a/b/c' is similar to rmdir",
    96);
  *(_QWORD *)&v38[1] = v15 + 108;
  v16 = *(_QWORD *)&v38[0];
  if ( *(_QWORD *)&v38[0] != 0x8000000000000000LL )
    v38[0] = *(_OWORD *)((char *)v38 + 8);
  *((_QWORD *)&src[27] + 1) = v16;
  src[28] = v38[0];
  v17 = *(_QWORD *)&src[0];
  v19 = *((_QWORD *)&src[4] + 1);
  v18 = *(_QWORD *)&src[4];
  memcpy(v38, &src[5], 0x1D0uLL);
  if ( !*(_QWORD *)&dest[16] )
  {
    v20 = src[36];
LABEL_32:
    v21 = *((_QWORD *)&src[0] + 1);
    goto LABEL_33;
  }
  v20 = src[36];
  if ( !*(_QWORD *)&src[34] && LODWORD(src[36]) == 1114112 )
    goto LABEL_32;
  v21 = *((_QWORD *)&src[0] + 1);
  if ( !*(_QWORD *)&src[0] )
    v21 = *(_QWORD *)&dest[24];
  v17 = (*(_QWORD *)&src[0] == 0LL) + *(_QWORD *)&src[0];
  ++*(_QWORD *)&dest[24];
LABEL_33:
  if ( !*((_QWORD *)&src[3] + 1) )
  {
    v19 = *(_QWORD *)&dest[648];
    v18 = *(_QWORD *)&dest[640];
  }
  *(_QWORD *)&src[0] = v17;
  *((_QWORD *)&src[0] + 1) = v21;
  *((_QWORD *)&src[3] + 1) += *((_QWORD *)&src[3] + 1) == 0LL;
  *(_QWORD *)&src[4] = v18;
  *((_QWORD *)&src[4] + 1) = v19;
  memcpy(&src[5], v38, 0x1D0uLL);
  LODWORD(src[36]) = v20;
  BYTE12(src[36]) = 2;
  v22 = *(_QWORD *)&dest[144];
  if ( *(_QWORD *)&dest[144] == *(_QWORD *)&dest[128] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&dest[128]);
  memmove((void *)(*(_QWORD *)&dest[136] + 592 * v22), src, 0x250uLL);
  *(_QWORD *)&dest[144] = v22 + 1;
  memcpy(src, dest, 0x2C8uLL);
  *(_OWORD *)&dest[120] = 0LL;
  *(_OWORD *)&dest[144] = 0LL;
  *(_OWORD *)&dest[168] = 0LL;
  *(_OWORD *)&dest[192] = 0LL;
  *(_OWORD *)&dest[216] = 0LL;
  *(_OWORD *)&dest[240] = 0LL;
  *(_OWORD *)&dest[264] = 0LL;
  *(_OWORD *)&dest[288] = 0LL;
  *(_OWORD *)&dest[312] = 0LL;
  *(_OWORD *)&dest[336] = 0LL;
  *(_OWORD *)&dest[360] = 0LL;
  *(_OWORD *)&dest[384] = 0LL;
  *(_OWORD *)&dest[408] = 0LL;
  *(_QWORD *)dest = 0LL;
  *(_QWORD *)&dest[16] = 0LL;
  *(_QWORD *)&dest[40] = 0LL;
  *(_QWORD *)&dest[56] = 0LL;
  *(_QWORD *)&dest[80] = 5LL;
  *(_QWORD *)&dest[104] = 0LL;
  *(_QWORD *)&dest[112] = 8LL;
  *(_QWORD *)&dest[136] = 8LL;
  *(_QWORD *)&dest[160] = 8LL;
  *(_QWORD *)&dest[184] = 8LL;
  *(_QWORD *)&dest[208] = 8LL;
  *(_QWORD *)&dest[232] = 8LL;
  *(_QWORD *)&dest[256] = 8LL;
  *(_QWORD *)&dest[280] = 8LL;
  *(_QWORD *)&dest[304] = 8LL;
  *(_QWORD *)&dest[328] = 4LL;
  *(_QWORD *)&dest[352] = 8LL;
  *(_QWORD *)&dest[376] = 8LL;
  *(_QWORD *)&dest[400] = 8LL;
  *(_QWORD *)&dest[424] = 8LL;
  *(_QWORD *)&dest[432] = 0LL;
  *(_QWORD *)&dest[440] = 0x8000000000000000LL;
  *(_QWORD *)&dest[464] = 0x8000000000000000LL;
  *(_QWORD *)&dest[504] = 0x8000000000000001LL;
  *(_QWORD *)&dest[528] = aVerbose;
  *(_QWORD *)&dest[536] = 7LL;
  *(_QWORD *)&dest[544] = aVerbose;
  *(_OWORD *)&dest[552] = 7uLL;
  *(_QWORD *)&dest[576] = 0x11000000000076LL;
  *(_DWORD *)&dest[584] = 0;
  *(_WORD *)&dest[588] = 3337;
  *(_QWORD *)&v38[0] = 0LL;
  *((_QWORD *)&v38[0] + 1) = 1LL;
  *(_QWORD *)&v38[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v38, 0LL, 49LL);
  v23 = *((_QWORD *)&v38[0] + 1);
  v24 = *(_QWORD *)&v38[1];
  *(_OWORD *)(*((_QWORD *)&v38[0] + 1) + *(_QWORD *)&v38[1] + 32LL) = unk_18796;
  qmemcpy((void *)(v23 + v24), "output a diagnostic for every di", 32);
  *(_BYTE *)(v23 + v24 + 48) = 100;
  *(_QWORD *)&v38[1] = v24 + 49;
  v25 = *(_QWORD *)&v38[0];
  if ( *(_QWORD *)&v38[0] != 0x8000000000000000LL )
    v38[0] = *(_OWORD *)((char *)v38 + 8);
  *(_QWORD *)&dest[440] = v25;
  *(_OWORD *)&dest[448] = v38[0];
  v26 = *(_QWORD *)dest;
  v27 = *(_QWORD *)&dest[64];
  v28 = *(_QWORD *)&dest[72];
  memcpy(v38, &dest[80], 0x1D0uLL);
  if ( !*(_QWORD *)&src[1] )
  {
    v29 = *(_DWORD *)&dest[576];
LABEL_46:
    v30 = *(_QWORD *)&dest[8];
    goto LABEL_47;
  }
  v29 = *(_DWORD *)&dest[576];
  if ( !*(_QWORD *)&dest[544] && *(_DWORD *)&dest[576] == 1114112 )
    goto LABEL_46;
  v30 = *(_QWORD *)&dest[8];
  if ( !*(_QWORD *)dest )
    v30 = *((_QWORD *)&src[1] + 1);
  ++*((_QWORD *)&src[1] + 1);
  v26 = (*(_QWORD *)dest == 0LL) + *(_QWORD *)dest;
LABEL_47:
  if ( !*(_QWORD *)&dest[56] )
  {
    v28 = *((_QWORD *)&src[40] + 1);
    v27 = *(_QWORD *)&src[40];
  }
  *(_QWORD *)dest = v26;
  *(_QWORD *)&dest[8] = v30;
  *(_QWORD *)&dest[56] += *(_QWORD *)&dest[56] == 0LL;
  *(_QWORD *)&dest[64] = v27;
  *(_QWORD *)&dest[72] = v28;
  memcpy(&dest[80], v38, 0x1D0uLL);
  *(_DWORD *)&dest[576] = v29;
  dest[588] = 2;
  v31 = *(_QWORD *)&src[9];
  if ( *(_QWORD *)&src[9] == *(_QWORD *)&src[8] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&src[8]);
  memmove((void *)(*((_QWORD *)&src[8] + 1) + 592 * v31), dest, 0x250uLL);
  *(_QWORD *)&src[9] = v31 + 1;
  memcpy(dest, src, sizeof(dest));
  *(_QWORD *)&src[0] = 0LL;
  *(_QWORD *)&src[1] = 1LL;
  *((_QWORD *)&src[1] + 1) = 1LL;
  src[2] = 0xFFFFFFFFFFFFFFFFLL;
  *((_QWORD *)&src[3] + 1) = 1LL;
  src[4] = *(_OWORD *)&dest[640];
  *(_QWORD *)&src[5] = 2LL;
  *((_QWORD *)&src[6] + 1) = 0LL;
  src[7] = 8uLL;
  *((_QWORD *)&src[8] + 1) = 8LL;
  src[9] = 0LL;
  src[10] = 8uLL;
  *((_QWORD *)&src[11] + 1) = 8LL;
  src[12] = 0LL;
  src[13] = 8uLL;
  *((_QWORD *)&src[14] + 1) = 8LL;
  src[15] = 0LL;
  src[16] = 8uLL;
  *((_QWORD *)&src[17] + 1) = 8LL;
  src[18] = 0LL;
  src[19] = 8uLL;
  *((_QWORD *)&src[20] + 1) = 4LL;
  src[21] = 0LL;
  src[22] = 8uLL;
  *((_QWORD *)&src[23] + 1) = 8LL;
  src[24] = 0LL;
  src[25] = 8uLL;
  *((_QWORD *)&src[26] + 1) = 8LL;
  *(_QWORD *)&src[27] = 0LL;
  *((_QWORD *)&src[27] + 1) = 0x8000000000000000LL;
  *(_QWORD *)&src[29] = 0x8000000000000000LL;
  *((_QWORD *)&src[31] + 1) = 0x8000000000000001LL;
  *(_QWORD *)&src[33] = aDirs;
  *((_QWORD *)&src[33] + 1) = 4LL;
  *(_QWORD *)&src[34] = 0LL;
  *(_QWORD *)&src[35] = 0LL;
  *(_QWORD *)&src[36] = 0x11000000110000LL;
  DWORD2(src[36]) = 0;
  WORD6(src[36]) = 1025;
  v32 = *(_QWORD *)&dest[144];
  v33 = v37;
  if ( *(_QWORD *)&dest[144] == *(_QWORD *)&dest[128] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&dest[128]);
  memmove((void *)(*(_QWORD *)&dest[136] + 592 * v32), src, 0x250uLL);
  *(_QWORD *)&dest[144] = v32 + 1;
  memcpy(v33, dest, 0x2C8uLL);
  return v33;
}
