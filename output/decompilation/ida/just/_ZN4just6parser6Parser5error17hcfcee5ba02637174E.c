__int64 __fastcall just::parser::Parser::error(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // al
  __int64 result; // rax
  int v6; // ecx
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  __int128 v10; // [rsp+0h] [rbp-A8h] BYREF
  __int128 v11; // [rsp+10h] [rbp-98h]
  __int128 v12; // [rsp+20h] [rbp-88h]
  __int128 v13; // [rsp+30h] [rbp-78h]
  __int64 v14; // [rsp+40h] [rbp-68h]
  _OWORD v15[4]; // [rsp+48h] [rbp-60h] BYREF
  __int64 v16; // [rsp+88h] [rbp-20h]
  char v17; // [rsp+90h] [rbp-18h]
  _DWORD v18[5]; // [rsp+91h] [rbp-17h]

  just::parser::Parser::next(v15);
  v4 = v17;
  v10 = v15[0];
  v11 = v15[1];
  v12 = v15[2];
  v13 = v15[3];
  v14 = v16;
  if ( v17 == 37 )
  {
    just::token::Token::error(a1 + 8, &v10, a3);
    result = 0LL;
  }
  else
  {
    v6 = v18[0];
    *(_DWORD *)(a1 + 84) = *(_DWORD *)((char *)v18 + 3);
    *(_DWORD *)(a1 + 81) = v6;
    *(_QWORD *)(a1 + 72) = v14;
    v7 = v10;
    v8 = v11;
    v9 = v12;
    *(_OWORD *)(a1 + 56) = v13;
    *(_OWORD *)(a1 + 40) = v9;
    *(_OWORD *)(a1 + 24) = v8;
    *(_OWORD *)(a1 + 8) = v7;
    *(_BYTE *)(a1 + 80) = v4;
    core::ptr::drop_in_place<just::compile_error_kind::CompileErrorKind>(a3);
    result = 1LL;
  }
  *(_QWORD *)a1 = result;
  return result;
}