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
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rax
  int v23; // edx
  __int128 v24; // xmm0
  int v25; // ebp
  void (__fastcall *v26)(_QWORD, _QWORD); // rax
  void (__fastcall *v27)(_QWORD, _QWORD); // r15
  int v28; // edx
  int v29; // edx
  __int128 v30; // xmm0
  __int128 v31; // xmm0
  __int64 v32; // rsi
  _BYTE v33[48]; // [rsp+0h] [rbp-1E8h] BYREF
  __int64 v34; // [rsp+30h] [rbp-1B8h]
  __int128 v35; // [rsp+40h] [rbp-1A8h] BYREF
  __int128 v36; // [rsp+50h] [rbp-198h]
  __int128 v37; // [rsp+60h] [rbp-188h]
  __int64 v38; // [rsp+70h] [rbp-178h]
  __int128 v39; // [rsp+80h] [rbp-168h] BYREF
  __int128 v40; // [rsp+90h] [rbp-158h]
  __int64 v41; // [rsp+A8h] [rbp-140h] BYREF
  __int128 v42; // [rsp+B0h] [rbp-138h] BYREF
  __int128 v43; // [rsp+C0h] [rbp-128h]
  __int128 v44; // [rsp+D0h] [rbp-118h] BYREF
  __int64 v45; // [rsp+E0h] [rbp-108h]
  __int64 v46; // [rsp+E8h] [rbp-100h]
  _BYTE v47[8]; // [rsp+F0h] [rbp-F8h] BYREF
  __int64 v48; // [rsp+F8h] [rbp-F0h]
  __int64 v49; // [rsp+100h] [rbp-E8h]
  _QWORD v50[3]; // [rsp+108h] [rbp-E0h] BYREF
  __int128 v51; // [rsp+120h] [rbp-C8h] BYREF
  __int128 v52; // [rsp+130h] [rbp-B8h]
  __int128 v53; // [rsp+140h] [rbp-A8h] BYREF
  __int128 v54; // [rsp+150h] [rbp-98h]
  __int128 v55; // [rsp+160h] [rbp-88h] BYREF
  __int128 v56; // [rsp+170h] [rbp-78h]
  __int128 v57; // [rsp+180h] [rbp-68h] BYREF
  __int128 v58; // [rsp+190h] [rbp-58h]
  __int128 v59; // [rsp+1A0h] [rbp-48h] BYREF
  __int64 v60; // [rsp+1B0h] [rbp-38h]

  switch ( a2 )
  {
    case 0:
      result = uu_expr::syntax_tree::AstNode::eval((__int64)v33, a3);
      v51 = *(_OWORD *)&v33[8];
      v52 = *(_OWORD *)&v33[24];
      if ( *(_QWORD *)v33 )
      {
        v6 = v51;
        v7 = v52;
        goto LABEL_13;
      }
      uu_expr::syntax_tree::NumOrStr::eval_as_string((__int64)v47, &v51);
      uu_expr::syntax_tree::AstNode::eval((__int64)v33, a4);
      v53 = *(_OWORD *)&v33[8];
      v54 = *(_OWORD *)&v33[24];
      if ( *(_QWORD *)v33 )
      {
        v11 = v53;
        *(_OWORD *)(a1 + 24) = v54;
        *(_OWORD *)(a1 + 8) = v11;
        *(_QWORD *)a1 = 1LL;
      }
      else
      {
        uu_expr::syntax_tree::NumOrStr::eval_as_string((__int64)v50, &v53);
        *(_QWORD *)&v35 = v50;
        *((_QWORD *)&v35 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
        *(_QWORD *)v33 = &off_1A30A8;
        *(_QWORD *)&v33[8] = 1LL;
        *(_QWORD *)&v33[32] = 0LL;
        *(_QWORD *)&v33[16] = &v35;
        *(_QWORD *)&v33[24] = 1LL;
        core::option::Option<T>::map_or_else(&v59, v33);
        v44 = v59;
        v45 = v60;
        v16 = *((_QWORD *)&v59 + 1);
        onig::Regex::with_options(&v35, *((_QWORD *)&v59 + 1), v60, 0LL, &OnigSyntaxGrep);
        if ( (_QWORD)v35 == 0x8000000000000000LL )
        {
          v41 = *((_QWORD *)&v35 + 1);
          if ( onig::Regex::captures_len(&v41) )
          {
            onig::find::<impl onig::Regex>::captures(&v35, &v41, v48, v49);
            if ( (_QWORD)v35 )
            {
              v34 = v38;
              *(_OWORD *)&v33[32] = v37;
              *(_OWORD *)&v33[16] = v36;
              *(_OWORD *)v33 = v35;
              v22 = uu_expr::syntax_tree::StringOp::eval::{{closure}}(v33);
            }
            else
            {
              v22 = 0LL;
            }
            v32 = 1LL;
            if ( v22 )
              v32 = v22;
            else
              v21 = 0LL;
            <T as alloc::slice::hack::ConvertVec>::to_vec(v33, v32, v21);
            *(_QWORD *)&v40 = *(_QWORD *)&v33[16];
            v39 = *(_OWORD *)v33;
          }
          else
          {
            onig::Regex::find(&v42, &v41, v48, v49);
            <T as alloc::slice::hack::ConvertVec>::to_vec(v33, a0_0, 1LL);
            *(_QWORD *)&v36 = *(_QWORD *)&v33[16];
            v35 = *(_OWORD *)v33;
            core::option::Option<T>::map_or(&v39, &v42, &v35);
          }
          *(_QWORD *)(a1 + 32) = v40;
          *(_OWORD *)(a1 + 16) = v39;
          *(_QWORD *)(a1 + 8) = 0x8000000000000000LL;
          *(_QWORD *)a1 = 0LL;
          core::ptr::drop_in_place<onig::Regex>(&v41);
          core::ptr::drop_in_place<alloc::string::String>(&v44);
          core::ptr::drop_in_place<alloc::string::String>(v50);
        }
        else
        {
          *(_OWORD *)&v33[16] = v36;
          *(_OWORD *)v33 = v35;
          ((void (__fastcall *)(_BYTE *, __int64, __int64, __int64, __int64, __int64))core::ptr::drop_in_place<onig::Error>)(
            v33,
            v16,
            v17,
            v18,
            v19,
            v20);
          *(_QWORD *)(a1 + 8) = 5LL;
          *(_QWORD *)a1 = 1LL;
          core::ptr::drop_in_place<alloc::string::String>(&v44);
          core::ptr::drop_in_place<alloc::string::String>(v50);
        }
      }
      return core::ptr::drop_in_place<alloc::string::String>(v47);
    case 1:
      result = uu_expr::syntax_tree::AstNode::eval((__int64)v33, a3);
      v55 = *(_OWORD *)&v33[8];
      v56 = *(_OWORD *)&v33[24];
      if ( *(_QWORD *)v33 )
      {
        v6 = v55;
        v7 = v56;
        goto LABEL_13;
      }
      uu_expr::syntax_tree::NumOrStr::eval_as_string((__int64)&v44, &v55);
      uu_expr::syntax_tree::AstNode::eval((__int64)v33, a4);
      v57 = *(_OWORD *)&v33[8];
      v58 = *(_OWORD *)&v33[24];
      if ( *(_QWORD *)v33 )
      {
        v12 = v57;
        *(_OWORD *)(a1 + 24) = v58;
        *(_OWORD *)(a1 + 8) = v12;
        *(_QWORD *)a1 = 1LL;
        return core::ptr::drop_in_place<alloc::string::String>(&v44);
      }
      uu_expr::syntax_tree::NumOrStr::eval_as_string((__int64)&v39, &v57);
      *(_QWORD *)&v42 = *((_QWORD *)&v44 + 1);
      *((_QWORD *)&v42 + 1) = *((_QWORD *)&v44 + 1) + v45;
      *(_QWORD *)&v43 = 0LL;
      v46 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v42);
      if ( v23 == 1114112 )
        goto LABEL_31;
      v25 = v23;
      v26 = (void (__fastcall *)(_QWORD, _QWORD))<alloc::string::String as core::clone::Clone>::clone;
      break;
    case 2:
      result = uu_expr::syntax_tree::AstNode::eval((__int64)v33, a3);
      v35 = *(_OWORD *)&v33[8];
      v36 = *(_OWORD *)&v33[24];
      if ( *(_QWORD *)v33 )
        goto LABEL_10;
      v40 = v36;
      v39 = v35;
      if ( !(unsigned __int8)uu_expr::syntax_tree::is_truthy(&v39) )
      {
        <uu_expr::syntax_tree::NumOrStr as core::convert::From<usize>>::from(v33, 0LL);
        v13 = *(_OWORD *)v33;
        v14 = *(_OWORD *)&v33[16];
        goto LABEL_21;
      }
      uu_expr::syntax_tree::AstNode::eval((__int64)v33, a4);
      v35 = *(_OWORD *)&v33[8];
      v36 = *(_OWORD *)&v33[24];
      if ( *(_QWORD *)v33 )
        goto LABEL_23;
      v43 = v36;
      v42 = v35;
      if ( (unsigned __int8)uu_expr::syntax_tree::is_truthy(&v42) )
      {
        v8 = v39;
        *(_OWORD *)(a1 + 24) = v40;
        *(_OWORD *)(a1 + 8) = v8;
        *(_QWORD *)a1 = 0LL;
        v9 = &v42;
        return core::ptr::drop_in_place<uu_expr::syntax_tree::NumOrStr>(v9);
      }
      goto LABEL_44;
    case 3:
      result = uu_expr::syntax_tree::AstNode::eval((__int64)v33, a3);
      v35 = *(_OWORD *)&v33[8];
      v36 = *(_OWORD *)&v33[24];
      if ( *(_QWORD *)v33 )
      {
LABEL_10:
        v6 = v35;
        v7 = v36;
LABEL_13:
        *(_OWORD *)(a1 + 24) = v7;
        *(_OWORD *)(a1 + 8) = v6;
        *(_QWORD *)a1 = 1LL;
      }
      else
      {
        v40 = v36;
        v39 = v35;
        result = uu_expr::syntax_tree::is_truthy(&v39);
        if ( (_BYTE)result )
        {
          v10 = v39;
          *(_OWORD *)(a1 + 24) = v40;
          *(_OWORD *)(a1 + 8) = v10;
          *(_QWORD *)a1 = 0LL;
        }
        else
        {
          uu_expr::syntax_tree::AstNode::eval((__int64)v33, a4);
          v35 = *(_OWORD *)&v33[8];
          v36 = *(_OWORD *)&v33[24];
          if ( *(_QWORD *)v33 )
          {
LABEL_23:
            v15 = v35;
            *(_OWORD *)(a1 + 24) = v36;
            *(_OWORD *)(a1 + 8) = v15;
            *(_QWORD *)a1 = 1LL;
          }
          else
          {
            v43 = v36;
            v42 = v35;
            if ( (unsigned __int8)uu_expr::syntax_tree::is_truthy(&v42) )
            {
              v13 = v42;
              v14 = v43;
LABEL_21:
              *(_OWORD *)(a1 + 24) = v14;
              *(_OWORD *)(a1 + 8) = v13;
              *(_QWORD *)a1 = 0LL;
            }
            else
            {
LABEL_44:
              <uu_expr::syntax_tree::NumOrStr as core::convert::From<usize>>::from(v33, 0LL);
              v31 = *(_OWORD *)v33;
              *(_OWORD *)(a1 + 24) = *(_OWORD *)&v33[16];
              *(_OWORD *)(a1 + 8) = v31;
              *(_QWORD *)a1 = 0LL;
              core::ptr::drop_in_place<uu_expr::syntax_tree::NumOrStr>(&v42);
            }
          }
          v9 = &v39;
          return core::ptr::drop_in_place<uu_expr::syntax_tree::NumOrStr>(v9);
        }
      }
      return result;
  }
LABEL_35:
  v27 = v26;
  v26(&v35, &v39);
  v50[0] = *((_QWORD *)&v35 + 1);
  v50[1] = *((_QWORD *)&v35 + 1) + v36;
  do
  {
    if ( !(unsigned int)core::str::validations::next_code_point(v50) || v28 == 1114112 )
    {
      core::ptr::drop_in_place<alloc::string::String>(&v35);
      v46 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v42);
      v25 = v29;
      v26 = v27;
      if ( v29 == 1114112 )
      {
LABEL_31:
        <uu_expr::syntax_tree::NumOrStr as core::convert::From<usize>>::from(v33, 0LL);
        v24 = *(_OWORD *)v33;
        *(_OWORD *)(a1 + 24) = *(_OWORD *)&v33[16];
        *(_OWORD *)(a1 + 8) = v24;
        *(_QWORD *)a1 = 0LL;
        core::ptr::drop_in_place<alloc::string::String>(&v39);
        return core::ptr::drop_in_place<alloc::string::String>(&v44);
      }
      goto LABEL_35;
    }
  }
  while ( v28 != v25 );
  <uu_expr::syntax_tree::NumOrStr as core::convert::From<usize>>::from(v33, v46 + 1);
  v30 = *(_OWORD *)v33;
  *(_OWORD *)(a1 + 24) = *(_OWORD *)&v33[16];
  *(_OWORD *)(a1 + 8) = v30;
  *(_QWORD *)a1 = 0LL;
  core::ptr::drop_in_place<alloc::string::String>(&v35);
  core::ptr::drop_in_place<alloc::string::String>(&v39);
  return core::ptr::drop_in_place<alloc::string::String>(&v44);
}
