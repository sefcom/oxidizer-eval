__int64 __fastcall uu_expr::syntax_tree::Parser::parse_precedence(__int64 a1, _QWORD *a2, unsigned __int64 a3)
{
  __int64 result; // rax
  unsigned __int64 v6; // r12
  __int128 v7; // xmm0
  unsigned __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // r12
  __int64 v11; // r15
  const void *v12; // r13
  size_t v13; // rbp
  __int64 v14; // r14
  char v15; // bp
  _QWORD *v16; // rsi
  _OWORD *v17; // rax
  _OWORD *v18; // r13
  __int128 v19; // xmm0
  _OWORD *v20; // rax
  __int128 v21; // xmm0
  char v22; // cl
  char v23; // dl
  int v24; // esi
  char v25; // di
  __int64 v26; // r8
  __int128 v27; // xmm0
  char v28; // [rsp+Fh] [rbp-E9h]
  __int128 v29; // [rsp+10h] [rbp-E8h] BYREF
  __int128 v30; // [rsp+20h] [rbp-D8h]
  unsigned __int64 v31; // [rsp+30h] [rbp-C8h]
  _QWORD *v32; // [rsp+38h] [rbp-C0h]
  __int128 v33; // [rsp+40h] [rbp-B8h]
  __int128 v34; // [rsp+50h] [rbp-A8h]
  __int64 v35; // [rsp+68h] [rbp-90h]
  unsigned __int64 v36; // [rsp+70h] [rbp-88h]
  _OWORD *v37; // [rsp+78h] [rbp-80h] BYREF
  __int128 v38; // [rsp+80h] [rbp-78h]
  __int128 v39; // [rsp+90h] [rbp-68h]
  __int128 v40; // [rsp+A0h] [rbp-58h]
  __int128 v41; // [rsp+B0h] [rbp-48h]

  if ( a3 > 5 )
    return uu_expr::syntax_tree::Parser::parse_simple_expression(a1);
  v6 = a3 + 1;
  result = uu_expr::syntax_tree::Parser::parse_precedence(&v37, a2, a3 + 1);
  v33 = v38;
  v34 = v39;
  if ( v37 )
  {
    v7 = v33;
    *(_OWORD *)(a1 + 24) = v34;
    *(_OWORD *)(a1 + 8) = v7;
    *(_QWORD *)a1 = 1LL;
  }
  else
  {
    v36 = v6;
    v30 = v34;
    v29 = v33;
    v8 = a2[2];
    v32 = a2;
    v31 = v8;
    if ( v8 < a2[1] )
    {
      v9 = 16 * a3;
      v10 = *(__int64 *)((char *)&off_16AAB0 + v9);
      v35 = *(__int64 *)((char *)&off_16AAB0 + v9 + 8);
      v11 = 24 * v35;
      while ( v35 )
      {
        v12 = *(const void **)(*v32 + 16 * v31);
        v13 = *(_QWORD *)(*v32 + 16 * v31 + 8);
        v14 = 0LL;
        while ( v13 != *(_QWORD *)(v10 + v14 + 8) || bcmp(v12, *(const void **)(v10 + v14), v13) )
        {
          v14 += 24LL;
          if ( v11 == v14 )
            goto LABEL_16;
        }
        v15 = *(_BYTE *)(v10 + v14 + 16);
        v28 = *(_BYTE *)(v10 + v14 + 17);
        v16 = v32;
        v32[2] = v31 + 1;
        uu_expr::syntax_tree::Parser::parse_precedence(&v37, v16, v36);
        v33 = v38;
        v34 = v39;
        if ( v37 )
        {
          v27 = v33;
          *(_OWORD *)(a1 + 24) = v34;
          *(_OWORD *)(a1 + 8) = v27;
          *(_QWORD *)a1 = 1LL;
          return core::ptr::drop_in_place<uu_expr::syntax_tree::AstNode>(&v29);
        }
        v41 = v34;
        v40 = v33;
        v17 = (_OWORD *)_rust_alloc(32LL, 8LL);
        if ( !v17 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        v18 = v17;
        v19 = v29;
        v17[1] = v30;
        *v17 = v19;
        v37 = v17;
        v20 = (_OWORD *)_rust_alloc(32LL, 8LL);
        if ( !v20 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        v21 = v40;
        v20[1] = v41;
        *v20 = v21;
        LOBYTE(v29) = 1;
        BYTE1(v29) = v15;
        BYTE2(v29) = v28;
        *((_QWORD *)&v29 + 1) = v18;
        *(_QWORD *)&v30 = v20;
        v31 = v32[2];
        if ( v31 >= v32[1] )
          break;
      }
    }
LABEL_16:
    result = (unsigned __int8)v29;
    v22 = BYTE1(v29);
    v23 = BYTE2(v29);
    v24 = *(_DWORD *)((char *)&v29 + 3);
    v25 = BYTE7(v29);
    v26 = *((_QWORD *)&v29 + 1);
    *(_OWORD *)(a1 + 24) = v30;
    *(_BYTE *)(a1 + 8) = result;
    *(_BYTE *)(a1 + 9) = v22;
    *(_BYTE *)(a1 + 10) = v23;
    *(_DWORD *)(a1 + 11) = v24;
    *(_BYTE *)(a1 + 15) = v25;
    *(_QWORD *)(a1 + 16) = v26;
    *(_QWORD *)a1 = 0LL;
  }
  return result;
}
