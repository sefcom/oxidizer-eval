__int64 __fastcall just::lexer::Lexer::close_delimiter(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 result; // rax
  char v7; // r8
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // [rsp+0h] [rbp-68h] BYREF
  __int64 v11; // [rsp+8h] [rbp-60h]
  char v12; // [rsp+10h] [rbp-58h]
  char v13; // [rsp+11h] [rbp-57h]

  v3 = *(_QWORD *)(a2 + 64);
  if ( v3 )
  {
    v4 = v3 - 1;
    *(_QWORD *)(a2 + 64) = v4;
    v5 = *(_QWORD *)(a2 + 56);
    result = 16 * v4;
    v7 = *(_BYTE *)(v5 + result);
    if ( v7 == a3 )
    {
      *(_BYTE *)(a1 + 72) = 37;
      return result;
    }
    v9 = *(_QWORD *)(result + v5 + 8);
    v12 = a3;
    v13 = v7;
    v11 = v9;
    v8 = 0x800000000000002BLL;
  }
  else
  {
    LOBYTE(v11) = a3;
    v8 = 0x8000000000000036LL;
  }
  v10 = v8;
  return just::lexer::Lexer::error(a1, a2, &v10);
}