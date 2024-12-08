__int64 __fastcall uu_test::parser::Parser::lparen(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rax
  __int128 v11; // xmm0
  __m256i v13; // [rsp+0h] [rbp-178h] BYREF
  __int64 v14; // [rsp+20h] [rbp-158h]
  __m256i v15; // [rsp+30h] [rbp-148h] BYREF
  _BYTE v16[8]; // [rsp+50h] [rbp-128h] BYREF
  __int64 v17; // [rsp+58h] [rbp-120h]
  __int64 v18; // [rsp+60h] [rbp-118h]
  _QWORD v19[5]; // [rsp+68h] [rbp-110h] BYREF
  __int128 v20; // [rsp+90h] [rbp-E8h] BYREF
  __int64 v21; // [rsp+A0h] [rbp-D8h]
  _BYTE v22[40]; // [rsp+A8h] [rbp-D0h] BYREF
  _BYTE v23[40]; // [rsp+D0h] [rbp-A8h] BYREF
  _BYTE v24[40]; // [rsp+F8h] [rbp-80h] BYREF
  _BYTE v25[56]; // [rsp+120h] [rbp-58h] BYREF
  __int64 v26; // [rsp+158h] [rbp-20h]

  <core::iter::adapters::peekable::Peekable<I> as core::clone::Clone>::clone(v25, a2 + 24);
  v26 = 3LL;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v16, v25);
  v2 = v17;
  switch ( v18 )
  {
    case 0LL:
      v13.m256i_i64[0] = 0LL;
      uu_test::parser::Symbol::into_literal((__int64)v19, (__int64)&v13);
      uu_test::parser::Parser::literal(&v15, a2, v19);
      if ( v15.m256i_i32[0] == 7 )
        goto LABEL_35;
      v3 = *(_OWORD *)v15.m256i_i8;
      v4 = *(_OWORD *)&v15.m256i_u64[2];
      goto LABEL_4;
    case 1LL:
      v15.m256i_i64[0] = v17;
      v19[0] = &v15;
      v19[1] = <&T as core::fmt::Display>::fmt;
      v13.m256i_i64[0] = (__int64)&unk_13EC0;
      v13.m256i_i64[1] = 1LL;
      v14 = 0LL;
      v13.m256i_i64[2] = (__int64)v19;
      v13.m256i_i64[3] = 1LL;
      ((void (__fastcall *)(__int128 *, __m256i *))core::option::Option<T>::map_or_else)(&v20, &v13);
      *(_QWORD *)(a1 + 24) = v21;
      *(_OWORD *)(a1 + 8) = v20;
      *(_QWORD *)a1 = 3LL;
      return core::ptr::drop_in_place<alloc::vec::Vec<uu_test::parser::Symbol>>(v16);
    case 2LL:
      if ( *(_DWORD *)v17 == 4
        && *(_DWORD *)(v17 + 40) == 3
        && (unsigned __int8)<std::ffi::os_str::OsString as core::cmp::PartialEq<str>>::eq(
                              *(_QWORD *)(v17 + 56),
                              *(_QWORD *)(v17 + 64)) )
      {
        goto LABEL_31;
      }
      if ( *(_DWORD *)(v2 + 40) == 3
        && (unsigned __int8)<std::ffi::os_str::OsString as core::cmp::PartialEq<str>>::eq(
                              *(_QWORD *)(v2 + 56),
                              *(_QWORD *)(v2 + 64)) )
      {
        goto LABEL_28;
      }
      if ( *(_DWORD *)v2 != 4 )
        goto LABEL_33;
      goto LABEL_31;
    case 3LL:
      if ( *(_QWORD *)v17 == 4LL )
      {
        if ( *(_DWORD *)(v17 + 40) == 3
          && (unsigned __int8)<std::ffi::os_str::OsString as core::cmp::PartialEq<str>>::eq(
                                *(_QWORD *)(v17 + 56),
                                *(_QWORD *)(v17 + 64)) )
        {
          goto LABEL_31;
        }
        goto LABEL_22;
      }
      if ( (unsigned int)*(_QWORD *)v17 != 5
        || *(_DWORD *)(v17 + 80) != 3
        || !(unsigned __int8)<std::ffi::os_str::OsString as core::cmp::PartialEq<str>>::eq(
                               *(_QWORD *)(v17 + 96),
                               *(_QWORD *)(v17 + 104)) )
      {
LABEL_22:
        v9 = *(_QWORD *)(v2 + 40);
        if ( v9 == 3 )
        {
          if ( (unsigned __int8)<std::ffi::os_str::OsString as core::cmp::PartialEq<str>>::eq(
                                  *(_QWORD *)(v2 + 56),
                                  *(_QWORD *)(v2 + 64)) )
          {
LABEL_28:
            uu_test::parser::Parser::next_token((__int64)v23, a2);
            uu_test::parser::Parser::literal(&v13, a2, v23);
            v10 = v13.m256i_i64[0];
            if ( v13.m256i_i64[0] == 7 )
            {
LABEL_34:
              uu_test::parser::Parser::expect((__int64)&v13, a2);
              v10 = v13.m256i_i64[0];
              if ( v13.m256i_i64[0] == 7 )
                goto LABEL_35;
            }
LABEL_36:
            *(_QWORD *)(a1 + 24) = v13.m256i_i64[3];
            v11 = *(_OWORD *)&v13.m256i_u64[1];
            goto LABEL_37;
          }
        }
        else if ( (_DWORD)v9 == 4 )
        {
          if ( *(_DWORD *)v2 == 4 )
          {
            uu_test::parser::Parser::next_token((__int64)v24, a2);
            uu_test::parser::Parser::literal(&v13, a2, v24);
            v10 = v13.m256i_i64[0];
            if ( v13.m256i_i64[0] == 7 )
              goto LABEL_34;
            goto LABEL_36;
          }
LABEL_33:
          uu_test::parser::Parser::expr((__int64)&v13, a2);
          v10 = v13.m256i_i64[0];
          if ( v13.m256i_i64[0] == 7 )
            goto LABEL_34;
          goto LABEL_36;
        }
        if ( *(_QWORD *)v2 != 4LL )
          goto LABEL_33;
LABEL_31:
        v13.m256i_i64[0] = 0LL;
        uu_test::parser::Symbol::into_literal((__int64)v19, (__int64)&v13);
        uu_test::parser::Parser::literal(&v15, a2, v19);
        v10 = v15.m256i_i64[0];
        if ( v15.m256i_i64[0] == 7 )
          goto LABEL_35;
        *(_QWORD *)(a1 + 24) = v15.m256i_i64[3];
        v11 = *(_OWORD *)&v15.m256i_u64[1];
LABEL_37:
        *(_OWORD *)(a1 + 8) = v11;
        *(_QWORD *)a1 = v10;
        return core::ptr::drop_in_place<alloc::vec::Vec<uu_test::parser::Symbol>>(v16);
      }
      uu_test::parser::Parser::next_token((__int64)v22, a2);
      uu_test::parser::Parser::uop(
        a2,
        v22,
        v5,
        v6,
        v7,
        v8,
        v13.m256i_i64[0],
        v13.m256i_i64[1],
        v13.m256i_i64[2],
        v13.m256i_i64[3],
        v14);
      uu_test::parser::Parser::expect((__int64)&v13, a2);
      if ( v13.m256i_i32[0] == 7 )
      {
LABEL_35:
        *(_QWORD *)a1 = 7LL;
        return core::ptr::drop_in_place<alloc::vec::Vec<uu_test::parser::Symbol>>(v16);
      }
      v3 = *(_OWORD *)v13.m256i_i8;
      v4 = *(_OWORD *)&v13.m256i_u64[2];
LABEL_4:
      *(_OWORD *)(a1 + 16) = v4;
      *(_OWORD *)a1 = v3;
      return core::ptr::drop_in_place<alloc::vec::Vec<uu_test::parser::Symbol>>(v16);
    default:
      goto LABEL_33;
  }
}
