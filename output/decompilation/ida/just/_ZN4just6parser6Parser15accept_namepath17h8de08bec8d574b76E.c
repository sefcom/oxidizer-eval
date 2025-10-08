unsigned __int64 __fastcall just::parser::Parser::accept_namepath(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  __int128 v3; // xmm0
  __int128 v4; // [rsp+0h] [rbp-A8h]
  __int128 v5; // [rsp+10h] [rbp-98h]
  __int128 v6; // [rsp+20h] [rbp-88h]
  __int128 v7; // [rsp+30h] [rbp-78h]
  __int64 v8; // [rsp+40h] [rbp-68h]
  __int128 v9; // [rsp+48h] [rbp-60h] BYREF
  __int128 v10; // [rsp+58h] [rbp-50h]
  __int128 v11; // [rsp+68h] [rbp-40h]
  __int128 v12; // [rsp+78h] [rbp-30h]
  __int64 v13; // [rsp+88h] [rbp-20h]
  unsigned __int8 v14; // [rsp+90h] [rbp-18h]
  _BYTE v15[7]; // [rsp+91h] [rbp-17h]

  if ( !(unsigned __int8)just::parser::Parser::next_is(a2, 24) )
  {
    result = 0x8000000000000000LL;
    *(_QWORD *)a1 = 0x8000000000000000LL;
    goto LABEL_5;
  }
  just::parser::Parser::parse_namepath(&v9, a2);
  result = v14;
  if ( v14 == 37 )
  {
    result = v10;
    v3 = v9;
    *(_QWORD *)(a1 + 16) = v10;
    *(_OWORD *)a1 = v3;
LABEL_5:
    *(_BYTE *)(a1 + 72) = 37;
    return result;
  }
  v8 = v13;
  v7 = v12;
  v6 = v11;
  v5 = v10;
  v4 = v9;
  *(_DWORD *)(a1 + 76) = *(_DWORD *)&v15[3];
  *(_DWORD *)(a1 + 73) = *(_DWORD *)v15;
  *(_QWORD *)(a1 + 64) = v8;
  *(_OWORD *)(a1 + 48) = v7;
  *(_OWORD *)(a1 + 32) = v6;
  *(_OWORD *)(a1 + 16) = v5;
  *(_OWORD *)a1 = v4;
  *(_BYTE *)(a1 + 72) = result;
  return result;
}