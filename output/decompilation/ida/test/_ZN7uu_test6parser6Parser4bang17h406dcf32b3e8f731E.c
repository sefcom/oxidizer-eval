__int64 __fastcall uu_test::parser::Parser::bang(_OWORD *a1, _QWORD *a2)
{
  __int64 result; // rax
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // [rsp+0h] [rbp-128h] BYREF
  __int128 v7; // [rsp+10h] [rbp-118h]
  __int128 v8; // [rsp+20h] [rbp-108h]
  __int64 v9; // [rsp+30h] [rbp-F8h]
  __int64 v10; // [rsp+38h] [rbp-F0h]
  __int64 v11; // [rsp+48h] [rbp-E0h] BYREF
  _DWORD *v12; // [rsp+50h] [rbp-D8h]
  __int64 v13; // [rsp+58h] [rbp-D0h]
  _OWORD v14[3]; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+A0h] [rbp-88h]
  __int64 v16[5]; // [rsp+A8h] [rbp-80h] BYREF
  _OWORD v17[2]; // [rsp+D0h] [rbp-58h] BYREF
  _BYTE v18[56]; // [rsp+F0h] [rbp-38h] BYREF

  uu_test::parser::Parser::peek(v16, a2);
  if ( v16[0] == 2 || LODWORD(v16[0]) == 4 )
  {
    <core::iter::adapters::peekable::Peekable<I> as core::clone::Clone>::clone(&v6, a2 + 3);
    <core::iter::adapters::peekable::Peekable<I> as core::iter::traits::iterator::Iterator>::nth(v14, &v6);
    uu_test::parser::Symbol::new(&v11, (__int64 *)v14);
    core::ptr::drop_in_place<core::iter::adapters::peekable::Peekable<alloc::vec::into_iter::IntoIter<std::ffi::os_str::OsString>>>(&v6);
    if ( ((unsigned int)v11 | 2) == 6 )
    {
      uu_test::parser::Parser::next_token((__int64 *)&v6, (__int64)a2);
      uu_test::parser::Symbol::into_literal((__int64)v18, (__int64)&v6);
      uu_test::parser::Parser::literal(&v6, a2, v18);
      if ( (_DWORD)v6 == 7 )
      {
        *(_QWORD *)&v6 = 1LL;
        alloc::vec::Vec<T,A>::push(a2, &v6, &off_E0200);
LABEL_19:
        core::ptr::drop_in_place<uu_test::parser::Symbol>(&v11);
        goto LABEL_20;
      }
    }
    else
    {
      *(_QWORD *)&v6 = 1LL;
      uu_test::parser::Symbol::into_literal((__int64)v14, (__int64)&v6);
      uu_test::parser::Parser::literal(v17, a2, v14);
      if ( LODWORD(v17[0]) != 7 )
      {
        v3 = v17[0];
        v4 = v17[1];
        goto LABEL_24;
      }
      uu_test::parser::Parser::maybe_boolop(&v6, a2);
      if ( (_DWORD)v6 == 7 )
        goto LABEL_19;
    }
    v3 = v6;
    v4 = v7;
LABEL_24:
    a1[1] = v4;
    *a1 = v3;
    core::ptr::drop_in_place<uu_test::parser::Symbol>(&v11);
    return core::ptr::drop_in_place<uu_test::parser::Symbol>(v16);
  }
  if ( LODWORD(v16[0]) == 6 )
  {
    *(_QWORD *)&v6 = 1LL;
    uu_test::parser::Symbol::into_literal((__int64)v14, (__int64)&v6);
    alloc::vec::Vec<T,A>::push(a2, v14, &off_E0218);
LABEL_20:
    result = core::ptr::drop_in_place<uu_test::parser::Symbol>(v16);
    *(_QWORD *)a1 = 7LL;
    return result;
  }
  <core::iter::adapters::peekable::Peekable<I> as core::clone::Clone>::clone(v14, a2 + 3);
  v9 = v15;
  v8 = v14[2];
  v7 = v14[1];
  v6 = v14[0];
  v10 = 4LL;
  core::iter::traits::iterator::Iterator::collect(&v11, &v6);
  if ( v13 == 3 && *v12 == 3 && v12[10] == 2 && v12[20] == 3 )
  {
    uu_test::parser::Parser::expr((__int64)&v6, a2);
    if ( (_DWORD)v6 == 7 )
    {
      *(_QWORD *)&v6 = 1LL;
      alloc::vec::Vec<T,A>::push(a2, &v6, &off_E0230);
LABEL_16:
      core::ptr::drop_in_place<alloc::vec::Vec<uu_test::parser::Symbol>>(&v11);
      goto LABEL_20;
    }
  }
  else
  {
    uu_test::parser::Parser::term((__int64)&v6, (__int64)a2);
    if ( (_DWORD)v6 == 7 )
    {
      *(_QWORD *)&v6 = 1LL;
      alloc::vec::Vec<T,A>::push(a2, &v6, &off_E0248);
      goto LABEL_16;
    }
  }
  v5 = v6;
  a1[1] = v7;
  *a1 = v5;
  core::ptr::drop_in_place<alloc::vec::Vec<uu_test::parser::Symbol>>(&v11);
  return core::ptr::drop_in_place<uu_test::parser::Symbol>(v16);
}