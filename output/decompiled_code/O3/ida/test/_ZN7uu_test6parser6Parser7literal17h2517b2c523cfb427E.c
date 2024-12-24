__int64 __fastcall uu_test::parser::Parser::literal(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int128 v20; // [rsp+0h] [rbp-118h] BYREF
  __int128 v21; // [rsp+10h] [rbp-108h]
  __int64 v22; // [rsp+20h] [rbp-F8h]
  _QWORD v23[2]; // [rsp+30h] [rbp-E8h] BYREF
  _OWORD v24[2]; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v25; // [rsp+60h] [rbp-B8h]
  _OWORD v26[2]; // [rsp+68h] [rbp-B0h] BYREF
  __int64 v27; // [rsp+88h] [rbp-90h]
  _DWORD v28[10]; // [rsp+90h] [rbp-88h] BYREF
  __int128 v29; // [rsp+B8h] [rbp-60h] BYREF
  __int64 v30; // [rsp+C8h] [rbp-50h]
  _OWORD v31[2]; // [rsp+D0h] [rbp-48h] BYREF
  __int64 v32; // [rsp+F0h] [rbp-28h]

  uu_test::parser::Symbol::into_literal((__int64)&v20, a3);
  ((void (__fastcall *)(__int64, __int128 *, __int64, __int64, __int64, __int64))alloc::vec::Vec<T,A>::push)(
    a2,
    &v20,
    v3,
    v4,
    v5,
    v6);
  uu_test::parser::Parser::peek((__int64)v28, a2);
  if ( v28[0] == 4 )
  {
    uu_test::parser::Parser::next_token((__int64)v26, a2);
    uu_test::parser::Parser::next_token((__int64)v24, a2);
    if ( LODWORD(v24[0]) == 6 )
    {
      v23[0] = v26;
      v23[1] = <uu_test::parser::Symbol as core::fmt::Display>::fmt;
      *(_QWORD *)&v20 = &unk_13EC0;
      *((_QWORD *)&v20 + 1) = 1LL;
      v22 = 0LL;
      *(_QWORD *)&v21 = v23;
      *((_QWORD *)&v21 + 1) = 1LL;
      ((void (__fastcall *)(__int128 *, __int128 *, __int64, __int64, __int64, __int64))core::option::Option<T>::map_or_else)(
        &v29,
        &v20,
        v7,
        v8,
        v9,
        v10);
      *(_QWORD *)(a1 + 24) = v30;
      *(_OWORD *)(a1 + 8) = v29;
      *(_QWORD *)a1 = 3LL;
      core::ptr::drop_in_place<uu_test::parser::Symbol>(v24);
      core::ptr::drop_in_place<uu_test::parser::Symbol>(v26);
      return core::ptr::drop_in_place<uu_test::parser::Symbol>(v28);
    }
    v32 = v25;
    v31[1] = v24[1];
    v31[0] = v24[0];
    uu_test::parser::Symbol::into_literal((__int64)&v20, (__int64)v31);
    ((void (__fastcall *)(__int64, __int128 *, __int64, __int64, __int64, __int64))alloc::vec::Vec<T,A>::push)(
      a2,
      &v20,
      v12,
      v13,
      v14,
      v15);
    v22 = v27;
    v21 = v26[1];
    v20 = v26[0];
    ((void (__fastcall *)(__int64, __int128 *, __int64, __int64, __int64, __int64))alloc::vec::Vec<T,A>::push)(
      a2,
      &v20,
      v16,
      v17,
      v18,
      v19);
  }
  result = core::ptr::drop_in_place<uu_test::parser::Symbol>(v28);
  *(_QWORD *)a1 = 7LL;
  return result;
}
