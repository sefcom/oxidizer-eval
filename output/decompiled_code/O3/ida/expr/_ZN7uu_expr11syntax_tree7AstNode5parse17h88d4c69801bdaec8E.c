__int64 __fastcall uu_expr::syntax_tree::AstNode::parse(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int128 v3; // xmm0
  __int128 v5; // xmm0
  char v6; // [rsp+Fh] [rbp-A9h] BYREF
  __int128 v7; // [rsp+10h] [rbp-A8h] BYREF
  __int128 v8; // [rsp+20h] [rbp-98h]
  __int64 v9; // [rsp+38h] [rbp-80h] BYREF
  unsigned __int64 v10; // [rsp+40h] [rbp-78h]
  unsigned __int64 v11; // [rsp+48h] [rbp-70h]
  __int128 v12; // [rsp+50h] [rbp-68h] BYREF
  __int128 v13; // [rsp+60h] [rbp-58h]
  __int64 v14; // [rsp+70h] [rbp-48h] BYREF
  __int128 v15; // [rsp+78h] [rbp-40h]
  __int128 v16; // [rsp+88h] [rbp-30h]
  __int64 (__fastcall **v17)(); // [rsp+98h] [rbp-20h]
  __int64 v18; // [rsp+A0h] [rbp-18h]
  char v19; // [rsp+A8h] [rbp-10h]

  v9 = a2;
  v10 = a3;
  v11 = 0LL;
  if ( !a3 )
  {
    *(_QWORD *)(a1 + 8) = 3LL;
    goto LABEL_5;
  }
  uu_expr::syntax_tree::Parser::parse_precedence(&v14, &v9, 0LL);
  v7 = v15;
  v8 = v16;
  if ( v14 )
  {
    v3 = v7;
    *(_OWORD *)(a1 + 24) = v8;
    *(_OWORD *)(a1 + 8) = v3;
LABEL_5:
    *(_QWORD *)a1 = 1LL;
    return a1;
  }
  v13 = v8;
  v12 = v7;
  if ( v11 >= v10 )
  {
    v5 = v12;
    *(_OWORD *)(a1 + 24) = v13;
    *(_OWORD *)(a1 + 8) = v5;
    *(_QWORD *)a1 = 0LL;
  }
  else
  {
    *(_QWORD *)&v7 = 0LL;
    *((_QWORD *)&v7 + 1) = 1LL;
    *(_QWORD *)&v8 = 0LL;
    v18 = 32LL;
    v19 = 3;
    v14 = 0LL;
    *((_QWORD *)&v15 + 1) = 0LL;
    *((_QWORD *)&v16 + 1) = &v7;
    v17 = &off_16A8B8;
    if ( (unsigned __int8)<str as core::fmt::Display>::fmt(
                            *(_QWORD *)(v9 + 16 * v11),
                            *(_QWORD *)(v9 + 16 * v11 + 8),
                            &v14) )
      core::result::unwrap_failed(aADisplayImplem, 55LL, &v6, &unk_16A900, &off_16A8E8);
    *(_QWORD *)(a1 + 32) = v8;
    *(_OWORD *)(a1 + 16) = v7;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)a1 = 1LL;
    core::ptr::drop_in_place<uu_expr::syntax_tree::AstNode>(&v12);
  }
  return a1;
}
