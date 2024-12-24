__int64 __fastcall uu_expr::syntax_tree::StringOp::eval(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int128 v18; // xmm0
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int128 v23; // xmm0
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int128 v28; // xmm0
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int64 v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rax
  int v39; // edx
  __int128 v40; // xmm0
  int v41; // ebp
  void (__fastcall *v42)(_QWORD, _QWORD); // rax
  void (__fastcall *v43)(_QWORD, _QWORD); // r15
  int v44; // edx
  int v45; // edx
  __int128 v46; // xmm0
  __int128 v47; // xmm0
  __int64 v48; // rsi
  _BYTE v49[48]; // [rsp+0h] [rbp-1E8h] BYREF
  __int64 v50; // [rsp+30h] [rbp-1B8h]
  __int128 v51; // [rsp+40h] [rbp-1A8h] BYREF
  __int128 v52; // [rsp+50h] [rbp-198h]
  __int128 v53; // [rsp+60h] [rbp-188h]
  __int64 v54; // [rsp+70h] [rbp-178h]
  __int128 v55; // [rsp+80h] [rbp-168h] BYREF
  __int128 v56; // [rsp+90h] [rbp-158h]
  __int64 v57; // [rsp+A8h] [rbp-140h] BYREF
  __int128 v58; // [rsp+B0h] [rbp-138h] BYREF
  __int128 v59; // [rsp+C0h] [rbp-128h]
  __int128 v60; // [rsp+D0h] [rbp-118h] BYREF
  __int64 v61; // [rsp+E0h] [rbp-108h]
  __int64 v62; // [rsp+E8h] [rbp-100h]
  _BYTE v63[8]; // [rsp+F0h] [rbp-F8h] BYREF
  __int64 v64; // [rsp+F8h] [rbp-F0h]
  __int64 v65; // [rsp+100h] [rbp-E8h]
  _QWORD v66[3]; // [rsp+108h] [rbp-E0h] BYREF
  __int128 v67; // [rsp+120h] [rbp-C8h] BYREF
  __int128 v68; // [rsp+130h] [rbp-B8h]
  __int128 v69; // [rsp+140h] [rbp-A8h] BYREF
  __int128 v70; // [rsp+150h] [rbp-98h]
  __int128 v71; // [rsp+160h] [rbp-88h] BYREF
  __int128 v72; // [rsp+170h] [rbp-78h]
  __int128 v73; // [rsp+180h] [rbp-68h] BYREF
  __int128 v74; // [rsp+190h] [rbp-58h]
  __int128 v75; // [rsp+1A0h] [rbp-48h] BYREF
  __int64 v76; // [rsp+1B0h] [rbp-38h]

  switch ( a2 )
  {
    case 0:
      result = uu_expr::syntax_tree::AstNode::eval((__int64)v49, a3);
      v67 = *(_OWORD *)&v49[8];
      v68 = *(_OWORD *)&v49[24];
      if ( *(_QWORD *)v49 )
      {
        v10 = v67;
        v11 = v68;
        goto LABEL_13;
      }
      uu_expr::syntax_tree::NumOrStr::eval_as_string((__int64)v63, &v67, v6, v7, v8, v9);
      uu_expr::syntax_tree::AstNode::eval((__int64)v49, a4);
      v69 = *(_OWORD *)&v49[8];
      v70 = *(_OWORD *)&v49[24];
      if ( *(_QWORD *)v49 )
      {
        v23 = v69;
        *(_OWORD *)(a1 + 24) = v70;
        *(_OWORD *)(a1 + 8) = v23;
        *(_QWORD *)a1 = 1LL;
      }
      else
      {
        uu_expr::syntax_tree::NumOrStr::eval_as_string((__int64)v66, &v69, v19, v20, v21, v22);
        *(_QWORD *)&v51 = v66;
        *((_QWORD *)&v51 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
        *(_QWORD *)v49 = &off_1A3008;
        *(_QWORD *)&v49[8] = 1LL;
        *(_QWORD *)&v49[32] = 0LL;
        *(_QWORD *)&v49[16] = &v51;
        *(_QWORD *)&v49[24] = 1LL;
        core::option::Option<T>::map_or_else(&v75, v49);
        v60 = v75;
        v61 = v76;
        v32 = *((_QWORD *)&v75 + 1);
        onig::Regex::with_options(&v51, *((_QWORD *)&v75 + 1), v76, 0LL, &OnigSyntaxGrep);
        if ( (_QWORD)v51 == 0x8000000000000000LL )
        {
          v57 = *((_QWORD *)&v51 + 1);
          if ( onig::Regex::captures_len(&v57) )
          {
            onig::find::<impl onig::Regex>::captures(&v51, &v57, v64, v65);
            if ( (_QWORD)v51 )
            {
              v50 = v54;
              *(_OWORD *)&v49[32] = v53;
              *(_OWORD *)&v49[16] = v52;
              *(_OWORD *)v49 = v51;
              v38 = uu_expr::syntax_tree::StringOp::eval::{{closure}}(v49);
            }
            else
            {
              v38 = 0LL;
            }
            if ( !v38 )
              v37 = 0LL;
            v48 = 1LL;
            if ( v38 )
              v48 = v38;
            <T as alloc::slice::hack::ConvertVec>::to_vec(v49, v48, v37);
            *(_QWORD *)&v56 = *(_QWORD *)&v49[16];
            v55 = *(_OWORD *)v49;
          }
          else
          {
            onig::Regex::find(&v58, &v57, v64, v65);
            <T as alloc::slice::hack::ConvertVec>::to_vec(v49, a0_0, 1LL);
            *(_QWORD *)&v52 = *(_QWORD *)&v49[16];
            v51 = *(_OWORD *)v49;
            core::option::Option<T>::map_or(&v55, &v58, &v51);
          }
          *(_QWORD *)(a1 + 32) = v56;
          *(_OWORD *)(a1 + 16) = v55;
          *(_QWORD *)(a1 + 8) = 0x8000000000000000LL;
          *(_QWORD *)a1 = 0LL;
          core::ptr::drop_in_place<onig::Regex>(&v57);
          core::ptr::drop_in_place<alloc::string::String>(&v60);
          core::ptr::drop_in_place<alloc::string::String>(v66);
        }
        else
        {
          *(_OWORD *)&v49[16] = v52;
          *(_OWORD *)v49 = v51;
          ((void (__fastcall *)(_BYTE *, __int64, __int64, __int64, __int64, __int64))core::ptr::drop_in_place<onig::Error>)(
            v49,
            v32,
            v33,
            v34,
            v35,
            v36);
          *(_QWORD *)(a1 + 8) = 5LL;
          *(_QWORD *)a1 = 1LL;
          core::ptr::drop_in_place<alloc::string::String>(&v60);
          core::ptr::drop_in_place<alloc::string::String>(v66);
        }
      }
      return core::ptr::drop_in_place<alloc::string::String>(v63);
    case 1:
      result = uu_expr::syntax_tree::AstNode::eval((__int64)v49, a3);
      v71 = *(_OWORD *)&v49[8];
      v72 = *(_OWORD *)&v49[24];
      if ( *(_QWORD *)v49 )
      {
        v10 = v71;
        v11 = v72;
        goto LABEL_13;
      }
      uu_expr::syntax_tree::NumOrStr::eval_as_string((__int64)&v60, &v71, v14, v15, v16, v17);
      uu_expr::syntax_tree::AstNode::eval((__int64)v49, a4);
      v73 = *(_OWORD *)&v49[8];
      v74 = *(_OWORD *)&v49[24];
      if ( *(_QWORD *)v49 )
      {
        v28 = v73;
        *(_OWORD *)(a1 + 24) = v74;
        *(_OWORD *)(a1 + 8) = v28;
        *(_QWORD *)a1 = 1LL;
        return core::ptr::drop_in_place<alloc::string::String>(&v60);
      }
      uu_expr::syntax_tree::NumOrStr::eval_as_string((__int64)&v55, &v73, v24, v25, v26, v27);
      *(_QWORD *)&v58 = *((_QWORD *)&v60 + 1);
      *((_QWORD *)&v58 + 1) = *((_QWORD *)&v60 + 1) + v61;
      *(_QWORD *)&v59 = 0LL;
      v62 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v58);
      if ( v39 == 1114112 )
        goto LABEL_31;
      v41 = v39;
      v42 = (void (__fastcall *)(_QWORD, _QWORD))<alloc::string::String as core::clone::Clone>::clone;
      break;
    case 2:
      result = uu_expr::syntax_tree::AstNode::eval((__int64)v49, a3);
      v51 = *(_OWORD *)&v49[8];
      v52 = *(_OWORD *)&v49[24];
      if ( *(_QWORD *)v49 )
        goto LABEL_10;
      v56 = v52;
      v55 = v51;
      if ( !(unsigned __int8)uu_expr::syntax_tree::is_truthy(&v55) )
      {
        <uu_expr::syntax_tree::NumOrStr as core::convert::From<usize>>::from(v49, 0LL);
        v29 = *(_OWORD *)v49;
        v30 = *(_OWORD *)&v49[16];
        goto LABEL_21;
      }
      uu_expr::syntax_tree::AstNode::eval((__int64)v49, a4);
      v51 = *(_OWORD *)&v49[8];
      v52 = *(_OWORD *)&v49[24];
      if ( *(_QWORD *)v49 )
        goto LABEL_23;
      v59 = v52;
      v58 = v51;
      if ( (unsigned __int8)uu_expr::syntax_tree::is_truthy(&v58) )
      {
        v12 = v55;
        *(_OWORD *)(a1 + 24) = v56;
        *(_OWORD *)(a1 + 8) = v12;
        *(_QWORD *)a1 = 0LL;
        v13 = &v58;
        return core::ptr::drop_in_place<uu_expr::syntax_tree::NumOrStr>(v13);
      }
      goto LABEL_44;
    case 3:
      result = uu_expr::syntax_tree::AstNode::eval((__int64)v49, a3);
      v51 = *(_OWORD *)&v49[8];
      v52 = *(_OWORD *)&v49[24];
      if ( *(_QWORD *)v49 )
      {
LABEL_10:
        v10 = v51;
        v11 = v52;
LABEL_13:
        *(_OWORD *)(a1 + 24) = v11;
        *(_OWORD *)(a1 + 8) = v10;
        *(_QWORD *)a1 = 1LL;
      }
      else
      {
        v56 = v52;
        v55 = v51;
        result = uu_expr::syntax_tree::is_truthy(&v55);
        if ( (_BYTE)result )
        {
          v18 = v55;
          *(_OWORD *)(a1 + 24) = v56;
          *(_OWORD *)(a1 + 8) = v18;
          *(_QWORD *)a1 = 0LL;
        }
        else
        {
          uu_expr::syntax_tree::AstNode::eval((__int64)v49, a4);
          v51 = *(_OWORD *)&v49[8];
          v52 = *(_OWORD *)&v49[24];
          if ( *(_QWORD *)v49 )
          {
LABEL_23:
            v31 = v51;
            *(_OWORD *)(a1 + 24) = v52;
            *(_OWORD *)(a1 + 8) = v31;
            *(_QWORD *)a1 = 1LL;
          }
          else
          {
            v59 = v52;
            v58 = v51;
            if ( (unsigned __int8)uu_expr::syntax_tree::is_truthy(&v58) )
            {
              v29 = v58;
              v30 = v59;
LABEL_21:
              *(_OWORD *)(a1 + 24) = v30;
              *(_OWORD *)(a1 + 8) = v29;
              *(_QWORD *)a1 = 0LL;
            }
            else
            {
LABEL_44:
              <uu_expr::syntax_tree::NumOrStr as core::convert::From<usize>>::from(v49, 0LL);
              v47 = *(_OWORD *)v49;
              *(_OWORD *)(a1 + 24) = *(_OWORD *)&v49[16];
              *(_OWORD *)(a1 + 8) = v47;
              *(_QWORD *)a1 = 0LL;
              core::ptr::drop_in_place<uu_expr::syntax_tree::NumOrStr>(&v58);
            }
          }
          v13 = &v55;
          return core::ptr::drop_in_place<uu_expr::syntax_tree::NumOrStr>(v13);
        }
      }
      return result;
  }
LABEL_35:
  v43 = v42;
  v42(&v51, &v55);
  v66[0] = *((_QWORD *)&v51 + 1);
  v66[1] = *((_QWORD *)&v51 + 1) + v52;
  do
  {
    if ( !(unsigned int)core::str::validations::next_code_point(v66) || v44 == 1114112 )
    {
      core::ptr::drop_in_place<alloc::string::String>(&v51);
      v62 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v58);
      v41 = v45;
      v42 = v43;
      if ( v45 == 1114112 )
      {
LABEL_31:
        <uu_expr::syntax_tree::NumOrStr as core::convert::From<usize>>::from(v49, 0LL);
        v40 = *(_OWORD *)v49;
        *(_OWORD *)(a1 + 24) = *(_OWORD *)&v49[16];
        *(_OWORD *)(a1 + 8) = v40;
        *(_QWORD *)a1 = 0LL;
        core::ptr::drop_in_place<alloc::string::String>(&v55);
        return core::ptr::drop_in_place<alloc::string::String>(&v60);
      }
      goto LABEL_35;
    }
  }
  while ( v44 != v41 );
  <uu_expr::syntax_tree::NumOrStr as core::convert::From<usize>>::from(v49, v62 + 1);
  v46 = *(_OWORD *)v49;
  *(_OWORD *)(a1 + 24) = *(_OWORD *)&v49[16];
  *(_OWORD *)(a1 + 8) = v46;
  *(_QWORD *)a1 = 0LL;
  core::ptr::drop_in_place<alloc::string::String>(&v51);
  core::ptr::drop_in_place<alloc::string::String>(&v55);
  return core::ptr::drop_in_place<alloc::string::String>(&v60);
}
