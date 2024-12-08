__int64 __fastcall uu_expr::syntax_tree::StringOp::eval(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 *v9; // rdi
  __int128 v10; // xmm0
  __int128 v11; // xmm0
  __int128 v12; // xmm0
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int64 v16; // rdx
  __int64 v17; // rax
  int v18; // edx
  __int128 v19; // xmm0
  int v20; // ebp
  void (*v21)(void); // rax
  void (*v22)(void); // r15
  int v23; // edx
  int v24; // edx
  __int128 v25; // xmm0
  __int128 v26; // xmm0
  __int64 v27; // rsi
  _BYTE v28[48]; // [rsp+0h] [rbp-1E8h] BYREF
  __int64 v29; // [rsp+30h] [rbp-1B8h]
  __int128 v30; // [rsp+40h] [rbp-1A8h] BYREF
  __int128 v31; // [rsp+50h] [rbp-198h]
  __int128 v32; // [rsp+60h] [rbp-188h]
  __int64 v33; // [rsp+70h] [rbp-178h]
  __int128 v34; // [rsp+80h] [rbp-168h] BYREF
  __int128 v35; // [rsp+90h] [rbp-158h]
  __int64 v36; // [rsp+A8h] [rbp-140h] BYREF
  __int128 v37; // [rsp+B0h] [rbp-138h] BYREF
  __int128 v38; // [rsp+C0h] [rbp-128h]
  __int128 v39; // [rsp+D0h] [rbp-118h] BYREF
  __int64 v40; // [rsp+E0h] [rbp-108h]
  __int64 v41; // [rsp+E8h] [rbp-100h]
  _BYTE v42[8]; // [rsp+F0h] [rbp-F8h] BYREF
  __int64 v43; // [rsp+F8h] [rbp-F0h]
  __int64 v44; // [rsp+100h] [rbp-E8h]
  _QWORD v45[3]; // [rsp+108h] [rbp-E0h] BYREF
  __int128 v46; // [rsp+120h] [rbp-C8h] BYREF
  __int128 v47; // [rsp+130h] [rbp-B8h]
  __int128 v48; // [rsp+140h] [rbp-A8h] BYREF
  __int128 v49; // [rsp+150h] [rbp-98h]
  __int128 v50; // [rsp+160h] [rbp-88h] BYREF
  __int128 v51; // [rsp+170h] [rbp-78h]
  __int128 v52; // [rsp+180h] [rbp-68h] BYREF
  __int128 v53; // [rsp+190h] [rbp-58h]
  __int128 v54; // [rsp+1A0h] [rbp-48h] BYREF
  __int64 v55; // [rsp+1B0h] [rbp-38h]

  switch ( a2 )
  {
    case 0:
      result = uu_expr::syntax_tree::AstNode::eval(v28, a3);
      v46 = *(_OWORD *)&v28[8];
      v47 = *(_OWORD *)&v28[24];
      if ( *(_QWORD *)v28 )
      {
        v6 = v46;
        v7 = v47;
        goto LABEL_13;
      }
      uu_expr::syntax_tree::NumOrStr::eval_as_string(v42, &v46);
      uu_expr::syntax_tree::AstNode::eval(v28, a4);
      v48 = *(_OWORD *)&v28[8];
      v49 = *(_OWORD *)&v28[24];
      if ( *(_QWORD *)v28 )
      {
        v11 = v48;
        *(_OWORD *)(a1 + 24) = v49;
        *(_OWORD *)(a1 + 8) = v11;
        *(_QWORD *)a1 = 1LL;
      }
      else
      {
        uu_expr::syntax_tree::NumOrStr::eval_as_string(v45, &v48);
        *(_QWORD *)&v30 = v45;
        *((_QWORD *)&v30 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
        *(_QWORD *)v28 = &off_1A3008;
        *(_QWORD *)&v28[8] = 1LL;
        *(_QWORD *)&v28[32] = 0LL;
        *(_QWORD *)&v28[16] = &v30;
        *(_QWORD *)&v28[24] = 1LL;
        core::option::Option<T>::map_or_else(&v54, v28);
        v39 = v54;
        v40 = v55;
        onig::Regex::with_options(&v30, *((_QWORD *)&v54 + 1), v55, 0LL, &OnigSyntaxGrep);
        if ( (_QWORD)v30 == 0x8000000000000000LL )
        {
          v36 = *((_QWORD *)&v30 + 1);
          if ( onig::Regex::captures_len(&v36) )
          {
            onig::find::<impl onig::Regex>::captures(&v30, &v36, v43, v44);
            if ( (_QWORD)v30 )
            {
              v29 = v33;
              *(_OWORD *)&v28[32] = v32;
              *(_OWORD *)&v28[16] = v31;
              *(_OWORD *)v28 = v30;
              v17 = uu_expr::syntax_tree::StringOp::eval::{{closure}}(v28);
            }
            else
            {
              v17 = 0LL;
            }
            if ( !v17 )
              v16 = 0LL;
            v27 = 1LL;
            if ( v17 )
              v27 = v17;
            <T as alloc::slice::hack::ConvertVec>::to_vec(v28, v27, v16);
            *(_QWORD *)&v35 = *(_QWORD *)&v28[16];
            v34 = *(_OWORD *)v28;
          }
          else
          {
            onig::Regex::find(&v37, &v36, v43, v44);
            <T as alloc::slice::hack::ConvertVec>::to_vec(v28, a0_0, 1LL);
            *(_QWORD *)&v31 = *(_QWORD *)&v28[16];
            v30 = *(_OWORD *)v28;
            core::option::Option<T>::map_or(&v34, &v37, &v30);
          }
          *(_QWORD *)(a1 + 32) = v35;
          *(_OWORD *)(a1 + 16) = v34;
          *(_QWORD *)(a1 + 8) = 0x8000000000000000LL;
          *(_QWORD *)a1 = 0LL;
          core::ptr::drop_in_place<onig::Regex>(&v36);
          core::ptr::drop_in_place<alloc::string::String>(&v39);
          core::ptr::drop_in_place<alloc::string::String>(v45);
        }
        else
        {
          *(_OWORD *)&v28[16] = v31;
          *(_OWORD *)v28 = v30;
          ((void (__fastcall *)(_BYTE *))core::ptr::drop_in_place<onig::Error>)(v28);
          *(_QWORD *)(a1 + 8) = 5LL;
          *(_QWORD *)a1 = 1LL;
          core::ptr::drop_in_place<alloc::string::String>(&v39);
          core::ptr::drop_in_place<alloc::string::String>(v45);
        }
      }
      return core::ptr::drop_in_place<alloc::string::String>(v42);
    case 1:
      result = uu_expr::syntax_tree::AstNode::eval(v28, a3);
      v50 = *(_OWORD *)&v28[8];
      v51 = *(_OWORD *)&v28[24];
      if ( *(_QWORD *)v28 )
      {
        v6 = v50;
        v7 = v51;
        goto LABEL_13;
      }
      uu_expr::syntax_tree::NumOrStr::eval_as_string(&v39, &v50);
      uu_expr::syntax_tree::AstNode::eval(v28, a4);
      v52 = *(_OWORD *)&v28[8];
      v53 = *(_OWORD *)&v28[24];
      if ( *(_QWORD *)v28 )
      {
        v12 = v52;
        *(_OWORD *)(a1 + 24) = v53;
        *(_OWORD *)(a1 + 8) = v12;
        *(_QWORD *)a1 = 1LL;
        return core::ptr::drop_in_place<alloc::string::String>(&v39);
      }
      uu_expr::syntax_tree::NumOrStr::eval_as_string(&v34, &v52);
      *(_QWORD *)&v37 = *((_QWORD *)&v39 + 1);
      *((_QWORD *)&v37 + 1) = *((_QWORD *)&v39 + 1) + v40;
      *(_QWORD *)&v38 = 0LL;
      v41 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v37);
      if ( v18 == 1114112 )
        goto LABEL_31;
      v20 = v18;
      v21 = (void (*)(void))<alloc::string::String as core::clone::Clone>::clone;
      break;
    case 2:
      result = uu_expr::syntax_tree::AstNode::eval(v28, a3);
      v30 = *(_OWORD *)&v28[8];
      v31 = *(_OWORD *)&v28[24];
      if ( *(_QWORD *)v28 )
        goto LABEL_10;
      v35 = v31;
      v34 = v30;
      if ( !(unsigned __int8)uu_expr::syntax_tree::is_truthy(&v34) )
      {
        <uu_expr::syntax_tree::NumOrStr as core::convert::From<usize>>::from(v28, 0LL);
        v13 = *(_OWORD *)v28;
        v14 = *(_OWORD *)&v28[16];
        goto LABEL_21;
      }
      uu_expr::syntax_tree::AstNode::eval(v28, a4);
      v30 = *(_OWORD *)&v28[8];
      v31 = *(_OWORD *)&v28[24];
      if ( *(_QWORD *)v28 )
        goto LABEL_23;
      v38 = v31;
      v37 = v30;
      if ( (unsigned __int8)uu_expr::syntax_tree::is_truthy(&v37) )
      {
        v8 = v34;
        *(_OWORD *)(a1 + 24) = v35;
        *(_OWORD *)(a1 + 8) = v8;
        *(_QWORD *)a1 = 0LL;
        v9 = &v37;
        return core::ptr::drop_in_place<uu_expr::syntax_tree::NumOrStr>(v9);
      }
      goto LABEL_44;
    case 3:
      result = uu_expr::syntax_tree::AstNode::eval(v28, a3);
      v30 = *(_OWORD *)&v28[8];
      v31 = *(_OWORD *)&v28[24];
      if ( *(_QWORD *)v28 )
      {
LABEL_10:
        v6 = v30;
        v7 = v31;
LABEL_13:
        *(_OWORD *)(a1 + 24) = v7;
        *(_OWORD *)(a1 + 8) = v6;
        *(_QWORD *)a1 = 1LL;
      }
      else
      {
        v35 = v31;
        v34 = v30;
        result = uu_expr::syntax_tree::is_truthy(&v34);
        if ( (_BYTE)result )
        {
          v10 = v34;
          *(_OWORD *)(a1 + 24) = v35;
          *(_OWORD *)(a1 + 8) = v10;
          *(_QWORD *)a1 = 0LL;
        }
        else
        {
          uu_expr::syntax_tree::AstNode::eval(v28, a4);
          v30 = *(_OWORD *)&v28[8];
          v31 = *(_OWORD *)&v28[24];
          if ( *(_QWORD *)v28 )
          {
LABEL_23:
            v15 = v30;
            *(_OWORD *)(a1 + 24) = v31;
            *(_OWORD *)(a1 + 8) = v15;
            *(_QWORD *)a1 = 1LL;
          }
          else
          {
            v38 = v31;
            v37 = v30;
            if ( (unsigned __int8)uu_expr::syntax_tree::is_truthy(&v37) )
            {
              v13 = v37;
              v14 = v38;
LABEL_21:
              *(_OWORD *)(a1 + 24) = v14;
              *(_OWORD *)(a1 + 8) = v13;
              *(_QWORD *)a1 = 0LL;
            }
            else
            {
LABEL_44:
              <uu_expr::syntax_tree::NumOrStr as core::convert::From<usize>>::from(v28, 0LL);
              v26 = *(_OWORD *)v28;
              *(_OWORD *)(a1 + 24) = *(_OWORD *)&v28[16];
              *(_OWORD *)(a1 + 8) = v26;
              *(_QWORD *)a1 = 0LL;
              core::ptr::drop_in_place<uu_expr::syntax_tree::NumOrStr>(&v37);
            }
          }
          v9 = &v34;
          return core::ptr::drop_in_place<uu_expr::syntax_tree::NumOrStr>(v9);
        }
      }
      return result;
  }
LABEL_35:
  v22 = v21;
  v21();
  v45[0] = *((_QWORD *)&v30 + 1);
  v45[1] = *((_QWORD *)&v30 + 1) + v31;
  do
  {
    if ( !(unsigned int)core::str::validations::next_code_point(v45) || v23 == 1114112 )
    {
      core::ptr::drop_in_place<alloc::string::String>(&v30);
      v41 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v37);
      v20 = v24;
      v21 = v22;
      if ( v24 == 1114112 )
      {
LABEL_31:
        <uu_expr::syntax_tree::NumOrStr as core::convert::From<usize>>::from(v28, 0LL);
        v19 = *(_OWORD *)v28;
        *(_OWORD *)(a1 + 24) = *(_OWORD *)&v28[16];
        *(_OWORD *)(a1 + 8) = v19;
        *(_QWORD *)a1 = 0LL;
        core::ptr::drop_in_place<alloc::string::String>(&v34);
        return core::ptr::drop_in_place<alloc::string::String>(&v39);
      }
      goto LABEL_35;
    }
  }
  while ( v23 != v20 );
  <uu_expr::syntax_tree::NumOrStr as core::convert::From<usize>>::from(v28, v41 + 1);
  v25 = *(_OWORD *)v28;
  *(_OWORD *)(a1 + 24) = *(_OWORD *)&v28[16];
  *(_OWORD *)(a1 + 8) = v25;
  *(_QWORD *)a1 = 0LL;
  core::ptr::drop_in_place<alloc::string::String>(&v30);
  core::ptr::drop_in_place<alloc::string::String>(&v34);
  return core::ptr::drop_in_place<alloc::string::String>(&v39);
}
