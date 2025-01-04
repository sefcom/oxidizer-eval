__int64 __fastcall uu_expr::syntax_tree::AstNode::eval(__int64 a1, __int64 a2)
{
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int64 v7; // rax
  __int128 v8; // xmm0
  __int128 *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r15
  __int64 v13; // rdx
  __int64 v14; // [rsp+8h] [rbp-120h] BYREF
  __int128 v15; // [rsp+10h] [rbp-118h]
  __int128 v16; // [rsp+20h] [rbp-108h]
  __int128 v17; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v18; // [rsp+40h] [rbp-E8h]
  __int128 v19; // [rsp+50h] [rbp-D8h] BYREF
  __int128 v20; // [rsp+60h] [rbp-C8h]
  __int64 v21; // [rsp+70h] [rbp-B8h]
  char v22[8]; // [rsp+78h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+80h] [rbp-A8h]
  __int64 v24; // [rsp+88h] [rbp-A0h]
  __int128 v25; // [rsp+90h] [rbp-98h] BYREF
  __int128 v26; // [rsp+A0h] [rbp-88h]
  __int128 v27; // [rsp+B0h] [rbp-78h] BYREF
  __int128 v28; // [rsp+C0h] [rbp-68h]
  __int128 v29; // [rsp+D0h] [rbp-58h] BYREF
  __int128 v30; // [rsp+E0h] [rbp-48h]
  __int128 v31; // [rsp+F0h] [rbp-38h] BYREF
  __int128 v32; // [rsp+100h] [rbp-28h]

  switch ( *(_BYTE *)a2 )
  {
    case 0:
      <alloc::string::String as core::clone::Clone>::clone(a1 + 16, a2 + 8);
      *(_QWORD *)(a1 + 8) = 0x8000000000000000LL;
      *(_QWORD *)a1 = 0LL;
      return a1;
    case 1:
      uu_expr::syntax_tree::BinOp::eval(
        a1,
        *(_BYTE *)(a2 + 1),
        *(_BYTE *)(a2 + 2),
        *(_QWORD *)(a2 + 8),
        *(_QWORD *)(a2 + 16));
      return a1;
    case 2:
      uu_expr::syntax_tree::AstNode::eval(&v14, *(_QWORD *)(a2 + 8));
      v25 = v15;
      v26 = v16;
      if ( v14 )
      {
        v3 = v25;
        v4 = v26;
        goto LABEL_7;
      }
      uu_expr::syntax_tree::NumOrStr::eval_as_string((__int64)v22, &v25);
      uu_expr::syntax_tree::AstNode::eval(&v14, *(_QWORD *)(a2 + 16));
      v27 = v15;
      v28 = v16;
      if ( v14 )
      {
        v5 = v27;
        v6 = v28;
LABEL_20:
        *(_OWORD *)(a1 + 24) = v6;
        *(_OWORD *)(a1 + 8) = v5;
        *(_QWORD *)a1 = 1LL;
LABEL_21:
        v9 = (__int128 *)v22;
        goto LABEL_22;
      }
      uu_expr::syntax_tree::NumOrStr::eval_as_bigint((__int64)&v19, &v27);
      if ( (_QWORD)v19 )
      {
        core::ptr::drop_in_place<core::result::Result<num_bigint::bigint::BigInt,uu_expr::ExprError>>(&v19);
      }
      else
      {
        v17 = v20;
        v18 = v21;
        if ( *((_QWORD *)&v19 + 1) != 0x8000000000000000LL )
        {
          *(_QWORD *)&v16 = v18;
          v15 = v17;
          v14 = *((_QWORD *)&v19 + 1);
          if ( uu_expr::syntax_tree::AstNode::eval::{{closure}}(&v14) )
          {
            v11 = v10;
            goto LABEL_18;
          }
        }
      }
      v11 = 0LL;
LABEL_18:
      uu_expr::syntax_tree::AstNode::eval(&v14, *(_QWORD *)(a2 + 24));
      v29 = v15;
      v30 = v16;
      if ( v14 )
      {
        v5 = v29;
        v6 = v30;
        goto LABEL_20;
      }
      uu_expr::syntax_tree::NumOrStr::eval_as_bigint((__int64)&v19, &v29);
      if ( (_QWORD)v19 )
      {
        core::ptr::drop_in_place<core::result::Result<num_bigint::bigint::BigInt,uu_expr::ExprError>>(&v19);
      }
      else
      {
        v17 = v20;
        v18 = v21;
        if ( *((_QWORD *)&v19 + 1) != 0x8000000000000000LL )
        {
          *(_QWORD *)&v16 = v18;
          v15 = v17;
          v14 = *((_QWORD *)&v19 + 1);
          if ( uu_expr::syntax_tree::AstNode::eval::{{closure}}(&v14) )
          {
            if ( v11 && v13 )
            {
              v14 = v23;
              *(_QWORD *)&v15 = v23 + v24;
              *((_QWORD *)&v15 + 1) = v11 - 1;
              *(_QWORD *)&v16 = v13;
              <alloc::string::String as core::iter::traits::collect::FromIterator<char>>::from_iter(&v19, &v14);
              *(_QWORD *)(a1 + 32) = v20;
              *(_OWORD *)(a1 + 16) = v19;
              *(_QWORD *)(a1 + 8) = 0x8000000000000000LL;
LABEL_32:
              *(_QWORD *)a1 = 0LL;
              goto LABEL_21;
            }
          }
        }
      }
      *(_QWORD *)(a1 + 8) = 0x8000000000000000LL;
      *(_QWORD *)(a1 + 16) = 0LL;
      *(_QWORD *)(a1 + 24) = 1LL;
      *(_QWORD *)(a1 + 32) = 0LL;
      goto LABEL_32;
    case 3:
      uu_expr::syntax_tree::AstNode::eval(&v14, *(_QWORD *)(a2 + 8));
      v31 = v15;
      v32 = v16;
      if ( v14 )
      {
        v3 = v31;
        v4 = v32;
LABEL_7:
        *(_OWORD *)(a1 + 24) = v4;
        *(_OWORD *)(a1 + 8) = v3;
        *(_QWORD *)a1 = 1LL;
      }
      else
      {
        uu_expr::syntax_tree::NumOrStr::eval_as_string((__int64)&v17, &v31);
        v7 = <core::str::iter::Chars as core::iter::traits::iterator::Iterator>::count(
               *((_QWORD *)&v17 + 1),
               *((_QWORD *)&v17 + 1) + v18);
        <uu_expr::syntax_tree::NumOrStr as core::convert::From<usize>>::from(&v19, v7);
        v8 = v19;
        *(_OWORD *)(a1 + 24) = v20;
        *(_OWORD *)(a1 + 8) = v8;
        *(_QWORD *)a1 = 0LL;
        v9 = &v17;
LABEL_22:
        core::ptr::drop_in_place<alloc::string::String>(v9);
      }
      return a1;
  }
}
