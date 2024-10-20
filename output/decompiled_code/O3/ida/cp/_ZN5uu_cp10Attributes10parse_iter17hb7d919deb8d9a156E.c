__int64 __fastcall uu_cp::Attributes::parse_iter(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdi
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 v6; // rbx
  __int64 v7; // r15
  __int64 v8; // rbp
  unsigned int v9; // esi
  unsigned int v10; // r8d
  unsigned int v11; // r9d
  unsigned int v12; // r10d
  unsigned int v13; // r11d
  _BOOL8 v14; // rax
  bool v15; // zf
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  bool v18; // zf
  __int64 v19; // rdx
  __int64 v20; // rdx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  __int64 v23; // r14
  char v24; // di
  char v25; // r10
  char v26; // r11
  char v27; // r9
  char v28; // r8
  char v29; // r13
  char *v30; // rcx
  __int64 v31; // rdi
  char v32; // r12
  char v33; // bl
  char v34; // r15
  char v35; // r14
  char v36; // bp
  bool v37; // al
  bool v38; // al
  bool v39; // dl
  bool v40; // r14
  bool v41; // cl
  bool v42; // di
  __int64 v43; // rdi
  char v44; // r14
  char v45; // r15
  char v46; // r12
  char v47; // bl
  __int64 result; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  _BOOL8 v54; // rax
  __int128 v55; // xmm0
  __int128 v56; // xmm1
  unsigned __int8 v57; // [rsp+3h] [rbp-195h]
  unsigned __int8 v58; // [rsp+4h] [rbp-194h]
  unsigned __int8 v59; // [rsp+5h] [rbp-193h]
  char v60; // [rsp+6h] [rbp-192h]
  char v61; // [rsp+7h] [rbp-191h]
  unsigned __int8 v62; // [rsp+7h] [rbp-191h]
  char v63; // [rsp+7h] [rbp-191h]
  __int64 v64; // [rsp+8h] [rbp-190h] BYREF
  int v65; // [rsp+10h] [rbp-188h] BYREF
  int v66; // [rsp+14h] [rbp-184h]
  int v67; // [rsp+18h] [rbp-180h]
  int v68; // [rsp+1Ch] [rbp-17Ch]
  __int64 v69; // [rsp+20h] [rbp-178h]
  __int64 v70; // [rsp+28h] [rbp-170h]
  __int64 v71; // [rsp+30h] [rbp-168h]
  __int64 v72; // [rsp+38h] [rbp-160h]
  _BOOL8 v73; // [rsp+40h] [rbp-158h]
  __int64 v74; // [rsp+48h] [rbp-150h]
  __int64 v75; // [rsp+50h] [rbp-148h]
  __int64 v76; // [rsp+58h] [rbp-140h]
  __int64 v77; // [rsp+60h] [rbp-138h]
  __int64 v78; // [rsp+68h] [rbp-130h]
  __int64 v79; // [rsp+70h] [rbp-128h]
  _BYTE v80[12]; // [rsp+78h] [rbp-120h] BYREF
  __int64 v81; // [rsp+84h] [rbp-114h]
  int v82; // [rsp+8Ch] [rbp-10Ch]
  __int64 v83; // [rsp+90h] [rbp-108h]
  __int64 v84; // [rsp+98h] [rbp-100h]
  __int64 v85; // [rsp+A0h] [rbp-F8h]
  __int64 v86; // [rsp+A8h] [rbp-F0h]
  __int64 v87; // [rsp+B0h] [rbp-E8h]
  __int64 v88; // [rsp+B8h] [rbp-E0h]
  __int64 v89; // [rsp+C0h] [rbp-D8h] BYREF
  __int64 v90; // [rsp+C8h] [rbp-D0h]
  __int64 v91; // [rsp+D0h] [rbp-C8h]
  _QWORD v92[2]; // [rsp+D8h] [rbp-C0h] BYREF
  _QWORD v93[3]; // [rsp+E8h] [rbp-B0h] BYREF
  char v94; // [rsp+100h] [rbp-98h]
  _QWORD v95[6]; // [rsp+108h] [rbp-90h] BYREF
  __int128 v96; // [rsp+138h] [rbp-60h]
  _OWORD v97[5]; // [rsp+148h] [rbp-50h]

  v84 = a1;
  v2 = *a2;
  v3 = a2[1];
  v4 = a2[2];
  v87 = a2[3];
  if ( v3 == v87 )
  {
    v74 = 0LL;
    LOBYTE(v8) = 0;
    v69 = 0LL;
    v77 = 0LL;
    v72 = 0LL;
    v76 = 0LL;
    v71 = 0LL;
    LOBYTE(v7) = 0;
    v70 = 0LL;
    LOBYTE(v6) = 0;
    v73 = 0LL;
    LOBYTE(v5) = 0;
    if ( v4 )
LABEL_61:
      _rust_dealloc(v2, 8 * v4, 8LL);
  }
  else
  {
    v83 = v2;
    v78 = v4;
    v5 = 0LL;
    v73 = 0LL;
    v6 = 0LL;
    v70 = 0LL;
    v7 = 0LL;
    v71 = 0LL;
    v76 = 0LL;
    v72 = 0LL;
    v77 = 0LL;
    v69 = 0LL;
    v8 = 0LL;
    v74 = 0LL;
    do
    {
      v88 = v3;
      alloc::str::<impl str>::to_lowercase(&v89, *(_QWORD *)(*(_QWORD *)v3 + 8LL), *(_QWORD *)(*(_QWORD *)v3 + 16LL));
      v23 = v90;
      v86 = v6;
      if ( v91 == 3 )
      {
        if ( *(_WORD *)v90 ^ 0x6C61 | *(unsigned __int8 *)(v90 + 2) ^ 0x6C )
        {
LABEL_28:
          v75 = v8;
          v79 = v5;
          v93[0] = 0LL;
          v93[1] = v90;
          v93[2] = v91;
          v94 = 1;
          v92[0] = v93;
          v92[1] = <os_display::Quoted as core::fmt::Display>::fmt;
          v95[0] = &off_155290;
          v95[1] = 1LL;
          v95[4] = 0LL;
          v95[2] = v92;
          v95[3] = 1LL;
          alloc::fmt::format::format_inner(v80, v95);
          v60 = v80[0];
          v24 = v80[1];
          v25 = v80[2];
          v58 = v80[3];
          v26 = v80[4];
          v59 = v80[5];
          v68 = v80[6];
          v66 = v80[7];
          v27 = v80[8];
          v57 = v80[9];
          v28 = v80[10];
          v67 = v80[11];
          *(_QWORD *)&v96 = v81;
          DWORD2(v96) = v82;
          v85 = 9LL;
          v29 = 0;
        }
        else
        {
          v75 = v8;
          v79 = v5;
          v85 = 13LL;
          v27 = 1;
          v66 = 0;
          v68 = 0;
          v59 = 1;
          v26 = 1;
          v58 = 1;
          v25 = 1;
          v24 = 1;
          v60 = 1;
          v29 = 1;
          v57 = 1;
          v28 = 1;
          v67 = 0;
        }
        if ( v89 )
        {
          v61 = v24;
          v31 = v23;
          v32 = v26;
          v33 = v7;
          v34 = v27;
          v35 = v25;
          v36 = v28;
          _rust_dealloc(v31, v89, 1LL);
          v24 = v61;
          v28 = v36;
          v25 = v35;
          v27 = v34;
          LOBYTE(v7) = v33;
          v26 = v32;
        }
        if ( !v29 )
        {
          v55 = v96;
          v56 = v97[0];
          result = v84;
          *(_OWORD *)(v84 + 48) = *(_OWORD *)((char *)v97 + 12);
          *(_OWORD *)(result + 36) = v56;
          *(_OWORD *)(result + 20) = v55;
          *(_QWORD *)result = v85;
          *(_BYTE *)(result + 8) = v60;
          *(_BYTE *)(result + 9) = v24;
          *(_BYTE *)(result + 10) = v25;
          *(_BYTE *)(result + 11) = v58;
          *(_BYTE *)(result + 12) = v26;
          *(_BYTE *)(result + 13) = v59;
          *(_BYTE *)(result + 14) = v68;
          *(_BYTE *)(result + 15) = v66;
          *(_BYTE *)(result + 16) = v27;
          *(_BYTE *)(result + 17) = v57;
          *(_BYTE *)(result + 18) = v28;
          *(_BYTE *)(result + 19) = v67;
          if ( v78 )
            return _rust_dealloc(v83, 8 * v78, 8LL);
          return result;
        }
        LOBYTE(v5) = v79;
        LOBYTE(v8) = v75;
        LOBYTE(v6) = v86;
      }
      else
      {
        v65 = 0;
        v64 = 0LL;
        switch ( v91 )
        {
          case 4LL:
            v30 = (char *)&v64 + 2;
            if ( *(_DWORD *)v90 != 1701080941 )
            {
              v30 = (char *)&v65;
              if ( *(_DWORD *)v90 != 1802398060 )
                goto LABEL_28;
            }
            break;
          case 5LL:
            v30 = (char *)&v65;
            if ( *(_DWORD *)v90 ^ 0x6B6E696C | *(unsigned __int8 *)(v90 + 4) ^ 0x73 )
            {
              v30 = (char *)&v65 + 2;
              if ( *(_DWORD *)v90 ^ 0x74746178 | *(unsigned __int8 *)(v90 + 4) ^ 0x72 )
                goto LABEL_28;
            }
            break;
          case 7LL:
            v30 = (char *)&v64 + 6;
            if ( *(_DWORD *)v90 ^ 0x746E6F63 | *(_DWORD *)(v90 + 3) ^ 0x74786574 )
              goto LABEL_28;
            break;
          case 9LL:
            v30 = (char *)&v64;
            if ( *(_QWORD *)v90 ^ 0x69687372656E776FLL | *(unsigned __int8 *)(v90 + 8) ^ 0x70LL )
              goto LABEL_28;
            break;
          case 10LL:
            v30 = (char *)&v64 + 4;
            if ( *(_QWORD *)v90 ^ 0x6D617473656D6974LL | *(unsigned __int16 *)(v90 + 8) ^ 0x7370LL )
              goto LABEL_28;
            break;
          default:
            goto LABEL_28;
        }
        *(_WORD *)v30 = 257;
        v60 = v64;
        v24 = BYTE1(v64);
        v25 = BYTE2(v64);
        v58 = BYTE3(v64);
        v26 = BYTE4(v64);
        v59 = BYTE5(v64);
        v68 = BYTE6(v64);
        v66 = HIBYTE(v64);
        v27 = v65;
        v57 = BYTE1(v65);
        v28 = BYTE2(v65);
        v67 = HIBYTE(v65);
        if ( v89 )
        {
          v63 = BYTE1(v64);
          v43 = v23;
          v44 = BYTE4(v64);
          v75 = v7;
          v45 = v65;
          v46 = BYTE2(v64);
          v47 = BYTE2(v65);
          _rust_dealloc(v43, v89, 1LL);
          v24 = v63;
          v28 = v47;
          v25 = v46;
          v27 = v45;
          LOBYTE(v7) = v75;
          LOBYTE(v6) = v86;
          v26 = v44;
        }
      }
      v37 = v73;
      if ( v60 != 0 && v73 )
        v37 = (_BYTE)v6 - 1 == v24;
      LOBYTE(v75) = v37;
      v38 = v72;
      if ( (_BYTE)v68 != 0 && (v72 & 1) != 0 )
        v38 = (_BYTE)v77 - 1 == (_BYTE)v66;
      LOBYTE(v79) = v38;
      v39 = v71;
      if ( v26 != 0 && (v71 & 1) != 0 )
        v39 = (_BYTE)v76 - 1 == v59;
      v40 = v70;
      if ( v25 != 0 && (v70 & 1) != 0 )
        v40 = (_BYTE)v7 - 1 == v58;
      v41 = v69;
      if ( v27 != 0 && (v69 & 1) != 0 )
        v41 = (_BYTE)v8 - 1 == v57;
      v62 = v24;
      v42 = v74;
      if ( v28 != 0 && (v74 & 1) != 0 )
        v42 = (_BYTE)v5 - 1 == (_BYTE)v67;
      v3 = v88 + 8;
      v9 = v28 != 0;
      v10 = v27 != 0;
      v11 = v25 != 0;
      v12 = v26 != 0;
      v13 = (_BYTE)v68 != 0;
      v14 = v60 != 0;
      v15 = !v41;
      if ( v41 )
        v10 = (unsigned __int8)v69;
      v16 = (unsigned __int8)v8;
      v8 = v57;
      if ( !v15 )
        v8 = v16;
      if ( v40 )
        v11 = (unsigned __int8)v70;
      v17 = (unsigned __int8)v7;
      v7 = v58;
      if ( v40 )
        v7 = v17;
      v18 = !v39;
      if ( v39 )
        v12 = (unsigned __int8)v71;
      v19 = v59;
      if ( !v18 )
        v19 = (unsigned __int8)v76;
      v76 = v19;
      if ( (v79 & 1) != 0 )
        v13 = (unsigned __int8)v72;
      v20 = (unsigned __int8)v66;
      if ( (v79 & 1) != 0 )
        v20 = (unsigned __int8)v77;
      v77 = v20;
      if ( (v75 & 1) != 0 )
        v14 = v73;
      v21 = (unsigned __int8)v6;
      v6 = v62;
      if ( (v75 & 1) != 0 )
        v6 = v21;
      v22 = (unsigned __int8)v5;
      v5 = (unsigned __int8)v67;
      if ( v42 )
      {
        v5 = v22;
        v9 = (unsigned __int8)v74;
      }
      v69 = v10;
      v70 = v11;
      v71 = v12;
      v72 = v13;
      v73 = v14;
      v74 = v9;
    }
    while ( v3 != v87 );
    v49 = v74;
    LOBYTE(v49) = v74 & 1;
    v74 = v49;
    v50 = v69;
    LOBYTE(v50) = v69 & 1;
    v69 = v50;
    v51 = v72;
    LOBYTE(v51) = v72 & 1;
    v72 = v51;
    v52 = v71;
    LOBYTE(v52) = v71 & 1;
    v71 = v52;
    v53 = v70;
    LOBYTE(v53) = v70 & 1;
    v70 = v53;
    v54 = v73;
    LOBYTE(v54) = v73;
    v73 = v54;
    v4 = v78;
    v2 = v83;
    if ( v78 )
      goto LABEL_61;
  }
  result = v84;
  *(_BYTE *)(v84 + 8) = v73;
  *(_BYTE *)(result + 9) = v6;
  *(_BYTE *)(result + 10) = v70;
  *(_BYTE *)(result + 11) = v7;
  *(_BYTE *)(result + 12) = v71;
  *(_BYTE *)(result + 13) = v76;
  *(_BYTE *)(result + 14) = v72;
  *(_BYTE *)(result + 15) = v77;
  *(_BYTE *)(result + 16) = v69;
  *(_BYTE *)(result + 17) = v8;
  *(_BYTE *)(result + 18) = v74;
  *(_BYTE *)(result + 19) = v5;
  *(_QWORD *)result = 13LL;
  return result;
}
