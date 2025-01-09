__int64 __fastcall uu_test::parser::Parser::bang(_OWORD *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 result; // rax
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // [rsp+0h] [rbp-148h] BYREF
  __int128 v19; // [rsp+10h] [rbp-138h]
  __int128 v20; // [rsp+20h] [rbp-128h]
  __int64 v21; // [rsp+30h] [rbp-118h]
  __int128 v22; // [rsp+38h] [rbp-110h] BYREF
  __int64 v23; // [rsp+48h] [rbp-100h]
  _QWORD v24[5]; // [rsp+60h] [rbp-E8h] BYREF
  _DWORD v25[10]; // [rsp+88h] [rbp-C0h] BYREF
  _OWORD v26[2]; // [rsp+B0h] [rbp-98h] BYREF
  _OWORD v27[3]; // [rsp+D0h] [rbp-78h] BYREF
  __int64 v28; // [rsp+100h] [rbp-48h]
  __int64 v29; // [rsp+108h] [rbp-40h]
  _BYTE v30[56]; // [rsp+110h] [rbp-38h] BYREF

  uu_test::parser::Parser::peek((__int64)v24, a2);
  if ( v24[0] == 2LL || LODWORD(v24[0]) == 4 )
  {
    <core::iter::adapters::peekable::Peekable<I> as core::clone::Clone>::clone(&v18, a2 + 24);
    <core::iter::adapters::peekable::Peekable<I> as core::iter::traits::iterator::Iterator>::nth(&v22, &v18);
    uu_test::parser::Symbol::new((__int64)v25, &v22);
    core::ptr::drop_in_place<core::iter::adapters::peekable::Peekable<alloc::vec::into_iter::IntoIter<std::ffi::os_str::OsString>>>(&v18);
    if ( (v25[0] | 2) == 6 )
    {
      uu_test::parser::Parser::next_token((__int64)&v18, a2);
      uu_test::parser::Symbol::into_literal((__int64)v30, (__int64)&v18);
      uu_test::parser::Parser::literal((__int64)&v18, a2, (__int64)v30);
      if ( (_DWORD)v18 == 7 )
      {
        *(_QWORD *)&v18 = 1LL;
        ((void (__fastcall *)(__int64, __int128 *, __int64, __int64, __int64, __int64))alloc::vec::Vec<T,A>::push)(
          a2,
          &v18,
          v6,
          v7,
          v8,
          v9);
LABEL_18:
        core::ptr::drop_in_place<uu_test::parser::Symbol>(v25);
        goto LABEL_19;
      }
    }
    else
    {
      *(_QWORD *)&v18 = 1LL;
      uu_test::parser::Symbol::into_literal((__int64)&v22, (__int64)&v18);
      uu_test::parser::Parser::literal((__int64)v26, a2, (__int64)&v22);
      if ( LODWORD(v26[0]) != 7 )
      {
        v15 = v26[0];
        v16 = v26[1];
        goto LABEL_23;
      }
      uu_test::parser::Parser::maybe_boolop((__int64)&v18, a2);
      if ( (_DWORD)v18 == 7 )
        goto LABEL_18;
    }
    v15 = v18;
    v16 = v19;
LABEL_23:
    a1[1] = v16;
    *a1 = v15;
    core::ptr::drop_in_place<uu_test::parser::Symbol>(v25);
    return core::ptr::drop_in_place<uu_test::parser::Symbol>(v24);
  }
  if ( LODWORD(v24[0]) == 6 )
  {
    *(_QWORD *)&v18 = 1LL;
    uu_test::parser::Symbol::into_literal((__int64)&v22, (__int64)&v18);
    alloc::vec::Vec<T,A>::push(a2, &v22, v2, v3, v4, v5, v18, *((_QWORD *)&v18 + 1), v19, *((_QWORD *)&v19 + 1), v20);
LABEL_19:
    result = core::ptr::drop_in_place<uu_test::parser::Symbol>(v24);
    *(_QWORD *)a1 = 7LL;
    return result;
  }
  <core::iter::adapters::peekable::Peekable<I> as core::clone::Clone>::clone(&v18, a2 + 24);
  v28 = v21;
  v27[2] = v20;
  v27[1] = v19;
  v27[0] = v18;
  v29 = 4LL;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v22, v27);
  if ( v23 == 3
    && **((_DWORD **)&v22 + 1) == 3
    && *(_DWORD *)(*((_QWORD *)&v22 + 1) + 40LL) == 2
    && *(_DWORD *)(*((_QWORD *)&v22 + 1) + 80LL) == 3 )
  {
    uu_test::parser::Parser::expr((__int64)&v18, a2);
    if ( (_DWORD)v18 == 7 )
      goto LABEL_15;
  }
  else
  {
    uu_test::parser::Parser::term((__int64)&v18, a2);
    if ( (_DWORD)v18 == 7 )
    {
LABEL_15:
      *(_QWORD *)&v18 = 1LL;
      ((void (__fastcall *)(__int64, __int128 *, __int64, __int64, __int64, __int64))alloc::vec::Vec<T,A>::push)(
        a2,
        &v18,
        v10,
        v11,
        v12,
        v13);
      core::ptr::drop_in_place<alloc::vec::Vec<uu_test::parser::Symbol>>(&v22);
      goto LABEL_19;
    }
  }
  v17 = v18;
  a1[1] = v19;
  *a1 = v17;
  core::ptr::drop_in_place<alloc::vec::Vec<uu_test::parser::Symbol>>(&v22);
  return core::ptr::drop_in_place<uu_test::parser::Symbol>(v24);
}
