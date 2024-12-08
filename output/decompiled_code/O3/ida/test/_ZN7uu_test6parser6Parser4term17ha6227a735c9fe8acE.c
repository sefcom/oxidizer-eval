__int64 __fastcall uu_test::parser::Parser::term(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int128 v3; // xmm0
  __int128 v4; // xmm0
  __int128 v5; // [rsp+0h] [rbp-88h] BYREF
  __int128 v6; // [rsp+10h] [rbp-78h]
  __int64 v7; // [rsp+20h] [rbp-68h]
  __int128 v8; // [rsp+28h] [rbp-60h] BYREF
  __int128 v9; // [rsp+38h] [rbp-50h]
  __int64 v10; // [rsp+48h] [rbp-40h]
  _OWORD v11[2]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v12; // [rsp+70h] [rbp-18h]

  uu_test::parser::Parser::next_token((__int64)&v8, a2);
  switch ( (__int64)v8 )
  {
    case 0LL:
      uu_test::parser::Parser::lparen(&v5, a2);
      goto LABEL_5;
    case 1LL:
      uu_test::parser::Parser::bang(&v5, a2);
LABEL_5:
      if ( (_DWORD)v5 == 7 )
      {
        *(_QWORD *)a1 = 7LL;
      }
      else
      {
        v3 = v5;
        *(_OWORD *)(a1 + 16) = v6;
        *(_OWORD *)a1 = v3;
      }
      result = core::ptr::drop_in_place<uu_test::parser::Symbol>(&v8);
      break;
    case 5LL:
      v7 = v10;
      v6 = v9;
      v5 = v8;
      result = ((__int64 (__fastcall *)(__int64, __int128 *))uu_test::parser::Parser::uop)(a2, &v5);
      *(_QWORD *)a1 = 7LL;
      break;
    case 6LL:
      v7 = v10;
      v6 = v9;
      v5 = v8;
      result = ((__int64 (__fastcall *)(__int64, __int128 *))alloc::vec::Vec<T,A>::push)(a2, &v5);
      *(_QWORD *)a1 = 7LL;
      break;
    default:
      v12 = v10;
      v11[1] = v9;
      v11[0] = v8;
      result = uu_test::parser::Parser::literal(&v5, a2, v11);
      if ( (_DWORD)v5 == 7 )
      {
        *(_QWORD *)a1 = 7LL;
      }
      else
      {
        v4 = v5;
        *(_OWORD *)(a1 + 16) = v6;
        *(_OWORD *)a1 = v4;
      }
      break;
  }
  return result;
}
