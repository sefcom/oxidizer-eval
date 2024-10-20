_OWORD *__fastcall uu_expr::syntax_tree::Parser::parse_simple_expression(__int64 a1, _QWORD *a2)
{
  _OWORD *v2; // r15
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  _OWORD *result; // rax
  __int128 *v10; // rdi
  unsigned __int64 v11; // rdi
  __int64 v12; // rdi
  const void *v13; // r15
  signed __int64 v14; // r14
  __int64 v15; // r13
  __int64 v16; // rax
  void *v17; // r12
  char v18; // dl
  _OWORD *v19; // r14
  __int128 v20; // xmm0
  char v21; // cl
  _QWORD *v22; // r14
  __int64 v23; // rdx
  __int64 v24; // rcx
  _OWORD *v25; // rax
  __int128 v26; // xmm0
  __int128 v27; // xmm0
  __int64 v28; // rax
  __int64 v29; // rcx
  unsigned __int64 v30; // rsi
  unsigned __int64 v31; // rdi
  __int128 v32; // xmm0
  __int128 v33; // xmm0
  __int128 v34; // xmm0
  __int128 v35; // xmm0
  __int128 v36; // xmm0
  __int128 v37; // [rsp+0h] [rbp-1A8h]
  __int128 v38; // [rsp+0h] [rbp-1A8h]
  __int128 v39; // [rsp+0h] [rbp-1A8h]
  __int128 v40; // [rsp+0h] [rbp-1A8h]
  __int128 v41; // [rsp+0h] [rbp-1A8h]
  __int128 v42; // [rsp+10h] [rbp-198h]
  _BYTE v43[24]; // [rsp+20h] [rbp-188h] BYREF
  __int128 v44; // [rsp+38h] [rbp-170h]
  int v45; // [rsp+48h] [rbp-160h]
  char v46; // [rsp+4Ch] [rbp-15Ch]
  __int128 v47; // [rsp+50h] [rbp-158h] BYREF
  __int128 v48; // [rsp+60h] [rbp-148h]
  __int128 v49; // [rsp+70h] [rbp-138h] BYREF
  __int128 v50; // [rsp+80h] [rbp-128h]
  __int128 v51; // [rsp+90h] [rbp-118h] BYREF
  __int128 v52; // [rsp+A0h] [rbp-108h]
  __int128 v53; // [rsp+B0h] [rbp-F8h] BYREF
  __int128 v54; // [rsp+C0h] [rbp-E8h]
  __int128 v55; // [rsp+D0h] [rbp-D8h] BYREF
  __int128 v56; // [rsp+E0h] [rbp-C8h]
  __int128 v57; // [rsp+F0h] [rbp-B8h]
  __int128 v58; // [rsp+100h] [rbp-A8h]
  __int128 v59; // [rsp+110h] [rbp-98h]
  __int128 v60; // [rsp+120h] [rbp-88h]
  __int128 v61; // [rsp+130h] [rbp-78h]
  __int128 v62; // [rsp+140h] [rbp-68h]
  __int128 v63; // [rsp+150h] [rbp-58h]
  __int128 v64; // [rsp+160h] [rbp-48h]

  v4 = a2[1];
  v5 = a2[2];
  if ( v5 >= v4 )
  {
    v11 = v5 - 1;
    if ( v11 >= v4 )
      core::panicking::panic_bounds_check(v11, a2[1], &off_16A948);
    v12 = 16 * v11;
    v13 = *(const void **)(*a2 + v12);
    v14 = *(_QWORD *)(*a2 + v12 + 8);
    if ( v14 )
    {
      if ( v14 < 0 )
      {
        v15 = 0LL;
      }
      else
      {
        v15 = 1LL;
        v16 = _rust_alloc(v14, 1LL);
        if ( v16 )
        {
          v17 = (void *)v16;
LABEL_16:
          result = memcpy(v17, v13, v14);
          *(_QWORD *)(a1 + 8) = 1LL;
          *(_QWORD *)(a1 + 16) = v14;
          *(_QWORD *)(a1 + 24) = v17;
          *(_QWORD *)(a1 + 32) = v14;
          *(_QWORD *)a1 = 1LL;
          return result;
        }
      }
      alloc::raw_vec::handle_error(v15, v14);
    }
    v17 = &dword_0 + 1;
    goto LABEL_16;
  }
  v6 = *a2;
  a2[2] = v5 + 1;
  v7 = *(_QWORD *)(v6 + 16 * v5);
  v8 = *(_QWORD *)(v6 + 16 * v5 + 8);
  if ( v8 == 1 )
  {
    if ( *(_BYTE *)v7 == 43 )
    {
      uu_expr::syntax_tree::Parser::next((__int64)v43, a2);
      a2 = *(_QWORD **)&v43[8];
      result = *(_OWORD **)v43;
      v8 = *(_QWORD *)&v43[16];
      if ( *(_QWORD *)v43 != 7LL )
      {
        v24 = v44;
        *(_OWORD *)(a1 + 8) = *(_OWORD *)v43;
        *(_QWORD *)(a1 + 24) = v8;
        *(_QWORD *)(a1 + 32) = v24;
        *(_QWORD *)a1 = 1LL;
        return result;
      }
      goto LABEL_31;
    }
    if ( *(_BYTE *)v7 == 40 )
    {
      v22 = a2;
      result = (_OWORD *)uu_expr::syntax_tree::Parser::parse_precedence((__int64)v43, a2, 0LL);
      v37 = *(_OWORD *)&v43[8];
      v42 = v44;
      if ( *(_QWORD *)v43 )
        goto LABEL_37;
      v48 = v44;
      v47 = *(_OWORD *)&v43[8];
      uu_expr::syntax_tree::Parser::next((__int64)v43, a2);
      v23 = *(_QWORD *)&v43[16];
      if ( *(_QWORD *)v43 == 7LL )
      {
        if ( *(_QWORD *)&v43[16] == 1LL && **(_BYTE **)&v43[8] == 41 )
        {
          v21 = v47;
          LOBYTE(a2) = BYTE1(v47);
          v18 = BYTE2(v47);
          v45 = *(_DWORD *)((char *)&v47 + 3);
          v46 = BYTE7(v47);
          v19 = (_OWORD *)*((_QWORD *)&v47 + 1);
          result = (_OWORD *)*((_QWORD *)&v48 + 1);
          v2 = (_OWORD *)v48;
          goto LABEL_32;
        }
        v30 = a2[1];
        v31 = v22[2] - 1LL;
        if ( v31 >= v30 )
          core::panicking::panic_bounds_check(v31, v30, &off_16AB10);
        <T as alloc::slice::hack::ConvertVec>::to_vec(
          v43,
          *(_QWORD *)(*v22 + 16 * v31),
          *(_QWORD *)(*v22 + 16 * v31 + 8));
        *(_QWORD *)(a1 + 32) = *(_QWORD *)&v43[16];
        *(_OWORD *)(a1 + 16) = *(_OWORD *)v43;
        v28 = 6LL;
        v29 = 8LL;
      }
      else
      {
        v28 = v44;
        *(_OWORD *)(a1 + 8) = *(_OWORD *)v43;
        *(_QWORD *)(a1 + 24) = v23;
        v29 = 32LL;
      }
      *(_QWORD *)(a1 + v29) = v28;
      *(_QWORD *)a1 = 1LL;
      v10 = &v47;
      return (_OWORD *)core::ptr::drop_in_place<uu_expr::syntax_tree::AstNode>(v10);
    }
    goto LABEL_30;
  }
  if ( v8 == 6 )
  {
    if ( !(*(_DWORD *)v7 ^ 0x73627573 | *(unsigned __int16 *)(v7 + 4) ^ 0x7274) )
    {
      result = (_OWORD *)uu_expr::syntax_tree::Parser::parse_precedence((__int64)v43, a2, 0LL);
      v37 = *(_OWORD *)&v43[8];
      v42 = v44;
      if ( !*(_QWORD *)v43 )
      {
        v52 = v44;
        v51 = *(_OWORD *)&v43[8];
        uu_expr::syntax_tree::Parser::parse_precedence((__int64)v43, a2, 0LL);
        v39 = *(_OWORD *)&v43[8];
        if ( *(_QWORD *)v43 )
        {
          *(_OWORD *)(a1 + 24) = v44;
          *(_OWORD *)(a1 + 8) = v39;
          *(_QWORD *)a1 = 1LL;
        }
        else
        {
          v54 = v44;
          v53 = *(_OWORD *)&v43[8];
          uu_expr::syntax_tree::Parser::parse_precedence((__int64)v43, a2, 0LL);
          v41 = *(_OWORD *)&v43[8];
          if ( !*(_QWORD *)v43 )
          {
            v60 = v44;
            v59 = *(_OWORD *)&v43[8];
            v19 = (_OWORD *)((__int64 (*)(void))alloc::alloc::exchange_malloc)();
            v34 = v51;
            v19[1] = v52;
            *v19 = v34;
            v2 = (_OWORD *)alloc::alloc::exchange_malloc(v43);
            v35 = v53;
            v2[1] = v54;
            *v2 = v35;
            *(_QWORD *)v43 = v2;
            result = (_OWORD *)alloc::alloc::exchange_malloc(v43);
            v36 = v59;
            result[1] = v60;
            *result = v36;
            v21 = 2;
            goto LABEL_32;
          }
          *(_OWORD *)(a1 + 24) = v44;
          *(_OWORD *)(a1 + 8) = v41;
          *(_QWORD *)a1 = 1LL;
          core::ptr::drop_in_place<uu_expr::syntax_tree::AstNode>(&v53);
        }
        v10 = &v51;
        return (_OWORD *)core::ptr::drop_in_place<uu_expr::syntax_tree::AstNode>(v10);
      }
LABEL_37:
      *(_OWORD *)(a1 + 24) = v42;
      *(_OWORD *)(a1 + 8) = v37;
      *(_QWORD *)a1 = 1LL;
      return result;
    }
    if ( *(_DWORD *)v7 ^ 0x676E656C | *(unsigned __int16 *)(v7 + 4) ^ 0x6874 )
      goto LABEL_30;
    result = (_OWORD *)uu_expr::syntax_tree::Parser::parse_precedence((__int64)v43, a2, 0LL);
    v37 = *(_OWORD *)&v43[8];
    v42 = v44;
    if ( *(_QWORD *)v43 )
      goto LABEL_37;
    v64 = v44;
    v63 = *(_OWORD *)&v43[8];
    result = (_OWORD *)alloc::alloc::exchange_malloc(v43);
    v19 = result;
    v20 = v63;
    result[1] = v64;
    *result = v20;
    v21 = 3;
LABEL_32:
    *(_BYTE *)(a1 + 8) = v21;
    *(_BYTE *)(a1 + 9) = (_BYTE)a2;
    *(_BYTE *)(a1 + 10) = v18;
    *(_DWORD *)(a1 + 11) = v45;
    *(_BYTE *)(a1 + 15) = v46;
    *(_QWORD *)(a1 + 16) = v19;
    *(_QWORD *)(a1 + 24) = v2;
    *(_QWORD *)(a1 + 32) = result;
    *(_QWORD *)a1 = 0LL;
    return result;
  }
  if ( v8 != 5 )
  {
LABEL_30:
    a2 = *(_QWORD **)(v6 + 16 * v5);
LABEL_31:
    <T as alloc::slice::hack::ConvertVec>::to_vec(v43, a2, v8);
    v2 = *(_OWORD **)&v43[8];
    v19 = *(_OWORD **)v43;
    result = *(_OWORD **)&v43[16];
    v21 = 0;
    goto LABEL_32;
  }
  if ( !(*(_DWORD *)v7 ^ 0x6374616D | *(unsigned __int8 *)(v7 + 4) ^ 0x68) )
  {
    result = (_OWORD *)uu_expr::syntax_tree::Parser::parse_precedence((__int64)v43, a2, 0LL);
    v37 = *(_OWORD *)&v43[8];
    v42 = v44;
    if ( *(_QWORD *)v43 )
      goto LABEL_37;
    v50 = v44;
    v49 = *(_OWORD *)&v43[8];
    uu_expr::syntax_tree::Parser::parse_precedence((__int64)v43, a2, 0LL);
    v40 = *(_OWORD *)&v43[8];
    if ( *(_QWORD *)v43 )
    {
      *(_OWORD *)(a1 + 24) = v44;
      *(_OWORD *)(a1 + 8) = v40;
      *(_QWORD *)a1 = 1LL;
      v10 = &v49;
      return (_OWORD *)core::ptr::drop_in_place<uu_expr::syntax_tree::AstNode>(v10);
    }
    v58 = v44;
    v57 = *(_OWORD *)&v43[8];
    v25 = (_OWORD *)_rust_alloc(32LL, 8LL);
    if ( !v25 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v19 = v25;
    v26 = v49;
    v25[1] = v50;
    *v25 = v26;
    *(_QWORD *)v43 = v25;
    result = (_OWORD *)_rust_alloc(32LL, 8LL);
    if ( !result )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v2 = result;
    v27 = v57;
    result[1] = v58;
    *result = v27;
    v21 = 1;
    LOBYTE(a2) = 2;
    v18 = 0;
    goto LABEL_32;
  }
  if ( *(_DWORD *)v7 ^ 0x65646E69 | *(unsigned __int8 *)(v7 + 4) ^ 0x78 )
    goto LABEL_30;
  result = (_OWORD *)uu_expr::syntax_tree::Parser::parse_precedence((__int64)v43, a2, 0LL);
  v37 = *(_OWORD *)&v43[8];
  v42 = v44;
  if ( *(_QWORD *)v43 )
    goto LABEL_37;
  v56 = v44;
  v55 = *(_OWORD *)&v43[8];
  uu_expr::syntax_tree::Parser::parse_precedence((__int64)v43, a2, 0LL);
  v38 = *(_OWORD *)&v43[8];
  if ( !*(_QWORD *)v43 )
  {
    v62 = v44;
    v61 = *(_OWORD *)&v43[8];
    v19 = (_OWORD *)alloc::alloc::exchange_malloc(v43);
    v32 = v55;
    v19[1] = v56;
    *v19 = v32;
    *(_QWORD *)v43 = v19;
    result = (_OWORD *)alloc::alloc::exchange_malloc(v43);
    v2 = result;
    v33 = v61;
    result[1] = v62;
    *result = v33;
    LOBYTE(a2) = 2;
    v18 = 1;
    v21 = 1;
    goto LABEL_32;
  }
  *(_OWORD *)(a1 + 24) = v44;
  *(_OWORD *)(a1 + 8) = v38;
  *(_QWORD *)a1 = 1LL;
  v10 = &v55;
  return (_OWORD *)core::ptr::drop_in_place<uu_expr::syntax_tree::AstNode>(v10);
}
