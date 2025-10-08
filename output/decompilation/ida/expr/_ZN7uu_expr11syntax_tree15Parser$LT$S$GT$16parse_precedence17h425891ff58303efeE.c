__int64 __fastcall uu_expr::syntax_tree::Parser<S>::parse_precedence(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r15
  __int64 result; // rax
  unsigned __int64 v5; // rbx
  __int128 v6; // xmm0
  char v7; // dl
  char v8; // r13
  char v9; // r14
  int next_id; // ebx
  __int64 v11; // r15
  __int64 v12; // rax
  __int128 v13; // xmm0
  __int128 v14; // xmm0
  _BYTE v15[40]; // [rsp+8h] [rbp-100h] BYREF
  _BYTE v16[40]; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE v17[40]; // [rsp+60h] [rbp-A8h]
  __int128 v18; // [rsp+90h] [rbp-78h]
  __int128 v19; // [rsp+A0h] [rbp-68h]
  unsigned __int64 v20; // [rsp+B8h] [rbp-50h]
  __int64 v21; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v22; // [rsp+C8h] [rbp-40h]
  unsigned __int64 v23; // [rsp+D0h] [rbp-38h]

  v3 = a2;
  if ( a3 > 5 )
    return uu_expr::syntax_tree::Parser<S>::parse_simple_expression(a1, a2);
  v5 = a3;
  v23 = a3 + 1;
  uu_expr::syntax_tree::Parser<S>::parse_precedence(v16, a2, a3 + 1);
  *(_OWORD *)v17 = *(_OWORD *)&v16[8];
  *(_OWORD *)&v17[16] = *(_OWORD *)&v16[24];
  if ( *(_QWORD *)v16 == 0x8000000000000005LL )
  {
    v6 = *(_OWORD *)v17;
    result = a1;
    *(_OWORD *)(a1 + 24) = *(_OWORD *)&v17[16];
    *(_OWORD *)(a1 + 8) = v6;
    *(_QWORD *)a1 = 0x8000000000000005LL;
  }
  else
  {
    *(_OWORD *)&v15[24] = *(_OWORD *)&v17[16];
    *(_OWORD *)&v15[8] = *(_OWORD *)v17;
    *(_QWORD *)v15 = *(_QWORD *)v16;
    v20 = 0x8000000000000002LL;
    v22 = v5;
    v21 = a2;
    while ( 1 )
    {
      *(_QWORD *)v16 = v5;
      v8 = uu_expr::syntax_tree::Parser<S>::accept(v3, v16);
      if ( v8 == 3 )
      {
        result = *(_QWORD *)&v15[32];
        *(_QWORD *)(a1 + 32) = *(_QWORD *)&v15[32];
        v13 = *(_OWORD *)v15;
        *(_OWORD *)(a1 + 16) = *(_OWORD *)&v15[16];
        *(_OWORD *)a1 = v13;
        return result;
      }
      v9 = v7;
      uu_expr::syntax_tree::Parser<S>::parse_precedence(v16, v3, v23);
      v18 = *(_OWORD *)&v16[8];
      v19 = *(_OWORD *)&v16[24];
      if ( *(_QWORD *)v16 == 0x8000000000000005LL )
        break;
      *(_OWORD *)&v17[24] = v19;
      *(_OWORD *)&v17[8] = v18;
      *(_QWORD *)v17 = *(_QWORD *)v16;
      next_id = uu_expr::syntax_tree::get_next_id();
      *(_QWORD *)&v16[32] = *(_QWORD *)&v15[32];
      *(_OWORD *)&v16[16] = *(_OWORD *)&v15[16];
      *(_OWORD *)v16 = *(_OWORD *)v15;
      v11 = alloc::boxed::Box<T>::new(v16);
      *(_QWORD *)&v18 = v11;
      *(_QWORD *)&v16[32] = *(_QWORD *)&v17[32];
      *(_OWORD *)&v16[16] = *(_OWORD *)&v17[16];
      *(_OWORD *)v16 = *(_OWORD *)v17;
      v12 = alloc::boxed::Box<T>::new(v16);
      *(_QWORD *)v15 = v20;
      *(_QWORD *)&v15[8] = v11;
      *(_QWORD *)&v15[16] = v12;
      v15[24] = v8;
      v15[25] = v9;
      *(_DWORD *)&v15[32] = next_id;
      v3 = v21;
      v5 = v22;
    }
    v14 = v18;
    *(_OWORD *)(a1 + 24) = v19;
    *(_OWORD *)(a1 + 8) = v14;
    *(_QWORD *)a1 = 0x8000000000000005LL;
    return core::ptr::drop_in_place<uu_expr::syntax_tree::AstNode>(v15);
  }
  return result;
}