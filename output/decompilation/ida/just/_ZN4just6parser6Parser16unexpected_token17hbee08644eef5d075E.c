__int64 __fastcall just::parser::Parser::unexpected_token(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  __int64 v6; // rsi
  char v7; // al
  unsigned __int64 v9; // rcx
  __int128 v10; // xmm0
  __int64 v11; // rdx
  char v12; // si
  __int128 v13; // xmm1
  __int128 v14; // xmm2
  __int64 v15; // [rsp+0h] [rbp-98h]
  unsigned __int64 v16; // [rsp+8h] [rbp-90h] BYREF
  __int128 v17; // [rsp+10h] [rbp-88h]
  __int128 v18; // [rsp+20h] [rbp-78h]
  __int128 v19; // [rsp+30h] [rbp-68h]
  __int64 v20; // [rsp+40h] [rbp-58h]
  __int64 v21; // [rsp+48h] [rbp-50h]
  char v22; // [rsp+50h] [rbp-48h]
  _BYTE v23[7]; // [rsp+51h] [rbp-47h]
  __int128 v24; // [rsp+70h] [rbp-28h] BYREF
  __int64 v25; // [rsp+80h] [rbp-18h]

  v3 = a2[7];
  v4 = a2[8];
  v5 = 0LL;
  v6 = v3;
  if ( v3 )
    v6 = a2[9];
  LOBYTE(v5) = v3 != 0;
  v16 = v5;
  *(_QWORD *)&v17 = 0LL;
  *((_QWORD *)&v17 + 1) = v3;
  *(_QWORD *)&v18 = v4;
  *((_QWORD *)&v18 + 1) = v5;
  *(_QWORD *)&v19 = 0LL;
  *((_QWORD *)&v19 + 1) = v3;
  v20 = v4;
  v21 = v6;
  core::iter::traits::iterator::Iterator::collect(&v24, &v16);
  just::parser::Parser::next(&v16);
  v7 = v22;
  if ( v22 == 37 )
  {
    v17 = v24;
    *(_QWORD *)&v18 = v25;
    BYTE8(v18) = v21;
    v16 = 0x8000000000000038LL;
    return just::parser::Parser::error(a1, (__int64)a2, (__int64)&v16);
  }
  else
  {
    v9 = v16;
    v10 = v17;
    v11 = v20;
    v12 = v21;
    LODWORD(v15) = *(_DWORD *)((char *)&v21 + 1);
    *(_DWORD *)((char *)&v15 + 3) = HIDWORD(v21);
    *(_DWORD *)(a1 + 84) = *(_DWORD *)&v23[3];
    *(_DWORD *)(a1 + 81) = *(_DWORD *)v23;
    v13 = v18;
    v14 = v19;
    *(_DWORD *)(a1 + 76) = *(_DWORD *)((char *)&v15 + 3);
    *(_DWORD *)(a1 + 73) = v15;
    *(_QWORD *)(a1 + 8) = v9;
    *(_OWORD *)(a1 + 16) = v10;
    *(_OWORD *)(a1 + 32) = v13;
    *(_OWORD *)(a1 + 48) = v14;
    *(_QWORD *)(a1 + 64) = v11;
    *(_BYTE *)(a1 + 72) = v12;
    *(_BYTE *)(a1 + 80) = v7;
    *(_QWORD *)a1 = 1LL;
    return core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v24);
  }
}