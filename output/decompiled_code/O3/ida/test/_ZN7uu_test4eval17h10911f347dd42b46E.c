__int64 __fastcall uu_test::eval(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int128 v7; // xmm1
  __int64 v8; // rcx
  char v9; // al
  char v10; // bp
  char v11; // r12
  char v12; // al
  char v13; // cl
  char v14; // dl
  char v15; // si
  char v16; // di
  __int64 v17; // r8
  __int64 v18; // r14
  __int128 v19; // kr10_16
  int v20; // ecx
  char v21; // al
  __int64 v22; // r13
  __int128 v23; // xmm1
  __int64 v24; // r14
  unsigned __int64 v25; // rax
  __int128 v26; // xmm1
  __int64 v27; // rbp
  __int128 v28; // kr30_16
  char v29; // al
  _WORD *v30; // r13
  __int64 v31; // r14
  __int64 v32; // r12
  __int64 v33; // rsi
  __int64 v34; // rcx
  __int64 v35; // rdx
  _WORD *v36; // rax
  __int64 v37; // rdx
  __int128 v38; // xmm1
  char v39; // r15
  __int64 v40; // rsi
  __int64 v41; // rdi
  __int64 v42; // rsi
  _WORD *v43; // rdi
  unsigned __int64 v45; // rax
  __int128 v46; // xmm1
  __int64 v47; // r15
  __int64 v48; // rsi
  __int128 v49; // xmm0
  unsigned __int64 v50; // rax
  __int128 v51; // xmm0
  __int64 v52; // r13
  __int128 v53; // xmm1
  __int64 v54; // r12
  unsigned __int64 v55; // rax
  __int128 v56; // xmm1
  __int64 v57; // rbp
  __int64 v58; // r15
  __int64 v59; // rax
  char v60; // r13
  __int64 v61; // rax
  char v62; // cl
  char v63; // al
  char v64; // si
  bool v65; // al
  __int128 v66; // kr50_16
  int v67; // r12d
  bool v68; // al
  __int64 v69; // rax
  unsigned __int64 v70; // rcx
  __int64 v71; // rdx
  __int64 v72; // rsi
  char v73; // al
  __int64 v74; // rbp
  __int64 v75; // r13
  __int64 v76; // r15
  bool v77; // al
  unsigned __int64 v78; // r12
  __int64 v79; // r14
  char v80; // al
  unsigned __int64 v81; // r14
  bool v82; // zf
  unsigned int v83; // r14d
  __int64 v84; // r13
  char v85; // cl
  char v86; // si
  unsigned int v87; // r14d
  __int64 v88; // r13
  char v89; // al
  __int64 v90; // rcx
  char v91; // al
  char v92; // bp
  bool v93; // sf
  bool v94; // of
  int v95; // ebp
  int v96; // r13d
  int v97; // r12d
  bool v98; // zf
  __uid_t v99; // eax
  int v100; // ecx
  bool v101; // zf
  int v102; // eax
  bool v103; // zf
  unsigned int v104; // ebp
  __int64 v105; // r15
  bool v106; // cl
  __uid_t v107; // eax
  int v108; // ebp
  __uid_t v109; // eax
  __int64 v110; // [rsp+0h] [rbp-388h]
  _WORD *v111; // [rsp+0h] [rbp-388h]
  _WORD *v112; // [rsp+0h] [rbp-388h]
  _WORD *v113; // [rsp+0h] [rbp-388h]
  char v114; // [rsp+Fh] [rbp-379h] BYREF
  __int64 v115; // [rsp+10h] [rbp-378h]
  __int64 v116; // [rsp+18h] [rbp-370h]
  _OWORD src[11]; // [rsp+20h] [rbp-368h] BYREF
  unsigned __int64 v118; // [rsp+D8h] [rbp-2B0h]
  unsigned __int64 v119; // [rsp+E0h] [rbp-2A8h]
  __int64 v120; // [rsp+E8h] [rbp-2A0h]
  __int128 v121; // [rsp+F0h] [rbp-298h]
  __int128 v122; // [rsp+100h] [rbp-288h]
  __int64 v123; // [rsp+110h] [rbp-278h]
  _OWORD dest[11]; // [rsp+120h] [rbp-268h] BYREF
  _BYTE v125[24]; // [rsp+1D8h] [rbp-1B0h] BYREF
  __int128 v126; // [rsp+1F0h] [rbp-198h] BYREF
  __int128 v127; // [rsp+200h] [rbp-188h]
  __int128 v128; // [rsp+210h] [rbp-178h]
  __int128 v129; // [rsp+220h] [rbp-168h]
  __int128 v130; // [rsp+230h] [rbp-158h]
  __int128 v131; // [rsp+240h] [rbp-148h]
  __int128 v132; // [rsp+250h] [rbp-138h]
  __int128 v133; // [rsp+260h] [rbp-128h]
  __int128 v134; // [rsp+270h] [rbp-118h]
  __int128 v135; // [rsp+280h] [rbp-108h]
  __int128 v136; // [rsp+290h] [rbp-F8h]
  _OWORD v137[14]; // [rsp+2A0h] [rbp-E8h] BYREF

  v3 = *(_QWORD *)(a2 + 16);
  if ( !v3 )
  {
    *(_QWORD *)&v121 = 7LL;
LABEL_6:
    *(_BYTE *)(a1 + 8) = 0;
LABEL_7:
    *(_QWORD *)a1 = 7LL;
LABEL_8:
    v10 = 1;
    v11 = 1;
LABEL_9:
    v12 = 1;
    goto LABEL_10;
  }
  v5 = v3 - 1;
  *(_QWORD *)(a2 + 16) = v3 - 1;
  v6 = *(_QWORD *)(a2 + 8);
  v7 = *(_OWORD *)(v6 + 40 * (v3 - 1) + 16);
  v121 = *(_OWORD *)(v6 + 40 * (v3 - 1));
  v123 = *(_QWORD *)(v6 + 40 * (v3 - 1) + 32);
  v122 = v7;
  switch ( (__int64)v121 )
  {
    case 1LL:
      uu_test::eval(src, a2);
      v8 = *(_QWORD *)&src[0];
      v9 = BYTE8(src[0]);
      if ( *(_QWORD *)&src[0] == 7LL )
      {
        *(_BYTE *)(a1 + 8) = BYTE8(src[0]) ^ 1;
        goto LABEL_7;
      }
      *(_QWORD *)(a1 + 24) = *((_QWORD *)&src[1] + 1);
      *(_OWORD *)(a1 + 9) = *(_OWORD *)((char *)src + 9);
      *(_QWORD *)a1 = v8;
      *(_BYTE *)(a1 + 8) = v9;
      return a1;
    case 2LL:
      v18 = *((_QWORD *)&v121 + 1);
      v19 = v122;
      if ( *((_QWORD *)&v122 + 1) != 2LL )
        goto LABEL_100;
      if ( *(_WORD *)v122 == 24877 )
      {
        if ( v3 <= 2 )
          goto LABEL_30;
      }
      else
      {
        v20 = 0;
        if ( v3 <= 2 )
        {
          LOBYTE(v20) = *(unsigned __int16 *)v122 != 28461;
          if ( !v20 )
          {
LABEL_30:
            *(_QWORD *)&v126 = 0LL;
            *((_QWORD *)&v126 + 1) = 1LL;
            *(_QWORD *)&v127 = 0LL;
            *(_QWORD *)&src[3] = 32LL;
            BYTE8(src[3]) = 3;
            *(_QWORD *)&src[0] = 0LL;
            *(_QWORD *)&src[1] = 0LL;
            *(_QWORD *)&src[2] = &v126;
            *((_QWORD *)&src[2] + 1) = &off_E1CB0;
            std::sys::os_str::bytes::Slice::to_str(dest, v122, 2LL);
            if ( *(_QWORD *)&dest[0] )
              v21 = os_display::unix::write_escaped(src, v122, 2LL);
            else
              v21 = os_display::unix::write(src, *((_QWORD *)&dest[0] + 1), *(_QWORD *)&dest[1], 1LL);
            if ( v21 )
              core::result::unwrap_failed(aADisplayImplem, 55LL, &v114, &unk_E1CF8, &off_E1CE0);
            *(_QWORD *)(a1 + 24) = v127;
            *(_OWORD *)(a1 + 8) = v126;
            *(_QWORD *)a1 = 6LL;
            goto LABEL_142;
          }
        }
      }
LABEL_100:
      uu_test::eval(src, a2);
      v59 = *(_QWORD *)&src[0];
      v60 = BYTE8(src[0]);
      if ( *(_QWORD *)&src[0] == 7LL )
      {
        uu_test::eval(src, a2);
        v61 = *(_QWORD *)&src[0];
        v62 = BYTE8(src[0]);
        if ( *(_QWORD *)&src[0] == 7LL )
        {
          if ( *((_QWORD *)&v19 + 1) == 2LL )
          {
            v63 = 0;
            v64 = 1;
            if ( BYTE8(src[0]) )
              v63 = v60;
            else
              v64 = v60;
            if ( *(_WORD *)v19 != 24877 )
              v63 = v64;
          }
          else
          {
            v63 = 1;
            if ( !BYTE8(src[0]) )
              v63 = v60;
          }
          *(_BYTE *)(a1 + 8) = v63;
          *(_QWORD *)a1 = 7LL;
          v11 = 1;
          if ( v18 )
            _rust_dealloc(v19, v18, 1LL);
          v10 = 0;
          goto LABEL_9;
        }
        *(_QWORD *)(a1 + 24) = *((_QWORD *)&src[1] + 1);
        *(_OWORD *)(a1 + 9) = *(_OWORD *)((char *)src + 9);
        *(_QWORD *)a1 = v61;
        *(_BYTE *)(a1 + 8) = v62;
      }
      else
      {
        *(_QWORD *)(a1 + 24) = *((_QWORD *)&src[1] + 1);
        *(_OWORD *)(a1 + 9) = *(_OWORD *)((char *)src + 9);
        *(_QWORD *)a1 = v59;
        *(_BYTE *)(a1 + 8) = v60;
      }
LABEL_142:
      if ( !v18 )
        return a1;
      v43 = (_WORD *)v19;
      v42 = v18;
      goto LABEL_79;
    case 3LL:
      v40 = *((_QWORD *)&v121 + 1);
      *(_BYTE *)(a1 + 8) = *((_QWORD *)&v122 + 1) != 0LL;
      v41 = v122;
      *(_QWORD *)a1 = 7LL;
      v10 = 1;
      if ( v40 )
        _rust_dealloc(v41, v40, 1LL);
      v11 = 0;
      goto LABEL_9;
    case 4LL:
      if ( !*((_QWORD *)&v121 + 1) )
      {
        v48 = v123;
        if ( v3 == 1 )
        {
          *(_QWORD *)&dest[0] = 7LL;
        }
        else
        {
          *(_QWORD *)(a2 + 16) = v3 - 2;
          v5 = 5 * (v3 - 2);
          *(_QWORD *)&dest[2] = *(_QWORD *)(v6 + 40 * (v3 - 2) + 32);
          v49 = *(_OWORD *)(v6 + 40 * (v3 - 2));
          dest[1] = *(_OWORD *)(v6 + 40 * (v3 - 2) + 16);
          dest[0] = v49;
          if ( v3 != 2 )
          {
            v50 = v3 - 3;
            *(_QWORD *)(a2 + 16) = v50;
            v50 *= 5LL;
            v5 = *(_QWORD *)(v6 + 8 * v50 + 32);
            *(_QWORD *)&src[2] = v5;
            v51 = *(_OWORD *)(v6 + 8 * v50);
            src[1] = *(_OWORD *)(v6 + 8 * v50 + 16);
            src[0] = v51;
            goto LABEL_123;
          }
        }
        *(_QWORD *)&src[0] = 7LL;
LABEL_123:
        v66 = v122;
        if ( v48 == 2 )
        {
          v6 = *(_QWORD *)&src[0];
          v67 = dest[0];
          if ( **((_WORD **)&v122 + 1) != 15649 )
          {
            v68 = LODWORD(dest[0]) == 7;
            if ( *(_QWORD *)&src[0] == 7LL )
              goto LABEL_158;
            goto LABEL_128;
          }
          if ( *(_QWORD *)&src[0] != 7LL )
          {
            if ( LODWORD(dest[0]) == 7 )
            {
              v67 = 7;
              *(_BYTE *)(a1 + 8) = 1;
              goto LABEL_155;
            }
            v73 = <uu_test::parser::Symbol as core::cmp::PartialEq>::eq(src, dest, v5, *(_QWORD *)&src[0]) ^ 1;
            goto LABEL_154;
          }
          v68 = LODWORD(dest[0]) != 7;
        }
        else
        {
          v67 = dest[0];
          v68 = *(_QWORD *)&dest[0] == 7LL;
          if ( *(_QWORD *)&src[0] != 7LL )
          {
LABEL_128:
            if ( v68 )
            {
              *(_BYTE *)(a1 + 8) = 0;
LABEL_155:
              *(_QWORD *)a1 = 7LL;
              core::ptr::drop_in_place<uu_test::parser::Symbol>(src);
LABEL_159:
              if ( v67 != 7 )
                core::ptr::drop_in_place<uu_test::parser::Symbol>(dest);
              v10 = 1;
              if ( (_QWORD)v66 )
                _rust_dealloc(*((_QWORD *)&v66 + 1), v66, 1LL);
              v16 = 0;
              v11 = 1;
              v12 = 1;
              v13 = 1;
              v14 = 1;
              v15 = 1;
LABEL_14:
              switch ( (__int64)v121 )
              {
                case 2LL:
                  v17 = 8LL;
                  if ( v10 )
                    goto LABEL_77;
                  return a1;
                case 3LL:
                  v17 = 8LL;
                  if ( v11 )
                    goto LABEL_77;
                  return a1;
                case 4LL:
                  v17 = 16LL;
                  if ( *((_QWORD *)&v121 + 1) )
                  {
                    if ( DWORD2(v121) == 1 )
                    {
                      if ( v15 )
                        goto LABEL_77;
                    }
                    else if ( v14 )
                    {
                      goto LABEL_77;
                    }
                  }
                  else if ( v16 )
                  {
                    goto LABEL_77;
                  }
                  return a1;
                case 5LL:
                  if ( *((_QWORD *)&v121 + 1) )
                  {
                    v17 = 16LL;
                    if ( !v12 )
                      return a1;
                  }
                  else
                  {
                    v17 = 16LL;
                    if ( !v13 )
                      return a1;
                  }
LABEL_77:
                  v42 = *(_QWORD *)((char *)&v121 + v17);
                  if ( v42 )
                  {
                    v43 = *(_WORD **)((char *)&v121 + v17 + 8);
                    goto LABEL_79;
                  }
                  break;
                default:
                  return a1;
              }
              return a1;
            }
            v73 = <uu_test::parser::Symbol as core::cmp::PartialEq>::eq(src, dest, v5, v6);
LABEL_154:
            *(_BYTE *)(a1 + 8) = v73;
            goto LABEL_155;
          }
        }
LABEL_158:
        *(_BYTE *)(a1 + 8) = v68;
        *(_QWORD *)a1 = 7LL;
        goto LABEL_159;
      }
      if ( DWORD2(v121) == 1 )
      {
        v120 = *((_QWORD *)&v122 + 1);
        v116 = v122;
        if ( v3 == 1 )
        {
          *(_QWORD *)&src[0] = 7LL;
        }
        else
        {
          v22 = v123;
          *(_QWORD *)(a2 + 16) = v3 - 2;
          v23 = *(_OWORD *)(v6 + 40 * (v3 - 2) + 16);
          src[0] = *(_OWORD *)(v6 + 40 * (v3 - 2));
          *(_QWORD *)&src[2] = *(_QWORD *)(v6 + 40 * (v3 - 2) + 32);
          src[1] = v23;
          if ( *(_QWORD *)&src[0] == 3LL )
          {
            v115 = *((_QWORD *)&src[0] + 1);
            v110 = *(_QWORD *)&src[1];
            if ( v3 == 2 )
            {
              *(_QWORD *)&src[0] = 7LL;
            }
            else
            {
              v24 = *((_QWORD *)&src[1] + 1);
              v25 = v3 - 3;
              *(_QWORD *)(a2 + 16) = v25;
              v25 *= 5LL;
              v26 = *(_OWORD *)(v6 + 8 * v25 + 16);
              src[0] = *(_OWORD *)(v6 + 8 * v25);
              *(_QWORD *)&src[2] = *(_QWORD *)(v6 + 8 * v25 + 32);
              src[1] = v26;
              if ( *(_QWORD *)&src[0] == 3LL )
              {
                v27 = *((_QWORD *)&src[0] + 1);
                v28 = src[1];
                std::sys::os_str::bytes::Slice::to_str(src, *(_QWORD *)&src[1], *((_QWORD *)&src[1] + 1));
                if ( *(_QWORD *)&src[0]
                  || (core::num::<impl core::str::traits::FromStr for i128>::from_str(
                        src,
                        *((_QWORD *)&src[0] + 1),
                        *(_QWORD *)&src[1]),
                      LOBYTE(src[0])) )
                {
                  *(_QWORD *)&v126 = 0LL;
                  *((_QWORD *)&v126 + 1) = 1LL;
                  *(_QWORD *)&v127 = 0LL;
                  *(_QWORD *)&src[3] = 32LL;
                  BYTE8(src[3]) = 3;
                  *(_QWORD *)&src[0] = 0LL;
                  *(_QWORD *)&src[1] = 0LL;
                  *(_QWORD *)&src[2] = &v126;
                  *((_QWORD *)&src[2] + 1) = &off_E1CB0;
                  std::sys::os_str::bytes::Slice::to_str(dest, v28, *((_QWORD *)&v28 + 1));
                  if ( *(_QWORD *)&dest[0] )
                    v29 = os_display::unix::write_escaped(src, v28, *((_QWORD *)&v28 + 1));
                  else
                    v29 = os_display::unix::write(src, *((_QWORD *)&dest[0] + 1), *(_QWORD *)&dest[1], 1LL);
                  if ( v29 )
                    core::result::unwrap_failed(aADisplayImplem, 55LL, &v114, &unk_E1CF8, &off_E1CE0);
LABEL_132:
                  v69 = *((_QWORD *)&v126 + 1);
                  v70 = v126;
                  v71 = v127;
                  v72 = 5LL;
                  goto LABEL_133;
                }
                v119 = *((_QWORD *)&src[1] + 1);
                v78 = *(_QWORD *)&src[1];
                std::sys::os_str::bytes::Slice::to_str(src, v110, v24);
                if ( *(_QWORD *)&src[0]
                  || (core::num::<impl core::str::traits::FromStr for i128>::from_str(
                        src,
                        *((_QWORD *)&src[0] + 1),
                        *(_QWORD *)&src[1]),
                      LOBYTE(src[0])) )
                {
                  *(_QWORD *)&dest[0] = 1LL;
                  *((_QWORD *)&dest[0] + 1) = v110;
                  *(_QWORD *)&dest[1] = v24;
                  BYTE8(dest[1]) = 1;
                  *(_QWORD *)&v126 = 0LL;
                  *((_QWORD *)&v126 + 1) = 1LL;
                  *(_QWORD *)&v127 = 0LL;
                  *(_QWORD *)&src[3] = 32LL;
                  BYTE8(src[3]) = 3;
                  *(_QWORD *)&src[0] = 0LL;
                  *(_QWORD *)&src[1] = 0LL;
                  *(_QWORD *)&src[2] = &v126;
                  *((_QWORD *)&src[2] + 1) = &off_E1CB0;
                  if ( (unsigned __int8)<os_display::Quoted as core::fmt::Display>::fmt(dest, src) )
                    core::result::unwrap_failed(aADisplayImplem, 55LL, &v114, &unk_E1CF8, &off_E1CE0);
                  goto LABEL_132;
                }
                v118 = *((_QWORD *)&src[1] + 1);
                v81 = *(_QWORD *)&src[1];
                std::sys::os_str::bytes::Slice::to_str(src, v120, v22);
                if ( *(_QWORD *)&src[0] || *(_QWORD *)&src[1] != 3LL )
                {
LABEL_216:
                  *(_QWORD *)&dest[0] = 1LL;
                  *((_QWORD *)&dest[0] + 1) = v120;
                  *(_QWORD *)&dest[1] = v22;
                  BYTE8(dest[1]) = 1;
                  *(_QWORD *)&v126 = 0LL;
                  *((_QWORD *)&v126 + 1) = 1LL;
                  *(_QWORD *)&v127 = 0LL;
                  *(_QWORD *)&src[3] = 32LL;
                  BYTE8(src[3]) = 3;
                  *(_QWORD *)&src[0] = 0LL;
                  *(_QWORD *)&src[1] = 0LL;
                  *(_QWORD *)&src[2] = &v126;
                  *((_QWORD *)&src[2] + 1) = &off_E1CB0;
                  if ( (unsigned __int8)<os_display::Quoted as core::fmt::Display>::fmt(dest, src) )
                    core::result::unwrap_failed(aADisplayImplem, 55LL, &v114, &unk_E1CF8, &off_E1CE0);
                  v69 = *((_QWORD *)&v126 + 1);
                  v70 = v126;
                  v71 = v127;
                  v72 = 4LL;
LABEL_133:
                  *(_QWORD *)a1 = v72;
                  *(_BYTE *)(a1 + 8) = v70;
                  *(_BYTE *)(a1 + 15) = HIBYTE(v70);
                  *(_WORD *)(a1 + 13) = HIDWORD(v70) >> 8;
                  *(_DWORD *)(a1 + 9) = v70 >> 8;
                  *(_QWORD *)(a1 + 16) = v69;
                  *(_QWORD *)(a1 + 24) = v71;
                  if ( v27 )
                    _rust_dealloc(v28, v27, 1LL);
                  if ( v115 )
                    _rust_dealloc(v110, v115, 1LL);
                  v42 = v116;
                  if ( v116 )
                  {
                    v43 = (_WORD *)v120;
LABEL_79:
                    _rust_dealloc(v43, v42, 1LL);
                    return a1;
                  }
                  return a1;
                }
                if ( **((_WORD **)&src[0] + 1) ^ 0x652D | *(unsigned __int8 *)(*((_QWORD *)&src[0] + 1) + 2LL) ^ 0x71 )
                {
                  if ( **((_WORD **)&src[0] + 1) ^ 0x6E2D | *(unsigned __int8 *)(*((_QWORD *)&src[0] + 1) + 2LL) ^ 0x65 )
                  {
                    if ( **((_WORD **)&src[0] + 1) ^ 0x672D | *(unsigned __int8 *)(*((_QWORD *)&src[0] + 1) + 2LL) ^ 0x74 )
                    {
                      if ( !(**((_WORD **)&src[0] + 1) ^ 0x672D | *(unsigned __int8 *)(*((_QWORD *)&src[0] + 1) + 2LL) ^ 0x65) )
                      {
                        v94 = __OFSUB__(__PAIR128__(v119, v78), __PAIR128__(v118, v81));
                        v93 = (((__PAIR128__(v119, v78) - __PAIR128__(v118, v81)) >> 64) & 0x8000000000000000LL) != 0LL;
                        v119 = (__PAIR128__(v119, v78) - __PAIR128__(v118, v81)) >> 64;
LABEL_300:
                        v89 = v93 == v94;
                        goto LABEL_301;
                      }
                      if ( **((_WORD **)&src[0] + 1) ^ 0x6C2D | *(unsigned __int8 *)(*((_QWORD *)&src[0] + 1) + 2LL) ^ 0x74 )
                      {
                        if ( **((_WORD **)&src[0] + 1) ^ 0x6C2D | *(unsigned __int8 *)(*((_QWORD *)&src[0] + 1) + 2LL) ^ 0x65 )
                          goto LABEL_216;
                        v94 = __OFSUB__(__PAIR128__(v118, v81), __PAIR128__(v119, v78));
                        v93 = (((__PAIR128__(v118, v81) - __PAIR128__(v119, v78)) >> 64) & 0x8000000000000000LL) != 0LL;
                        goto LABEL_300;
                      }
                      v94 = __OFSUB__(__PAIR128__(v119, v78), __PAIR128__(v118, v81));
                      v93 = (((__PAIR128__(v119, v78) - __PAIR128__(v118, v81)) >> 64) & 0x8000000000000000LL) != 0LL;
                      v119 = (__PAIR128__(v119, v78) - __PAIR128__(v118, v81)) >> 64;
                      v89 = v93 ^ v94;
                    }
                    else
                    {
                      v89 = (__int128)__PAIR128__(v118, v81) < (__int128)__PAIR128__(v119, v78);
                    }
                  }
                  else
                  {
                    v89 = (v81 ^ v78 | v118 ^ v119) != 0;
                  }
                }
                else
                {
                  v89 = (v81 ^ v78 | v118 ^ v119) == 0;
                }
LABEL_301:
                *(_BYTE *)(a1 + 8) = v89;
                *(_QWORD *)a1 = 7LL;
                if ( v27 )
                  _rust_dealloc(v28, v27, 1LL);
                if ( v115 )
                  _rust_dealloc(v110, v115, 1LL);
                v10 = 1;
                if ( v116 )
                  _rust_dealloc(v120, v116, 1LL);
                v15 = 0;
                v11 = 1;
                v12 = 1;
                v13 = 1;
                v14 = 1;
                goto LABEL_13;
              }
            }
            uu_test::eval::panic_cold_explicit();
          }
        }
        uu_test::eval::panic_cold_explicit();
      }
      v111 = (_WORD *)*((_QWORD *)&v122 + 1);
      v116 = v122;
      if ( v3 == 1 )
      {
        *(_QWORD *)&src[0] = 7LL;
LABEL_314:
        uu_test::eval::panic_cold_explicit();
      }
      v52 = v123;
      *(_QWORD *)(a2 + 16) = v3 - 2;
      v53 = *(_OWORD *)(v6 + 40 * (v3 - 2) + 16);
      src[0] = *(_OWORD *)(v6 + 40 * (v3 - 2));
      *(_QWORD *)&src[2] = *(_QWORD *)(v6 + 40 * (v3 - 2) + 32);
      src[1] = v53;
      if ( *(_QWORD *)&src[0] != 3LL )
        goto LABEL_314;
      v54 = *((_QWORD *)&src[0] + 1);
      v115 = *(_QWORD *)&src[1];
      if ( v3 == 2 )
      {
        *(_QWORD *)&src[0] = 7LL;
LABEL_318:
        uu_test::eval::panic_cold_explicit();
      }
      v55 = v3 - 3;
      *(_QWORD *)(a2 + 16) = v55;
      v55 *= 5LL;
      v56 = *(_OWORD *)(v6 + 8 * v55 + 16);
      src[0] = *(_OWORD *)(v6 + 8 * v55);
      *(_QWORD *)&src[2] = *(_QWORD *)(v6 + 8 * v55 + 32);
      src[1] = v56;
      if ( *(_QWORD *)&src[0] != 3LL )
        goto LABEL_318;
      v57 = *((_QWORD *)&src[0] + 1);
      v58 = *(_QWORD *)&src[1];
      std::sys::pal::unix::fs::stat(src);
      if ( LODWORD(src[0]) == 2 )
      {
        *((_QWORD *)&dest[0] + 1) = *((_QWORD *)&src[0] + 1);
        *(_QWORD *)&dest[0] = 2LL;
LABEL_112:
        core::ptr::drop_in_place<std::io::error::Error>((char *)dest + 8);
        v65 = 0;
LABEL_113:
        *(_BYTE *)(a1 + 8) = v65;
        *(_QWORD *)a1 = 7LL;
        if ( v57 )
          _rust_dealloc(v58, v57, 1LL);
        if ( v54 )
          _rust_dealloc(v115, v54, 1LL);
        v10 = 1;
        if ( v116 )
          _rust_dealloc(v111, v116, 1LL);
        v14 = 0;
        v11 = 1;
        v12 = 1;
        v13 = 1;
        goto LABEL_12;
      }
      memcpy(dest, src, sizeof(dest));
      if ( *(_QWORD *)&dest[0] == 2LL )
        goto LABEL_112;
      v137[1] = dest[1];
      v137[0] = dest[0];
      v137[3] = dest[3];
      v137[4] = dest[4];
      v137[5] = dest[5];
      v137[6] = dest[6];
      v137[7] = dest[7];
      v137[8] = dest[8];
      v137[9] = dest[9];
      v137[10] = dest[10];
      v119 = *((_QWORD *)&dest[2] + 1);
      v120 = *(_QWORD *)&dest[2];
      v137[2] = dest[2];
      std::sys::pal::unix::fs::stat(src);
      if ( LODWORD(src[0]) == 2 )
      {
        *((_QWORD *)&dest[0] + 1) = *((_QWORD *)&src[0] + 1);
        *(_QWORD *)&dest[0] = 2LL;
        goto LABEL_112;
      }
      memcpy(dest, src, sizeof(dest));
      if ( *(_QWORD *)&dest[0] == 2LL )
        goto LABEL_112;
      v127 = dest[1];
      v126 = dest[0];
      v79 = *((_QWORD *)&dest[2] + 1);
      v129 = dest[3];
      v130 = dest[4];
      v131 = dest[5];
      v132 = dest[6];
      v133 = dest[7];
      v134 = dest[8];
      v135 = dest[9];
      v136 = dest[10];
      v118 = *(_QWORD *)&dest[2];
      v128 = dest[2];
      std::sys::os_str::bytes::Slice::to_str(src, v111, v52);
      if ( !*(_QWORD *)&src[0] && *(_QWORD *)&src[1] == 3LL )
      {
        if ( **((_WORD **)&src[0] + 1) ^ 0x652D | *(unsigned __int8 *)(*((_QWORD *)&src[0] + 1) + 2LL) ^ 0x66 )
        {
          if ( **((_WORD **)&src[0] + 1) ^ 0x6E2D | *(unsigned __int8 *)(*((_QWORD *)&src[0] + 1) + 2LL) ^ 0x74 )
          {
            if ( !(**((_WORD **)&src[0] + 1) ^ 0x6F2D | *(unsigned __int8 *)(*((_QWORD *)&src[0] + 1) + 2LL) ^ 0x74) )
            {
              std::fs::Metadata::modified(src, v137);
              v87 = DWORD2(src[0]);
              if ( DWORD2(src[0]) == 1000000000 )
              {
                *(_QWORD *)&dest[0] = *(_QWORD *)&src[0];
                core::result::unwrap_failed(aCalledResultUn_2, 43LL, dest, &off_E1D18, &off_E1DE0);
              }
              v88 = *(_QWORD *)&src[0];
              std::fs::Metadata::modified(src, &v126);
              if ( DWORD2(src[0]) == 1000000000 )
              {
                *(_QWORD *)&dest[0] = *(_QWORD *)&src[0];
                core::result::unwrap_failed(aCalledResultUn_2, 43LL, dest, &off_E1D18, &off_E1DF8);
              }
              v65 = v88 < *(_QWORD *)&src[0];
              if ( v88 == *(_QWORD *)&src[0] )
                v65 = v87 < DWORD2(src[0]);
              goto LABEL_113;
            }
            goto LABEL_195;
          }
          std::fs::Metadata::modified(src, v137);
          v83 = DWORD2(src[0]);
          if ( DWORD2(src[0]) == 1000000000 )
          {
            *(_QWORD *)&dest[0] = *(_QWORD *)&src[0];
            core::result::unwrap_failed(aCalledResultUn_2, 43LL, dest, &off_E1D18, &off_E1E10);
          }
          v84 = *(_QWORD *)&src[0];
          std::fs::Metadata::modified(src, &v126);
          if ( DWORD2(src[0]) == 1000000000 )
          {
            *(_QWORD *)&dest[0] = *(_QWORD *)&src[0];
            core::result::unwrap_failed(aCalledResultUn_2, 43LL, dest, &off_E1D18, &off_E1E28);
          }
          v85 = v84 != *(_QWORD *)&src[0];
          if ( v84 < *(__int64 *)&src[0] )
            v85 = -1;
          v86 = v83 != DWORD2(src[0]);
          if ( v83 < DWORD2(src[0]) )
            v86 = -1;
          if ( v85 )
            v86 = v85;
          v82 = v86 == 1;
        }
        else
        {
          v82 = (v79 ^ v119 | v118 ^ v120) == 0;
        }
        v65 = v82;
        goto LABEL_113;
      }
LABEL_195:
      *(_QWORD *)&dest[0] = 1LL;
      *((_QWORD *)&dest[0] + 1) = v111;
      *(_QWORD *)&dest[1] = v52;
      BYTE8(dest[1]) = 1;
      *(_QWORD *)v125 = 0LL;
      *(_QWORD *)&v125[8] = 1LL;
      *(_QWORD *)&v125[16] = 0LL;
      *(_QWORD *)&src[3] = 32LL;
      BYTE8(src[3]) = 3;
      *(_QWORD *)&src[0] = 0LL;
      *(_QWORD *)&src[1] = 0LL;
      *(_QWORD *)&src[2] = v125;
      *((_QWORD *)&src[2] + 1) = &off_E1CB0;
      if ( (unsigned __int8)<os_display::Quoted as core::fmt::Display>::fmt(dest, src) )
        core::result::unwrap_failed(aADisplayImplem, 55LL, &v114, &unk_E1CF8, &off_E1CE0);
      v80 = v125[0];
      *(_QWORD *)(a1 + 24) = *(_QWORD *)&v125[16];
      *(_OWORD *)(a1 + 9) = *(_OWORD *)&v125[1];
      *(_QWORD *)a1 = 4LL;
      *(_BYTE *)(a1 + 8) = v80;
      if ( v57 )
        _rust_dealloc(v58, v57, 1LL);
      if ( v54 )
        _rust_dealloc(v115, v54, 1LL);
      v42 = v116;
      if ( v116 )
      {
        v43 = v111;
        goto LABEL_79;
      }
      return a1;
    case 5LL:
      v30 = (_WORD *)*((_QWORD *)&v122 + 1);
      v31 = v122;
      v32 = v123;
      if ( *((_QWORD *)&v121 + 1) )
      {
        v33 = *((_QWORD *)&v122 + 1);
        std::sys::os_str::bytes::Slice::to_str(src, *((_QWORD *)&v122 + 1), v123);
        if ( *(_QWORD *)&src[0] )
          core::option::unwrap_failed(&off_E1D98);
        v35 = *(_QWORD *)(a2 + 16);
        if ( v35 )
        {
          v36 = (_WORD *)*((_QWORD *)&src[0] + 1);
          v34 = *(_QWORD *)&src[1];
          v37 = v35 - 1;
          *(_QWORD *)(a2 + 16) = v37;
          v33 = *(_QWORD *)(a2 + 8);
          v37 *= 5LL;
          v38 = *(_OWORD *)(v33 + 8 * v37 + 16);
          src[0] = *(_OWORD *)(v33 + 8 * v37);
          v35 = *(_QWORD *)(v33 + 8 * v37 + 32);
          *(_QWORD *)&src[2] = v35;
          src[1] = v38;
          if ( *(_QWORD *)&src[0] == 3LL )
          {
            v116 = *((_QWORD *)&src[0] + 1);
            v115 = *(_QWORD *)&src[1];
            if ( v34 != 2 )
              goto LABEL_68;
            switch ( *v36 )
            {
              case 0x622D:
                v39 = 0;
                break;
              case 0x632D:
                v39 = 1;
                break;
              case 0x642D:
                v39 = 2;
                break;
              case 0x652D:
                v39 = 3;
                break;
              case 0x662D:
                v39 = 5;
                break;
              case 0x672D:
                v39 = 6;
                break;
              case 0x472D:
                v39 = 7;
                break;
              case 0x682D:
                goto LABEL_206;
              case 0x6B2D:
                v39 = 9;
                break;
              case 0x4C2D:
LABEL_206:
                std::sys::pal::unix::fs::lstat(src);
                if ( LODWORD(src[0]) == 2 )
                {
                  *((_QWORD *)&dest[0] + 1) = *((_QWORD *)&src[0] + 1);
                  *(_QWORD *)&dest[0] = 2LL;
                }
                else
                {
                  memcpy(dest, src, sizeof(dest));
                }
                v39 = 8;
                if ( LODWORD(dest[0]) == 2 )
                  goto LABEL_262;
                goto LABEL_259;
              default:
                switch ( *v36 )
                {
                  case 0x4E2D:
                    v39 = 4;
                    break;
                  case 0x4F2D:
                    v39 = 10;
                    break;
                  case 0x702D:
                    v39 = 11;
                    break;
                  case 0x722D:
                    v39 = 12;
                    break;
                  case 0x532D:
                    v39 = 13;
                    break;
                  case 0x732D:
                    v39 = 14;
                    break;
                  case 0x742D:
                    uu_test::isatty(src, v115, *((_QWORD *)&src[1] + 1));
                    v90 = *(_QWORD *)&src[0];
                    v91 = BYTE8(src[0]);
                    if ( *(_QWORD *)&src[0] != 7LL )
                    {
                      *(_QWORD *)(a1 + 24) = *((_QWORD *)&src[1] + 1);
                      *(_OWORD *)(a1 + 9) = *(_OWORD *)((char *)src + 9);
                      *(_QWORD *)a1 = v90;
                      *(_BYTE *)(a1 + 8) = v91;
                      if ( v116 )
                        _rust_dealloc(v115, v116, 1LL);
                      if ( v31 )
                      {
                        v43 = v30;
                        v42 = v31;
                        goto LABEL_79;
                      }
                      return a1;
                    }
                    v92 = BYTE8(src[0]) != 0;
                    goto LABEL_294;
                  case 0x752D:
                    v39 = 15;
                    break;
                  case 0x772D:
                    v39 = 16;
                    break;
                  default:
                    v39 = 17;
                    if ( *v36 != 30765 )
LABEL_68:
                      uu_test::eval::panic_cold_explicit();
                    break;
                }
                break;
            }
            std::sys::pal::unix::fs::stat(src);
            if ( LODWORD(src[0]) == 2 )
            {
              *((_QWORD *)&dest[0] + 1) = *((_QWORD *)&src[0] + 1);
              *(_QWORD *)&dest[0] = 2LL;
LABEL_262:
              core::ptr::drop_in_place<std::io::error::Error>((char *)dest + 8);
              v92 = 0;
LABEL_294:
              *(_BYTE *)(a1 + 8) = v92;
              *(_QWORD *)a1 = 7LL;
              if ( v116 )
                _rust_dealloc(v115, v116, 1LL);
              v10 = 1;
              if ( v31 )
                _rust_dealloc(v30, v31, 1LL);
              v12 = 0;
              v11 = 1;
LABEL_10:
              v13 = 1;
LABEL_11:
              v14 = 1;
LABEL_12:
              v15 = 1;
LABEL_13:
              v16 = 1;
              goto LABEL_14;
            }
            memcpy(dest, src, sizeof(dest));
            if ( LODWORD(dest[0]) == 2 )
              goto LABEL_262;
LABEL_259:
            v113 = v30;
            src[3] = dest[3];
            src[2] = dest[2];
            src[1] = dest[1];
            src[0] = dest[0];
            v95 = DWORD2(dest[3]);
            v96 = HIDWORD(dest[3]);
            v97 = dest[4];
            src[4] = dest[4];
            *((_QWORD *)&src[10] + 1) = *((_QWORD *)&dest[10] + 1);
            *(_OWORD *)((char *)&src[9] + 8) = *(_OWORD *)((char *)&dest[9] + 8);
            *(_OWORD *)((char *)&src[8] + 8) = *(_OWORD *)((char *)&dest[8] + 8);
            *(_OWORD *)((char *)&src[7] + 8) = *(_OWORD *)((char *)&dest[7] + 8);
            *(_OWORD *)((char *)&src[6] + 8) = *(_OWORD *)((char *)&dest[6] + 8);
            *(_OWORD *)((char *)&src[5] + 8) = *(_OWORD *)((char *)&dest[5] + 8);
            *(_QWORD *)&src[5] = *(_QWORD *)&dest[5];
            switch ( v39 )
            {
              case 0:
                v98 = (WORD4(dest[3]) & 0xF000) == 24576;
                goto LABEL_292;
              case 1:
                v98 = (WORD4(dest[3]) & 0xF000) == 0x2000;
                goto LABEL_292;
              case 2:
                v98 = (WORD4(dest[3]) & 0xF000) == 0x4000;
                goto LABEL_292;
              case 3:
                v92 = 1;
                goto LABEL_293;
              case 4:
                v30 = v113;
                std::fs::Metadata::accessed(&v126, src);
                v104 = DWORD2(v126);
                if ( DWORD2(v126) == 1000000000 )
                {
                  *(_QWORD *)&v137[0] = v126;
                  core::result::unwrap_failed(aCalledResultUn_2, 43LL, v137, &off_E1D18, &off_E1E40);
                }
                v105 = v126;
                std::fs::Metadata::modified(&v126, src);
                if ( DWORD2(v126) == 1000000000 )
                {
                  *(_QWORD *)&v137[0] = v126;
                  core::result::unwrap_failed(aCalledResultUn_2, 43LL, v137, &off_E1D18, &off_E1E58);
                }
                v106 = v104 < DWORD2(v126);
                v92 = v105 < (__int64)v126;
                if ( v105 == (_QWORD)v126 )
                  v92 = v106;
                goto LABEL_294;
              case 5:
                v98 = (WORD4(dest[3]) & 0xF000) == 0x8000;
                goto LABEL_292;
              case 6:
                v108 = DWORD2(dest[3]) >> 10;
                goto LABEL_289;
              case 7:
                v98 = v97 == getegid();
                goto LABEL_292;
              case 8:
                v98 = (WORD4(dest[3]) & 0xF000) == 40960;
                goto LABEL_292;
              case 9:
                v108 = DWORD2(dest[3]) >> 9;
                goto LABEL_289;
              case 10:
                v98 = v96 == geteuid();
                goto LABEL_292;
              case 11:
                v98 = (WORD4(dest[3]) & 0xF000) == 4096;
                goto LABEL_292;
              case 12:
                v107 = geteuid();
                v100 = 256;
                if ( v107 == v96 )
                  goto LABEL_284;
                v101 = getegid() == v97;
                v102 = 32;
                v100 = 4;
                break;
              case 13:
                v98 = (WORD4(dest[3]) & 0xF000) == 49152;
LABEL_292:
                v92 = v98;
                goto LABEL_293;
              case 14:
                v103 = *(_QWORD *)&dest[5] == 0LL;
                goto LABEL_285;
              case 15:
                v108 = DWORD2(dest[3]) >> 11;
LABEL_289:
                v92 = v108 & 1;
                goto LABEL_293;
              case 16:
                v99 = geteuid();
                v100 = 128;
                if ( v99 == v96 )
                  goto LABEL_284;
                v101 = getegid() == v97;
                v102 = 16;
                v100 = 2;
                break;
              case 17:
                v109 = geteuid();
                v100 = 64;
                if ( v109 == v96 )
                  goto LABEL_284;
                v101 = getegid() == v97;
                v102 = 8;
                v100 = 1;
                break;
            }
            if ( v101 )
              v100 = v102;
LABEL_284:
            v103 = (v95 & v100) == 0;
LABEL_285:
            v92 = !v103;
LABEL_293:
            v30 = v113;
            goto LABEL_294;
          }
        }
        else
        {
          *(_QWORD *)&src[0] = 7LL;
        }
        uu_test::eval::panic_cold_explicit(src, v33, v35, v34);
      }
      if ( v3 == 1 )
        goto LABEL_86;
      v45 = v3 - 2;
      *(_QWORD *)(a2 + 16) = v45;
      v45 *= 5LL;
      v46 = *(_OWORD *)(v6 + 8 * v45 + 16);
      src[0] = *(_OWORD *)(v6 + 8 * v45);
      *(_QWORD *)&src[2] = *(_QWORD *)(v6 + 8 * v45 + 32);
      src[1] = v46;
      v47 = *(_QWORD *)&src[0];
      if ( *(_QWORD *)&src[0] == 3LL )
      {
        v112 = v30;
        v75 = *((_QWORD *)&src[0] + 1);
        v76 = *((_QWORD *)&src[1] + 1);
        v74 = *(_QWORD *)&src[1];
      }
      else
      {
        if ( *(_QWORD *)&src[0] != 6LL )
        {
          if ( *(_QWORD *)&src[0] == 7LL )
          {
LABEL_86:
            *(_BYTE *)(a1 + 8) = 1;
            *(_QWORD *)a1 = 7LL;
          }
          else
          {
            *(_QWORD *)&dest[0] = 1LL;
            *((_QWORD *)&dest[0] + 1) = v30;
            *(_QWORD *)&dest[1] = v32;
            BYTE8(dest[1]) = 1;
            <T as alloc::string::ToString>::to_string(&v126, dest);
            *(_QWORD *)(a1 + 24) = v127;
            *(_OWORD *)(a1 + 8) = v126;
            *(_QWORD *)a1 = 3LL;
            if ( v47 == 3 )
            {
              if ( *((_QWORD *)&src[0] + 1) )
                _rust_dealloc(*(_QWORD *)&src[1], *((_QWORD *)&src[0] + 1), 1LL);
            }
            else if ( v47 != 7 )
            {
              core::ptr::drop_in_place<uu_test::parser::Symbol>(src);
            }
          }
          if ( !v31 )
            return a1;
          v43 = v30;
          v42 = v31;
          goto LABEL_79;
        }
        v112 = v30;
        std::sys::os_str::bytes::Slice::to_owned(dest, 1LL, 0LL);
        v74 = *((_QWORD *)&dest[0] + 1);
        v75 = *(_QWORD *)&dest[0];
        v76 = *(_QWORD *)&dest[1];
        core::ptr::drop_in_place<uu_test::parser::Symbol>(src);
      }
      if ( v32 == 2 )
      {
        v77 = v76 == 0;
        if ( *v112 != 31277 )
          v77 = v76 != 0;
      }
      else
      {
        v77 = v76 != 0;
      }
      *(_BYTE *)(a1 + 8) = v77;
      *(_QWORD *)a1 = 7LL;
      if ( v75 )
        _rust_dealloc(v74, v75, 1LL);
      v10 = 1;
      if ( v31 )
        _rust_dealloc(v112, v31, 1LL);
      v13 = 0;
      v11 = 1;
      v12 = 1;
      goto LABEL_11;
    case 6LL:
    case 7LL:
      goto LABEL_6;
    default:
      *(_QWORD *)a1 = 0LL;
      goto LABEL_8;
  }
}
