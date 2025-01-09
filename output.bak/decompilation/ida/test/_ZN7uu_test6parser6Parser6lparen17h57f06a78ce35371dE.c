__int64 __fastcall uu_test::parser::Parser::lparen(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r15
  __int128 v7; // xmm0
  __int64 v8; // rax
  __int64 v9; // rax
  __int128 v10; // xmm0
  char *v12; // [rsp+0h] [rbp-178h] BYREF
  __int128 v13; // [rsp+8h] [rbp-170h]
  __int64 v14; // [rsp+18h] [rbp-160h]
  __int64 v15; // [rsp+20h] [rbp-158h]
  __m256i v16; // [rsp+30h] [rbp-148h] BYREF
  _BYTE v17[8]; // [rsp+50h] [rbp-128h] BYREF
  __int64 v18; // [rsp+58h] [rbp-120h]
  __int64 v19; // [rsp+60h] [rbp-118h]
  _QWORD v20[5]; // [rsp+68h] [rbp-110h] BYREF
  __int128 v21; // [rsp+90h] [rbp-E8h] BYREF
  __int64 v22; // [rsp+A0h] [rbp-D8h]
  __int128 v23[2]; // [rsp+A8h] [rbp-D0h] BYREF
  _BYTE v24[40]; // [rsp+D0h] [rbp-A8h] BYREF
  _BYTE v25[40]; // [rsp+F8h] [rbp-80h] BYREF
  _BYTE v26[56]; // [rsp+120h] [rbp-58h] BYREF
  __int64 v27; // [rsp+158h] [rbp-20h]

  <core::iter::adapters::peekable::Peekable<I> as core::clone::Clone>::clone(v26, a2 + 24);
  v27 = 3LL;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v17, v26);
  v6 = v18;
  switch ( v19 )
  {
    case 0LL:
      v12 = 0LL;
      uu_test::parser::Symbol::into_literal((__int64)v20, (__int64)&v12);
      uu_test::parser::Parser::literal((__int64)&v16, a2, (__int64)v20);
      if ( v16.m256i_i32[0] == 7 )
        goto LABEL_34;
      v7 = *(_OWORD *)v16.m256i_i8;
      *(_OWORD *)(a1 + 16) = *(_OWORD *)&v16.m256i_u64[2];
      *(_OWORD *)a1 = v7;
      return core::ptr::drop_in_place<alloc::vec::Vec<uu_test::parser::Symbol>>(v17);
    case 1LL:
      v16.m256i_i64[0] = v18;
      v20[0] = &v16;
      v20[1] = <&T as core::fmt::Display>::fmt;
      v12 = (char *)&unk_13DC0;
      *(_QWORD *)&v13 = 1LL;
      v15 = 0LL;
      *((_QWORD *)&v13 + 1) = v20;
      v14 = 1LL;
      ((void (__fastcall *)(__int128 *, char **, __int64, __int64, __int64, __int64))core::option::Option<T>::map_or_else)(
        &v21,
        &v12,
        v2,
        v3,
        v4,
        v5);
      *(_QWORD *)(a1 + 24) = v22;
      *(_OWORD *)(a1 + 8) = v21;
      *(_QWORD *)a1 = 3LL;
      return core::ptr::drop_in_place<alloc::vec::Vec<uu_test::parser::Symbol>>(v17);
    case 2LL:
      if ( *(_DWORD *)v18 == 4
        && *(_DWORD *)(v18 + 40) == 3
        && (unsigned __int8)<std::ffi::os_str::OsString as core::cmp::PartialEq<str>>::eq(
                              *(_QWORD *)(v18 + 56),
                              *(_QWORD *)(v18 + 64)) )
      {
        goto LABEL_29;
      }
      if ( *(_DWORD *)(v6 + 40) == 3
        && (unsigned __int8)<std::ffi::os_str::OsString as core::cmp::PartialEq<str>>::eq(
                              *(_QWORD *)(v6 + 56),
                              *(_QWORD *)(v6 + 64)) )
      {
        goto LABEL_26;
      }
      if ( *(_DWORD *)v6 == 4 )
        goto LABEL_29;
      goto LABEL_31;
    case 3LL:
      if ( *(_QWORD *)v18 == 4LL )
      {
        if ( *(_DWORD *)(v18 + 40) == 3
          && (unsigned __int8)<std::ffi::os_str::OsString as core::cmp::PartialEq<str>>::eq(
                                *(_QWORD *)(v18 + 56),
                                *(_QWORD *)(v18 + 64)) )
        {
          goto LABEL_29;
        }
      }
      else if ( (unsigned int)*(_QWORD *)v18 == 5
             && *(_DWORD *)(v18 + 80) == 3
             && (unsigned __int8)<std::ffi::os_str::OsString as core::cmp::PartialEq<str>>::eq(
                                   *(_QWORD *)(v18 + 96),
                                   *(_QWORD *)(v18 + 104)) )
      {
        uu_test::parser::Parser::next_token((__int64)v23, a2);
        uu_test::parser::Parser::uop(a2, v23);
        uu_test::parser::Parser::expect((__int64)&v12, a2);
        goto LABEL_33;
      }
      v8 = *(_QWORD *)(v6 + 40);
      if ( v8 == 3 )
      {
        if ( (unsigned __int8)<std::ffi::os_str::OsString as core::cmp::PartialEq<str>>::eq(
                                *(_QWORD *)(v6 + 56),
                                *(_QWORD *)(v6 + 64)) )
        {
LABEL_26:
          uu_test::parser::Parser::next_token((__int64)v24, a2);
          uu_test::parser::Parser::literal((__int64)&v12, a2, (__int64)v24);
          v9 = (__int64)v12;
          if ( v12 == &byte_7 )
            goto LABEL_32;
          goto LABEL_35;
        }
      }
      else if ( (_DWORD)v8 == 4 )
      {
        if ( *(_DWORD *)v6 == 4 )
        {
          uu_test::parser::Parser::next_token((__int64)v25, a2);
          uu_test::parser::Parser::literal((__int64)&v12, a2, (__int64)v25);
          v9 = (__int64)v12;
          if ( v12 == &byte_7 )
            goto LABEL_32;
          goto LABEL_35;
        }
LABEL_31:
        uu_test::parser::Parser::expr((__int64)&v12, a2);
        v9 = (__int64)v12;
        if ( v12 == &byte_7 )
        {
LABEL_32:
          uu_test::parser::Parser::expect((__int64)&v12, a2);
LABEL_33:
          v9 = (__int64)v12;
          if ( v12 == &byte_7 )
            goto LABEL_34;
        }
LABEL_35:
        *(_QWORD *)(a1 + 24) = v14;
        v10 = v13;
        goto LABEL_36;
      }
      if ( *(_QWORD *)v6 != 4LL )
        goto LABEL_31;
LABEL_29:
      v12 = 0LL;
      uu_test::parser::Symbol::into_literal((__int64)v20, (__int64)&v12);
      uu_test::parser::Parser::literal((__int64)&v16, a2, (__int64)v20);
      v9 = v16.m256i_i64[0];
      if ( v16.m256i_i64[0] == 7 )
      {
LABEL_34:
        *(_QWORD *)a1 = 7LL;
        return core::ptr::drop_in_place<alloc::vec::Vec<uu_test::parser::Symbol>>(v17);
      }
      *(_QWORD *)(a1 + 24) = v16.m256i_i64[3];
      v10 = *(_OWORD *)&v16.m256i_u64[1];
LABEL_36:
      *(_OWORD *)(a1 + 8) = v10;
      *(_QWORD *)a1 = v9;
      return core::ptr::drop_in_place<alloc::vec::Vec<uu_test::parser::Symbol>>(v17);
    default:
      goto LABEL_31;
  }
}
