__int64 __fastcall uu_test::parser::Parser::lparen(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // r15
  __int64 v3; // rax
  __int64 v4; // r12
  __int64 v5; // rax
  char *v6; // rax
  __int128 v7; // xmm0
  char *v9; // [rsp+8h] [rbp-150h] BYREF
  __int128 v10; // [rsp+10h] [rbp-148h]
  __int64 v11; // [rsp+20h] [rbp-138h]
  __int64 v12; // [rsp+28h] [rbp-130h]
  __int64 v13; // [rsp+40h] [rbp-118h]
  char *v14; // [rsp+48h] [rbp-110h] BYREF
  __int128 v15; // [rsp+50h] [rbp-108h]
  __int64 v16; // [rsp+60h] [rbp-F8h]
  _QWORD v17[5]; // [rsp+68h] [rbp-F0h] BYREF
  char v18[8]; // [rsp+90h] [rbp-C8h] BYREF
  __int64 *v19; // [rsp+98h] [rbp-C0h]
  __int64 v20; // [rsp+A0h] [rbp-B8h]
  __int128 v21; // [rsp+A8h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+B8h] [rbp-A0h]
  __int64 v23[5]; // [rsp+C0h] [rbp-98h] BYREF
  __int64 v24[5]; // [rsp+E8h] [rbp-70h] BYREF
  __int64 v25[9]; // [rsp+110h] [rbp-48h] BYREF

  <core::iter::adapters::peekable::Peekable<I> as core::clone::Clone>::clone(&v9, a2 + 3);
  v13 = 3LL;
  core::iter::traits::iterator::Iterator::collect(v18, &v9);
  v2 = v19;
  switch ( v20 )
  {
    case 0LL:
      goto LABEL_28;
    case 1LL:
      v14 = (char *)v19;
      v17[0] = &v14;
      v17[1] = <&T as core::fmt::Display>::fmt;
      v9 = (char *)&unk_17330;
      *(_QWORD *)&v10 = 1LL;
      v12 = 0LL;
      *((_QWORD *)&v10 + 1) = v17;
      v11 = 1LL;
      core::option::Option<T>::map_or_else(&v21, &v9);
      *(_QWORD *)(a1 + 24) = v22;
      *(_OWORD *)(a1 + 8) = v21;
      *(_QWORD *)a1 = 3LL;
      return core::ptr::drop_in_place<alloc::vec::Vec<uu_test::parser::Symbol>>(v18);
    case 2LL:
      v3 = v19[5];
      if ( *(_DWORD *)v19 == 4 )
      {
        if ( v3 == 3
          && !(unsigned __int8)<std::ffi::os_str::OsString as core::cmp::PartialEq<str>>::eq(v19[7], v19[8])
          && (unsigned __int8)<std::ffi::os_str::OsString as core::cmp::PartialEq<str>>::eq(v2[7], v2[8]) )
        {
          goto LABEL_25;
        }
        goto LABEL_28;
      }
      if ( v3 == 3 && (unsigned __int8)<std::ffi::os_str::OsString as core::cmp::PartialEq<str>>::eq(v19[7], v19[8]) )
        goto LABEL_25;
      goto LABEL_30;
    case 3LL:
      v4 = *v19;
      if ( *v19 == 4 )
      {
        if ( *((_DWORD *)v19 + 10) == 3
          && (unsigned __int8)<std::ffi::os_str::OsString as core::cmp::PartialEq<str>>::eq(v19[7], v19[8]) )
        {
          goto LABEL_28;
        }
      }
      else if ( (_DWORD)v4 == 5
             && *((_DWORD *)v19 + 20) == 3
             && (unsigned __int8)<std::ffi::os_str::OsString as core::cmp::PartialEq<str>>::eq(v19[12], v19[13]) )
      {
        uu_test::parser::Parser::next_token(v23, (__int64)a2);
        uu_test::parser::Parser::uop(a2, v23);
        uu_test::parser::Parser::expect((__int64)&v9, (__int64)a2);
        goto LABEL_32;
      }
      v5 = v2[5];
      if ( v5 == 3 )
      {
        if ( (unsigned __int8)<std::ffi::os_str::OsString as core::cmp::PartialEq<str>>::eq(v2[7], v2[8]) )
        {
LABEL_25:
          uu_test::parser::Parser::next_token(v24, (__int64)a2);
          uu_test::parser::Parser::literal(&v9, a2, v24);
          v6 = v9;
          if ( v9 == &byte_7 )
            goto LABEL_31;
          goto LABEL_34;
        }
      }
      else if ( (_DWORD)v5 == 4 )
      {
        if ( (_DWORD)v4 == 4 )
        {
          uu_test::parser::Parser::next_token(v25, (__int64)a2);
          uu_test::parser::Parser::literal(&v9, a2, v25);
          v6 = v9;
          if ( v9 == &byte_7 )
            goto LABEL_31;
          goto LABEL_34;
        }
LABEL_30:
        uu_test::parser::Parser::expr((__int64)&v9, a2);
        v6 = v9;
        if ( v9 == &byte_7 )
        {
LABEL_31:
          uu_test::parser::Parser::expect((__int64)&v9, (__int64)a2);
LABEL_32:
          v6 = v9;
          if ( v9 == &byte_7 )
            goto LABEL_33;
        }
LABEL_34:
        *(_QWORD *)(a1 + 24) = v11;
        v7 = v10;
        goto LABEL_35;
      }
      if ( (_DWORD)v4 != 4 )
        goto LABEL_30;
LABEL_28:
      v9 = 0LL;
      uu_test::parser::Symbol::into_literal((__int64)v17, (__int64)&v9);
      uu_test::parser::Parser::literal(&v14, a2, v17);
      v6 = v14;
      if ( v14 == &byte_7 )
      {
LABEL_33:
        *(_QWORD *)a1 = 7LL;
        return core::ptr::drop_in_place<alloc::vec::Vec<uu_test::parser::Symbol>>(v18);
      }
      *(_QWORD *)(a1 + 24) = v16;
      v7 = v15;
LABEL_35:
      *(_OWORD *)(a1 + 8) = v7;
      *(_QWORD *)a1 = v6;
      return core::ptr::drop_in_place<alloc::vec::Vec<uu_test::parser::Symbol>>(v18);
    default:
      goto LABEL_30;
  }
}