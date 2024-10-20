void *__fastcall uu_basenc::uu_app(void *a1)
{
  __int64 v1; // rsi
  __int64 v2; // rax
  __int64 v3; // rcx
  const void *v4; // rbx
  size_t v5; // r14
  __int64 v6; // r13
  __int64 v7; // rdi
  __int64 v8; // r12
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // r14
  int v14; // r12d
  __int64 v15; // r8
  __int64 v16; // r13
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r13
  __int64 v20; // rbp
  int v21; // ecx
  __int64 v22; // r8
  __int64 v23; // r13
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r13
  int v27; // ecx
  __int64 v28; // r8
  __int64 v29; // r13
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r13
  int v33; // ecx
  __int64 v34; // r8
  __int64 v35; // r13
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r13
  int v39; // ecx
  __int64 v40; // r8
  __int64 v41; // r13
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // r13
  int v45; // ecx
  __int64 v46; // r8
  __int64 v47; // r13
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // r13
  int v51; // edx
  __int64 v52; // rcx
  __int64 v53; // r13
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // r12
  __int64 v57; // rdx
  __int64 v58; // rsi
  __int64 v59; // rdi
  __int64 v60; // rbx
  void *v61; // rbx
  int v63; // [rsp+Ch] [rbp-CBCh]
  int v64; // [rsp+Ch] [rbp-CBCh]
  int v65; // [rsp+Ch] [rbp-CBCh]
  int v66; // [rsp+Ch] [rbp-CBCh]
  int v67; // [rsp+Ch] [rbp-CBCh]
  int v68; // [rsp+Ch] [rbp-CBCh]
  __int64 v69; // [rsp+20h] [rbp-CA8h]
  __int64 v70; // [rsp+28h] [rbp-CA0h]
  __int64 v71; // [rsp+30h] [rbp-C98h]
  __int128 v72; // [rsp+40h] [rbp-C88h]
  __int64 v73; // [rsp+50h] [rbp-C78h]
  __int128 v74; // [rsp+B0h] [rbp-C18h]
  __int128 v75; // [rsp+C0h] [rbp-C08h]
  __int64 v76; // [rsp+D0h] [rbp-BF8h]
  __int64 v77; // [rsp+E0h] [rbp-BE8h]
  __int64 v78; // [rsp+E8h] [rbp-BE0h]
  __int64 v79; // [rsp+F0h] [rbp-BD8h]
  int v80; // [rsp+F8h] [rbp-BD0h]
  _OWORD v81[45]; // [rsp+100h] [rbp-BC8h] BYREF
  void *v82; // [rsp+3D0h] [rbp-8F8h]
  __int64 v83; // [rsp+3D8h] [rbp-8F0h]
  _OWORD v84[29]; // [rsp+3E0h] [rbp-8E8h] BYREF
  _BYTE src[588]; // [rsp+5B0h] [rbp-718h] BYREF
  int v86; // [rsp+7FCh] [rbp-4CCh]
  _BYTE v87[464]; // [rsp+800h] [rbp-4C8h] BYREF
  _BYTE dest[760]; // [rsp+9D0h] [rbp-2F8h] BYREF

  v82 = a1;
  uu_base32::base_common::base_app(dest, aEncodeDecodeDa, 297LL, aOptionFile, 21LL);
  v1 = 32LL;
  do
  {
    v2 = *(__int64 *)((char *)&off_1067D0 + v1 - 32);
    v3 = *(__int64 *)((char *)&off_1067D0 + v1 - 24);
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
    *(_QWORD *)&src[528] = v2;
    *(_QWORD *)&src[536] = v3;
    *(_QWORD *)&src[544] = v2;
    *(_QWORD *)&src[552] = v3;
    *(_QWORD *)&src[560] = 0LL;
    *(_QWORD *)&src[576] = 0x11000000110000LL;
    *(_DWORD *)&src[584] = 0;
    LOWORD(v86) = 3337;
    v4 = *(char **)((char *)&off_1067D0 + v1 - 8);
    v83 = v1;
    v5 = *(size_t *)((char *)&off_1067D0 + v1);
    *(_QWORD *)&v81[0] = 0LL;
    *((_QWORD *)&v81[0] + 1) = 1LL;
    *(_QWORD *)&v81[1] = 0LL;
    if ( v5 )
    {
      alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v81, 0LL, v5);
      v6 = *(_QWORD *)&v81[1];
      v7 = *((_QWORD *)&v81[0] + 1);
      v8 = *(_QWORD *)&v81[0];
    }
    else
    {
      v7 = 1LL;
      v8 = 0LL;
      v6 = 0LL;
    }
    memcpy((void *)(v6 + v7), v4, v5);
    *(_QWORD *)&v81[1] = v5 + v6;
    v84[0] = *(_OWORD *)((char *)v81 + 8);
    if ( v8 != 0x8000000000000000LL )
      v81[0] = v84[0];
    *(_QWORD *)&src[440] = v8;
    *(_OWORD *)&src[448] = v81[0];
    memcpy(v81, src, 0x24CuLL);
    HIBYTE(v81[36]) = HIBYTE(v86);
    *(_WORD *)((char *)&v81[36] + 13) = *(_WORD *)((char *)&v86 + 1);
    BYTE12(v81[36]) = 2;
    *(_QWORD *)&v81[37] = &off_1067D0;
    v9 = *(_QWORD *)&v81[9];
    if ( *(_QWORD *)&v81[9] == *(_QWORD *)&v81[8] )
      alloc::raw_vec::RawVec<T,A>::grow_one(&v81[8]);
    v10 = *((_QWORD *)&v81[8] + 1);
    v11 = 16 * v9;
    *(_QWORD *)(*((_QWORD *)&v81[8] + 1) + v11) = aBase64_0;
    *(_QWORD *)(v10 + v11 + 8) = 6LL;
    *(_QWORD *)&v81[9] = v9 + 1;
    v84[0] = v81[1];
    v84[1] = v81[2];
    *(_QWORD *)&v84[2] = *(_QWORD *)&v81[3];
    v69 = *((_QWORD *)&v81[4] + 1);
    v70 = *(_QWORD *)&v81[4];
    memcpy(src, &v81[5], 0x1D0uLL);
    v12 = *((_QWORD *)&v81[0] + 1);
    v13 = *(_QWORD *)&v81[0];
    memcpy(v87, src, sizeof(v87));
    v71 = *((_QWORD *)&v81[3] + 1);
    memcpy(&v81[5], v87, 0x1D0uLL);
    v14 = v81[36];
    v15 = *(_QWORD *)&v81[34];
    *(_QWORD *)&v81[37] = &off_1067F8;
    v16 = *(_QWORD *)&v81[9];
    if ( *(_QWORD *)&v81[9] == *(_QWORD *)&v81[8] )
    {
      alloc::raw_vec::RawVec<T,A>::grow_one(&v81[8]);
      v12 = *((_QWORD *)&v81[0] + 1);
      v13 = *(_QWORD *)&v81[0];
      v71 = *((_QWORD *)&v81[3] + 1);
      v69 = *((_QWORD *)&v81[4] + 1);
      v70 = *(_QWORD *)&v81[4];
      v15 = *(_QWORD *)&v81[34];
      v14 = v81[36];
    }
    v17 = *((_QWORD *)&v81[8] + 1);
    v18 = 16 * v16;
    *(_QWORD *)(*((_QWORD *)&v81[8] + 1) + v18) = aBase64url_0;
    *(_QWORD *)(v17 + v18 + 8) = 9LL;
    *(_QWORD *)&v81[9] = v16 + 1;
    v84[0] = v81[1];
    v84[1] = v81[2];
    *(_QWORD *)&v84[2] = *(_QWORD *)&v81[3];
    v19 = v15;
    memcpy(src, &v81[5], 0x1D0uLL);
    v20 = v12;
    memcpy(v87, src, sizeof(v87));
    *(_QWORD *)&v81[0] = v13;
    *((_QWORD *)&v81[0] + 1) = v12;
    *((_QWORD *)&v81[3] + 1) = v71;
    *(_QWORD *)&v81[4] = v70;
    *((_QWORD *)&v81[4] + 1) = v69;
    memcpy(&v81[5], v87, 0x1D0uLL);
    v21 = v14;
    v22 = v19;
    *(_QWORD *)&v81[34] = v19;
    LODWORD(v81[36]) = v14;
    *(_QWORD *)&v81[37] = &off_106820;
    v23 = *(_QWORD *)&v81[9];
    if ( *(_QWORD *)&v81[9] == *(_QWORD *)&v81[8] )
    {
      alloc::raw_vec::RawVec<T,A>::grow_one(&v81[8]);
      v20 = *((_QWORD *)&v81[0] + 1);
      v13 = *(_QWORD *)&v81[0];
      v71 = *((_QWORD *)&v81[3] + 1);
      v69 = *((_QWORD *)&v81[4] + 1);
      v70 = *(_QWORD *)&v81[4];
      v22 = *(_QWORD *)&v81[34];
      v21 = v81[36];
    }
    v63 = v21;
    v24 = *((_QWORD *)&v81[8] + 1);
    v25 = 16 * v23;
    *(_QWORD *)(*((_QWORD *)&v81[8] + 1) + v25) = aBase32_0;
    *(_QWORD *)(v24 + v25 + 8) = 6LL;
    *(_QWORD *)&v81[9] = v23 + 1;
    v84[0] = v81[1];
    v84[1] = v81[2];
    *(_QWORD *)&v84[2] = *(_QWORD *)&v81[3];
    v26 = v22;
    memcpy(src, &v81[5], 0x1D0uLL);
    memcpy(v87, src, sizeof(v87));
    *(_QWORD *)&v81[0] = v13;
    *((_QWORD *)&v81[0] + 1) = v20;
    *((_QWORD *)&v81[3] + 1) = v71;
    *(_QWORD *)&v81[4] = v70;
    *((_QWORD *)&v81[4] + 1) = v69;
    memcpy(&v81[5], v87, 0x1D0uLL);
    v27 = v63;
    v28 = v26;
    *(_QWORD *)&v81[34] = v26;
    LODWORD(v81[36]) = v63;
    *(_QWORD *)&v81[37] = &off_106848;
    v29 = *(_QWORD *)&v81[9];
    if ( *(_QWORD *)&v81[9] == *(_QWORD *)&v81[8] )
    {
      alloc::raw_vec::RawVec<T,A>::grow_one(&v81[8]);
      v20 = *((_QWORD *)&v81[0] + 1);
      v13 = *(_QWORD *)&v81[0];
      v71 = *((_QWORD *)&v81[3] + 1);
      v69 = *((_QWORD *)&v81[4] + 1);
      v70 = *(_QWORD *)&v81[4];
      v28 = *(_QWORD *)&v81[34];
      v27 = v81[36];
    }
    v64 = v27;
    v30 = *((_QWORD *)&v81[8] + 1);
    v31 = 16 * v29;
    *(_QWORD *)(*((_QWORD *)&v81[8] + 1) + v31) = aBase32hex_0;
    *(_QWORD *)(v30 + v31 + 8) = 9LL;
    *(_QWORD *)&v81[9] = v29 + 1;
    v84[0] = v81[1];
    v84[1] = v81[2];
    *(_QWORD *)&v84[2] = *(_QWORD *)&v81[3];
    v32 = v28;
    memcpy(src, &v81[5], 0x1D0uLL);
    memcpy(v87, src, sizeof(v87));
    *(_QWORD *)&v81[0] = v13;
    *((_QWORD *)&v81[0] + 1) = v20;
    *((_QWORD *)&v81[3] + 1) = v71;
    *(_QWORD *)&v81[4] = v70;
    *((_QWORD *)&v81[4] + 1) = v69;
    memcpy(&v81[5], v87, 0x1D0uLL);
    v33 = v64;
    v34 = v32;
    *(_QWORD *)&v81[34] = v32;
    LODWORD(v81[36]) = v64;
    *(_QWORD *)&v81[37] = &off_106870;
    v35 = *(_QWORD *)&v81[9];
    if ( *(_QWORD *)&v81[9] == *(_QWORD *)&v81[8] )
    {
      alloc::raw_vec::RawVec<T,A>::grow_one(&v81[8]);
      v20 = *((_QWORD *)&v81[0] + 1);
      v13 = *(_QWORD *)&v81[0];
      v71 = *((_QWORD *)&v81[3] + 1);
      v69 = *((_QWORD *)&v81[4] + 1);
      v70 = *(_QWORD *)&v81[4];
      v34 = *(_QWORD *)&v81[34];
      v33 = v81[36];
    }
    v65 = v33;
    v36 = *((_QWORD *)&v81[8] + 1);
    v37 = 16 * v35;
    *(_QWORD *)(*((_QWORD *)&v81[8] + 1) + v37) = aBase16_0;
    *(_QWORD *)(v36 + v37 + 8) = 6LL;
    *(_QWORD *)&v81[9] = v35 + 1;
    v84[0] = v81[1];
    v84[1] = v81[2];
    *(_QWORD *)&v84[2] = *(_QWORD *)&v81[3];
    v38 = v34;
    memcpy(src, &v81[5], 0x1D0uLL);
    memcpy(v87, src, sizeof(v87));
    *(_QWORD *)&v81[0] = v13;
    *((_QWORD *)&v81[0] + 1) = v20;
    *((_QWORD *)&v81[3] + 1) = v71;
    *(_QWORD *)&v81[4] = v70;
    *((_QWORD *)&v81[4] + 1) = v69;
    memcpy(&v81[5], v87, 0x1D0uLL);
    v39 = v65;
    v40 = v38;
    *(_QWORD *)&v81[34] = v38;
    LODWORD(v81[36]) = v65;
    *(_QWORD *)&v81[37] = &off_106898;
    v41 = *(_QWORD *)&v81[9];
    if ( *(_QWORD *)&v81[9] == *(_QWORD *)&v81[8] )
    {
      alloc::raw_vec::RawVec<T,A>::grow_one(&v81[8]);
      v20 = *((_QWORD *)&v81[0] + 1);
      v13 = *(_QWORD *)&v81[0];
      v71 = *((_QWORD *)&v81[3] + 1);
      v69 = *((_QWORD *)&v81[4] + 1);
      v70 = *(_QWORD *)&v81[4];
      v40 = *(_QWORD *)&v81[34];
      v39 = v81[36];
    }
    v66 = v39;
    v42 = *((_QWORD *)&v81[8] + 1);
    v43 = 16 * v41;
    *(_QWORD *)(*((_QWORD *)&v81[8] + 1) + v43) = aBase2lsbf_0;
    *(_QWORD *)(v42 + v43 + 8) = 9LL;
    *(_QWORD *)&v81[9] = v41 + 1;
    v84[0] = v81[1];
    v84[1] = v81[2];
    *(_QWORD *)&v84[2] = *(_QWORD *)&v81[3];
    v44 = v40;
    memcpy(src, &v81[5], 0x1D0uLL);
    memcpy(v87, src, sizeof(v87));
    *(_QWORD *)&v81[0] = v13;
    *((_QWORD *)&v81[0] + 1) = v20;
    *((_QWORD *)&v81[3] + 1) = v71;
    *(_QWORD *)&v81[4] = v70;
    *((_QWORD *)&v81[4] + 1) = v69;
    memcpy(&v81[5], v87, 0x1D0uLL);
    v45 = v66;
    v46 = v44;
    *(_QWORD *)&v81[34] = v44;
    LODWORD(v81[36]) = v66;
    *(_QWORD *)&v81[37] = &off_1068C0;
    v47 = *(_QWORD *)&v81[9];
    if ( *(_QWORD *)&v81[9] == *(_QWORD *)&v81[8] )
    {
      alloc::raw_vec::RawVec<T,A>::grow_one(&v81[8]);
      v20 = *((_QWORD *)&v81[0] + 1);
      v13 = *(_QWORD *)&v81[0];
      v71 = *((_QWORD *)&v81[3] + 1);
      v69 = *((_QWORD *)&v81[4] + 1);
      v70 = *(_QWORD *)&v81[4];
      v46 = *(_QWORD *)&v81[34];
      v45 = v81[36];
    }
    v67 = v45;
    v48 = *((_QWORD *)&v81[8] + 1);
    v49 = 16 * v47;
    *(_QWORD *)(*((_QWORD *)&v81[8] + 1) + v49) = aBase2msbf_0;
    *(_QWORD *)(v48 + v49 + 8) = 9LL;
    *(_QWORD *)&v81[9] = v47 + 1;
    v84[0] = v81[1];
    v84[1] = v81[2];
    *(_QWORD *)&v84[2] = *(_QWORD *)&v81[3];
    v50 = v46;
    memcpy(src, &v81[5], 0x1D0uLL);
    memcpy(v87, src, sizeof(v87));
    *(_QWORD *)&v81[0] = v13;
    *((_QWORD *)&v81[0] + 1) = v20;
    *((_QWORD *)&v81[3] + 1) = v71;
    *(_QWORD *)&v81[4] = v70;
    *((_QWORD *)&v81[4] + 1) = v69;
    memcpy(&v81[5], v87, 0x1D0uLL);
    v51 = v67;
    v52 = v50;
    *(_QWORD *)&v81[34] = v50;
    LODWORD(v81[36]) = v67;
    *(_QWORD *)&v81[37] = &off_1068E8;
    v53 = *(_QWORD *)&v81[9];
    if ( *(_QWORD *)&v81[9] == *(_QWORD *)&v81[8] )
    {
      alloc::raw_vec::RawVec<T,A>::grow_one(&v81[8]);
      v20 = *((_QWORD *)&v81[0] + 1);
      v13 = *(_QWORD *)&v81[0];
      v71 = *((_QWORD *)&v81[3] + 1);
      v69 = *((_QWORD *)&v81[4] + 1);
      v70 = *(_QWORD *)&v81[4];
      v52 = *(_QWORD *)&v81[34];
      v51 = v81[36];
    }
    v68 = v51;
    v78 = v52;
    v77 = v13;
    v54 = *((_QWORD *)&v81[8] + 1);
    v55 = 16 * v53;
    *(_QWORD *)(*((_QWORD *)&v81[8] + 1) + v55) = aZ85_0;
    *(_QWORD *)(v54 + v55 + 8) = 3LL;
    *(_QWORD *)&v81[9] = v53 + 1;
    memcpy(src, &v81[5], 0x1D0uLL);
    memcpy(v87, src, sizeof(v87));
    v74 = v81[1];
    v75 = v81[2];
    v76 = *(_QWORD *)&v81[3];
    memcpy(v84, v87, sizeof(v84));
    v72 = *(_OWORD *)((char *)&v81[34] + 8);
    v73 = *((_QWORD *)&v81[35] + 1);
    v79 = *(_QWORD *)((char *)&v81[36] + 4);
    v80 = HIDWORD(v81[36]);
    memcpy(v81, dest, 0x2C8uLL);
    if ( *(_QWORD *)&v81[1] )
    {
      v56 = v78;
      v57 = v71;
      v58 = v70;
      v59 = v69;
      if ( v78 || v68 != 1114112 )
      {
        if ( !v13 )
          v20 = *((_QWORD *)&v81[1] + 1);
        v77 = (v13 == 0) + v13;
        ++*((_QWORD *)&v81[1] + 1);
      }
      if ( !v71 )
      {
LABEL_31:
        v59 = *((_QWORD *)&v81[40] + 1);
        v58 = *(_QWORD *)&v81[40];
      }
    }
    else
    {
      v57 = v71;
      v58 = v70;
      v59 = v69;
      v56 = v78;
      if ( !v71 )
        goto LABEL_31;
    }
    *(_QWORD *)src = v77;
    *(_QWORD *)&src[8] = v20;
    *(_QWORD *)&src[48] = v76;
    *(_OWORD *)&src[32] = v75;
    *(_OWORD *)&src[16] = v74;
    *(_QWORD *)&src[56] = (v57 == 0) + v57;
    *(_QWORD *)&src[64] = v58;
    *(_QWORD *)&src[72] = v59;
    memcpy(&src[80], v84, 0x1D0uLL);
    *(_QWORD *)&src[544] = v56;
    *(_OWORD *)&src[552] = v72;
    *(_QWORD *)&src[568] = v73;
    *(_DWORD *)&src[576] = v68;
    v86 = v80;
    *(_QWORD *)&src[580] = v79;
    v60 = *(_QWORD *)&v81[9];
    if ( *(_QWORD *)&v81[9] == *(_QWORD *)&v81[8] )
      alloc::raw_vec::RawVec<T,A>::grow_one(&v81[8]);
    memmove((void *)(*((_QWORD *)&v81[8] + 1) + 592 * v60), src, 0x250uLL);
    *(_QWORD *)&v81[9] = v60 + 1;
    memcpy(dest, v81, 0x2C8uLL);
    v1 = v83 + 40;
  }
  while ( v83 != 312 );
  v61 = v82;
  memcpy(v82, dest, 0x2C8uLL);
  return v61;
}
