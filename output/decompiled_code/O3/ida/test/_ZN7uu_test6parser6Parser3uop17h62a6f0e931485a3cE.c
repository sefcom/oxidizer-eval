__int64 __fastcall uu_test::parser::Parser::uop(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm0
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int128 v12; // xmm0
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int128 v17; // [rsp+0h] [rbp-B8h] BYREF
  __int128 v18; // [rsp+10h] [rbp-A8h]
  __int64 v19; // [rsp+20h] [rbp-98h]
  _OWORD v20[2]; // [rsp+28h] [rbp-90h] BYREF
  __int64 v21; // [rsp+48h] [rbp-70h]
  _OWORD v22[2]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v23; // [rsp+70h] [rbp-48h]
  _BYTE v24[64]; // [rsp+78h] [rbp-40h] BYREF

  uu_test::parser::Parser::next_token((__int64)v20, a1);
  if ( LODWORD(v20[0]) == 6 )
  {
    v19 = *((_QWORD *)a2 + 4);
    v2 = *a2;
    v18 = a2[1];
    v17 = v2;
    uu_test::parser::Symbol::into_literal((__int64)v24, (__int64)&v17);
    alloc::vec::Vec<T,A>::push(a1, v24, v3, v4, v5, v6, v17, *((_QWORD *)&v17 + 1), v18, *((_QWORD *)&v18 + 1), v19);
    return core::ptr::drop_in_place<uu_test::parser::Symbol>(v20);
  }
  else
  {
    v23 = v21;
    v22[1] = v20[1];
    v22[0] = v20[0];
    uu_test::parser::Symbol::into_literal((__int64)&v17, (__int64)v22);
    ((void (__fastcall *)(__int64, __int128 *, __int64, __int64, __int64, __int64))alloc::vec::Vec<T,A>::push)(
      a1,
      &v17,
      v8,
      v9,
      v10,
      v11);
    v19 = *((_QWORD *)a2 + 4);
    v12 = *a2;
    v18 = a2[1];
    v17 = v12;
    return ((__int64 (__fastcall *)(__int64, __int128 *, __int64, __int64, __int64, __int64))alloc::vec::Vec<T,A>::push)(
             a1,
             &v17,
             v13,
             v14,
             v15,
             v16);
  }
}
