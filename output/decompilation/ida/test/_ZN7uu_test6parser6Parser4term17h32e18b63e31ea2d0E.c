__int64 __fastcall uu_test::parser::Parser::term(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int128 v3; // xmm0
  __int128 v4; // xmm0
  __int128 v5; // [rsp+0h] [rbp-58h] BYREF
  __int128 v6; // [rsp+10h] [rbp-48h]
  __int64 v7[7]; // [rsp+20h] [rbp-38h] BYREF

  uu_test::parser::Parser::next_token(v7, a2);
  switch ( v7[0] )
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
      return core::ptr::drop_in_place<uu_test::parser::Symbol>(v7);
    case 5LL:
      result = uu_test::parser::Parser::uop(a2, v7);
      goto LABEL_9;
    case 6LL:
      result = alloc::vec::Vec<T,A>::push(a2, v7, &off_E01E8);
      goto LABEL_9;
    default:
      result = uu_test::parser::Parser::literal(&v5, a2, v7);
      if ( (_DWORD)v5 == 7 )
      {
LABEL_9:
        *(_QWORD *)a1 = 7LL;
      }
      else
      {
        v4 = v5;
        *(_OWORD *)(a1 + 16) = v6;
        *(_OWORD *)a1 = v4;
      }
      return result;
  }
}