__int64 __fastcall just::parser::Parser::accept(__int64 a1, _QWORD *a2, char a3)
{
  __int64 result; // rax
  int v4; // ecx
  __int128 v5; // [rsp+0h] [rbp-A8h]
  __int128 v6; // [rsp+10h] [rbp-98h]
  __int128 v7; // [rsp+20h] [rbp-88h]
  __int128 v8; // [rsp+30h] [rbp-78h]
  __int64 v9; // [rsp+40h] [rbp-68h]
  _OWORD v10[4]; // [rsp+48h] [rbp-60h] BYREF
  __int64 v11; // [rsp+88h] [rbp-20h]
  unsigned __int8 v12; // [rsp+90h] [rbp-18h]
  _DWORD v13[5]; // [rsp+91h] [rbp-17h]

  result = just::parser::Parser::next_is((__int64)a2, a3);
  if ( !(_BYTE)result )
  {
    *(_BYTE *)(a1 + 64) = 37;
    goto LABEL_5;
  }
  just::parser::Parser::advance((__int64)v10, a2);
  result = v12;
  v5 = v10[0];
  v6 = v10[1];
  v7 = v10[2];
  v8 = v10[3];
  v9 = v11;
  if ( v12 == 37 )
  {
    result = v11;
    *(_QWORD *)(a1 + 64) = v11;
    *(_OWORD *)(a1 + 48) = v8;
    *(_OWORD *)(a1 + 32) = v7;
    *(_OWORD *)(a1 + 16) = v6;
    *(_OWORD *)a1 = v5;
LABEL_5:
    *(_BYTE *)(a1 + 72) = 37;
    return result;
  }
  v4 = v13[0];
  *(_DWORD *)(a1 + 76) = *(_DWORD *)((char *)v13 + 3);
  *(_DWORD *)(a1 + 73) = v4;
  *(_QWORD *)(a1 + 64) = v9;
  *(_OWORD *)(a1 + 48) = v8;
  *(_OWORD *)(a1 + 32) = v7;
  *(_OWORD *)(a1 + 16) = v6;
  *(_OWORD *)a1 = v5;
  *(_BYTE *)(a1 + 72) = result;
  return result;
}