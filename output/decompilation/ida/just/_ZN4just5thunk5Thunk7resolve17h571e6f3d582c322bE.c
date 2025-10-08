__int64 __fastcall just::thunk::Thunk::resolve(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // r13
  __int128 v9; // rax
  __int64 v11; // [rsp+0h] [rbp-F8h] BYREF
  __int128 v12; // [rsp+8h] [rbp-F0h]
  __int128 v13; // [rsp+18h] [rbp-E0h]
  __int128 v14; // [rsp+28h] [rbp-D0h]
  __int128 v15; // [rsp+38h] [rbp-C0h]
  __int128 v16; // [rsp+48h] [rbp-B0h]
  _OWORD v17[7]; // [rsp+80h] [rbp-78h] BYREF

  v4 = just::token::Token::lexeme(a2);
  v6 = just::function::get(v4, v5);
  v8 = v7;
  *(_QWORD *)&v9 = just::token::Token::lexeme(a2);
  v12 = v9;
  v11 = 0x8000000000000042LL;
  just::token::Token::error(v17, a2, &v11);
  v12 = v17[0];
  v13 = v17[1];
  v14 = v17[2];
  v15 = v17[3];
  v16 = v17[4];
  v11 = 7LL;
  ((void (__fastcall *)(__int64, __int64, __int64, __int64 *, __int64, __int64))core::option::Option<T>::map_or)(
    a1,
    v6,
    v8,
    &v11,
    a3,
    a2);
  return core::ptr::drop_in_place<alloc::vec::Vec<just::expression::Expression>>(a3);
}