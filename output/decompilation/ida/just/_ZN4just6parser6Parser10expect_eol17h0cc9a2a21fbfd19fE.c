__int64 __fastcall just::parser::Parser::expect_eol(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm2
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm2
  __int128 v9; // [rsp+0h] [rbp-A8h] BYREF
  __int128 v10; // [rsp+10h] [rbp-98h]
  __int128 v11; // [rsp+20h] [rbp-88h]
  __int128 v12; // [rsp+30h] [rbp-78h]
  __int128 v13; // [rsp+40h] [rbp-68h]
  __int128 v14; // [rsp+50h] [rbp-58h]
  __int128 v15; // [rsp+60h] [rbp-48h]
  __int128 v16; // [rsp+70h] [rbp-38h]
  __int128 v17; // [rsp+80h] [rbp-28h]
  __int64 v18; // [rsp+90h] [rbp-18h]

  just::parser::Parser::accept(&v9);
  result = BYTE8(v13);
  if ( BYTE8(v13) == 37 )
  {
    result = just::parser::Parser::next_is((__int64)a2, 19);
    if ( (_BYTE)result || (result = just::parser::Parser::expect((__int64)&v9, a2), BYTE8(v13) == 37) )
    {
      *(_BYTE *)(a1 + 72) = 37;
    }
    else
    {
      *(_OWORD *)(a1 + 64) = v13;
      v6 = v9;
      v7 = v10;
      v8 = v11;
      *(_OWORD *)(a1 + 48) = v12;
      *(_OWORD *)(a1 + 32) = v8;
      *(_OWORD *)(a1 + 16) = v7;
      *(_OWORD *)a1 = v6;
    }
  }
  else
  {
    v18 = v13;
    v17 = v12;
    v16 = v11;
    v15 = v10;
    v14 = v9;
    *(_DWORD *)(a1 + 76) = HIDWORD(v13);
    *(_DWORD *)(a1 + 73) = *(_DWORD *)((char *)&v13 + 9);
    *(_QWORD *)(a1 + 64) = v18;
    v3 = v14;
    v4 = v15;
    v5 = v16;
    *(_OWORD *)(a1 + 48) = v17;
    *(_OWORD *)(a1 + 32) = v5;
    *(_OWORD *)(a1 + 16) = v4;
    *(_OWORD *)a1 = v3;
    *(_BYTE *)(a1 + 72) = result;
  }
  return result;
}