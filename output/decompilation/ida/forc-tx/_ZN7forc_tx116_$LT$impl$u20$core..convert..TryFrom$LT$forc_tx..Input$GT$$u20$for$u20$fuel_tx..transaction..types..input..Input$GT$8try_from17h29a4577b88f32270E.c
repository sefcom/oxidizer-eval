__int64 __fastcall forc_tx::<impl core::convert::TryFrom<forc_tx::Input> for fuel_tx::transaction::types::input::Input>::try_from(
        __int64 a1,
        __int128 *a2)
{
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r13
  __int16 v7; // r14
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // r11
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // r9
  __int64 v22; // r8
  __int64 v23; // rbp
  __int64 v24; // r14
  __int64 v25; // r13
  __int64 v26; // r15
  unsigned int v27; // ecx
  unsigned __int64 v28; // rdi
  unsigned __int64 v29; // rax
  __int16 v30; // bp
  __int128 v31; // xmm0
  __int64 v32; // r15
  __int64 v33; // r14
  __int64 v34; // r13
  __int128 v35; // rdi
  __int64 v36; // rax
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // r15
  int v39; // eax
  unsigned __int64 v40; // r15
  __int64 v41; // rcx
  __int64 v42; // rax
  unsigned __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  unsigned __int64 v48; // rbp
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rdi
  unsigned __int64 v51; // rsi
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  unsigned __int64 v56; // rbp
  unsigned __int64 v57; // r14
  unsigned __int64 v58; // rax
  unsigned __int64 v60; // rcx
  __int64 v61; // r14
  unsigned int v62; // [rsp+4h] [rbp-1C4h]
  int v63; // [rsp+8h] [rbp-1C0h]
  unsigned __int64 v64; // [rsp+8h] [rbp-1C0h]
  __int64 v65; // [rsp+8h] [rbp-1C0h]
  unsigned __int64 v66; // [rsp+8h] [rbp-1C0h]
  __int64 v67; // [rsp+10h] [rbp-1B8h]
  unsigned __int64 v68; // [rsp+18h] [rbp-1B0h]
  unsigned __int64 v69; // [rsp+18h] [rbp-1B0h]
  unsigned __int64 v70; // [rsp+18h] [rbp-1B0h]
  unsigned __int64 v71; // [rsp+18h] [rbp-1B0h]
  unsigned __int64 v72; // [rsp+20h] [rbp-1A8h]
  unsigned int v73; // [rsp+28h] [rbp-1A0h]
  __int64 v74; // [rsp+28h] [rbp-1A0h]
  unsigned __int16 v75; // [rsp+30h] [rbp-198h]
  unsigned __int64 v76; // [rsp+30h] [rbp-198h]
  unsigned __int64 v77; // [rsp+38h] [rbp-190h]
  __int64 v78; // [rsp+38h] [rbp-190h]
  unsigned __int64 v79; // [rsp+40h] [rbp-188h]
  __int64 v80; // [rsp+40h] [rbp-188h]
  unsigned __int64 v81; // [rsp+48h] [rbp-180h]
  unsigned __int64 v82; // [rsp+48h] [rbp-180h]
  unsigned __int64 v83; // [rsp+50h] [rbp-178h]
  unsigned __int64 v84; // [rsp+50h] [rbp-178h]
  unsigned __int64 v85; // [rsp+58h] [rbp-170h]
  unsigned __int64 v86; // [rsp+58h] [rbp-170h]
  unsigned __int64 v87; // [rsp+60h] [rbp-168h]
  unsigned __int64 v88; // [rsp+68h] [rbp-160h]
  unsigned __int64 v89; // [rsp+68h] [rbp-160h]
  unsigned __int64 v90; // [rsp+70h] [rbp-158h]
  unsigned __int64 v91; // [rsp+70h] [rbp-158h]
  unsigned __int64 v92; // [rsp+78h] [rbp-150h]
  __int64 v93; // [rsp+78h] [rbp-150h]
  unsigned __int64 v94; // [rsp+80h] [rbp-148h]
  __int16 v95; // [rsp+88h] [rbp-140h]
  unsigned __int64 v96; // [rsp+88h] [rbp-140h]
  unsigned __int64 v97; // [rsp+90h] [rbp-138h]
  unsigned __int64 v98; // [rsp+98h] [rbp-130h]
  unsigned __int64 v99; // [rsp+98h] [rbp-130h]
  unsigned __int64 v100; // [rsp+A0h] [rbp-128h]
  unsigned __int64 v101; // [rsp+A0h] [rbp-128h]
  unsigned __int64 v102; // [rsp+A8h] [rbp-120h]
  unsigned __int64 v103; // [rsp+A8h] [rbp-120h]
  unsigned __int64 v104; // [rsp+B0h] [rbp-118h]
  unsigned __int64 v105; // [rsp+B8h] [rbp-110h] BYREF
  unsigned __int64 v106; // [rsp+C0h] [rbp-108h]
  unsigned __int64 v107; // [rsp+C8h] [rbp-100h]
  unsigned __int64 v108; // [rsp+D0h] [rbp-F8h]
  unsigned __int64 v109; // [rsp+D8h] [rbp-F0h]
  unsigned __int64 v110; // [rsp+E0h] [rbp-E8h]
  unsigned __int64 v111; // [rsp+E8h] [rbp-E0h]
  unsigned __int64 v112; // [rsp+F0h] [rbp-D8h]
  unsigned __int64 v113; // [rsp+F8h] [rbp-D0h]
  __int64 v114; // [rsp+100h] [rbp-C8h]
  unsigned __int64 v115; // [rsp+108h] [rbp-C0h]
  unsigned __int64 v116; // [rsp+110h] [rbp-B8h]
  unsigned __int64 v117; // [rsp+118h] [rbp-B0h]
  unsigned __int64 v118; // [rsp+120h] [rbp-A8h]
  unsigned __int64 v119; // [rsp+128h] [rbp-A0h]
  unsigned __int64 v120; // [rsp+130h] [rbp-98h]
  unsigned __int64 v121; // [rsp+138h] [rbp-90h]
  unsigned __int64 v122; // [rsp+140h] [rbp-88h]
  unsigned __int64 v123; // [rsp+148h] [rbp-80h]
  __int64 v124; // [rsp+150h] [rbp-78h] BYREF
  __int64 v125; // [rsp+158h] [rbp-70h]
  __int64 v126; // [rsp+160h] [rbp-68h]
  __int64 v127; // [rsp+168h] [rbp-60h] BYREF
  __int64 v128; // [rsp+170h] [rbp-58h]
  __int64 v129; // [rsp+178h] [rbp-50h]
  __int128 v130; // [rsp+180h] [rbp-48h] BYREF
  __int64 v131; // [rsp+190h] [rbp-38h]

  v3 = 0x8000000000000000LL;
  v4 = *(_QWORD *)a2 ^ 0x8000000000000000LL;
  v5 = 2LL;
  if ( v4 < 2 )
    v5 = *(_QWORD *)a2 ^ 0x8000000000000000LL;
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      v75 = *((_WORD *)a2 + 56);
      v6 = *(unsigned int *)((char *)a2 + 114) | ((unsigned __int64)*((unsigned __int16 *)a2 + 59) << 32);
      LOWORD(v87) = *((_WORD *)a2 + 60);
      LOWORD(v73) = *((_WORD *)a2 + 61);
      LODWORD(v79) = *((_DWORD *)a2 + 31);
      LODWORD(v67) = *((_DWORD *)a2 + 32);
      LOWORD(v94) = *((_WORD *)a2 + 66);
      LOWORD(v85) = *((_WORD *)a2 + 67);
      v104 = *((_QWORD *)a2 + 17);
      v7 = *((_WORD *)a2 + 72);
      v8 = *((_QWORD *)a2 + 1);
      v9 = *((_QWORD *)a2 + 2);
      v10 = *((_QWORD *)a2 + 3);
      v11 = *((_QWORD *)a2 + 4);
      v12 = *((_QWORD *)a2 + 5);
      v13 = *((_QWORD *)a2 + 6);
      v14 = *((_QWORD *)a2 + 7);
      v15 = *((_QWORD *)a2 + 8);
      v110 = *((unsigned int *)a2 + 26);
      LOWORD(v16) = *((_WORD *)a2 + 54);
      v72 = *((_QWORD *)a2 + 9);
      v63 = *((_DWORD *)a2 + 20);
      LOWORD(v92) = *((_WORD *)a2 + 42);
      v111 = *((unsigned __int16 *)a2 + 43);
      v17 = *((_QWORD *)a2 + 11);
      v18 = *((_QWORD *)a2 + 12);
      v77 = v18;
      v3 = 0x8000000000000002LL;
      LOWORD(v83) = v18;
LABEL_6:
      LOWORD(v62) = v18;
      LODWORD(v97) = v18;
LABEL_11:
      *(_QWORD *)a1 = v3;
      *(_QWORD *)(a1 + 8) = v8;
      *(_QWORD *)(a1 + 16) = v9;
      *(_QWORD *)(a1 + 24) = v10;
      *(_QWORD *)(a1 + 32) = v11;
      *(_QWORD *)(a1 + 40) = v12;
      *(_QWORD *)(a1 + 48) = v13;
      *(_QWORD *)(a1 + 56) = v14;
      *(_QWORD *)(a1 + 64) = v15;
      *(_QWORD *)(a1 + 72) = v72;
      *(_DWORD *)(a1 + 80) = v63;
      *(_WORD *)(a1 + 84) = v92;
      *(_WORD *)(a1 + 86) = v111;
      *(_QWORD *)(a1 + 88) = v17;
      *(_QWORD *)(a1 + 96) = v77;
      *(_DWORD *)(a1 + 104) = v110;
      *(_WORD *)(a1 + 108) = v16;
      *(_WORD *)(a1 + 110) = v83;
      *(_WORD *)(a1 + 112) = v75;
      *(_DWORD *)(a1 + 114) = v6;
      *(_WORD *)(a1 + 118) = WORD2(v6);
      *(_WORD *)(a1 + 120) = v87;
      *(_WORD *)(a1 + 122) = v73;
      *(_DWORD *)(a1 + 124) = v79;
      *(_DWORD *)(a1 + 128) = v67;
      *(_WORD *)(a1 + 132) = v94;
      *(_WORD *)(a1 + 134) = v85;
      *(_QWORD *)(a1 + 136) = v104;
      *(_WORD *)(a1 + 144) = v7;
      *(_WORD *)(a1 + 146) = v62;
      *(_DWORD *)(a1 + 148) = v97;
      *(_QWORD *)(a1 + 152) = v112;
      *(_QWORD *)(a1 + 160) = v121;
      *(_QWORD *)(a1 + 168) = v123;
      *(_QWORD *)(a1 + 176) = v122;
      return a1;
    }
    v119 = *((_QWORD *)a2 + 9);
    v91 = *((_QWORD *)a2 + 10);
    v118 = *((_QWORD *)a2 + 11);
    v64 = *((_QWORD *)a2 + 12);
    v117 = *((_QWORD *)a2 + 13);
    v77 = *((_QWORD *)a2 + 14);
    v82 = *((_QWORD *)a2 + 15);
    v116 = *((_QWORD *)a2 + 16);
    v87 = *((_QWORD *)a2 + 17);
    v72 = *((_QWORD *)a2 + 18);
    v104 = *((_QWORD *)a2 + 19);
    v96 = *((_QWORD *)a2 + 20);
    v112 = *((_QWORD *)a2 + 21);
    v131 = *((_QWORD *)a2 + 2);
    v30 = *((_WORD *)a2 + 92);
    v31 = *a2;
    v75 = *((_WORD *)a2 + 93);
    v122 = *((_QWORD *)a2 + 22);
    v32 = (__int64)a2 + 24;
    v33 = *((_QWORD *)a2 + 3);
    v74 = *((_QWORD *)a2 + 4);
    v80 = *((_QWORD *)a2 + 5);
    v34 = *((_QWORD *)a2 + 6);
    v67 = *((_QWORD *)a2 + 7);
    v93 = *((_QWORD *)a2 + 8);
    v130 = v31;
    std::fs::read(&v105, &v130);
    v35 = v130;
    if ( v105 == 0x8000000000000000LL )
    {
      v36 = v131;
      v37 = v106;
      *(_QWORD *)(a1 + 8) = 0LL;
      *(_QWORD *)(a1 + 16) = v37;
      *(_OWORD *)(a1 + 24) = v35;
      *(_QWORD *)(a1 + 40) = v36;
      *(_QWORD *)a1 = 0x8000000000000006LL;
      core::ptr::drop_in_place<forc_tx::Predicate>(v32);
      return a1;
    }
    v109 = v105;
    v38 = v82 >> 16;
    v115 = HIDWORD(v82);
    v83 = HIWORD(v82);
    v120 = v72 >> 16;
    v94 = HIDWORD(v72);
    v85 = HIWORD(v72);
    v62 = WORD1(v96);
    v97 = HIDWORD(v96);
    v108 = v106;
    v69 = v107;
    core::ptr::drop_in_place<forc_tx::<impl core::convert::TryFrom<forc_tx::Input> for fuel_tx::transaction::types::input::Input>::try_from::{{closure}}>(
      v130,
      *((_QWORD *)&v130 + 1));
    if ( v30 )
    {
      if ( !(v34 ^ 0x8000000000000000LL | v33 ^ 0x8000000000000000LL) )
      {
        v6 = v104;
        if ( v69 )
        {
          v39 = ((_DWORD)v38 << 16) | (unsigned __int16)v82;
          v110 = ((_DWORD)v120 << 16) | (unsigned int)(unsigned __int16)v72;
          v40 = v75;
          v75 = v104;
          v6 = v104 >> 16;
          v111 = HIWORD(v82);
          LOWORD(v92) = v115;
          LODWORD(v67) = v112;
          v3 = 0x8000000000000005LL;
          v72 = v77;
          v14 = v64;
          LOWORD(v16) = v94;
          v94 = HIDWORD(v112);
          LOWORD(v83) = v85;
          v85 = HIWORD(v112);
          v104 = v40;
          v17 = v116;
          v77 = v87;
          v11 = v119;
          v63 = v39;
          LODWORD(v79) = HIDWORD(v96);
          LOWORD(v73) = WORD1(v96);
          v12 = v91;
          v13 = v118;
          v15 = v117;
          v10 = v69;
          v8 = v109;
          v9 = v108;
          v7 = v96;
          LODWORD(v18) = v96;
          LOWORD(v87) = v96;
          goto LABEL_6;
        }
        v101 = v91;
        v99 = v64;
        v113 = v77;
        v115 = HIDWORD(v87);
        v83 = HIWORD(v87);
        v3 = 0x8000000000000003LL;
        v94 = HIWORD(v87);
        v85 = HIWORD(v87);
        v60 = v104;
        v71 = v96;
        v77 = v112;
        v114 = v117;
        v91 = v116;
        v103 = v118;
        v89 = v119;
        LODWORD(v79) = v119;
        LOWORD(v73) = v119;
        LOWORD(v62) = v119;
        v110 = v87;
        LODWORD(v97) = v119;
LABEL_42:
        v63 = v60;
        v92 = HIDWORD(v60);
        v111 = HIWORD(v60);
        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v109, v108);
        v121 = v122;
        v15 = v91;
        v7 = v96;
        v14 = v82;
        v9 = v101;
        v8 = v89;
        v11 = v99;
        v10 = v103;
        v12 = v114;
        v13 = v113;
        LOWORD(v16) = v115;
        v17 = v71;
        goto LABEL_11;
      }
      goto LABEL_27;
    }
    if ( v34 == 0x8000000000000000LL || v33 == 0x8000000000000000LL )
    {
LABEL_27:
      *(_QWORD *)(a1 + 8) = 3LL;
      *(_QWORD *)a1 = 0x8000000000000006LL;
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v109, v108);
      if ( v33 != 0x8000000000000000LL )
        core::mem::drop(v33, v74, v44, v45, v46, v47);
      if ( v34 != 0x8000000000000000LL )
        core::mem::drop(v34, v67, v44, v45, v46, v47);
      return a1;
    }
    v124 = v33;
    v125 = v74;
    v126 = v80;
    v127 = v34;
    v128 = v67;
    v129 = v93;
    std::fs::read(&v105, &v124);
    v56 = v106;
    if ( v105 == 0x8000000000000000LL )
    {
      *(_QWORD *)(a1 + 8) = 1LL;
      *(_QWORD *)(a1 + 16) = v56;
      *(_QWORD *)(a1 + 24) = v33;
      *(_QWORD *)(a1 + 32) = v74;
      *(_QWORD *)(a1 + 40) = v80;
      *(_QWORD *)a1 = 0x8000000000000006LL;
      core::mem::drop(v34, v67, v52, v53, v54, v55);
    }
    else
    {
      v89 = v105;
      v103 = v107;
      core::ptr::drop_in_place<forc_tx::<impl core::convert::TryFrom<forc_tx::Input> for fuel_tx::transaction::types::input::Input>::try_from::{{closure}}>(
        v33,
        v74);
      std::fs::read(&v105, &v127);
      if ( v105 != 0x8000000000000000LL )
      {
        v99 = v105;
        v101 = v56;
        v61 = v106;
        v16 = v107;
        core::ptr::drop_in_place<forc_tx::<impl core::convert::TryFrom<forc_tx::Input> for fuel_tx::transaction::types::input::Input>::try_from::{{closure}}>(
          v34,
          v67);
        if ( v69 )
        {
          LODWORD(v79) = ((_DWORD)v83 << 16) | (unsigned __int16)v115;
          LODWORD(v97) = ((_DWORD)v85 << 16) | WORD2(v72);
          v92 = HIDWORD(v91);
          v111 = HIWORD(v91);
          LOWORD(v73) = WORD1(v82);
          v75 = v77;
          v6 = v77 >> 16;
          v77 = v64;
          v63 = v91;
          v15 = v16;
          v13 = v99;
          v121 = v96;
          v123 = v112;
          v112 = v104;
          v104 = v87;
          LOWORD(v87) = v82;
          v14 = v61;
          LODWORD(v67) = v116;
          v94 = HIDWORD(v116);
          v85 = HIWORD(v116);
          v7 = v72;
          v17 = v118;
          v11 = v101;
          v83 = HIWORD(v117);
          v72 = v119;
          v12 = v103;
          LOWORD(v62) = v120;
          LOWORD(v16) = WORD2(v117);
          v110 = (unsigned int)v117;
          v10 = v89;
          v8 = v108;
          v9 = v69;
          v3 = v109;
          goto LABEL_11;
        }
        v113 = v16;
        v114 = v61;
        v110 = ((_DWORD)v38 << 16) | (unsigned int)(unsigned __int16)v82;
        v6 = v116 >> 16;
        LODWORD(v67) = ((_DWORD)v120 << 16) | (unsigned __int16)v72;
        v73 = WORD1(v87);
        v79 = HIDWORD(v87);
        v3 = 0x8000000000000004LL;
        v71 = v117;
        v75 = v116;
        v72 = v118;
        v82 = v119;
        v60 = v64;
        goto LABEL_42;
      }
      v58 = v106;
      *(_QWORD *)(a1 + 8) = 2LL;
      *(_QWORD *)(a1 + 16) = v58;
      *(_QWORD *)(a1 + 24) = v34;
      *(_QWORD *)(a1 + 32) = v67;
      *(_QWORD *)(a1 + 40) = v93;
      *(_QWORD *)a1 = 0x8000000000000006LL;
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v89, v56);
    }
    v50 = v109;
    v51 = v108;
LABEL_39:
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v50, v51);
    return a1;
  }
  v19 = *((_QWORD *)a2 + 19);
  v20 = *((_QWORD *)a2 + 20);
  v21 = *((_QWORD *)a2 + 21);
  v123 = *((_QWORD *)a2 + 22);
  LOWORD(v87) = *((_WORD *)a2 + 92);
  v88 = *((_QWORD *)a2 + 7);
  v100 = *((_QWORD *)a2 + 8);
  v102 = *((_QWORD *)a2 + 9);
  v98 = *((_QWORD *)a2 + 10);
  v72 = *((_QWORD *)a2 + 11);
  v12 = *((_QWORD *)a2 + 12);
  v13 = *((_QWORD *)a2 + 13);
  v81 = *((_QWORD *)a2 + 14);
  v90 = *((_QWORD *)a2 + 15);
  v22 = *((unsigned int *)a2 + 32);
  LODWORD(v94) = *((unsigned __int16 *)a2 + 66);
  v104 = *((_QWORD *)a2 + 17);
  v23 = *((_QWORD *)a2 + 1);
  v24 = *((_QWORD *)a2 + 2);
  v25 = *((_QWORD *)a2 + 4);
  v26 = *((_QWORD *)a2 + 5);
  if ( (a2[9] & 1) != 0 )
  {
    v4 = v23 ^ 0x8000000000000000LL | v25 ^ 0x8000000000000000LL;
    if ( !v4 )
    {
      v68 = v19;
      LOWORD(v27) = *((_WORD *)a2 + 73);
      v95 = *((_QWORD *)a2 + 1);
      v111 = v23 ^ 0x8000000000000000LL;
      v77 = v20;
      v28 = v21;
      v29 = v123;
      LOWORD(v92) = v94;
      LODWORD(v67) = v22;
      LODWORD(v79) = v94;
      LOWORD(v62) = (_WORD)a2;
      LODWORD(v97) = (_DWORD)a2;
      goto LABEL_10;
    }
  }
  else
  {
    LOBYTE(v4) = v23 == 0x8000000000000000LL || v25 == 0x8000000000000000LL;
    if ( !(_BYTE)v4 )
    {
      v121 = v21;
      v70 = v19;
      LODWORD(v67) = v22;
      v113 = v13;
      v114 = v12;
      v112 = v20;
      v41 = *((_QWORD *)a2 + 3);
      v42 = *((_QWORD *)a2 + 6);
      v124 = v23;
      v125 = v24;
      v65 = v41;
      v126 = v41;
      v127 = v25;
      v128 = v26;
      v78 = v42;
      v129 = v42;
      std::fs::read(&v105, &v124);
      v4 = v105;
      v43 = v106;
      if ( v105 != 0x8000000000000000LL )
      {
        v76 = v105;
        v66 = v106;
        v86 = v107;
        core::ptr::drop_in_place<forc_tx::<impl core::convert::TryFrom<forc_tx::Input> for fuel_tx::transaction::types::input::Input>::try_from::{{closure}}>(
          v23,
          v24);
        std::fs::read(&v105, &v127);
        v48 = v105;
        if ( v105 == 0x8000000000000000LL )
        {
          v49 = v106;
          *(_QWORD *)(a1 + 8) = 2LL;
          *(_QWORD *)(a1 + 16) = v49;
          *(_QWORD *)(a1 + 24) = v25;
          *(_QWORD *)(a1 + 32) = v26;
          *(_QWORD *)(a1 + 40) = v78;
          *(_QWORD *)a1 = 0x8000000000000006LL;
          v50 = v76;
          v51 = v66;
          goto LABEL_39;
        }
        v62 = WORD1(v70);
        v97 = HIDWORD(v70);
        v122 = (unsigned __int16)v87;
        v57 = v106;
        v84 = v107;
        core::ptr::drop_in_place<forc_tx::<impl core::convert::TryFrom<forc_tx::Input> for fuel_tx::transaction::types::input::Input>::try_from::{{closure}}>(
          v25,
          v26);
        v92 = HIDWORD(v98);
        LODWORD(v22) = v98;
        v27 = WORD1(v90);
        v79 = HIDWORD(v90);
        v3 = 0x8000000000000001LL;
        v95 = v70;
        v111 = HIWORD(v98);
        v68 = v72;
        v77 = v114;
        v98 = v48;
        v28 = v113;
        v29 = v81;
        v72 = v102;
        LOWORD(v87) = v90;
        v12 = v57;
        v13 = v84;
        v81 = v88;
        v90 = v100;
        v102 = v86;
        v88 = v76;
        v100 = v66;
LABEL_10:
        v110 = v28;
        v63 = v22;
        LOWORD(v73) = v27;
        v75 = v29;
        v6 = v29 >> 16;
        v16 = HIDWORD(v28);
        v83 = HIWORD(v28);
        LOWORD(v85) = v29;
        v9 = v100;
        v8 = v88;
        v11 = v98;
        v10 = v102;
        v17 = v68;
        v14 = v81;
        v15 = v90;
        v7 = v95;
        goto LABEL_11;
      }
      *(_QWORD *)(a1 + 8) = 1LL;
      *(_QWORD *)(a1 + 16) = v43;
      *(_QWORD *)(a1 + 24) = v23;
      *(_QWORD *)(a1 + 32) = v24;
      *(_QWORD *)(a1 + 40) = v65;
      *(_QWORD *)a1 = 0x8000000000000006LL;
LABEL_25:
      core::mem::drop(v25, v26, v19, v4, v22, v21);
      return a1;
    }
  }
  *(_QWORD *)(a1 + 8) = 3LL;
  *(_QWORD *)a1 = 0x8000000000000006LL;
  if ( v23 != 0x8000000000000000LL )
    core::mem::drop(v23, v24, v19, v4, v22, v21);
  if ( v25 != 0x8000000000000000LL )
    goto LABEL_25;
  return a1;
}