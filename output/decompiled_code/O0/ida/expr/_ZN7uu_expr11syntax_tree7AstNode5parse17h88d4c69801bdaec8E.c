__int64 __fastcall uu_expr::syntax_tree::AstNode::parse(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int128 v3; // xmm0
  __int128 v5; // xmm0
  __int64 v6; // [rsp+0h] [rbp-E8h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-E0h]
  unsigned __int64 v8; // [rsp+10h] [rbp-D8h]
  __int128 v9; // [rsp+18h] [rbp-D0h] BYREF
  __int64 v10; // [rsp+28h] [rbp-C0h]
  __int128 v11; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v12; // [rsp+40h] [rbp-A8h]
  _OWORD v13[2]; // [rsp+50h] [rbp-98h] BYREF
  _QWORD v14[7]; // [rsp+70h] [rbp-78h] BYREF
  char v15; // [rsp+A8h] [rbp-40h]
  __int64 v16; // [rsp+B0h] [rbp-38h] BYREF
  __int128 v17; // [rsp+B8h] [rbp-30h]
  __int128 v18; // [rsp+C8h] [rbp-20h]

  v6 = a2;
  v7 = a3;
  v8 = 0LL;
  if ( !a3 )
  {
    *(_QWORD *)(a1 + 8) = 3LL;
    goto LABEL_5;
  }
  uu_expr::syntax_tree::Parser::parse_precedence(&v16, &v6, 0LL);
  if ( v16 )
  {
    v3 = v17;
    *(_OWORD *)(a1 + 24) = v18;
    *(_OWORD *)(a1 + 8) = v3;
LABEL_5:
    *(_QWORD *)a1 = 1LL;
    return a1;
  }
  v13[1] = v18;
  v13[0] = v17;
  if ( v8 < v7 && v6 )
  {
    *(_QWORD *)&v9 = 0LL;
    *((_QWORD *)&v9 + 1) = 1LL;
    v10 = 0LL;
    v14[6] = 32LL;
    v15 = 3;
    v14[0] = 0LL;
    v14[2] = 0LL;
    v14[4] = &v9;
    v14[5] = &anon_31598182ec4484d5302bad599af318fc_0_llvm_11751475672666354668;
    if ( (unsigned __int8)<str as core::fmt::Display>::fmt(
                            *(_QWORD *)(v6 + 16 * v8),
                            *(_QWORD *)(v6 + 16 * v8 + 8),
                            v14) )
      core::result::unwrap_failed(
        anon_31598182ec4484d5302bad599af318fc_2_llvm_11751475672666354668,
        55LL,
        &v11,
        &anon_31598182ec4484d5302bad599af318fc_30_llvm_11751475672666354668,
        &anon_31598182ec4484d5302bad599af318fc_4_llvm_11751475672666354668);
    v11 = v9;
    v12 = v10;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_OWORD *)(a1 + 16) = v11;
    *(_QWORD *)(a1 + 32) = v12;
    *(_QWORD *)a1 = 1LL;
    core::ptr::drop_in_place<uu_expr::syntax_tree::AstNode>(v13);
  }
  else
  {
    v5 = v17;
    *(_OWORD *)(a1 + 24) = v18;
    *(_OWORD *)(a1 + 8) = v5;
    *(_QWORD *)a1 = 0LL;
  }
  return a1;
}
