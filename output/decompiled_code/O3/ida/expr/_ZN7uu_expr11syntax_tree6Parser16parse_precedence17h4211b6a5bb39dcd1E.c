__int64 __fastcall uu_expr::syntax_tree::Parser::parse_precedence(__int64 a1, _QWORD *a2, unsigned __int64 a3)
{
  _QWORD *v3; // r12
  __int64 result; // rax
  unsigned __int64 v6; // r13
  char v7; // dl
  char v8; // bp
  __int128 v9; // xmm0
  char v10; // [rsp+Fh] [rbp-D9h]
  __int128 v11; // [rsp+10h] [rbp-D8h]
  __int128 v12; // [rsp+10h] [rbp-D8h]
  __int64 v13; // [rsp+10h] [rbp-D8h]
  __int128 v14; // [rsp+30h] [rbp-B8h] BYREF
  __int128 v15; // [rsp+40h] [rbp-A8h]
  _BYTE v16[40]; // [rsp+50h] [rbp-98h] BYREF
  unsigned __int64 v17; // [rsp+80h] [rbp-68h]
  _QWORD *v18; // [rsp+88h] [rbp-60h]
  __int128 v19; // [rsp+90h] [rbp-58h]
  __int128 v20; // [rsp+A0h] [rbp-48h]

  v3 = a2;
  if ( a3 > 5 )
    return uu_expr::syntax_tree::Parser::parse_simple_expression(a1, a2);
  v6 = a3 + 1;
  result = uu_expr::syntax_tree::Parser::parse_precedence(v16, a2, a3 + 1);
  v11 = *(_OWORD *)&v16[8];
  if ( *(_QWORD *)v16 )
  {
    *(_OWORD *)(a1 + 24) = *(_OWORD *)&v16[24];
    *(_OWORD *)(a1 + 8) = v11;
    *(_QWORD *)a1 = 1LL;
  }
  else
  {
    v15 = *(_OWORD *)&v16[24];
    v14 = *(_OWORD *)&v16[8];
    v18 = a2;
    v17 = v6;
    while ( 1 )
    {
      result = uu_expr::syntax_tree::Parser::parse_op(v3, a3);
      v10 = v7;
      v8 = result;
      if ( (_BYTE)result == 3 )
      {
        v9 = v14;
        *(_OWORD *)(a1 + 24) = v15;
        *(_OWORD *)(a1 + 8) = v9;
        *(_QWORD *)a1 = 0LL;
        return result;
      }
      uu_expr::syntax_tree::Parser::parse_precedence(v16, v3, v6);
      v12 = *(_OWORD *)&v16[8];
      if ( *(_QWORD *)v16 )
        break;
      v20 = *(_OWORD *)&v16[24];
      v19 = *(_OWORD *)&v16[8];
      *(_OWORD *)&v16[16] = v15;
      *(_OWORD *)v16 = v14;
      v13 = alloc::boxed::Box<T>::new(v16);
      *(_OWORD *)&v16[16] = v20;
      *(_OWORD *)v16 = v19;
      LOBYTE(v14) = 1;
      BYTE1(v14) = v8;
      BYTE2(v14) = v10;
      *((_QWORD *)&v14 + 1) = v13;
      *(_QWORD *)&v15 = alloc::boxed::Box<T>::new(v16);
      v6 = v17;
      v3 = v18;
    }
    *(_OWORD *)(a1 + 24) = *(_OWORD *)&v16[24];
    *(_OWORD *)(a1 + 8) = v12;
    *(_QWORD *)a1 = 1LL;
    return core::ptr::drop_in_place<uu_expr::syntax_tree::AstNode>(&v14);
  }
  return result;
}
