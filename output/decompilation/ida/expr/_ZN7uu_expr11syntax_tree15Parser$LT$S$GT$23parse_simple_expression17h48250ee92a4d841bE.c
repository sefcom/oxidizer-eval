__int64 __fastcall uu_expr::syntax_tree::Parser<S>::parse_simple_expression(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // r15
  __int64 v6; // r12
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  _BYTE *v9; // rdi
  __int64 v10; // rcx
  __int128 v11; // xmm0
  __int64 v12; // r14
  __int64 v13; // rax
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  unsigned __int64 v16; // r13
  __int128 v17; // xmm0
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int128 v20; // xmm0
  __int64 v21; // r14
  __int64 v22; // r15
  __int64 v23; // rax
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // rdi
  __int64 v26; // rax
  unsigned __int64 v27; // rsi
  unsigned __int64 v28; // rdi
  __int64 v29; // rax
  _BYTE v30[40]; // [rsp+0h] [rbp-178h] BYREF
  _BYTE v31[40]; // [rsp+30h] [rbp-148h] BYREF
  _BYTE v32[40]; // [rsp+58h] [rbp-120h] BYREF
  _BYTE v33[40]; // [rsp+80h] [rbp-F8h] BYREF
  __int128 v34; // [rsp+B0h] [rbp-C8h] BYREF
  __int128 v35; // [rsp+C0h] [rbp-B8h]
  __int128 v36; // [rsp+D0h] [rbp-A8h]
  __int128 v37; // [rsp+E0h] [rbp-98h]
  __int64 v38; // [rsp+F0h] [rbp-88h]
  __int64 v39; // [rsp+F8h] [rbp-80h] BYREF
  __int128 v40; // [rsp+100h] [rbp-78h]
  __int128 v41; // [rsp+110h] [rbp-68h]
  __int64 v42; // [rsp+120h] [rbp-58h] BYREF
  __int128 v43; // [rsp+128h] [rbp-50h]
  __int128 v44; // [rsp+138h] [rbp-40h]

  uu_expr::syntax_tree::Parser<S>::next(v30);
  v5 = *(_QWORD *)&v30[8];
  result = *(_QWORD *)v30;
  v6 = *(_QWORD *)&v30[16];
  if ( *(_QWORD *)v30 != 13LL )
  {
    v10 = *(_QWORD *)&v30[24];
    *(_OWORD *)(a1 + 8) = *(_OWORD *)v30;
    *(_QWORD *)(a1 + 24) = v6;
    goto LABEL_10;
  }
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                           *(_QWORD *)&v30[8],
                           *(_QWORD *)&v30[16],
                           aMatch,
                           5LL) )
  {
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, aSubstr, 6LL) )
    {
      uu_expr::syntax_tree::Parser<S>::parse_expression((__int64)v30, (__int64)a2);
      result = *(_QWORD *)v30;
      *(_OWORD *)v31 = *(_OWORD *)&v30[8];
      *(_OWORD *)&v31[16] = *(_OWORD *)&v30[24];
      if ( *(_QWORD *)v30 != 0x8000000000000005LL )
      {
        *(_OWORD *)&v33[24] = *(_OWORD *)&v31[16];
        *(_OWORD *)&v33[8] = *(_OWORD *)v31;
        *(_QWORD *)v33 = *(_QWORD *)v30;
        uu_expr::syntax_tree::Parser<S>::parse_expression((__int64)v30, (__int64)a2);
        *(_OWORD *)v31 = *(_OWORD *)&v30[8];
        *(_OWORD *)&v31[16] = *(_OWORD *)&v30[24];
        if ( *(_QWORD *)v30 == 0x8000000000000005LL )
        {
          v11 = *(_OWORD *)v31;
          *(_OWORD *)(a1 + 24) = *(_OWORD *)&v31[16];
          *(_OWORD *)(a1 + 8) = v11;
          *(_QWORD *)a1 = 0x8000000000000005LL;
        }
        else
        {
          *(_OWORD *)&v32[24] = *(_OWORD *)&v31[16];
          *(_OWORD *)&v32[8] = *(_OWORD *)v31;
          *(_QWORD *)v32 = *(_QWORD *)v30;
          uu_expr::syntax_tree::Parser<S>::parse_expression((__int64)v30, (__int64)a2);
          v36 = *(_OWORD *)&v30[8];
          v37 = *(_OWORD *)&v30[24];
          if ( *(_QWORD *)v30 != 0x8000000000000005LL )
          {
            *(_OWORD *)&v31[24] = v37;
            *(_OWORD *)&v31[8] = v36;
            *(_QWORD *)v31 = *(_QWORD *)v30;
            *(_QWORD *)&v30[32] = *(_QWORD *)&v33[32];
            *(_OWORD *)&v30[16] = *(_OWORD *)&v33[16];
            *(_OWORD *)v30 = *(_OWORD *)v33;
            v21 = alloc::boxed::Box<T>::new(v30);
            v38 = v21;
            *(_QWORD *)&v30[32] = *(_QWORD *)&v32[32];
            *(_OWORD *)&v30[16] = *(_OWORD *)&v32[16];
            *(_OWORD *)v30 = *(_OWORD *)v32;
            v22 = alloc::boxed::Box<T>::new(v30);
            *(_QWORD *)&v36 = v22;
            *(_QWORD *)&v30[32] = *(_QWORD *)&v31[32];
            *(_OWORD *)&v30[16] = *(_OWORD *)&v31[16];
            *(_OWORD *)v30 = *(_OWORD *)v31;
            v23 = alloc::boxed::Box<T>::new(v30);
            *((_QWORD *)&v34 + 1) = v21;
            *(_QWORD *)&v35 = v22;
            *((_QWORD *)&v35 + 1) = v23;
            v16 = 0x8000000000000003LL;
            goto LABEL_25;
          }
          v20 = v36;
          *(_OWORD *)(a1 + 24) = v37;
          *(_OWORD *)(a1 + 8) = v20;
          *(_QWORD *)a1 = 0x8000000000000005LL;
          core::ptr::drop_in_place<uu_expr::syntax_tree::AstNode>(v32);
        }
        v9 = v33;
        return core::ptr::drop_in_place<uu_expr::syntax_tree::AstNode>(v9);
      }
      goto LABEL_21;
    }
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, aIndex, 5LL) )
    {
      uu_expr::syntax_tree::Parser<S>::parse_expression((__int64)v30, (__int64)a2);
      result = *(_QWORD *)v30;
      *(_OWORD *)v31 = *(_OWORD *)&v30[8];
      *(_OWORD *)&v31[16] = *(_OWORD *)&v30[24];
      if ( *(_QWORD *)v30 != 0x8000000000000005LL )
      {
        *(_OWORD *)&v32[24] = *(_OWORD *)&v31[16];
        *(_OWORD *)&v32[8] = *(_OWORD *)v31;
        *(_QWORD *)v32 = *(_QWORD *)v30;
        uu_expr::syntax_tree::Parser<S>::parse_expression((__int64)v30, (__int64)a2);
        *(_OWORD *)v33 = *(_OWORD *)&v30[8];
        *(_OWORD *)&v33[16] = *(_OWORD *)&v30[24];
        if ( *(_QWORD *)v30 == 0x8000000000000005LL )
          goto LABEL_5;
        *(_OWORD *)&v31[24] = *(_OWORD *)&v33[16];
        *(_OWORD *)&v31[8] = *(_OWORD *)v33;
        *(_QWORD *)v31 = *(_QWORD *)v30;
        *(_QWORD *)&v30[32] = *(_QWORD *)&v32[32];
        *(_OWORD *)&v30[16] = *(_OWORD *)&v32[16];
        *(_OWORD *)v30 = *(_OWORD *)v32;
        v12 = alloc::boxed::Box<T>::new(v30);
        *(_QWORD *)v33 = v12;
        *(_QWORD *)&v30[32] = *(_QWORD *)&v31[32];
        *(_OWORD *)&v30[16] = *(_OWORD *)&v31[16];
        *(_OWORD *)v30 = *(_OWORD *)v31;
        v13 = alloc::boxed::Box<T>::new(v30);
        WORD4(v35) = 258;
        goto LABEL_24;
      }
      goto LABEL_21;
    }
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, aLength, 6LL) )
    {
      uu_expr::syntax_tree::Parser<S>::parse_expression((__int64)v30, (__int64)a2);
      result = *(_QWORD *)v30;
      *(_OWORD *)v31 = *(_OWORD *)&v30[8];
      *(_OWORD *)&v31[16] = *(_OWORD *)&v30[24];
      if ( *(_QWORD *)v30 != 0x8000000000000005LL )
      {
        v39 = *(_QWORD *)v30;
        v40 = *(_OWORD *)v31;
        v41 = *(_OWORD *)&v31[16];
        *((_QWORD *)&v34 + 1) = alloc::boxed::Box<T>::new(&v39);
        v16 = 0x8000000000000004LL;
        goto LABEL_25;
      }
      goto LABEL_21;
    }
    if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, asc_1BC74, 1LL) )
    {
      if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, asc_1BC75, 1LL) )
      {
        uu_expr::syntax_tree::Parser<S>::parse_expression((__int64)v30, (__int64)a2);
        result = *(_QWORD *)v30;
        *(_OWORD *)v33 = *(_OWORD *)&v30[8];
        *(_OWORD *)&v33[16] = *(_OWORD *)&v30[24];
        if ( *(_QWORD *)v30 == 0x8000000000000005LL )
        {
          v14 = *(_OWORD *)v33;
          v15 = *(_OWORD *)&v33[16];
        }
        else
        {
          v42 = *(_QWORD *)v30;
          v43 = *(_OWORD *)v33;
          v44 = *(_OWORD *)&v33[16];
          uu_expr::syntax_tree::AstNode::evaluated(v31, &v42);
          result = *(_QWORD *)v31;
          v36 = *(_OWORD *)&v31[8];
          v37 = *(_OWORD *)&v31[24];
          if ( *(_QWORD *)v31 != 0x8000000000000005LL )
          {
            *(_OWORD *)&v32[24] = v37;
            *(_OWORD *)&v32[8] = v36;
            *(_QWORD *)v32 = *(_QWORD *)v31;
            uu_expr::syntax_tree::Parser<S>::next(v30);
            if ( *(_QWORD *)v30 == 1LL )
            {
              v24 = a2[1];
              v25 = a2[2] - 1LL;
              if ( v25 >= v24 )
                core::panicking::panic_bounds_check(v25, v24, &off_149908);
              v26 = <alloc::string::String as core::convert::AsRef<str>>::as_ref(
                      *(_QWORD *)(*a2 + 24 * v25 + 8),
                      *(_QWORD *)(*a2 + 24 * v25 + 16));
              <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v31, v26);
              *(_QWORD *)(a1 + 32) = *(_QWORD *)&v31[16];
              *(_OWORD *)(a1 + 16) = *(_OWORD *)v31;
              *(_QWORD *)(a1 + 8) = 6LL;
              *(_QWORD *)a1 = 0x8000000000000005LL;
              core::ptr::drop_in_place<uu_expr::ExprError>(v30);
              goto LABEL_8;
            }
            if ( *(_DWORD *)v30 != 13 )
            {
              v7 = *(_OWORD *)v30;
              v8 = *(_OWORD *)&v30[16];
              goto LABEL_6;
            }
            if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                     *(_QWORD *)&v30[8],
                                     *(_QWORD *)&v30[16],
                                     asc_1BC76,
                                     1LL) )
            {
              v27 = a2[1];
              v28 = a2[2] - 1LL;
              if ( v28 >= v27 )
                core::panicking::panic_bounds_check(v28, v27, &off_1498F0);
              v29 = <alloc::string::String as core::convert::AsRef<str>>::as_ref(
                      *(_QWORD *)(*a2 + 24 * v28 + 8),
                      *(_QWORD *)(*a2 + 24 * v28 + 16));
              <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v31, v29);
              *(_QWORD *)(a1 + 32) = *(_QWORD *)&v31[16];
              *(_OWORD *)(a1 + 16) = *(_OWORD *)v31;
              *(_QWORD *)(a1 + 8) = 7LL;
              goto LABEL_7;
            }
            v34 = *(_OWORD *)v32;
            v35 = *(_OWORD *)&v32[16];
LABEL_26:
            result = uu_expr::syntax_tree::get_next_id();
            v17 = v34;
            *(_OWORD *)(a1 + 16) = v35;
            *(_OWORD *)a1 = v17;
            *(_DWORD *)(a1 + 32) = result;
            return result;
          }
          v14 = v36;
          v15 = v37;
        }
LABEL_22:
        *(_OWORD *)(a1 + 24) = v15;
        *(_OWORD *)(a1 + 8) = v14;
        *(_QWORD *)a1 = 0x8000000000000005LL;
        return result;
      }
      v18 = v5;
LABEL_41:
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec((char *)&v34 + 8, v18);
      v16 = 0x8000000000000001LL;
      goto LABEL_25;
    }
    uu_expr::syntax_tree::Parser<S>::next(v30);
    v18 = *(_QWORD *)&v30[8];
    result = *(_QWORD *)v30;
    v19 = *(_QWORD *)&v30[16];
    if ( *(_QWORD *)v30 == 13LL )
      goto LABEL_41;
    v10 = *(_QWORD *)&v30[24];
    *(_OWORD *)(a1 + 8) = *(_OWORD *)v30;
    *(_QWORD *)(a1 + 24) = v19;
LABEL_10:
    *(_QWORD *)(a1 + 32) = v10;
    *(_QWORD *)a1 = 0x8000000000000005LL;
    return result;
  }
  uu_expr::syntax_tree::Parser<S>::parse_expression((__int64)v30, (__int64)a2);
  result = *(_QWORD *)v30;
  *(_OWORD *)v31 = *(_OWORD *)&v30[8];
  *(_OWORD *)&v31[16] = *(_OWORD *)&v30[24];
  if ( *(_QWORD *)v30 == 0x8000000000000005LL )
  {
LABEL_21:
    v14 = *(_OWORD *)v31;
    v15 = *(_OWORD *)&v31[16];
    goto LABEL_22;
  }
  *(_OWORD *)&v32[24] = *(_OWORD *)&v31[16];
  *(_OWORD *)&v32[8] = *(_OWORD *)v31;
  *(_QWORD *)v32 = *(_QWORD *)v30;
  uu_expr::syntax_tree::Parser<S>::parse_expression((__int64)v30, (__int64)a2);
  *(_OWORD *)v33 = *(_OWORD *)&v30[8];
  *(_OWORD *)&v33[16] = *(_OWORD *)&v30[24];
  if ( *(_QWORD *)v30 != 0x8000000000000005LL )
  {
    *(_OWORD *)&v31[24] = *(_OWORD *)&v33[16];
    *(_OWORD *)&v31[8] = *(_OWORD *)v33;
    *(_QWORD *)v31 = *(_QWORD *)v30;
    *(_QWORD *)&v30[32] = *(_QWORD *)&v32[32];
    *(_OWORD *)&v30[16] = *(_OWORD *)&v32[16];
    *(_OWORD *)v30 = *(_OWORD *)v32;
    v12 = alloc::boxed::Box<T>::new(v30);
    *(_QWORD *)v33 = v12;
    *(_QWORD *)&v30[32] = *(_QWORD *)&v31[32];
    *(_OWORD *)&v30[16] = *(_OWORD *)&v31[16];
    *(_OWORD *)v30 = *(_OWORD *)v31;
    v13 = alloc::boxed::Box<T>::new(v30);
    WORD4(v35) = 2;
LABEL_24:
    *((_QWORD *)&v34 + 1) = v12;
    *(_QWORD *)&v35 = v13;
    v16 = 0x8000000000000002LL;
LABEL_25:
    *(_QWORD *)&v34 = v16;
    goto LABEL_26;
  }
LABEL_5:
  v7 = *(_OWORD *)v33;
  v8 = *(_OWORD *)&v33[16];
LABEL_6:
  *(_OWORD *)(a1 + 24) = v8;
  *(_OWORD *)(a1 + 8) = v7;
LABEL_7:
  *(_QWORD *)a1 = 0x8000000000000005LL;
LABEL_8:
  v9 = v32;
  return core::ptr::drop_in_place<uu_expr::syntax_tree::AstNode>(v9);
}