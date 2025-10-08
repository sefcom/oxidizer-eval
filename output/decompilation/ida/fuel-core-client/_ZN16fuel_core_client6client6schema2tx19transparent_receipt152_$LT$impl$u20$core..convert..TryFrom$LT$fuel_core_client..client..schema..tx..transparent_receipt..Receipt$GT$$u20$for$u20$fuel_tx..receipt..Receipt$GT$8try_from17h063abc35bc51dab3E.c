__int64 __fastcall fuel_core_client::client::schema::tx::transparent_receipt::<impl core::convert::TryFrom<fuel_core_client::client::schema::tx::transparent_receipt::Receipt> for fuel_tx::receipt::Receipt>::try_from(
        __int64 a1,
        __int64 a2,
        __m128i a3,
        __m128i a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int128 v7; // rax
  __int64 v8; // r11
  __int64 v9; // r13
  __int64 v10; // r14
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // r12
  char v14; // al
  __int64 v15; // rcx
  int v16; // edx
  char v17; // al
  __int64 v18; // rcx
  int v19; // edx
  unsigned __int64 v20; // rbp
  char v21; // di
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // r10
  unsigned __int64 v24; // rdi
  __int64 v25; // rax
  __int128 v26; // xmm0
  unsigned __int64 v27; // rdi
  __m128i inserted; // xmm1
  unsigned int v29; // edi
  unsigned int v30; // eax
  __int64 v31; // r12
  __int64 v32; // r15
  char v33; // si
  __int64 v34; // r9
  int v35; // r10d
  __int64 v36; // rsi
  char v37; // r9
  __int64 v38; // r10
  int v39; // r11d
  char v40; // r9
  __int64 v41; // r10
  int v42; // r11d
  __int64 v43; // rax
  __int128 v44; // xmm0
  __int64 v45; // r12
  __int64 v46; // r8
  char v47; // si
  __int64 v48; // r9
  int v49; // r10d
  __int64 v50; // rax
  char v51; // cl
  __int64 v52; // rsi
  int v53; // edi
  __int64 v54; // rsi
  __int64 v55; // r8
  char v56; // cl
  __int64 v57; // rdi
  int v58; // r9d
  __int64 v59; // rsi
  __int64 v60; // r8
  char v61; // di
  __int64 v62; // r9
  int v63; // r10d
  __int64 v64; // rbp
  __int64 v65; // rsi
  __int64 v66; // r12
  char v67; // r8
  __int64 v68; // r9
  int v69; // r10d
  char v70; // cl
  __int64 v71; // rsi
  int v72; // edi
  __int64 v73; // rsi
  __int64 v74; // r8
  char v75; // cl
  __int64 v76; // rdi
  int v77; // r9d
  __int8 v78; // al
  __int128 v79; // xmm0
  __int8 v80; // al
  __int64 v82; // rax
  __m256i v83; // [rsp+0h] [rbp-1B8h] BYREF
  __m128i v84; // [rsp+20h] [rbp-198h] BYREF
  __int64 v85; // [rsp+30h] [rbp-188h]
  __int64 v86; // [rsp+38h] [rbp-180h]
  __int64 v87; // [rsp+40h] [rbp-178h]
  __int64 v88; // [rsp+48h] [rbp-170h]
  __int64 v89; // [rsp+50h] [rbp-168h]
  __int64 v90; // [rsp+58h] [rbp-160h]
  __int64 v91; // [rsp+60h] [rbp-158h]
  __int64 v92; // [rsp+68h] [rbp-150h]
  __int128 v93; // [rsp+70h] [rbp-148h]
  __int128 v94; // [rsp+80h] [rbp-138h]
  __int128 v95; // [rsp+90h] [rbp-128h]
  __int128 v96; // [rsp+A0h] [rbp-118h]
  __int128 v97; // [rsp+B0h] [rbp-108h]
  __int128 v98; // [rsp+C0h] [rbp-F8h]
  __int128 v99; // [rsp+D0h] [rbp-E8h]
  __int128 v100; // [rsp+E0h] [rbp-D8h]
  __int128 v101; // [rsp+F0h] [rbp-C8h]
  __int128 v102; // [rsp+100h] [rbp-B8h]
  __int128 v103; // [rsp+110h] [rbp-A8h]
  __int128 v104; // [rsp+120h] [rbp-98h]
  __m128i v105; // [rsp+130h] [rbp-88h]
  _OWORD v106[2]; // [rsp+140h] [rbp-78h] BYREF
  __m128i v107; // [rsp+160h] [rbp-58h]
  __int128 v108; // [rsp+170h] [rbp-48h]

  *((_QWORD *)&v7 + 1) = a5;
  v10 = a2;
  *(_QWORD *)&v7 = *(unsigned __int8 *)(a2 + 610);
  switch ( *(_BYTE *)(a2 + 610) )
  {
    case 0:
      v9 = 0LL;
      v12 = 0LL;
      v13 = 0LL;
      if ( (*(_BYTE *)(a2 + 346) & 1) != 0 )
      {
        v12 = *(_QWORD *)(a2 + 347);
        v13 = *(_QWORD *)(a2 + 355);
        a4 = _mm_loadu_si128((const __m128i *)(a2 + 363));
      }
      else
      {
        a4 = 0LL;
      }
      a6 = 0LL;
      v7 = 0uLL;
      if ( (*(_BYTE *)(a2 + 379) & 1) != 0 )
      {
        v7 = *(_OWORD *)(a2 + 396);
        v9 = *(_QWORD *)(a2 + 380);
        a6 = *(_QWORD *)(a2 + 388);
      }
      if ( (*(_BYTE *)(a2 + 32) & 1) == 0 )
        goto LABEL_149;
      if ( (*(_BYTE *)(a2 + 280) & 1) == 0 )
        goto LABEL_150;
      v8 = *(_QWORD *)(a2 + 40);
      v59 = *(_QWORD *)(a2 + 297);
      v60 = *(_QWORD *)(v10 + 305);
      v61 = *(_BYTE *)(v10 + 296);
      v62 = *(_QWORD *)(v10 + 288);
      v63 = *(_DWORD *)(v10 + 281);
      *(_DWORD *)((char *)&v93 + 3) = *(_DWORD *)(v10 + 284);
      LODWORD(v93) = v63;
      *(_QWORD *)((char *)&v93 + 7) = v62;
      HIBYTE(v93) = v61;
      if ( (*(_BYTE *)(v10 + 48) & 1) == 0 )
      {
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(
          &v83,
          aGas_0,
          3LL,
          *(double *)a3.m128i_i64,
          *(double *)a4.m128i_i64);
        goto LABEL_177;
      }
      if ( (*(_BYTE *)v10 & 1) == 0 )
      {
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(
          &v83,
          aParam1_0,
          6LL,
          *(double *)a3.m128i_i64,
          *(double *)a4.m128i_i64);
        goto LABEL_177;
      }
      if ( (*(_BYTE *)(v10 + 16) & 1) == 0 )
      {
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(
          &v83,
          aParam2_0,
          6LL,
          *(double *)a3.m128i_i64,
          *(double *)a4.m128i_i64);
        goto LABEL_177;
      }
      if ( (*(_BYTE *)(v10 + 80) & 1) == 0 )
        goto LABEL_173;
      if ( (*(_BYTE *)(v10 + 64) & 1) != 0 )
      {
        v89 = *(_QWORD *)(v10 + 56);
        v64 = *(_QWORD *)(v10 + 8);
        v91 = *(_QWORD *)(v10 + 24);
        v92 = *(_QWORD *)(v10 + 72);
        v90 = *(_QWORD *)(v10 + 88);
        v23 = HIDWORD(v12);
        v22 = v12 & 0xFFFFFF0000000000LL;
        v87 = v59;
        v85 = v93;
        v88 = v60;
        a7 = v64;
        a2 = *((_QWORD *)&v93 + 1);
        v20 = 0x8000000000000001LL;
        v21 = 1;
        goto LABEL_127;
      }
      goto LABEL_176;
    case 1:
      v12 = 0LL;
      if ( (*(_BYTE *)(a2 + 346) & 1) != 0 )
      {
        v12 = *(_QWORD *)(a2 + 347);
        v13 = *(_QWORD *)(a2 + 355);
        a4 = _mm_loadu_si128((const __m128i *)(a2 + 363));
        if ( (*(_BYTE *)(a2 + 192) & 1) == 0 )
          goto LABEL_30;
      }
      else
      {
        v13 = 0LL;
        a4 = 0LL;
        if ( (*(_BYTE *)(a2 + 192) & 1) == 0 )
          goto LABEL_30;
      }
      if ( (*(_BYTE *)(a2 + 80) & 1) == 0 )
        goto LABEL_173;
      if ( (*(_BYTE *)(a2 + 64) & 1) == 0 )
        goto LABEL_176;
      v9 = *(_QWORD *)(a2 + 200);
      *(_QWORD *)&v7 = *(_QWORD *)(a2 + 72);
      a6 = *(_QWORD *)(a2 + 88);
      v23 = HIDWORD(v12);
      v22 = v12 & 0xFFFFFF0000000000LL;
      v20 = 0x8000000000000002LL;
      goto LABEL_87;
    case 2:
      if ( (*(_BYTE *)(a2 + 346) & 1) != 0 )
      {
        *(_QWORD *)&v7 = *(_QWORD *)(a2 + 371);
        a6 = *(_QWORD *)(a2 + 363);
        v24 = *(_QWORD *)(a2 + 347);
        v9 = *(_QWORD *)(a2 + 355);
        if ( (*(_BYTE *)(a2 + 96) & 1) == 0 )
          goto LABEL_21;
      }
      else
      {
        v24 = 0LL;
        v9 = 0LL;
        a6 = 0LL;
        *(_QWORD *)&v7 = 0LL;
        if ( (*(_BYTE *)(a2 + 96) & 1) == 0 )
          goto LABEL_21;
      }
      if ( (*(_BYTE *)(a2 + 208) & 1) == 0 )
        goto LABEL_169;
      if ( (*(_BYTE *)(a2 + 313) & 1) == 0 )
        goto LABEL_167;
      *((_QWORD *)&v7 + 1) = *(_QWORD *)(a2 + 104);
      v45 = *(_QWORD *)(a2 + 216);
      v46 = *(_QWORD *)(a2 + 330);
      v8 = *(_QWORD *)(a2 + 338);
      v47 = *(_BYTE *)(a2 + 329);
      v48 = *(_QWORD *)(v10 + 321);
      v49 = *(_DWORD *)(v10 + 314);
      *(_DWORD *)((char *)&v94 + 3) = *(_DWORD *)(v10 + 317);
      LODWORD(v94) = v49;
      *(_QWORD *)((char *)&v94 + 7) = v48;
      HIBYTE(v94) = v47;
      v12 = *(_QWORD *)(v10 + 256);
      if ( v12 == 0x8000000000000000LL )
        goto LABEL_44;
      v85 = v45;
      v13 = *(_QWORD *)(v10 + 264);
      if ( (*(_BYTE *)(v10 + 80) & 1) == 0 )
        goto LABEL_163;
      if ( (*(_BYTE *)(v10 + 64) & 1) == 0 )
        goto LABEL_185;
      v86 = *(_QWORD *)(v10 + 72);
      v89 = *(_QWORD *)(v10 + 88);
      v88 = v46;
      v87 = *((_QWORD *)&v94 + 1);
      v84.m128i_i64[0] = v94;
      v23 = HIDWORD(v12);
      v22 = v12 & 0xFFFFFF0000000000LL;
      a4 = _mm_unpacklo_epi64(_mm_loadu_si128((const __m128i *)(v10 + 272)), (__m128i)v24);
      v20 = 0x8000000000000003LL;
      v21 = 0;
      goto LABEL_113;
    case 3:
      v13 = 0LL;
      if ( (*(_BYTE *)(a2 + 346) & 1) != 0 )
      {
        v13 = *(_QWORD *)(a2 + 347);
        v9 = *(_QWORD *)(a2 + 371);
        a3 = _mm_loadu_si128((const __m128i *)(a2 + 355));
        if ( (*(_BYTE *)(a2 + 176) & 1) == 0 )
        {
LABEL_24:
          <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(
            v106,
            aReason_0,
            6LL,
            *(double *)a3.m128i_i64,
            *(double *)a4.m128i_i64);
          v25 = *(_QWORD *)&v106[0];
          v26 = *(_OWORD *)((char *)v106 + 8);
          goto LABEL_178;
        }
      }
      else
      {
        v9 = 0LL;
        a3 = 0LL;
        if ( (*(_BYTE *)(a2 + 176) & 1) == 0 )
          goto LABEL_24;
      }
      v84 = a3;
      a2 = *(_QWORD *)(a2 + 184);
      fuel_core_client::client::schema::primitives::<impl core::convert::TryFrom<fuel_core_client::client::schema::primitives::U64> for fuel_asm::panic_instruction::PanicInstruction>::try_from(
        (__int64)&v83,
        a2);
      v50 = v83.m256i_i64[0];
      LODWORD(v12) = v83.m256i_i32[2];
      LOBYTE(v23) = v83.m256i_i8[12];
      if ( v83.m256i_i64[0] != 10 )
      {
        *(_DWORD *)(a1 + 36) = v83.m256i_i32[7];
        *(_OWORD *)(a1 + 21) = *(_OWORD *)((char *)&v83.m256i_u64[1] + 5);
        *(_QWORD *)(a1 + 8) = v50;
        *(_DWORD *)(a1 + 16) = v12;
        *(_BYTE *)(a1 + 20) = v23;
        goto LABEL_179;
      }
      if ( (*(_BYTE *)(v10 + 80) & 1) == 0 )
        goto LABEL_173;
      if ( (*(_BYTE *)(v10 + 64) & 1) == 0 )
        goto LABEL_176;
      a6 = *(_QWORD *)(v10 + 88);
      *(_QWORD *)&v7 = *(_QWORD *)(v10 + 72);
      v20 = 0x8000000000000004LL;
      v21 = 1;
      if ( (*(_BYTE *)(v10 + 544) & 1) != 0 )
      {
        v88 = *(unsigned __int8 *)(v10 + 576);
        v87 = *(_QWORD *)(v10 + 568);
        v8 = *(_QWORD *)(v10 + 560);
        v85 = *(_QWORD *)(v10 + 552);
        *((_QWORD *)&v7 + 1) = ((unsigned __int64)(*(unsigned __int16 *)(v10 + 549) | (*(unsigned __int8 *)(v10 + 551) << 16)) << 40)
                             + ((unsigned __int64)*(unsigned int *)(v10 + 545) << 8)
                             + 1;
        v22 = 0LL;
        a2 = v8;
      }
      else
      {
        v22 = 0LL;
        v88 = 0LL;
        *((_QWORD *)&v7 + 1) = 0LL;
      }
      a4 = _mm_load_si128(&v84);
      goto LABEL_127;
    case 4:
      v12 = 0LL;
      if ( (*(_BYTE *)(a2 + 346) & 1) != 0 )
      {
        v12 = *(_QWORD *)(a2 + 347);
        v13 = *(_QWORD *)(a2 + 355);
        a4 = _mm_loadu_si128((const __m128i *)(a2 + 363));
        if ( (*(_BYTE *)(a2 + 112) & 1) == 0 )
          goto LABEL_36;
      }
      else
      {
        v13 = 0LL;
        a4 = 0LL;
        if ( (*(_BYTE *)(a2 + 112) & 1) == 0 )
          goto LABEL_36;
      }
      if ( (*(_BYTE *)(a2 + 80) & 1) == 0 )
        goto LABEL_173;
      if ( (*(_BYTE *)(a2 + 64) & 1) == 0 )
        goto LABEL_176;
      v9 = *(_QWORD *)(a2 + 120);
      *(_QWORD *)&v7 = *(_QWORD *)(a2 + 72);
      a6 = *(_QWORD *)(a2 + 88);
      v23 = HIDWORD(v12);
      v22 = v12 & 0xFFFFFF0000000000LL;
      v20 = 0x8000000000000005LL;
LABEL_87:
      v21 = 1;
      goto LABEL_127;
    case 5:
      v12 = 0LL;
      if ( (*(_BYTE *)(a2 + 346) & 1) != 0 )
      {
        v12 = *(_QWORD *)(a2 + 347);
        v13 = *(_QWORD *)(a2 + 355);
        a4 = _mm_loadu_si128((const __m128i *)(a2 + 363));
        if ( (*(_BYTE *)(a2 + 112) & 1) == 0 )
          goto LABEL_36;
      }
      else
      {
        v13 = 0LL;
        a4 = 0LL;
        if ( (*(_BYTE *)(a2 + 112) & 1) == 0 )
          goto LABEL_36;
      }
      if ( (*(_BYTE *)(a2 + 128) & 1) == 0 )
        goto LABEL_135;
      if ( (*(_BYTE *)(a2 + 144) & 1) == 0 )
      {
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(
          &v83,
          aRc_0,
          2LL,
          *(double *)a3.m128i_i64,
          *(double *)a4.m128i_i64);
        goto LABEL_177;
      }
      if ( (*(_BYTE *)(a2 + 160) & 1) == 0 )
      {
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(
          &v83,
          aRd_0,
          2LL,
          *(double *)a3.m128i_i64,
          *(double *)a4.m128i_i64);
        goto LABEL_177;
      }
      if ( (*(_BYTE *)(a2 + 80) & 1) == 0 )
        goto LABEL_173;
      if ( (*(_BYTE *)(a2 + 64) & 1) != 0 )
      {
        v9 = *(_QWORD *)(a2 + 120);
        a6 = *(_QWORD *)(a2 + 136);
        *(_QWORD *)&v7 = *(_QWORD *)(a2 + 152);
        *((_QWORD *)&v7 + 1) = *(_QWORD *)(a2 + 168);
        v84.m128i_i64[0] = *(_QWORD *)(a2 + 72);
        v85 = *(_QWORD *)(a2 + 88);
        v23 = HIDWORD(v12);
        v22 = v12 & 0xFFFFFF0000000000LL;
        v20 = 0x8000000000000006LL;
        v21 = 1;
        a2 = v84.m128i_i64[0];
        goto LABEL_127;
      }
      goto LABEL_176;
    case 6:
      if ( (*(_BYTE *)(a2 + 346) & 1) != 0 )
      {
        *(_QWORD *)&v7 = *(_QWORD *)(a2 + 371);
        a6 = *(_QWORD *)(a2 + 363);
        v27 = *(_QWORD *)(a2 + 347);
        v9 = *(_QWORD *)(a2 + 355);
        if ( (*(_BYTE *)(a2 + 112) & 1) == 0 )
        {
LABEL_36:
          <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(
            &v83,
            aRa_0,
            2LL,
            *(double *)a3.m128i_i64,
            *(double *)a4.m128i_i64);
          goto LABEL_177;
        }
      }
      else
      {
        v27 = 0LL;
        v9 = 0LL;
        a6 = 0LL;
        *(_QWORD *)&v7 = 0LL;
        if ( (*(_BYTE *)(a2 + 112) & 1) == 0 )
          goto LABEL_36;
      }
      if ( (*(_BYTE *)(a2 + 128) & 1) == 0 )
      {
LABEL_135:
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(
          &v83,
          aRb_0,
          2LL,
          *(double *)a3.m128i_i64,
          *(double *)a4.m128i_i64);
        goto LABEL_177;
      }
      if ( (*(_BYTE *)(a2 + 96) & 1) == 0 )
      {
LABEL_21:
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(
          &v83,
          aPtr_0,
          3LL,
          *(double *)a3.m128i_i64,
          *(double *)a4.m128i_i64);
        goto LABEL_177;
      }
      if ( (*(_BYTE *)(a2 + 208) & 1) == 0 )
      {
LABEL_169:
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(
          &v83,
          aLen_0,
          3LL,
          *(double *)a3.m128i_i64,
          *(double *)a4.m128i_i64);
        goto LABEL_177;
      }
      if ( (*(_BYTE *)(a2 + 313) & 1) == 0 )
      {
LABEL_167:
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(
          &v83,
          aDigest_0,
          6LL,
          *(double *)a3.m128i_i64,
          *(double *)a4.m128i_i64);
        goto LABEL_168;
      }
      *((_QWORD *)&v7 + 1) = *(_QWORD *)(a2 + 120);
      v65 = *(_QWORD *)(a2 + 136);
      v84.m128i_i64[0] = *(_QWORD *)(v10 + 104);
      v87 = *(_QWORD *)(v10 + 216);
      v89 = *(_QWORD *)(v10 + 330);
      v66 = *(_QWORD *)(v10 + 338);
      v67 = *(_BYTE *)(v10 + 329);
      v68 = *(_QWORD *)(v10 + 321);
      v69 = *(_DWORD *)(v10 + 314);
      *(_DWORD *)((char *)&v95 + 3) = *(_DWORD *)(v10 + 317);
      LODWORD(v95) = v69;
      *(_QWORD *)((char *)&v95 + 7) = v68;
      HIBYTE(v95) = v67;
      v12 = *(_QWORD *)(v10 + 256);
      if ( v12 == 0x8000000000000000LL )
      {
LABEL_44:
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(
          &v83,
          aData_0,
          4LL,
          *(double *)a3.m128i_i64,
          *(double *)a4.m128i_i64);
        v43 = v83.m256i_i64[2];
        v44 = *(_OWORD *)v83.m256i_i8;
        *(_QWORD *)(a1 + 8) = 0LL;
        *(_OWORD *)(a1 + 16) = v44;
        *(_QWORD *)(a1 + 32) = v43;
        *(_QWORD *)a1 = 0x800000000000000ELL;
        return a1;
      }
      v86 = v66;
      v13 = *(_QWORD *)(v10 + 264);
      if ( (*(_BYTE *)(v10 + 80) & 1) != 0 )
      {
        if ( (*(_BYTE *)(v10 + 64) & 1) != 0 )
        {
          v90 = *(_QWORD *)(v10 + 72);
          v91 = *(_QWORD *)(v10 + 88);
          v8 = *((_QWORD *)&v95 + 1);
          v88 = v95;
          v23 = HIDWORD(v12);
          v22 = v12 & 0xFFFFFF0000000000LL;
          a4 = _mm_unpacklo_epi64(_mm_loadu_si128((const __m128i *)(v10 + 272)), (__m128i)v27);
          v20 = 0x8000000000000007LL;
          v21 = 0;
          v85 = v65;
LABEL_184:
          a2 = v84.m128i_i64[0];
          a7 = v86;
LABEL_127:
          *(_QWORD *)a1 = v20;
          *(_QWORD *)(a1 + 8) = v22 | ((unsigned __int64)(unsigned __int8)v23 << 32) | (unsigned int)v12;
          *(_QWORD *)(a1 + 16) = v13;
          *(__m128i *)(a1 + 24) = a4;
          *(_QWORD *)(a1 + 40) = v9;
          *(_QWORD *)(a1 + 48) = a6;
          *(_OWORD *)(a1 + 56) = v7;
          *(_QWORD *)(a1 + 72) = v85;
          *(_QWORD *)(a1 + 80) = a2;
          *(_QWORD *)(a1 + 88) = v87;
          *(_QWORD *)(a1 + 96) = v88;
          *(_QWORD *)(a1 + 104) = v8;
          *(_QWORD *)(a1 + 112) = v89;
          *(_QWORD *)(a1 + 120) = a7;
          *(_QWORD *)(a1 + 128) = v91;
          *(_QWORD *)(a1 + 136) = v90;
          *(_QWORD *)(a1 + 144) = v92;
          *(__m128i *)(a1 + 152) = v107;
          if ( !v21 )
            return a1;
          goto LABEL_180;
        }
LABEL_185:
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(
          &v83,
          aIs_0,
          2LL,
          *(double *)a3.m128i_i64,
          *(double *)a4.m128i_i64);
      }
      else
      {
LABEL_163:
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(
          &v83,
          aPc_0,
          2LL,
          *(double *)a3.m128i_i64,
          *(double *)a4.m128i_i64);
      }
      v82 = v83.m256i_i64[0];
      *(_OWORD *)(a1 + 24) = *(_OWORD *)&v83.m256i_u64[1];
      *(_QWORD *)(a1 + 8) = 0LL;
      *(_QWORD *)(a1 + 16) = v82;
      *(_QWORD *)a1 = 0x800000000000000ELL;
      core::ptr::drop_in_place<rustls::msgs::base::Payload>(v12, v13);
      return a1;
    case 7:
      v12 = 0LL;
      if ( (*(_BYTE *)(a2 + 346) & 1) != 0 )
      {
        v12 = *(_QWORD *)(a2 + 347);
        v13 = *(_QWORD *)(a2 + 355);
        a4 = _mm_loadu_si128((const __m128i *)(a2 + 363));
        if ( (*(_BYTE *)(a2 + 379) & 1) == 0 )
        {
LABEL_27:
          <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(
            &v83,
            aTo_0,
            2LL,
            *(double *)a3.m128i_i64,
            *(double *)a4.m128i_i64);
          goto LABEL_168;
        }
      }
      else
      {
        v13 = 0LL;
        a4 = 0LL;
        if ( (*(_BYTE *)(a2 + 379) & 1) == 0 )
          goto LABEL_27;
      }
      v7 = *(_OWORD *)(a2 + 396);
      v51 = *(_BYTE *)(a2 + 395);
      v52 = *(_QWORD *)(a2 + 387);
      v53 = *(_DWORD *)(v10 + 380);
      *(_DWORD *)((char *)&v96 + 3) = *(_DWORD *)(v10 + 383);
      LODWORD(v96) = v53;
      *(_QWORD *)((char *)&v96 + 7) = v52;
      HIBYTE(v96) = v51;
      if ( (*(_BYTE *)(v10 + 32) & 1) == 0 )
        goto LABEL_149;
      if ( (*(_BYTE *)(v10 + 280) & 1) == 0 )
        goto LABEL_150;
      v8 = *(_QWORD *)(v10 + 40);
      v54 = *(_QWORD *)(v10 + 297);
      v55 = *(_QWORD *)(v10 + 305);
      v56 = *(_BYTE *)(v10 + 296);
      v57 = *(_QWORD *)(v10 + 288);
      v58 = *(_DWORD *)(v10 + 281);
      *(_DWORD *)((char *)&v97 + 3) = *(_DWORD *)(v10 + 284);
      LODWORD(v97) = v58;
      *(_QWORD *)((char *)&v97 + 7) = v57;
      HIBYTE(v97) = v56;
      if ( (*(_BYTE *)(v10 + 80) & 1) == 0 )
        goto LABEL_173;
      if ( (*(_BYTE *)(v10 + 64) & 1) == 0 )
        goto LABEL_176;
      v86 = *(_QWORD *)(v10 + 72);
      v89 = *(_QWORD *)(v10 + 88);
      v23 = HIDWORD(v12);
      v22 = v12 & 0xFFFFFF0000000000LL;
      a6 = *((_QWORD *)&v96 + 1);
      v9 = v96;
      v87 = v54;
      v85 = v97;
      v88 = v55;
      v84.m128i_i64[0] = *((_QWORD *)&v97 + 1);
      v20 = 0x8000000000000008LL;
      goto LABEL_112;
    case 8:
      v12 = 0LL;
      if ( (*(_BYTE *)(a2 + 346) & 1) != 0 )
      {
        v12 = *(_QWORD *)(a2 + 347);
        v13 = *(_QWORD *)(a2 + 355);
        a4 = _mm_loadu_si128((const __m128i *)(a2 + 363));
        if ( (*(_BYTE *)(a2 + 412) & 1) == 0 )
        {
LABEL_47:
          <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(
            &v83,
            aToAddress,
            10LL,
            *(double *)a3.m128i_i64,
            *(double *)a4.m128i_i64);
          goto LABEL_168;
        }
      }
      else
      {
        v13 = 0LL;
        a4 = 0LL;
        if ( (*(_BYTE *)(a2 + 412) & 1) == 0 )
          goto LABEL_47;
      }
      v7 = *(_OWORD *)(a2 + 429);
      v70 = *(_BYTE *)(a2 + 428);
      v71 = *(_QWORD *)(a2 + 420);
      v72 = *(_DWORD *)(v10 + 413);
      *(_DWORD *)((char *)&v98 + 3) = *(_DWORD *)(v10 + 416);
      LODWORD(v98) = v72;
      *(_QWORD *)((char *)&v98 + 7) = v71;
      HIBYTE(v98) = v70;
      if ( (*(_BYTE *)(v10 + 32) & 1) == 0 )
      {
LABEL_149:
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(
          &v83,
          aAmount_0,
          6LL,
          *(double *)a3.m128i_i64,
          *(double *)a4.m128i_i64);
LABEL_177:
        v25 = v83.m256i_i64[0];
        v26 = *(_OWORD *)&v83.m256i_u64[1];
LABEL_178:
        *(_OWORD *)(a1 + 24) = v26;
        *(_QWORD *)(a1 + 8) = 0LL;
        *(_QWORD *)(a1 + 16) = v25;
        goto LABEL_179;
      }
      if ( (*(_BYTE *)(v10 + 280) & 1) != 0 )
      {
        v8 = *(_QWORD *)(v10 + 40);
        v73 = *(_QWORD *)(v10 + 297);
        v74 = *(_QWORD *)(v10 + 305);
        v75 = *(_BYTE *)(v10 + 296);
        v76 = *(_QWORD *)(v10 + 288);
        v77 = *(_DWORD *)(v10 + 281);
        *(_DWORD *)((char *)&v99 + 3) = *(_DWORD *)(v10 + 284);
        LODWORD(v99) = v77;
        *(_QWORD *)((char *)&v99 + 7) = v76;
        HIBYTE(v99) = v75;
        if ( (*(_BYTE *)(v10 + 80) & 1) != 0 )
        {
          if ( (*(_BYTE *)(v10 + 64) & 1) != 0 )
          {
            v86 = *(_QWORD *)(v10 + 72);
            v89 = *(_QWORD *)(v10 + 88);
            v23 = HIDWORD(v12);
            v22 = v12 & 0xFFFFFF0000000000LL;
            a6 = *((_QWORD *)&v98 + 1);
            v9 = v98;
            v87 = v73;
            v85 = v99;
            v88 = v74;
            v84.m128i_i64[0] = *((_QWORD *)&v99 + 1);
            v20 = 0x8000000000000009LL;
LABEL_112:
            v21 = 1;
LABEL_113:
            a7 = v86;
            a2 = v84.m128i_i64[0];
            goto LABEL_127;
          }
LABEL_176:
          <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(
            &v83,
            aIs_0,
            2LL,
            *(double *)a3.m128i_i64,
            *(double *)a4.m128i_i64);
        }
        else
        {
LABEL_173:
          <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(
            &v83,
            aPc_0,
            2LL,
            *(double *)a3.m128i_i64,
            *(double *)a4.m128i_i64);
        }
        goto LABEL_177;
      }
LABEL_150:
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(
        &v83,
        aAssetid_0,
        7LL,
        *(double *)a3.m128i_i64,
        *(double *)a4.m128i_i64);
LABEL_168:
      v78 = v83.m256i_i8[0];
      *(_DWORD *)(a1 + 36) = v83.m256i_i32[5];
      *(_DWORD *)(a1 + 33) = *(__int32 *)((char *)&v83.m256i_i32[4] + 1);
      v79 = *(_OWORD *)&v83.m256i_i8[1];
      *(_QWORD *)(a1 + 8) = 0LL;
      *(_BYTE *)(a1 + 16) = v78;
      *(_OWORD *)(a1 + 17) = v79;
LABEL_179:
      *(_QWORD *)a1 = 0x800000000000000ELL;
LABEL_180:
      core::ptr::drop_in_place<core::option::Option<fuel_core_client::client::schema::primitives::HexString>>(
        *(_QWORD *)(v10 + 256),
        *(_QWORD *)(v10 + 264));
      return a1;
    case 9:
      if ( (*(_BYTE *)(a2 + 224) & 1) == 0 )
      {
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(
          &v83,
          aResult_0,
          6LL,
          *(double *)a3.m128i_i64,
          *(double *)a4.m128i_i64);
        goto LABEL_177;
      }
      if ( (*(_BYTE *)(a2 + 240) & 1) == 0 )
      {
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(
          &v83,
          aGasUsed,
          8LL,
          *(double *)a3.m128i_i64,
          *(double *)a4.m128i_i64);
        goto LABEL_177;
      }
      v13 = *(_QWORD *)(a2 + 232);
      LODWORD(v12) = 3;
      if ( v13 < 3 )
        v12 = *(_QWORD *)(a2 + 232);
      a4 = _mm_loadl_epi64((const __m128i *)(a2 + 248));
      v20 = 0x800000000000000ALL;
      v21 = 1;
      v22 = 0LL;
      LOBYTE(v23) = 0;
      goto LABEL_127;
    case 0xA:
      if ( (*(_BYTE *)(a2 + 445) & 1) == 0 )
      {
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(
          &v83,
          aSender_0,
          6LL,
          *(double *)a3.m128i_i64,
          *(double *)a4.m128i_i64);
        goto LABEL_168;
      }
      v9 = *(_QWORD *)(a2 + 462);
      a6 = *(_QWORD *)(a2 + 470);
      inserted = _mm_insert_epi16(_mm_cvtsi32_si128(*(_DWORD *)(a2 + 446)), *(unsigned __int16 *)(a2 + 450), 2);
      a3 = _mm_loadl_epi64((const __m128i *)(a2 + 453));
      v105 = inserted;
      if ( (*(_BYTE *)(a2 + 478) & 1) == 0 )
      {
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(
          &v83,
          aRecipient_0,
          9LL,
          *(double *)a3.m128i_i64,
          *(double *)inserted.m128i_i64);
        goto LABEL_168;
      }
      a4 = _mm_cvtsi32_si128(v105.m128i_u32[0]);
      v29 = *(unsigned __int8 *)(a2 + 452);
      v30 = *(unsigned __int8 *)(a2 + 461);
      v31 = *(_QWORD *)(a2 + 495);
      v32 = *(_QWORD *)(a2 + 503);
      v33 = *(_BYTE *)(a2 + 494);
      v34 = *(_QWORD *)(v10 + 486);
      v35 = *(_DWORD *)(v10 + 479);
      *(_DWORD *)((char *)&v100 + 3) = *(_DWORD *)(v10 + 482);
      LODWORD(v100) = v35;
      *(_QWORD *)((char *)&v100 + 7) = v34;
      HIBYTE(v100) = v33;
      if ( (*(_BYTE *)(v10 + 32) & 1) == 0 )
        goto LABEL_149;
      if ( (*(_BYTE *)(v10 + 511) & 1) == 0 )
      {
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(
          &v83,
          aNonce_0,
          5LL,
          *(double *)a3.m128i_i64,
          *(double *)a4.m128i_i64);
        goto LABEL_168;
      }
      v36 = *(_QWORD *)(v10 + 40);
      v89 = *(_QWORD *)(v10 + 528);
      v86 = *(_QWORD *)(v10 + 536);
      v37 = *(_BYTE *)(v10 + 527);
      v38 = *(_QWORD *)(v10 + 519);
      v39 = *(_DWORD *)(v10 + 512);
      *(_DWORD *)((char *)&v101 + 3) = *(_DWORD *)(v10 + 515);
      LODWORD(v101) = v39;
      *(_QWORD *)((char *)&v101 + 7) = v38;
      HIBYTE(v101) = v37;
      if ( (*(_BYTE *)(v10 + 208) & 1) == 0 )
        goto LABEL_169;
      if ( (*(_BYTE *)(v10 + 313) & 1) == 0 )
      {
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(
          &v83,
          aDigest_0,
          6LL,
          *(double *)a3.m128i_i64,
          *(double *)a4.m128i_i64);
        v80 = v83.m256i_i8[0];
        v106[0] = *(_OWORD *)&v83.m256i_i8[1];
        *(_DWORD *)(a1 + 36) = v83.m256i_i32[5];
        *(_DWORD *)(a1 + 33) = *(__int32 *)((char *)&v83.m256i_i32[4] + 1);
        v108 = v106[0];
        *(_OWORD *)(a1 + 17) = v106[0];
        *(_QWORD *)(a1 + 8) = 0LL;
        *(_BYTE *)(a1 + 16) = v80;
        goto LABEL_179;
      }
      v84.m128i_i64[0] = v32;
      v91 = *(_QWORD *)(v10 + 216);
      v40 = *(_BYTE *)(v10 + 329);
      v41 = *(_QWORD *)(v10 + 321);
      v42 = *(_DWORD *)(v10 + 314);
      *(_DWORD *)((char *)&v102 + 3) = *(_DWORD *)(v10 + 317);
      LODWORD(v102) = v42;
      *(_QWORD *)((char *)&v102 + 7) = v41;
      HIBYTE(v102) = v40;
      v20 = *(_QWORD *)(v10 + 256);
      if ( v20 == 0x8000000000000000LL )
        goto LABEL_44;
      a4 = _mm_or_si128(
             _mm_slli_si128(_mm_cvtsi32_si128(v30), 15),
             _mm_and_si128(
               _mm_or_si128(
                 _mm_slli_si128(a3, 7),
                 _mm_andnot_si128(
                   _mm_load_si128(byte_89040),
                   _mm_insert_epi16(_mm_insert_epi16(a4, v105.m128i_u8[4] | (v105.m128i_u8[5] << 8), 2), v29, 3))),
               (__m128i)xmmword_88FA0));
      v12 = *(_QWORD *)(v10 + 264);
      v87 = v36;
      v85 = v31;
      v13 = *(_QWORD *)(v10 + 272);
      v7 = v100;
      v8 = *((_QWORD *)&v101 + 1);
      v88 = v101;
      v92 = *((_QWORD *)&v102 + 1);
      v90 = v102;
      v107 = _mm_loadu_si128((const __m128i *)(v10 + 330));
      v23 = HIDWORD(v12);
      v22 = v12 & 0xFFFFFF0000000000LL;
      v21 = 0;
      goto LABEL_184;
    case 0xB:
      if ( (*(_BYTE *)(a2 + 577) & 1) == 0 )
        goto LABEL_48;
      a4 = _mm_loadu_si128((const __m128i *)(a2 + 594));
      v14 = *(_BYTE *)(a2 + 593);
      v15 = *(_QWORD *)(a2 + 585);
      v16 = *(_DWORD *)(a2 + 578);
      *(_DWORD *)((char *)&v103 + 3) = *(_DWORD *)(a2 + 581);
      LODWORD(v103) = v16;
      *(_QWORD *)((char *)&v103 + 7) = v15;
      HIBYTE(v103) = v14;
      if ( (*(_BYTE *)(a2 + 346) & 1) != 0 )
      {
        v7 = *(_OWORD *)(a2 + 363);
        v9 = *(_QWORD *)(a2 + 347);
        a6 = *(_QWORD *)(a2 + 355);
      }
      else
      {
        v84 = a4;
        core::array::<impl core::default::Default for [T; 32]>::default(&v83);
        a4 = _mm_load_si128(&v84);
        a6 = v83.m256i_i64[1];
        v9 = v83.m256i_i64[0];
        v7 = *(_OWORD *)&v83.m256i_u64[2];
      }
      if ( (*(_BYTE *)(a2 + 192) & 1) == 0 )
        goto LABEL_30;
      if ( (*(_BYTE *)(a2 + 80) & 1) == 0 )
        goto LABEL_173;
      if ( (*(_BYTE *)(a2 + 64) & 1) == 0 )
        goto LABEL_176;
      v85 = *(_QWORD *)(a2 + 200);
      v87 = *(_QWORD *)(a2 + 72);
      v84.m128i_i64[0] = *(_QWORD *)(a2 + 88);
      v13 = *((_QWORD *)&v103 + 1);
      LODWORD(v12) = v103;
      v23 = DWORD1(v103);
      v22 = v103 & 0xFFFFFF0000000000LL;
      v20 = 0x800000000000000CLL;
      goto LABEL_126;
    case 0xC:
      if ( (*(_BYTE *)(a2 + 577) & 1) == 0 )
      {
LABEL_48:
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(
          &v83,
          aSubId_0,
          6LL,
          *(double *)a3.m128i_i64,
          *(double *)a4.m128i_i64);
        goto LABEL_168;
      }
      a4 = _mm_loadu_si128((const __m128i *)(a2 + 594));
      v17 = *(_BYTE *)(a2 + 593);
      v18 = *(_QWORD *)(a2 + 585);
      v19 = *(_DWORD *)(a2 + 578);
      *(_DWORD *)((char *)&v104 + 3) = *(_DWORD *)(a2 + 581);
      LODWORD(v104) = v19;
      *(_QWORD *)((char *)&v104 + 7) = v18;
      HIBYTE(v104) = v17;
      if ( (*(_BYTE *)(a2 + 346) & 1) != 0 )
      {
        v7 = *(_OWORD *)(a2 + 363);
        v9 = *(_QWORD *)(a2 + 347);
        a6 = *(_QWORD *)(a2 + 355);
      }
      else
      {
        v84 = a4;
        core::array::<impl core::default::Default for [T; 32]>::default(&v83);
        a4 = _mm_load_si128(&v84);
        a6 = v83.m256i_i64[1];
        v9 = v83.m256i_i64[0];
        v7 = *(_OWORD *)&v83.m256i_u64[2];
      }
      if ( (*(_BYTE *)(a2 + 192) & 1) == 0 )
      {
LABEL_30:
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(
          &v83,
          aVal_0,
          3LL,
          *(double *)a3.m128i_i64,
          *(double *)a4.m128i_i64);
        goto LABEL_177;
      }
      if ( (*(_BYTE *)(a2 + 80) & 1) == 0 )
        goto LABEL_173;
      if ( (*(_BYTE *)(a2 + 64) & 1) == 0 )
        goto LABEL_176;
      v85 = *(_QWORD *)(a2 + 200);
      v87 = *(_QWORD *)(a2 + 72);
      v84.m128i_i64[0] = *(_QWORD *)(a2 + 88);
      v13 = *((_QWORD *)&v104 + 1);
      LODWORD(v12) = v104;
      v23 = DWORD1(v104);
      v22 = v104 & 0xFFFFFF0000000000LL;
      v20 = 0x800000000000000DLL;
LABEL_126:
      v21 = 1;
      a2 = v84.m128i_i64[0];
      goto LABEL_127;
  }
}