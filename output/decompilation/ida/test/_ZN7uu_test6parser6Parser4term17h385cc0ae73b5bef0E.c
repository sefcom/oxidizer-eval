__int64 __fastcall uu_test::parser::Parser::term(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 result; // rax
  __int128 v7; // xmm0
  __int128 v8; // xmm0
  __int128 v9; // [rsp+0h] [rbp-88h] BYREF
  __int128 v10; // [rsp+10h] [rbp-78h]
  __int64 v11; // [rsp+20h] [rbp-68h]
  __int128 v12; // [rsp+28h] [rbp-60h] BYREF
  __int128 v13; // [rsp+38h] [rbp-50h]
  __int64 v14; // [rsp+48h] [rbp-40h]
  _OWORD v15[2]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v16; // [rsp+70h] [rbp-18h]

  uu_test::parser::Parser::next_token((__int64)&v12, a2);
  switch ( (__int64)v12 )
  {
    case 0LL:
      uu_test::parser::Parser::lparen((__int64)&v9, a2);
      goto LABEL_5;
    case 1LL:
      uu_test::parser::Parser::bang(&v9, a2);
LABEL_5:
      if ( (_DWORD)v9 == 7 )
      {
        *(_QWORD *)a1 = 7LL;
      }
      else
      {
        v7 = v9;
        *(_OWORD *)(a1 + 16) = v10;
        *(_OWORD *)a1 = v7;
      }
      result = core::ptr::drop_in_place<uu_test::parser::Symbol>(&v12);
      break;
    case 5LL:
      v11 = v14;
      v10 = v13;
      v9 = v12;
      result = uu_test::parser::Parser::uop(a2, &v9);
      *(_QWORD *)a1 = 7LL;
      break;
    case 6LL:
      v11 = v14;
      v10 = v13;
      v9 = v12;
      result = ((__int64 (__fastcall *)(__int64, __int128 *, __int64, __int64, __int64, __int64))alloc::vec::Vec<T,A>::push)(
                 a2,
                 &v9,
                 v2,
                 v3,
                 v4,
                 v5);
      *(_QWORD *)a1 = 7LL;
      break;
    default:
      v16 = v14;
      v15[1] = v13;
      v15[0] = v12;
      result = uu_test::parser::Parser::literal((__int64)&v9, a2, (__int64)v15);
      if ( (_DWORD)v9 == 7 )
      {
        *(_QWORD *)a1 = 7LL;
      }
      else
      {
        v8 = v9;
        *(_OWORD *)(a1 + 16) = v10;
        *(_OWORD *)a1 = v8;
      }
      break;
  }
  return result;
}
