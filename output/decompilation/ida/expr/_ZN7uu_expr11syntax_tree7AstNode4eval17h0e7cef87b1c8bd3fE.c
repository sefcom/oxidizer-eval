__int64 __fastcall uu_expr::syntax_tree::AstNode::eval(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int64 v15; // rax
  __int128 v16; // xmm0
  char *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // r15
  __int64 v21; // rdx
  __int64 v22; // [rsp+8h] [rbp-120h] BYREF
  __int128 v23; // [rsp+10h] [rbp-118h]
  __int128 v24; // [rsp+20h] [rbp-108h]
  __int128 v25; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v26; // [rsp+40h] [rbp-E8h]
  __int128 v27; // [rsp+50h] [rbp-D8h] BYREF
  __int128 v28; // [rsp+60h] [rbp-C8h]
  __int64 v29; // [rsp+70h] [rbp-B8h]
  char v30[8]; // [rsp+78h] [rbp-B0h] BYREF
  __int64 v31; // [rsp+80h] [rbp-A8h]
  __int64 v32; // [rsp+88h] [rbp-A0h]
  __int128 v33; // [rsp+90h] [rbp-98h] BYREF
  __int128 v34; // [rsp+A0h] [rbp-88h]
  __int128 v35; // [rsp+B0h] [rbp-78h] BYREF
  __int128 v36; // [rsp+C0h] [rbp-68h]
  __int128 v37; // [rsp+D0h] [rbp-58h] BYREF
  __int128 v38; // [rsp+E0h] [rbp-48h]
  __int128 v39; // [rsp+F0h] [rbp-38h] BYREF
  __int128 v40; // [rsp+100h] [rbp-28h]

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
      uu_expr::syntax_tree::AstNode::eval((__int64)&v22, *(_QWORD *)(a2 + 8));
      v33 = v23;
      v34 = v24;
      if ( v22 )
      {
        v7 = v33;
        v8 = v34;
        goto LABEL_7;
      }
      uu_expr::syntax_tree::NumOrStr::eval_as_string((__int64)v30, &v33, v3, v4, v5, v6);
      uu_expr::syntax_tree::AstNode::eval((__int64)&v22, *(_QWORD *)(a2 + 16));
      v35 = v23;
      v36 = v24;
      if ( v22 )
      {
        v13 = v35;
        v14 = v36;
LABEL_20:
        *(_OWORD *)(a1 + 24) = v14;
        *(_OWORD *)(a1 + 8) = v13;
        *(_QWORD *)a1 = 1LL;
LABEL_21:
        v17 = v30;
        goto LABEL_22;
      }
      uu_expr::syntax_tree::NumOrStr::eval_as_bigint((__int64)&v27, &v35);
      if ( (_QWORD)v27 )
      {
        core::ptr::drop_in_place<core::result::Result<num_bigint::bigint::BigInt,uu_expr::ExprError>>(&v27);
      }
      else
      {
        v25 = v28;
        v26 = v29;
        if ( *((_QWORD *)&v27 + 1) != 0x8000000000000000LL )
        {
          *(_QWORD *)&v24 = v26;
          v23 = v25;
          v22 = *((_QWORD *)&v27 + 1);
          if ( uu_expr::syntax_tree::AstNode::eval::{{closure}}(&v22) )
          {
            v19 = v18;
            goto LABEL_18;
          }
        }
      }
      v19 = 0LL;
LABEL_18:
      uu_expr::syntax_tree::AstNode::eval((__int64)&v22, *(_QWORD *)(a2 + 24));
      v37 = v23;
      v38 = v24;
      if ( v22 )
      {
        v13 = v37;
        v14 = v38;
        goto LABEL_20;
      }
      uu_expr::syntax_tree::NumOrStr::eval_as_bigint((__int64)&v27, &v37);
      if ( (_QWORD)v27 )
      {
        core::ptr::drop_in_place<core::result::Result<num_bigint::bigint::BigInt,uu_expr::ExprError>>(&v27);
      }
      else
      {
        v25 = v28;
        v26 = v29;
        if ( *((_QWORD *)&v27 + 1) != 0x8000000000000000LL )
        {
          *(_QWORD *)&v24 = v26;
          v23 = v25;
          v22 = *((_QWORD *)&v27 + 1);
          if ( uu_expr::syntax_tree::AstNode::eval::{{closure}}(&v22) )
          {
            if ( v19 && v21 )
            {
              v22 = v31;
              *(_QWORD *)&v23 = v31 + v32;
              *((_QWORD *)&v23 + 1) = v19 - 1;
              *(_QWORD *)&v24 = v21;
              <alloc::string::String as core::iter::traits::collect::FromIterator<char>>::from_iter(&v27, &v22);
              *(_QWORD *)(a1 + 32) = v28;
              *(_OWORD *)(a1 + 16) = v27;
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
      uu_expr::syntax_tree::AstNode::eval((__int64)&v22, *(_QWORD *)(a2 + 8));
      v39 = v23;
      v40 = v24;
      if ( v22 )
      {
        v7 = v39;
        v8 = v40;
LABEL_7:
        *(_OWORD *)(a1 + 24) = v8;
        *(_OWORD *)(a1 + 8) = v7;
        *(_QWORD *)a1 = 1LL;
      }
      else
      {
        uu_expr::syntax_tree::NumOrStr::eval_as_string((__int64)&v25, &v39, v9, v10, v11, v12);
        v15 = <core::str::iter::Chars as core::iter::traits::iterator::Iterator>::count(
                *((_QWORD *)&v25 + 1),
                *((_QWORD *)&v25 + 1) + v26);
        <uu_expr::syntax_tree::NumOrStr as core::convert::From<usize>>::from(&v27, v15);
        v16 = v27;
        *(_OWORD *)(a1 + 24) = v28;
        *(_OWORD *)(a1 + 8) = v16;
        *(_QWORD *)a1 = 0LL;
        v17 = (char *)&v25;
LABEL_22:
        core::ptr::drop_in_place<alloc::string::String>(v17);
      }
      return a1;
  }
}
