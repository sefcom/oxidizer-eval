__int64 __fastcall uu_expr::syntax_tree::Parser::parse_simple_expression(__int64 a1, __int64 *a2, __int64 a3)
{
  _OWORD *v3; // r12
  __int64 v6; // rdx
  __int64 v7; // rax
  void *v8; // r13
  __int64 *v9; // r15
  __int128 v10; // xmm0
  __int64 v11; // rcx
  char v12; // dl
  char v13; // cl
  _OWORD *v14; // r14
  __int128 v15; // xmm0
  char v16; // al
  int v17; // eax
  __int128 v19; // xmm0
  __int128 v20; // xmm0
  __int64 v21; // rdx
  __int128 v22; // xmm0
  __int64 v23; // rdx
  __int64 v24; // rcx
  _BYTE *v25; // rcx
  __int128 v26; // xmm0
  _OWORD *v27; // rax
  __int128 v28; // xmm0
  _OWORD *v29; // rax
  __int128 v30; // xmm0
  __int64 v31; // rdi
  bool v32; // cf
  unsigned __int64 v33; // rdi
  unsigned __int64 v34; // rsi
  __int128 v35; // xmm0
  __int128 v36; // xmm0
  __int128 v37; // xmm0
  __int128 v38; // xmm0
  __int128 v39; // xmm0
  int v40; // [rsp+0h] [rbp-458h]
  char v41; // [rsp+4h] [rbp-454h]
  __int64 v42; // [rsp+8h] [rbp-450h] BYREF
  _OWORD *v43; // [rsp+10h] [rbp-448h]
  void *dest; // [rsp+18h] [rbp-440h]
  __int128 v45; // [rsp+20h] [rbp-438h] BYREF
  __int128 v46; // [rsp+30h] [rbp-428h]
  _OWORD *v47; // [rsp+40h] [rbp-418h]
  _OWORD *v48; // [rsp+48h] [rbp-410h]
  _OWORD *v49; // [rsp+50h] [rbp-408h]
  _OWORD *v50; // [rsp+58h] [rbp-400h]
  __int128 v51; // [rsp+60h] [rbp-3F8h] BYREF
  __int128 v52; // [rsp+70h] [rbp-3E8h]
  __int128 v53; // [rsp+80h] [rbp-3D8h] BYREF
  __int128 v54; // [rsp+90h] [rbp-3C8h]
  __int128 v55; // [rsp+A0h] [rbp-3B8h] BYREF
  __int128 v56; // [rsp+B0h] [rbp-3A8h]
  __int128 v57; // [rsp+C0h] [rbp-398h] BYREF
  __int128 v58; // [rsp+D0h] [rbp-388h]
  __int64 v59; // [rsp+E0h] [rbp-378h] BYREF
  _BYTE *v60; // [rsp+E8h] [rbp-370h]
  __int128 v61; // [rsp+F0h] [rbp-368h]
  __int128 v62; // [rsp+100h] [rbp-358h]
  __int128 v63; // [rsp+110h] [rbp-348h]
  __int128 v64; // [rsp+120h] [rbp-338h]
  __int128 v65; // [rsp+130h] [rbp-328h]
  __int128 v66; // [rsp+140h] [rbp-318h]
  __int128 v67; // [rsp+150h] [rbp-308h]
  __int128 v68; // [rsp+160h] [rbp-2F8h]
  __int128 v69; // [rsp+170h] [rbp-2E8h]
  __int128 v70; // [rsp+1E0h] [rbp-278h]
  __int128 v71; // [rsp+1F0h] [rbp-268h]
  __int128 v72; // [rsp+240h] [rbp-218h]
  __int128 v73; // [rsp+250h] [rbp-208h]
  __int64 v74; // [rsp+268h] [rbp-1F0h] BYREF
  void *src; // [rsp+270h] [rbp-1E8h]
  size_t n; // [rsp+278h] [rbp-1E0h]
  __int64 v77; // [rsp+280h] [rbp-1D8h]
  _QWORD v78[4]; // [rsp+288h] [rbp-1D0h] BYREF
  __int128 v79; // [rsp+2A8h] [rbp-1B0h] BYREF
  __int64 v80; // [rsp+2B8h] [rbp-1A0h]
  __int64 v81; // [rsp+2C0h] [rbp-198h] BYREF
  __int128 v82; // [rsp+2C8h] [rbp-190h]
  __int128 v83; // [rsp+2D8h] [rbp-180h]
  __int64 v84; // [rsp+2E8h] [rbp-170h] BYREF
  __int128 v85; // [rsp+2F0h] [rbp-168h]
  __int128 v86; // [rsp+300h] [rbp-158h]
  __int64 v87; // [rsp+310h] [rbp-148h] BYREF
  __int128 v88; // [rsp+318h] [rbp-140h]
  __int128 v89; // [rsp+328h] [rbp-130h]
  __int64 v90; // [rsp+338h] [rbp-120h] BYREF
  __int128 v91; // [rsp+340h] [rbp-118h]
  __int128 v92; // [rsp+350h] [rbp-108h]
  __int64 v93; // [rsp+360h] [rbp-F8h] BYREF
  __int128 v94; // [rsp+368h] [rbp-F0h]
  __int128 v95; // [rsp+378h] [rbp-E0h]
  __int64 v96; // [rsp+388h] [rbp-D0h] BYREF
  __int128 v97; // [rsp+390h] [rbp-C8h]
  __int128 v98; // [rsp+3A0h] [rbp-B8h]
  __int64 v99; // [rsp+3B0h] [rbp-A8h] BYREF
  __int128 v100; // [rsp+3B8h] [rbp-A0h]
  __int128 v101; // [rsp+3C8h] [rbp-90h]
  __int64 v102; // [rsp+3D8h] [rbp-80h] BYREF
  __int128 v103; // [rsp+3E0h] [rbp-78h]
  __int128 v104; // [rsp+3F0h] [rbp-68h]
  __int64 v105; // [rsp+400h] [rbp-58h] BYREF
  __int128 v106; // [rsp+408h] [rbp-50h]
  __int128 v107; // [rsp+418h] [rbp-40h]

  uu_expr::syntax_tree::Parser::next((__int64)&v74, a2, a3);
  v7 = v74;
  v8 = src;
  v9 = (__int64 *)n;
  if ( v74 != 7 )
  {
    v11 = v77;
    goto LABEL_11;
  }
  if ( n == 1 )
  {
    v17 = *(unsigned __int8 *)src;
    if ( v17 == 40 )
    {
      v9 = &v105;
      uu_expr::syntax_tree::Parser::parse_precedence((__int64)&v105, a2, 0LL);
      if ( v105 )
        goto LABEL_31;
      v46 = v107;
      v45 = v106;
      uu_expr::syntax_tree::Parser::next((__int64)&v59, a2, v21);
      if ( v59 == 7 )
      {
        if ( (_QWORD)v61 == 1LL && *v60 == 41 )
        {
          v16 = v45;
          v12 = BYTE1(v45);
          v13 = BYTE2(v45);
          v40 = *(_DWORD *)((char *)&v45 + 3);
          v41 = BYTE7(v45);
          v14 = (_OWORD *)*((_QWORD *)&v45 + 1);
          v9 = (__int64 *)*((_QWORD *)&v46 + 1);
          v3 = (_OWORD *)v46;
          goto LABEL_22;
        }
        v31 = a2[2];
        v32 = v31 == 0;
        v33 = v31 - 1;
        if ( v32 )
          core::panicking::panic_const::panic_const_sub_overflow(&off_196E90, a2, v23, v24);
        v34 = a2[1];
        if ( v33 >= v34 )
          core::panicking::panic_bounds_check(v33, v34, &off_196EA8, v24);
        <T as core::convert::Into<U>>::into(
          &v79,
          *(_QWORD *)(*a2 + 16 * v33),
          *(_QWORD *)(*a2 + 16 * v33 + 8),
          &off_196EC0);
        *(_QWORD *)(a1 + 8) = 6LL;
        *(_OWORD *)(a1 + 16) = v79;
        *(_QWORD *)(a1 + 32) = v80;
      }
      else
      {
        v25 = v60;
        *(_QWORD *)(a1 + 8) = v59;
        *(_QWORD *)(a1 + 16) = v25;
        *(_OWORD *)(a1 + 24) = v61;
      }
      *(_QWORD *)a1 = 1LL;
      core::ptr::drop_in_place<uu_expr::syntax_tree::AstNode>(&v45);
      return a1;
    }
    if ( v17 != 43 )
      goto LABEL_20;
    uu_expr::syntax_tree::Parser::next((__int64)v78, a2, v6);
    v7 = v78[0];
    v8 = (void *)v78[1];
    v9 = (__int64 *)v78[2];
    if ( v78[0] == 7LL )
      goto LABEL_20;
    v11 = v78[3];
LABEL_11:
    *(_QWORD *)(a1 + 8) = v7;
    *(_QWORD *)(a1 + 16) = v8;
    *(_QWORD *)(a1 + 24) = v9;
    *(_QWORD *)(a1 + 32) = v11;
LABEL_12:
    *(_QWORD *)a1 = 1LL;
    return a1;
  }
  if ( n == 6 )
  {
    if ( !(*(_DWORD *)src ^ 0x73627573 | *((unsigned __int16 *)src + 2) ^ 0x7274) )
    {
      v9 = &v96;
      uu_expr::syntax_tree::Parser::parse_precedence((__int64)&v96, a2, 0LL);
      if ( !v96 )
      {
        v54 = v98;
        v53 = v97;
        uu_expr::syntax_tree::Parser::parse_precedence((__int64)&v84, a2, 0LL);
        if ( v84 )
        {
          v19 = v85;
          *(_OWORD *)(a1 + 24) = v86;
          *(_OWORD *)(a1 + 8) = v19;
          *(_QWORD *)a1 = 1LL;
        }
        else
        {
          v56 = v86;
          v55 = v85;
          uu_expr::syntax_tree::Parser::parse_precedence((__int64)&v87, a2, 0LL);
          if ( !v87 )
          {
            v69 = v89;
            v68 = v88;
            v14 = (_OWORD *)alloc::alloc::exchange_malloc(32LL, 8LL);
            v37 = v53;
            v14[1] = v54;
            *v14 = v37;
            v48 = v14;
            v3 = (_OWORD *)alloc::alloc::exchange_malloc(32LL, 8LL);
            v38 = v55;
            v3[1] = v56;
            *v3 = v38;
            v49 = v3;
            v9 = (__int64 *)alloc::alloc::exchange_malloc(32LL, 8LL);
            v39 = v68;
            *((_OWORD *)v9 + 1) = v69;
            *(_OWORD *)v9 = v39;
            v16 = 2;
            goto LABEL_22;
          }
          v26 = v88;
          *(_OWORD *)(a1 + 24) = v89;
          *(_OWORD *)(a1 + 8) = v26;
          *(_QWORD *)a1 = 1LL;
          core::ptr::drop_in_place<uu_expr::syntax_tree::AstNode>(&v55);
        }
        core::ptr::drop_in_place<uu_expr::syntax_tree::AstNode>(&v53);
        return a1;
      }
      goto LABEL_31;
    }
    if ( *(_DWORD *)src ^ 0x676E656C | *((unsigned __int16 *)src + 2) ^ 0x6874 )
      goto LABEL_20;
    v9 = &v102;
    uu_expr::syntax_tree::Parser::parse_precedence((__int64)&v102, a2, 0LL);
    if ( v102 )
      goto LABEL_31;
    v73 = v104;
    v72 = v103;
    v14 = (_OWORD *)alloc::alloc::exchange_malloc(32LL, 8LL);
    v15 = v72;
    v14[1] = v73;
    *v14 = v15;
    v16 = 3;
LABEL_22:
    *(_BYTE *)(a1 + 8) = v16;
    *(_BYTE *)(a1 + 9) = v12;
    *(_BYTE *)(a1 + 10) = v13;
    *(_DWORD *)(a1 + 11) = v40;
    *(_BYTE *)(a1 + 15) = v41;
    *(_QWORD *)(a1 + 16) = v14;
    *(_QWORD *)(a1 + 24) = v3;
    *(_QWORD *)(a1 + 32) = v9;
    *(_QWORD *)a1 = 0LL;
    return a1;
  }
  if ( n != 5 )
    goto LABEL_20;
  if ( !(*(_DWORD *)src ^ 0x6374616D | *((unsigned __int8 *)src + 4) ^ 0x68) )
  {
    v9 = &v93;
    uu_expr::syntax_tree::Parser::parse_precedence((__int64)&v93, a2, 0LL);
    if ( !v93 )
    {
      v52 = v95;
      v51 = v94;
      uu_expr::syntax_tree::Parser::parse_precedence((__int64)&v81, a2, 0LL);
      if ( v81 )
      {
        v20 = v82;
        *(_OWORD *)(a1 + 24) = v83;
        *(_OWORD *)(a1 + 8) = v20;
        *(_QWORD *)a1 = 1LL;
        core::ptr::drop_in_place<uu_expr::syntax_tree::AstNode>(&v51);
        return a1;
      }
      v63 = v83;
      v62 = v82;
      v64 = v51;
      v65 = v52;
      v27 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
      if ( !v27 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v28 = v64;
      v27[1] = v65;
      *v27 = v28;
      v47 = v27;
      v66 = v62;
      v67 = v63;
      v29 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
      v3 = v29;
      if ( !v29 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v30 = v66;
      v29[1] = v67;
      *v29 = v30;
      v16 = 1;
      v12 = 2;
      v13 = 0;
      v14 = v47;
      goto LABEL_22;
    }
    goto LABEL_31;
  }
  if ( *(_DWORD *)src ^ 0x65646E69 | *((unsigned __int8 *)src + 4) ^ 0x78 )
  {
LABEL_20:
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v42, v9, 0LL);
    v14 = v43;
    if ( v42 )
      alloc::raw_vec::handle_error(v43, dest);
    v3 = dest;
    core::intrinsics::copy_nonoverlapping::precondition_check(v8, dest, 1LL, 1LL, v9);
    memcpy(v3, v8, (size_t)v9);
    v16 = 0;
    goto LABEL_22;
  }
  v9 = &v99;
  uu_expr::syntax_tree::Parser::parse_precedence((__int64)&v99, a2, 0LL);
  if ( v99 )
  {
LABEL_31:
    v22 = *(_OWORD *)(v9 + 1);
    *(_OWORD *)(a1 + 24) = *(_OWORD *)(v9 + 3);
    *(_OWORD *)(a1 + 8) = v22;
    goto LABEL_12;
  }
  v58 = v101;
  v57 = v100;
  uu_expr::syntax_tree::Parser::parse_precedence((__int64)&v90, a2, 0LL);
  if ( !v90 )
  {
    v71 = v92;
    v70 = v91;
    v14 = (_OWORD *)alloc::alloc::exchange_malloc(32LL, 8LL);
    v35 = v57;
    v14[1] = v58;
    *v14 = v35;
    v50 = v14;
    v3 = (_OWORD *)alloc::alloc::exchange_malloc(32LL, 8LL);
    v36 = v70;
    v3[1] = v71;
    *v3 = v36;
    v12 = 2;
    v13 = 1;
    v16 = 1;
    goto LABEL_22;
  }
  v10 = v91;
  *(_OWORD *)(a1 + 24) = v92;
  *(_OWORD *)(a1 + 8) = v10;
  *(_QWORD *)a1 = 1LL;
  core::ptr::drop_in_place<uu_expr::syntax_tree::AstNode>(&v57);
  return a1;
}
