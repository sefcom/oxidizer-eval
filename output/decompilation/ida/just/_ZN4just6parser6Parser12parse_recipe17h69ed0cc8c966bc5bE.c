__int64 __fastcall just::parser::Parser::parse_recipe(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6)
{
  char v9; // al
  int v10; // ecx
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm2
  __int64 v14; // rcx
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  __int128 v18; // xmm3
  char v19; // al
  char v20; // cl
  unsigned __int8 v21; // cl
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm2
  int v25; // esi
  __int64 result; // rax
  char v27; // al
  char v28; // al
  char v29; // al
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm2
  int v33; // edx
  __int64 v34; // rcx
  __int128 v35; // xmm0
  __int64 v36; // rdx
  char v37; // si
  __int128 v38; // xmm1
  __int128 v39; // xmm2
  int v40; // edi
  __int64 v41; // r13
  char v42; // al
  char v43; // cl
  char v44; // al
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm2
  int v48; // esi
  __int128 v49; // xmm0
  __int128 v50; // xmm1
  __int128 v51; // xmm2
  char v52; // al
  __int64 v53; // rdx
  __int128 v54; // xmm0
  __int128 v55; // xmm1
  __int128 v56; // xmm2
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  __int128 v59; // xmm2
  int v60; // edx
  __int128 v61; // xmm1
  __int128 v62; // xmm2
  __int128 v63; // xmm3
  __int128 v64; // xmm4
  __int64 v65; // rdx
  __int64 v66; // rdx
  __int128 v67; // xmm0
  __int128 v68; // xmm1
  __int128 v69; // xmm2
  __int64 v70; // rbx
  __int64 v71; // rdx
  __int64 v72; // r12
  __int64 v73; // rax
  __int64 v74; // rdx
  char v75; // al
  char v76; // bl
  __int64 v77; // rax
  __int64 v78; // rcx
  unsigned __int64 v79; // rdx
  __int64 v80; // rsi
  _QWORD *v81; // rax
  unsigned __int64 v82; // rbp
  int v83; // ebp
  __int64 v84; // r14
  unsigned __int8 v85; // [rsp+7h] [rbp-541h]
  unsigned __int8 is_shebang; // [rsp+1Ch] [rbp-52Ch]
  _OWORD v89[15]; // [rsp+20h] [rbp-528h] BYREF
  _OWORD src[13]; // [rsp+110h] [rbp-438h] BYREF
  __int64 v91; // [rsp+1E0h] [rbp-368h]
  __int64 v92; // [rsp+1E8h] [rbp-360h]
  unsigned int v93; // [rsp+1F4h] [rbp-354h]
  __int128 v94; // [rsp+1F8h] [rbp-350h] BYREF
  __int64 v95; // [rsp+208h] [rbp-340h]
  __int128 v96; // [rsp+210h] [rbp-338h] BYREF
  __int128 v97; // [rsp+220h] [rbp-328h]
  __int128 v98; // [rsp+230h] [rbp-318h]
  __int128 v99; // [rsp+240h] [rbp-308h]
  __int128 v100; // [rsp+250h] [rbp-2F8h]
  __int128 v101; // [rsp+260h] [rbp-2E8h] BYREF
  __int64 v102; // [rsp+270h] [rbp-2D8h]
  _BYTE v103[24]; // [rsp+280h] [rbp-2C8h] BYREF
  _QWORD v104[3]; // [rsp+2A0h] [rbp-2A8h] BYREF
  __int128 v105; // [rsp+2B8h] [rbp-290h] BYREF
  __int64 v106; // [rsp+2C8h] [rbp-280h]
  _OWORD v107[4]; // [rsp+2D0h] [rbp-278h] BYREF
  __int64 v108; // [rsp+310h] [rbp-238h]
  __int128 v109; // [rsp+318h] [rbp-230h] BYREF
  __int64 v110; // [rsp+328h] [rbp-220h]
  __int128 v111; // [rsp+330h] [rbp-218h]
  __int128 v112; // [rsp+340h] [rbp-208h]
  __int128 v113; // [rsp+350h] [rbp-1F8h]
  __int128 v114; // [rsp+360h] [rbp-1E8h]
  __int64 v115; // [rsp+370h] [rbp-1D8h]
  _QWORD dest[26]; // [rsp+378h] [rbp-1D0h] BYREF
  __int64 v117; // [rsp+448h] [rbp-100h] BYREF
  __int128 v118; // [rsp+450h] [rbp-F8h]
  __int128 v119; // [rsp+460h] [rbp-E8h]
  __int128 v120; // [rsp+470h] [rbp-D8h]
  __int128 v121; // [rsp+480h] [rbp-C8h]
  __int128 v122; // [rsp+490h] [rbp-B8h]
  __int128 v123; // [rsp+4A0h] [rbp-A8h]
  __int128 v124; // [rsp+4B0h] [rbp-98h]
  __int128 v125; // [rsp+4C0h] [rbp-88h]
  __int128 v126; // [rsp+4D0h] [rbp-78h]
  __int128 v127; // [rsp+4E0h] [rbp-68h]
  __int128 v128; // [rsp+4F0h] [rbp-58h]
  __int128 v129; // [rsp+500h] [rbp-48h]
  __int64 v130; // [rsp+510h] [rbp-38h]

  v92 = a4;
  just::parser::Parser::parse_name((__int64)v89, (_QWORD *)a2);
  v9 = BYTE8(v89[4]);
  src[0] = v89[0];
  src[1] = v89[1];
  src[2] = v89[2];
  src[3] = v89[3];
  *(_QWORD *)&src[4] = *(_QWORD *)&v89[4];
  if ( BYTE8(v89[4]) != 37 )
  {
    v10 = *(_DWORD *)((char *)&v89[4] + 9);
    *(_DWORD *)(a1 + 84) = HIDWORD(v89[4]);
    *(_DWORD *)(a1 + 81) = v10;
    *(_QWORD *)(a1 + 72) = *(_QWORD *)&src[4];
    v11 = src[0];
    v12 = src[1];
    v13 = src[2];
    *(_OWORD *)(a1 + 56) = src[3];
    *(_OWORD *)(a1 + 40) = v13;
    *(_OWORD *)(a1 + 24) = v12;
    *(_OWORD *)(a1 + 8) = v11;
    *(_BYTE *)(a1 + 80) = v9;
    *(_QWORD *)a1 = 0x8000000000000000LL;
    return core::ptr::drop_in_place<just::attribute_set::AttributeSet>(a3);
  }
  v91 = a5;
  v93 = a6;
  v111 = src[0];
  v112 = src[1];
  v113 = src[2];
  v114 = src[3];
  v115 = *(_QWORD *)&src[4];
  v107[0] = src[0];
  v107[1] = src[1];
  v107[2] = src[2];
  v107[3] = src[3];
  v108 = *(_QWORD *)&src[4];
  v104[0] = 0LL;
  v104[1] = 8LL;
  v104[2] = 0LL;
  while ( (unsigned __int8)just::parser::Parser::next_is(a2, 24)
       || (unsigned __int8)just::parser::Parser::next_is(a2, 18) )
  {
    just::parser::Parser::parse_parameter(v89, a2, 1LL);
    src[0] = *(_OWORD *)((char *)v89 + 8);
    src[1] = *(_OWORD *)((char *)&v89[1] + 8);
    src[2] = *(_OWORD *)((char *)&v89[2] + 8);
    src[3] = *(_OWORD *)((char *)&v89[3] + 8);
    src[4] = *(_OWORD *)((char *)&v89[4] + 8);
    if ( *(_QWORD *)&v89[0] == 19LL )
    {
      v14 = a1;
      *(_OWORD *)(a1 + 72) = src[4];
      v15 = src[0];
      v16 = src[1];
      v17 = src[2];
      v18 = src[3];
      goto LABEL_9;
    }
    v130 = *((_QWORD *)&v89[12] + 1);
    v129 = *(_OWORD *)((char *)&v89[11] + 8);
    v128 = *(_OWORD *)((char *)&v89[10] + 8);
    v127 = *(_OWORD *)((char *)&v89[9] + 8);
    v126 = *(_OWORD *)((char *)&v89[8] + 8);
    v125 = *(_OWORD *)((char *)&v89[7] + 8);
    v124 = *(_OWORD *)((char *)&v89[6] + 8);
    v123 = *(_OWORD *)((char *)&v89[5] + 8);
    v117 = *(_QWORD *)&v89[0];
    v122 = src[4];
    v121 = src[3];
    v120 = src[2];
    v119 = src[1];
    v118 = src[0];
    alloc::vec::Vec<T,A>::push(v104, &v117);
  }
  just::parser::Parser::accepted((__int64)v89, (_QWORD *)a2, 30);
  v19 = v89[0];
  v20 = BYTE8(v89[4]);
  if ( BYTE8(v89[4]) != 37 )
    goto LABEL_18;
  if ( (v89[0] & 1) != 0 )
  {
    v21 = 0;
    goto LABEL_13;
  }
  just::parser::Parser::accepted((__int64)v89, (_QWORD *)a2, 1);
  v19 = v89[0];
  v20 = BYTE8(v89[4]);
  if ( BYTE8(v89[4]) != 37 )
  {
LABEL_18:
    *(_QWORD *)(a1 + 72) = *(_QWORD *)&v89[4];
    v22 = *(_OWORD *)((char *)v89 + 1);
    v23 = *(_OWORD *)((char *)&v89[1] + 1);
    v24 = *(_OWORD *)((char *)&v89[2] + 1);
    *(_OWORD *)(a1 + 57) = *(_OWORD *)((char *)&v89[3] + 1);
    *(_OWORD *)(a1 + 41) = v24;
    *(_OWORD *)(a1 + 25) = v23;
    *(_OWORD *)(a1 + 9) = v22;
    v25 = HIDWORD(v89[4]);
    *(_DWORD *)(a1 + 81) = *(_DWORD *)((char *)&v89[4] + 9);
    *(_DWORD *)(a1 + 84) = v25;
    *(_BYTE *)(a1 + 8) = v19;
    *(_BYTE *)(a1 + 80) = v20;
    *(_QWORD *)a1 = 0x8000000000000000LL;
LABEL_19:
    core::ptr::drop_in_place<alloc::vec::Vec<just::parameter::Parameter>>(v104);
    return core::ptr::drop_in_place<just::attribute_set::AttributeSet>(a3);
  }
  v21 = 2;
  if ( (v89[0] & 1) == 0 )
  {
    dest[0] = 19LL;
    goto LABEL_23;
  }
LABEL_13:
  just::parser::Parser::parse_parameter(v89, a2, v21);
  v96 = *(_OWORD *)((char *)v89 + 8);
  v97 = *(_OWORD *)((char *)&v89[1] + 8);
  v98 = *(_OWORD *)((char *)&v89[2] + 8);
  v99 = *(_OWORD *)((char *)&v89[3] + 8);
  v100 = *(_OWORD *)((char *)&v89[4] + 8);
  if ( *(_QWORD *)&v89[0] == 19LL )
  {
    v14 = a1;
    *(_OWORD *)(a1 + 72) = v100;
    v15 = v96;
    v16 = v97;
    v17 = v98;
    v18 = v99;
LABEL_9:
    *(_OWORD *)(v14 + 56) = v18;
    *(_OWORD *)(v14 + 40) = v17;
    *(_OWORD *)(v14 + 24) = v16;
    *(_OWORD *)(v14 + 8) = v15;
    *(_QWORD *)v14 = 0x8000000000000000LL;
    goto LABEL_19;
  }
  *((_QWORD *)&src[12] + 1) = *((_QWORD *)&v89[12] + 1);
  *(_OWORD *)((char *)&src[11] + 8) = *(_OWORD *)((char *)&v89[11] + 8);
  *(_OWORD *)((char *)&src[10] + 8) = *(_OWORD *)((char *)&v89[10] + 8);
  *(_OWORD *)((char *)&src[9] + 8) = *(_OWORD *)((char *)&v89[9] + 8);
  *(_OWORD *)((char *)&src[8] + 8) = *(_OWORD *)((char *)&v89[8] + 8);
  *(_OWORD *)((char *)&src[7] + 8) = *(_OWORD *)((char *)&v89[7] + 8);
  *(_OWORD *)((char *)&src[6] + 8) = *(_OWORD *)((char *)&v89[6] + 8);
  *(_OWORD *)((char *)&src[5] + 8) = *(_OWORD *)((char *)&v89[5] + 8);
  *(_OWORD *)((char *)src + 8) = v96;
  *(_OWORD *)((char *)&src[1] + 8) = v97;
  *(_OWORD *)((char *)&src[2] + 8) = v98;
  *(_OWORD *)((char *)&src[3] + 8) = v99;
  *(_OWORD *)((char *)&src[4] + 8) = v100;
  *(_QWORD *)&src[0] = *(_QWORD *)&v89[0];
  just::parser::Parser::forbid((__int64)v89, (_QWORD *)a2);
  v27 = BYTE8(v89[4]);
  if ( BYTE8(v89[4]) != 37 )
  {
    *(_QWORD *)(a1 + 72) = *(_QWORD *)&v89[4];
    v30 = v89[0];
    v31 = v89[1];
    v32 = v89[2];
    *(_OWORD *)(a1 + 56) = v89[3];
    *(_OWORD *)(a1 + 40) = v32;
    *(_OWORD *)(a1 + 24) = v31;
    *(_OWORD *)(a1 + 8) = v30;
    v33 = HIDWORD(v89[4]);
    *(_DWORD *)(a1 + 81) = *(_DWORD *)((char *)&v89[4] + 9);
    *(_DWORD *)(a1 + 84) = v33;
    *(_BYTE *)(a1 + 80) = v27;
    *(_QWORD *)a1 = 0x8000000000000000LL;
    core::ptr::drop_in_place<just::parameter::Parameter>(src);
    goto LABEL_19;
  }
  memcpy(dest, src, sizeof(dest));
LABEL_23:
  just::parser::Parser::expect((__int64)v89, (_QWORD *)a2);
  v28 = BYTE8(v89[4]);
  if ( BYTE8(v89[4]) != 37 )
  {
    v34 = *(_QWORD *)&v89[0];
    v35 = *(_OWORD *)((char *)v89 + 8);
    v36 = *((_QWORD *)&v89[3] + 1);
    v37 = v89[4];
    LODWORD(src[0]) = *(_DWORD *)((char *)&v89[4] + 1);
    *(_DWORD *)((char *)src + 3) = DWORD1(v89[4]);
    *(_DWORD *)(a1 + 84) = HIDWORD(v89[4]);
    *(_DWORD *)(a1 + 81) = *(_DWORD *)((char *)&v89[4] + 9);
    v38 = *(_OWORD *)((char *)&v89[1] + 8);
    v39 = *(_OWORD *)((char *)&v89[2] + 8);
    v40 = src[0];
    *(_DWORD *)(a1 + 76) = *(_DWORD *)((char *)src + 3);
    *(_DWORD *)(a1 + 73) = v40;
    *(_QWORD *)(a1 + 8) = v34;
    *(_OWORD *)(a1 + 16) = v35;
    *(_OWORD *)(a1 + 32) = v38;
    *(_OWORD *)(a1 + 48) = v39;
    *(_QWORD *)(a1 + 64) = v36;
    *(_BYTE *)(a1 + 72) = v37;
    *(_BYTE *)(a1 + 80) = v28;
    *(_QWORD *)a1 = 0x8000000000000000LL;
LABEL_47:
    core::ptr::drop_in_place<core::option::Option<just::parameter::Parameter>>(dest);
    goto LABEL_19;
  }
  *(_QWORD *)&v94 = 0LL;
  *((_QWORD *)&v94 + 1) = 8LL;
  v95 = 0LL;
  while ( 1 )
  {
    just::parser::Parser::accept_dependency((__int64)v89, a2);
    v29 = BYTE8(v89[4]);
    if ( BYTE8(v89[4]) != 37 )
      goto LABEL_45;
    src[2] = v89[2];
    src[1] = v89[1];
    src[0] = v89[0];
    if ( *(_QWORD *)&v89[0] == 0x8000000000000000LL )
      break;
    alloc::vec::Vec<T,A>::push(&v94, src, &off_430928);
  }
  core::ptr::drop_in_place<core::option::Option<just::unresolved_dependency::UnresolvedDependency>>(src);
  v41 = v95;
  just::parser::Parser::accepted((__int64)v89, (_QWORD *)a2, 0);
  v42 = v89[0];
  v43 = BYTE8(v89[4]);
  if ( BYTE8(v89[4]) != 37 )
  {
    *(_QWORD *)(a1 + 72) = *(_QWORD *)&v89[4];
    v45 = *(_OWORD *)((char *)v89 + 1);
    v46 = *(_OWORD *)((char *)&v89[1] + 1);
    v47 = *(_OWORD *)((char *)&v89[2] + 1);
    *(_OWORD *)(a1 + 57) = *(_OWORD *)((char *)&v89[3] + 1);
    *(_OWORD *)(a1 + 41) = v47;
    *(_OWORD *)(a1 + 25) = v46;
    *(_OWORD *)(a1 + 9) = v45;
    v48 = HIDWORD(v89[4]);
    *(_DWORD *)(a1 + 81) = *(_DWORD *)((char *)&v89[4] + 9);
    *(_DWORD *)(a1 + 84) = v48;
    *(_BYTE *)(a1 + 8) = v42;
    *(_BYTE *)(a1 + 80) = v43;
    *(_QWORD *)a1 = 0x8000000000000000LL;
LABEL_46:
    core::ptr::drop_in_place<alloc::vec::Vec<just::unresolved_dependency::UnresolvedDependency>>(&v94);
    goto LABEL_47;
  }
  if ( (v89[0] & 1) != 0 )
  {
    *(_QWORD *)&v96 = 0LL;
    *((_QWORD *)&v96 + 1) = 8LL;
    *(_QWORD *)&v97 = 0LL;
    while ( 1 )
    {
      just::parser::Parser::accept_dependency((__int64)v89, a2);
      v44 = BYTE8(v89[4]);
      if ( BYTE8(v89[4]) != 37 )
      {
        *(_QWORD *)&src[4] = *(_QWORD *)&v89[4];
        src[3] = v89[3];
        src[2] = v89[2];
        src[1] = v89[1];
        src[0] = v89[0];
        *(_DWORD *)(a1 + 84) = HIDWORD(v89[4]);
        *(_DWORD *)(a1 + 81) = *(_DWORD *)((char *)&v89[4] + 9);
        *(_QWORD *)(a1 + 72) = *(_QWORD *)&src[4];
        v49 = src[0];
        v50 = src[1];
        v51 = src[2];
        *(_OWORD *)(a1 + 56) = src[3];
        *(_OWORD *)(a1 + 40) = v51;
        *(_OWORD *)(a1 + 24) = v50;
        *(_OWORD *)(a1 + 8) = v49;
        *(_BYTE *)(a1 + 80) = v44;
        *(_QWORD *)a1 = 0x8000000000000000LL;
        goto LABEL_50;
      }
      src[2] = v89[2];
      src[1] = v89[1];
      src[0] = v89[0];
      if ( *(_QWORD *)&v89[0] == 0x8000000000000000LL )
        break;
      alloc::vec::Vec<T,A>::push(&v96, src, &off_430940);
    }
    core::ptr::drop_in_place<core::option::Option<just::unresolved_dependency::UnresolvedDependency>>(src);
    if ( (_QWORD)v97 )
    {
      alloc::vec::Vec<T,A>::append_elements(&v94, *((_QWORD *)&v96 + 1));
      *(_QWORD *)&v97 = 0LL;
      core::ptr::drop_in_place<alloc::vec::Vec<just::unresolved_dependency::UnresolvedDependency>>(&v96);
      goto LABEL_40;
    }
    just::parser::Parser::unexpected_token((__int64)v89, (_QWORD *)a2);
    src[4] = *(_OWORD *)((char *)&v89[4] + 8);
    v61 = *(_OWORD *)((char *)v89 + 8);
    v62 = *(_OWORD *)((char *)&v89[1] + 8);
    v63 = *(_OWORD *)((char *)&v89[2] + 8);
    v64 = *(_OWORD *)((char *)&v89[3] + 8);
    src[3] = *(_OWORD *)((char *)&v89[3] + 8);
    src[2] = *(_OWORD *)((char *)&v89[2] + 8);
    src[1] = *(_OWORD *)((char *)&v89[1] + 8);
    src[0] = *(_OWORD *)((char *)v89 + 8);
    *(_OWORD *)(a1 + 72) = *(_OWORD *)((char *)&v89[4] + 8);
    *(_OWORD *)(a1 + 56) = v64;
    *(_OWORD *)(a1 + 40) = v63;
    *(_OWORD *)(a1 + 24) = v62;
    *(_OWORD *)(a1 + 8) = v61;
    *(_QWORD *)a1 = 0x8000000000000000LL;
LABEL_50:
    core::ptr::drop_in_place<alloc::vec::Vec<just::unresolved_dependency::UnresolvedDependency>>(&v96);
    goto LABEL_46;
  }
LABEL_40:
  just::parser::Parser::expect_eol((__int64)v89, (_QWORD *)a2);
  v52 = BYTE8(v89[4]);
  if ( BYTE8(v89[4]) != 37 )
  {
    *(_QWORD *)(a1 + 72) = *(_QWORD *)&v89[4];
    v57 = v89[0];
    v58 = v89[1];
    v59 = v89[2];
    *(_OWORD *)(a1 + 56) = v89[3];
    *(_OWORD *)(a1 + 40) = v59;
    *(_OWORD *)(a1 + 24) = v58;
    *(_OWORD *)(a1 + 8) = v57;
    v60 = HIDWORD(v89[4]);
    *(_DWORD *)(a1 + 81) = *(_DWORD *)((char *)&v89[4] + 9);
    *(_DWORD *)(a1 + 84) = v60;
    *(_BYTE *)(a1 + 80) = v52;
    *(_QWORD *)a1 = 0x8000000000000000LL;
    goto LABEL_46;
  }
  just::parser::Parser::parse_body(v89, a2);
  v29 = BYTE8(v89[4]);
  if ( BYTE8(v89[4]) != 37 )
  {
LABEL_45:
    *(_QWORD *)&src[4] = *(_QWORD *)&v89[4];
    src[3] = v89[3];
    src[2] = v89[2];
    src[1] = v89[1];
    src[0] = v89[0];
    *(_DWORD *)(a1 + 84) = HIDWORD(v89[4]);
    *(_DWORD *)(a1 + 81) = *(_DWORD *)((char *)&v89[4] + 9);
    *(_QWORD *)(a1 + 72) = *(_QWORD *)&src[4];
    v54 = src[0];
    v55 = src[1];
    v56 = src[2];
    *(_OWORD *)(a1 + 56) = src[3];
    *(_OWORD *)(a1 + 40) = v56;
    *(_OWORD *)(a1 + 24) = v55;
    *(_OWORD *)(a1 + 8) = v54;
    *(_BYTE *)(a1 + 80) = v29;
    *(_QWORD *)a1 = 0x8000000000000000LL;
    goto LABEL_46;
  }
  v101 = v89[0];
  v102 = *(_QWORD *)&v89[1];
  if ( *(_QWORD *)&v89[1] )
  {
    is_shebang = just::line::Line::is_shebang(
                   *(_DWORD **)(*((_QWORD *)&v101 + 1) + 8LL),
                   *(_QWORD *)(*((_QWORD *)&v101 + 1) + 16LL));
    v85 = just::attribute_set::AttributeSet::contains(a3, 16);
    if ( (v85 & is_shebang) == 1 )
    {
      *((_QWORD *)&v89[0] + 1) = just::token::Token::lexeme(v107);
      *(_QWORD *)&v89[1] = v53;
      *(_QWORD *)&v89[0] = 0x8000000000000032LL;
      just::token::Token::error(src, v107, v89);
LABEL_58:
      *(_OWORD *)(a1 + 72) = src[4];
      v67 = src[0];
      v68 = src[1];
      v69 = src[2];
      *(_OWORD *)(a1 + 56) = src[3];
      *(_OWORD *)(a1 + 40) = v69;
      *(_OWORD *)(a1 + 24) = v68;
      *(_OWORD *)(a1 + 8) = v67;
      *(_QWORD *)a1 = 0x8000000000000000LL;
      core::ptr::drop_in_place<alloc::vec::Vec<just::line::Line>>(&v101);
      goto LABEL_46;
    }
  }
  else
  {
    v85 = just::attribute_set::AttributeSet::contains(a3, 16);
    is_shebang = 0;
  }
  if ( (unsigned __int8)just::attribute_set::AttributeSet::contains(a3, 19)
    && (unsigned __int8)just::attribute_set::AttributeSet::contains(a3, 9) )
  {
    *((_QWORD *)&v89[0] + 1) = just::token::Token::lexeme(v107);
    *(_QWORD *)&v89[1] = v65;
    *(_QWORD *)&v89[0] = 0x800000000000002DLL;
    just::token::Token::error(src, v107, v89);
    goto LABEL_58;
  }
  if ( (unsigned __int8)just::attribute_set::AttributeSet::contains(a3, 3)
    && (unsigned __int8)just::attribute_set::AttributeSet::contains(a3, 10) )
  {
    *((_QWORD *)&v89[0] + 1) = just::token::Token::lexeme(v107);
    *(_QWORD *)&v89[1] = v66;
    *(_QWORD *)&v89[0] = 0x8000000000000020LL;
    just::token::Token::error(src, v107, v89);
    goto LABEL_58;
  }
  v70 = just::token::Token::lexeme(v107);
  v72 = v71;
  LODWORD(v89[0]) = 0;
  v73 = core::char::methods::encode_utf8_raw(95LL, v89);
  v75 = core::slice::<impl [T]>::starts_with(v70, v72, v73, v74);
  v76 = 1;
  if ( !v75 )
    v76 = just::attribute_set::AttributeSet::contains(a3, 15);
  if ( v92 )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v89, v92);
    *(_QWORD *)&v103[16] = *(_QWORD *)&v89[1];
    *(_OWORD *)v103 = v89[0];
  }
  else
  {
    *(_QWORD *)v103 = 0x8000000000000000LL;
  }
  LOBYTE(v91) = v76;
  v92 = v41;
  v77 = *a3;
  v78 = a3[1];
  v79 = 0LL;
  v80 = *a3;
  if ( *a3 )
    v80 = a3[2];
  LOBYTE(v79) = *a3 != 0;
  v89[0] = v79;
  *(_QWORD *)&v89[1] = v77;
  *((_QWORD *)&v89[1] + 1) = v78;
  v89[2] = v79;
  *(_QWORD *)&v89[3] = v77;
  *((_QWORD *)&v89[3] + 1) = v78;
  *(_QWORD *)&v89[4] = v80;
  while ( 1 )
  {
    v81 = (_QWORD *)<alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(v89);
    if ( !v81 )
      break;
    if ( *v81 == 0x8000000000000003LL )
    {
      v82 = 0x8000000000000000LL;
      if ( v81[1] != 0x8000000000000000LL )
      {
        <alloc::string::String as core::clone::Clone>::clone(src, v81 + 1);
        v82 = *(_QWORD *)&src[0];
        v96 = *(_OWORD *)((char *)src + 8);
      }
      core::ptr::drop_in_place<regex::error::Error>(v103);
      *(_QWORD *)v103 = v82;
      *(_OWORD *)&v103[8] = v96;
    }
  }
  core::option::Option<T>::filter(&v109, v103);
  v83 = *(_DWORD *)(a2 + 128);
  <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v105, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
  *(_QWORD *)&v96 = 0x8000000000000000LL;
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(src, v104);
  core::iter::traits::iterator::Iterator::chain(v89, src, dest);
  core::iter::traits::iterator::Iterator::collect(src, v89);
  v84 = v92;
  *(_OWORD *)((char *)&v89[13] + 8) = *(_OWORD *)a3;
  *((_QWORD *)&v89[14] + 1) = a3[2];
  v89[0] = v101;
  *(_QWORD *)&v89[1] = v102;
  *(_OWORD *)((char *)&v89[1] + 8) = v94;
  *((_QWORD *)&v89[2] + 1) = v95;
  v89[6] = v109;
  *(_QWORD *)&v89[7] = v110;
  *(_QWORD *)&v89[4] = v106;
  v89[3] = v105;
  *(_QWORD *)&v89[13] = v115;
  v89[12] = v114;
  v89[11] = v113;
  v89[10] = v112;
  v89[9] = v111;
  *((_QWORD *)&v89[8] + 1) = v97;
  *(_OWORD *)((char *)&v89[7] + 8) = v96;
  *((_QWORD *)&v89[5] + 1) = *(_QWORD *)&src[1];
  *(_OWORD *)((char *)&v89[4] + 8) = src[0];
  memcpy((void *)a1, v89, 0xF0uLL);
  *(_QWORD *)(a1 + 240) = v84;
  *(_DWORD *)(a1 + 248) = v83;
  *(_BYTE *)(a1 + 252) = v91;
  result = v93;
  *(_BYTE *)(a1 + 253) = v93;
  *(_BYTE *)(a1 + 254) = v85 | is_shebang;
  return result;
}