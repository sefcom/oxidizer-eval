__int64 __fastcall uu_expr::syntax_tree::StringOp::eval(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  __int128 *v5; // r14
  __int128 *v6; // rsi
  __int128 v7; // xmm0
  __int128 *v8; // r12
  __int128 v9; // xmm0
  __int64 v10; // rax
  __int128 v11; // xmm0
  __int128 v12; // xmm0
  __int128 *v14; // rsi
  __int128 v15; // xmm0
  __int64 *v16; // rdi
  __int128 v17; // xmm0
  __int64 v18; // rax
  __int128 v19; // xmm0
  __int64 v20; // r14
  __int64 v21; // r15
  __int64 v22; // rax
  __int64 v23; // rdx
  unsigned int v24; // edx
  unsigned int v25; // r14d
  __int128 v26; // xmm0
  __int64 v27; // rax
  int v28; // edx
  __int128 v29; // xmm0
  __int128 v30; // xmm0
  __int64 v31; // r14
  int v32; // ebp
  int v33; // edx
  int v34; // edx
  __int128 v35; // xmm0
  __int128 v36; // xmm0
  char v37; // r13
  char v38; // al
  unsigned int v39; // edx
  unsigned int v40; // r12d
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rsi
  __int64 v44; // [rsp+10h] [rbp-158h] BYREF
  __int64 v45; // [rsp+18h] [rbp-150h]
  __int64 v46; // [rsp+20h] [rbp-148h]
  __int64 v47; // [rsp+28h] [rbp-140h] BYREF
  __m256i v48; // [rsp+30h] [rbp-138h] BYREF
  __int128 v49; // [rsp+50h] [rbp-118h]
  __int64 v50; // [rsp+60h] [rbp-108h]
  __int128 v51; // [rsp+70h] [rbp-F8h] BYREF
  __int64 v52; // [rsp+80h] [rbp-E8h]
  _BYTE v53[8]; // [rsp+88h] [rbp-E0h] BYREF
  __int64 v54; // [rsp+90h] [rbp-D8h]
  __int64 v55; // [rsp+98h] [rbp-D0h]
  __int64 v56; // [rsp+A0h] [rbp-C8h] BYREF
  __int64 v57; // [rsp+A8h] [rbp-C0h]
  __int64 v58; // [rsp+B0h] [rbp-B8h]
  _QWORD v59[3]; // [rsp+B8h] [rbp-B0h] BYREF
  __int128 v60; // [rsp+D0h] [rbp-98h] BYREF
  __m256i v61; // [rsp+E0h] [rbp-88h] BYREF
  __int128 v62; // [rsp+100h] [rbp-68h]
  __int64 v63; // [rsp+110h] [rbp-58h]
  _QWORD v64[10]; // [rsp+118h] [rbp-50h] BYREF

  v5 = (__int128 *)(a3 + 8);
  switch ( a2 )
  {
    case 0:
      if ( (*(_BYTE *)a3 & 1) != 0 )
        goto LABEL_14;
      uu_expr::syntax_tree::NumOrStr::eval_as_string(v53, a3 + 8);
      v6 = (__int128 *)(a4 + 8);
      if ( (*(_BYTE *)a4 & 1) != 0 )
      {
        v7 = *v6;
        *(_OWORD *)(a1 + 24) = *(_OWORD *)(a4 + 24);
        *(_OWORD *)(a1 + 8) = v7;
        *(_QWORD *)a1 = 1LL;
        goto LABEL_73;
      }
      uu_expr::syntax_tree::NumOrStr::eval_as_string(&v56, v6);
      v20 = v57;
      v21 = v58;
      uu_expr::syntax_tree::check_posix_regex_errors(&v48, v57, v58);
      v22 = v48.m256i_i64[0];
      if ( v48.m256i_i64[0] != 13 )
      {
        *(_QWORD *)(a1 + 32) = v48.m256i_i64[3];
        *(_OWORD *)(a1 + 16) = *(_OWORD *)&v48.m256i_u64[1];
        *(_QWORD *)(a1 + 8) = v22;
        *(_QWORD *)a1 = 1LL;
        goto LABEL_72;
      }
      v44 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(v21 + 1, 1LL, 1LL, &off_14A858);
      v45 = v23;
      v46 = 0LL;
      alloc::string::String::push(&v44, 94LL);
      *(_QWORD *)&v60 = v20;
      *((_QWORD *)&v60 + 1) = v20 + v21;
      v25 = 1114112;
      if ( (core::str::validations::next_code_point(&v60) & 1) != 0 )
        v25 = v24;
      if ( v25 == 42 )
      {
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
          &v44,
          asc_1D637,
          &asc_1D637[2]);
      }
      else if ( v25 != 94 )
      {
        if ( v25 == 1114112 )
        {
          <uu_expr::syntax_tree::NumOrStr as core::convert::From<usize>>::from(&v48, 0LL);
          v26 = *(_OWORD *)v48.m256i_i8;
          *(_OWORD *)(a1 + 24) = *(_OWORD *)&v48.m256i_u64[2];
          *(_OWORD *)(a1 + 8) = v26;
          *(_QWORD *)a1 = 0LL;
          goto LABEL_71;
        }
        alloc::string::String::push(&v44, v25);
      }
      *(_OWORD *)v48.m256i_i8 = v60;
      v37 = 0;
      while ( 1 )
      {
        v38 = core::str::validations::next_code_point(&v48);
        v40 = v39;
        if ( (v38 & 1) == 0 )
          v40 = 1114112;
        if ( v40 == 94 )
        {
          if ( v37 & 1 | (v25 - 93 < 0xFFFFFFFE) )
          {
            <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
              &v44,
              &asc_1D637[2],
              a0);
            goto LABEL_50;
          }
        }
        else if ( v40 == 1114112 )
        {
          onig::Regex::with_options(v64, v45, v46, 8LL, &OnigSyntaxGrep);
          if ( __OFSUB__(0LL, v64[0]) )
          {
            v47 = v64[1];
            if ( onig::Regex::captures_len(&v47) )
            {
              onig::find::<impl onig::Regex>::captures(&v61, &v47, v54, v55);
              if ( v61.m256i_i64[0] )
              {
                v50 = v63;
                v49 = v62;
                v48 = v61;
                v42 = uu_expr::syntax_tree::StringOp::eval::{{closure}}(&v48);
              }
              else
              {
                v42 = 0LL;
              }
              if ( !v42 )
                v41 = 0LL;
              v43 = 1LL;
              if ( v42 )
                v43 = v42;
              <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v48, v43, v41);
              v52 = v48.m256i_i64[2];
              v51 = *(_OWORD *)v48.m256i_i8;
            }
            else
            {
              onig::Regex::find(v59, &v47, v54, v55);
              <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v48, a0, 1LL);
              v61.m256i_i64[2] = v48.m256i_i64[2];
              *(_OWORD *)v61.m256i_i8 = *(_OWORD *)v48.m256i_i8;
              core::option::Option<T>::map_or(&v51, v59, &v61);
            }
            *(_QWORD *)(a1 + 32) = v52;
            *(_OWORD *)(a1 + 16) = v51;
            *(_QWORD *)(a1 + 8) = 0x8000000000000000LL;
            *(_QWORD *)a1 = 0LL;
            core::ptr::drop_in_place<onig::Regex>(&v47);
          }
          else
          {
            core::ptr::drop_in_place<onig::Error>(v64);
            *(_QWORD *)(a1 + 8) = 5LL;
            *(_QWORD *)a1 = 1LL;
          }
LABEL_71:
          core::ptr::drop_in_place<alloc::string::String>(&v44);
LABEL_72:
          core::ptr::drop_in_place<alloc::string::String>(&v56);
LABEL_73:
          v16 = (__int64 *)v53;
          return core::ptr::drop_in_place<alloc::string::String>(v16);
        }
        alloc::string::String::push(&v44, v40);
LABEL_50:
        v37 = (v25 == 92) & (v37 ^ 1);
        v25 = v40;
      }
    case 1:
      if ( (*(_BYTE *)a3 & 1) != 0 )
        goto LABEL_14;
      uu_expr::syntax_tree::NumOrStr::eval_as_string(&v44, a3 + 8);
      v14 = (__int128 *)(a4 + 8);
      if ( (*(_BYTE *)a4 & 1) != 0 )
      {
        v15 = *v14;
        *(_OWORD *)(a1 + 24) = *(_OWORD *)(a4 + 24);
        *(_OWORD *)(a1 + 8) = v15;
        *(_QWORD *)a1 = 1LL;
        v16 = &v44;
        return core::ptr::drop_in_place<alloc::string::String>(v16);
      }
      uu_expr::syntax_tree::NumOrStr::eval_as_string(&v51, v14);
      v59[0] = v45;
      v59[1] = v45 + v46;
      v59[2] = 0LL;
      v27 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(v59);
      if ( v28 == 1114112 )
        goto LABEL_31;
      v31 = v27;
      v32 = v28;
LABEL_35:
      <alloc::string::String as core::clone::Clone>::clone(&v61, &v51);
      v56 = v61.m256i_i64[1];
      v57 = v61.m256i_i64[1] + v61.m256i_i64[2];
      do
      {
        if ( (core::str::validations::next_code_point(&v56) & 1) == 0 || v33 == 1114112 )
        {
          core::ptr::drop_in_place<alloc::string::String>(&v61);
          v31 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(v59);
          v32 = v34;
          if ( v34 == 1114112 )
          {
LABEL_31:
            <uu_expr::syntax_tree::NumOrStr as core::convert::From<usize>>::from(&v48, 0LL);
            v29 = *(_OWORD *)v48.m256i_i8;
            *(_OWORD *)(a1 + 24) = *(_OWORD *)&v48.m256i_u64[2];
            *(_OWORD *)(a1 + 8) = v29;
            *(_QWORD *)a1 = 0LL;
            goto LABEL_43;
          }
          goto LABEL_35;
        }
      }
      while ( v33 != v32 );
      <uu_expr::syntax_tree::NumOrStr as core::convert::From<usize>>::from(&v48, v31 + 1);
      v35 = *(_OWORD *)v48.m256i_i8;
      *(_OWORD *)(a1 + 24) = *(_OWORD *)&v48.m256i_u64[2];
      *(_OWORD *)(a1 + 8) = v35;
      *(_QWORD *)a1 = 0LL;
      core::ptr::drop_in_place<alloc::string::String>(&v61);
LABEL_43:
      core::ptr::drop_in_place<alloc::string::String>(&v51);
      v16 = &v44;
      return core::ptr::drop_in_place<alloc::string::String>(v16);
    case 2:
      if ( (*(_BYTE *)a3 & 1) != 0 )
      {
LABEL_14:
        v12 = *v5;
        *(_OWORD *)(a1 + 24) = *(_OWORD *)(a3 + 24);
        *(_OWORD *)(a1 + 8) = v12;
        *(_QWORD *)a1 = 1LL;
        return core::ptr::drop_in_place<core::result::Result<uu_expr::syntax_tree::NumOrStr,uu_expr::ExprError>>(a4);
      }
      if ( !(unsigned __int8)uu_expr::syntax_tree::is_truthy(a3 + 8) )
      {
        <uu_expr::syntax_tree::NumOrStr as core::convert::From<usize>>::from(&v48, 0LL);
        v17 = *(_OWORD *)v48.m256i_i8;
        *(_OWORD *)(a1 + 24) = *(_OWORD *)&v48.m256i_u64[2];
        *(_OWORD *)(a1 + 8) = v17;
        *(_QWORD *)a1 = 0LL;
        core::ptr::drop_in_place<uu_expr::syntax_tree::NumOrStr>(v5);
        return core::ptr::drop_in_place<core::result::Result<uu_expr::syntax_tree::NumOrStr,uu_expr::ExprError>>(a4);
      }
      v8 = (__int128 *)(a4 + 8);
      if ( (*(_BYTE *)a4 & 1) != 0 )
      {
        v9 = *v8;
        *(_OWORD *)(a1 + 24) = *(_OWORD *)(a4 + 24);
        *(_OWORD *)(a1 + 8) = v9;
        *(_QWORD *)a1 = 1LL;
        return core::ptr::drop_in_place<uu_expr::syntax_tree::NumOrStr>(v5);
      }
      if ( !(unsigned __int8)uu_expr::syntax_tree::is_truthy(a4 + 8) )
        goto LABEL_44;
      v30 = *v5;
      *(_OWORD *)(a1 + 24) = v5[1];
      *(_OWORD *)(a1 + 8) = v30;
      *(_QWORD *)a1 = 0LL;
      return core::ptr::drop_in_place<uu_expr::syntax_tree::NumOrStr>(a4 + 8);
    case 3:
      v10 = 1LL;
      if ( (*(_BYTE *)a3 & 1) != 0 )
        goto LABEL_12;
      if ( !(unsigned __int8)uu_expr::syntax_tree::is_truthy(a3 + 8) )
      {
        v8 = (__int128 *)(a4 + 8);
        v18 = 1LL;
        if ( (*(_BYTE *)a4 & 1) == 0 )
        {
          if ( !(unsigned __int8)uu_expr::syntax_tree::is_truthy(a4 + 8) )
          {
LABEL_44:
            <uu_expr::syntax_tree::NumOrStr as core::convert::From<usize>>::from(&v48, 0LL);
            v36 = *(_OWORD *)v48.m256i_i8;
            *(_OWORD *)(a1 + 24) = *(_OWORD *)&v48.m256i_u64[2];
            *(_OWORD *)(a1 + 8) = v36;
            *(_QWORD *)a1 = 0LL;
            core::ptr::drop_in_place<uu_expr::syntax_tree::NumOrStr>(v8);
            return core::ptr::drop_in_place<uu_expr::syntax_tree::NumOrStr>(v5);
          }
          v18 = 0LL;
        }
        v19 = *v8;
        *(_OWORD *)(a1 + 24) = *(_OWORD *)(a4 + 24);
        *(_OWORD *)(a1 + 8) = v19;
        *(_QWORD *)a1 = v18;
        return core::ptr::drop_in_place<uu_expr::syntax_tree::NumOrStr>(v5);
      }
      v10 = 0LL;
LABEL_12:
      v11 = *v5;
      *(_OWORD *)(a1 + 24) = v5[1];
      *(_OWORD *)(a1 + 8) = v11;
      *(_QWORD *)a1 = v10;
      return core::ptr::drop_in_place<core::result::Result<uu_expr::syntax_tree::NumOrStr,uu_expr::ExprError>>(a4);
  }
}