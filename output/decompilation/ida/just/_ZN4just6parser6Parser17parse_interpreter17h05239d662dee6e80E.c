__int64 __fastcall just::parser::Parser::parse_interpreter(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  char v4; // al
  unsigned __int8 v5; // cl
  unsigned __int8 v6; // al
  __int64 v7; // rcx
  __int128 v8; // xmm0
  __int64 v9; // rdx
  char v10; // si
  __int128 v11; // xmm1
  __int128 v12; // xmm2
  int v13; // edi
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm2
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm2
  int v20; // esi
  __int64 v21; // rcx
  __int128 v22; // xmm0
  __int64 v23; // rdx
  char v24; // si
  __int128 v25; // xmm1
  __int128 v26; // xmm2
  int v27; // edi
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm2
  _BYTE v31[72]; // [rsp+0h] [rbp-118h] BYREF
  unsigned __int8 v32; // [rsp+48h] [rbp-D0h]
  _BYTE v33[7]; // [rsp+49h] [rbp-CFh]
  __int128 v34; // [rsp+50h] [rbp-C8h] BYREF
  __int128 v35; // [rsp+60h] [rbp-B8h]
  __int128 v36; // [rsp+70h] [rbp-A8h]
  __int128 v37; // [rsp+80h] [rbp-98h]
  __int64 v38; // [rsp+90h] [rbp-88h]
  __int128 v39; // [rsp+98h] [rbp-80h] BYREF
  __int64 v40; // [rsp+A8h] [rbp-70h]
  __int128 v41; // [rsp+B0h] [rbp-68h] BYREF
  __int128 v42; // [rsp+C0h] [rbp-58h]
  __int128 v43; // [rsp+D0h] [rbp-48h]

  just::parser::Parser::expect((__int64)v31, a2);
  result = v32;
  if ( v32 == 37 )
  {
    just::parser::Parser::parse_string_literal((__int64)v31, a2);
    result = v32;
    if ( v32 == 37 )
    {
      v41 = *(_OWORD *)v31;
      v42 = *(_OWORD *)&v31[16];
      v43 = *(_OWORD *)&v31[32];
      *(_QWORD *)&v39 = 0LL;
      *((_QWORD *)&v39 + 1) = 8LL;
      v40 = 0LL;
      just::parser::Parser::accepted((__int64)v31, a2, 15);
      v4 = v31[0];
      v5 = v32;
      if ( v32 == 37 )
      {
        if ( (v31[0] & 1) != 0 )
        {
          while ( !(unsigned __int8)just::parser::Parser::next_is((__int64)a2, 10) )
          {
            just::parser::Parser::parse_string_literal((__int64)v31, a2);
            v6 = v32;
            if ( v32 != 37 )
            {
              v38 = *(_QWORD *)&v31[64];
              v37 = *(_OWORD *)&v31[48];
              v36 = *(_OWORD *)&v31[32];
              v35 = *(_OWORD *)&v31[16];
              v34 = *(_OWORD *)v31;
              *(_DWORD *)(a1 + 76) = *(_DWORD *)&v33[3];
              *(_DWORD *)(a1 + 73) = *(_DWORD *)v33;
              *(_QWORD *)(a1 + 64) = v38;
              v28 = v34;
              v29 = v35;
              v30 = v36;
              *(_OWORD *)(a1 + 48) = v37;
              *(_OWORD *)(a1 + 32) = v30;
              *(_OWORD *)(a1 + 16) = v29;
              *(_OWORD *)a1 = v28;
              goto LABEL_16;
            }
            v36 = *(_OWORD *)&v31[32];
            v35 = *(_OWORD *)&v31[16];
            v34 = *(_OWORD *)v31;
            alloc::vec::Vec<T,A>::push(&v39, &v34, &off_4309B8);
            just::parser::Parser::accepted((__int64)v31, a2, 15);
            v4 = v31[0];
            v5 = v32;
            if ( v32 != 37 )
              goto LABEL_13;
            if ( (v31[0] & 1) == 0 )
              break;
          }
        }
        just::parser::Parser::expect((__int64)v31, a2);
        v6 = v32;
        if ( v32 == 37 )
        {
          *(_QWORD *)&v31[16] = v40;
          *(_OWORD *)v31 = v39;
          *(_OWORD *)&v31[56] = v43;
          *(_OWORD *)&v31[40] = v42;
          *(_OWORD *)&v31[24] = v41;
          *(_OWORD *)a1 = v39;
          *(_QWORD *)(a1 + 64) = *(_QWORD *)&v31[64];
          *(_OWORD *)(a1 + 48) = *(_OWORD *)&v31[48];
          *(_OWORD *)(a1 + 32) = *(_OWORD *)&v31[32];
          *(_QWORD *)(a1 + 16) = *(_QWORD *)&v31[16];
          result = *(_QWORD *)&v31[24];
          *(_QWORD *)(a1 + 24) = *(_QWORD *)&v31[24];
          *(_BYTE *)(a1 + 72) = 37;
          return result;
        }
        v21 = *(_QWORD *)v31;
        v22 = *(_OWORD *)&v31[8];
        v23 = *(_QWORD *)&v31[56];
        v24 = v31[64];
        LODWORD(v34) = *(_DWORD *)&v31[65];
        *(_DWORD *)((char *)&v34 + 3) = *(_DWORD *)&v31[68];
        *(_DWORD *)(a1 + 76) = *(_DWORD *)&v33[3];
        *(_DWORD *)(a1 + 73) = *(_DWORD *)v33;
        v25 = *(_OWORD *)&v31[24];
        v26 = *(_OWORD *)&v31[40];
        v27 = v34;
        *(_DWORD *)(a1 + 68) = *(_DWORD *)((char *)&v34 + 3);
        *(_DWORD *)(a1 + 65) = v27;
        *(_QWORD *)a1 = v21;
        *(_OWORD *)(a1 + 8) = v22;
        *(_OWORD *)(a1 + 24) = v25;
        *(_OWORD *)(a1 + 40) = v26;
        *(_QWORD *)(a1 + 56) = v23;
        *(_BYTE *)(a1 + 64) = v24;
LABEL_16:
        *(_BYTE *)(a1 + 72) = v6;
      }
      else
      {
LABEL_13:
        *(_QWORD *)(a1 + 64) = *(_QWORD *)&v31[64];
        v17 = *(_OWORD *)&v31[1];
        v18 = *(_OWORD *)&v31[17];
        v19 = *(_OWORD *)&v31[33];
        *(_OWORD *)(a1 + 49) = *(_OWORD *)&v31[49];
        *(_OWORD *)(a1 + 33) = v19;
        *(_OWORD *)(a1 + 17) = v18;
        *(_OWORD *)(a1 + 1) = v17;
        v20 = *(_DWORD *)&v33[3];
        *(_DWORD *)(a1 + 73) = *(_DWORD *)v33;
        *(_DWORD *)(a1 + 76) = v20;
        *(_BYTE *)a1 = v4;
        *(_BYTE *)(a1 + 72) = v5;
      }
      core::ptr::drop_in_place<alloc::vec::Vec<just::string_literal::StringLiteral>>(&v39);
      return core::ptr::drop_in_place<just::string_literal::StringLiteral>(&v41);
    }
    else
    {
      v38 = *(_QWORD *)&v31[64];
      v37 = *(_OWORD *)&v31[48];
      v36 = *(_OWORD *)&v31[32];
      v35 = *(_OWORD *)&v31[16];
      v34 = *(_OWORD *)v31;
      *(_DWORD *)(a1 + 76) = *(_DWORD *)&v33[3];
      *(_DWORD *)(a1 + 73) = *(_DWORD *)v33;
      *(_QWORD *)(a1 + 64) = v38;
      v14 = v34;
      v15 = v35;
      v16 = v36;
      *(_OWORD *)(a1 + 48) = v37;
      *(_OWORD *)(a1 + 32) = v16;
      *(_OWORD *)(a1 + 16) = v15;
      *(_OWORD *)a1 = v14;
      *(_BYTE *)(a1 + 72) = result;
    }
  }
  else
  {
    v7 = *(_QWORD *)v31;
    v8 = *(_OWORD *)&v31[8];
    v9 = *(_QWORD *)&v31[56];
    v10 = v31[64];
    LODWORD(v34) = *(_DWORD *)&v31[65];
    *(_DWORD *)((char *)&v34 + 3) = *(_DWORD *)&v31[68];
    *(_DWORD *)(a1 + 76) = *(_DWORD *)&v33[3];
    *(_DWORD *)(a1 + 73) = *(_DWORD *)v33;
    v11 = *(_OWORD *)&v31[24];
    v12 = *(_OWORD *)&v31[40];
    v13 = v34;
    *(_DWORD *)(a1 + 68) = *(_DWORD *)((char *)&v34 + 3);
    *(_DWORD *)(a1 + 65) = v13;
    *(_QWORD *)a1 = v7;
    *(_OWORD *)(a1 + 8) = v8;
    *(_OWORD *)(a1 + 24) = v11;
    *(_OWORD *)(a1 + 40) = v12;
    *(_QWORD *)(a1 + 56) = v9;
    *(_BYTE *)(a1 + 64) = v10;
    *(_BYTE *)(a1 + 72) = result;
  }
  return result;
}