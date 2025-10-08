unsigned __int64 __fastcall just::parser::Parser::accept_dependency(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  char v3; // al
  char v4; // cl
  char v5; // al
  char v6; // al
  char v7; // cl
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm2
  int v14; // esi
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm2
  int v21; // esi
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm2
  _BYTE v25[72]; // [rsp+8h] [rbp-260h] BYREF
  __int128 v26; // [rsp+50h] [rbp-218h]
  __int128 v27; // [rsp+60h] [rbp-208h]
  __int128 v28; // [rsp+70h] [rbp-1F8h]
  __int64 v29; // [rsp+80h] [rbp-1E8h]
  __int128 v30; // [rsp+88h] [rbp-1E0h] BYREF
  __int64 v31; // [rsp+98h] [rbp-1D0h]
  __int128 v32; // [rsp+A0h] [rbp-1C8h]
  __int128 v33; // [rsp+B0h] [rbp-1B8h]
  __int128 v34; // [rsp+C0h] [rbp-1A8h]
  __int128 v35; // [rsp+D0h] [rbp-198h]
  __int128 v36; // [rsp+E0h] [rbp-188h]
  __int128 v37; // [rsp+F0h] [rbp-178h] BYREF
  unsigned __int64 v38; // [rsp+100h] [rbp-168h]
  __int128 v39; // [rsp+110h] [rbp-158h]
  __int128 v40; // [rsp+120h] [rbp-148h]
  __int128 v41; // [rsp+130h] [rbp-138h]
  __int128 v42; // [rsp+140h] [rbp-128h]
  __int64 v43; // [rsp+150h] [rbp-118h]
  __int128 v44; // [rsp+160h] [rbp-108h] BYREF
  __int64 v45; // [rsp+170h] [rbp-F8h]
  __int128 v46; // [rsp+180h] [rbp-E8h]
  __int64 v47; // [rsp+190h] [rbp-D8h]
  __int128 v48; // [rsp+198h] [rbp-D0h]
  unsigned __int64 v49; // [rsp+1A8h] [rbp-C0h]
  __int64 v50; // [rsp+1B8h] [rbp-B0h] BYREF
  __int128 v51; // [rsp+1C0h] [rbp-A8h]
  __int128 v52; // [rsp+1D0h] [rbp-98h]
  __int128 v53; // [rsp+1E0h] [rbp-88h]
  __int128 v54; // [rsp+1F0h] [rbp-78h]
  __int128 v55; // [rsp+200h] [rbp-68h]
  __int128 v56; // [rsp+210h] [rbp-58h]
  __int128 v57; // [rsp+220h] [rbp-48h]
  __int64 v58; // [rsp+230h] [rbp-38h]

  just::parser::Parser::accept_namepath((__int64)v25, a2);
  result = (unsigned __int8)v26;
  if ( (_BYTE)v26 != 37 )
  {
    v43 = *(_QWORD *)&v25[64];
    v42 = *(_OWORD *)&v25[48];
    v41 = *(_OWORD *)&v25[32];
    v40 = *(_OWORD *)&v25[16];
    v39 = *(_OWORD *)v25;
    *(_DWORD *)(a1 + 76) = DWORD1(v26);
    *(_DWORD *)(a1 + 73) = *(_DWORD *)((char *)&v26 + 1);
    *(_QWORD *)(a1 + 64) = v43;
    v8 = v39;
    v9 = v40;
    v10 = v41;
    *(_OWORD *)(a1 + 48) = v42;
    *(_OWORD *)(a1 + 32) = v10;
    *(_OWORD *)(a1 + 16) = v9;
    *(_OWORD *)a1 = v8;
    *(_BYTE *)(a1 + 72) = result;
    return result;
  }
  *(_QWORD *)&v40 = *(_QWORD *)&v25[16];
  v39 = *(_OWORD *)v25;
  v44 = *(_OWORD *)v25;
  v45 = *(_QWORD *)&v25[16];
  if ( !__OFSUB__(0LL, *(_QWORD *)v25) )
  {
    result = v40;
    *(_QWORD *)(a1 + 40) = v40;
    *(_OWORD *)(a1 + 24) = v39;
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 8LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    goto LABEL_13;
  }
  just::parser::Parser::accepted(v25, a2, 28LL);
  v3 = v25[0];
  v4 = v26;
  if ( (_BYTE)v26 == 37 )
  {
    if ( (v25[0] & 1) != 0 )
    {
      just::parser::Parser::parse_namepath(v25, a2);
      v5 = v26;
      if ( (_BYTE)v26 == 37 )
      {
        v37 = *(_OWORD *)v25;
        v38 = *(_QWORD *)&v25[16];
        *(_QWORD *)&v30 = 0LL;
        *((_QWORD *)&v30 + 1) = 8LL;
        v31 = 0LL;
        while ( 1 )
        {
          just::parser::Parser::accepted(v25, a2, 29LL);
          v6 = v25[0];
          v7 = v26;
          if ( (_BYTE)v26 != 37 )
          {
            *(_QWORD *)(a1 + 64) = *(_QWORD *)&v25[64];
            v18 = *(_OWORD *)&v25[1];
            v19 = *(_OWORD *)&v25[17];
            v20 = *(_OWORD *)&v25[33];
            *(_OWORD *)(a1 + 49) = *(_OWORD *)&v25[49];
            *(_OWORD *)(a1 + 33) = v20;
            *(_OWORD *)(a1 + 17) = v19;
            *(_OWORD *)(a1 + 1) = v18;
            v21 = DWORD1(v26);
            *(_DWORD *)(a1 + 73) = *(_DWORD *)((char *)&v26 + 1);
            *(_DWORD *)(a1 + 76) = v21;
            *(_BYTE *)a1 = v6;
            *(_BYTE *)(a1 + 72) = v7;
            goto LABEL_21;
          }
          if ( (v25[0] & 1) != 0 )
          {
            v47 = v31;
            v46 = v30;
            v49 = v38;
            v48 = v37;
            *(_OWORD *)a1 = v30;
            *(_QWORD *)(a1 + 16) = v47;
            *(_OWORD *)(a1 + 24) = v48;
            result = v49;
            *(_QWORD *)(a1 + 40) = v49;
            goto LABEL_13;
          }
          just::parser::Parser::parse_expression(v25, a2);
          v32 = *(_OWORD *)&v25[8];
          v33 = *(_OWORD *)&v25[24];
          v34 = *(_OWORD *)&v25[40];
          v35 = *(_OWORD *)&v25[56];
          v36 = v26;
          if ( *(_QWORD *)v25 == 18LL )
            break;
          v58 = v29;
          v57 = v28;
          v56 = v27;
          v50 = *(_QWORD *)v25;
          v55 = v36;
          v54 = v35;
          v53 = v34;
          v52 = v33;
          v51 = v32;
          alloc::vec::Vec<T,A>::push(&v30, &v50, &off_430748);
        }
        *(_OWORD *)(a1 + 64) = v36;
        v22 = v32;
        v23 = v33;
        v24 = v34;
        *(_OWORD *)(a1 + 48) = v35;
        *(_OWORD *)(a1 + 32) = v24;
        *(_OWORD *)(a1 + 16) = v23;
        *(_OWORD *)a1 = v22;
LABEL_21:
        core::ptr::drop_in_place<alloc::vec::Vec<just::expression::Expression>>(&v30);
        core::ptr::drop_in_place<just::namepath::Namepath>(&v37);
      }
      else
      {
        *(_QWORD *)&v36 = *(_QWORD *)&v25[64];
        v35 = *(_OWORD *)&v25[48];
        v34 = *(_OWORD *)&v25[32];
        v33 = *(_OWORD *)&v25[16];
        v32 = *(_OWORD *)v25;
        *(_DWORD *)(a1 + 76) = DWORD1(v26);
        *(_DWORD *)(a1 + 73) = *(_DWORD *)((char *)&v26 + 1);
        *(_QWORD *)(a1 + 64) = v36;
        v15 = v32;
        v16 = v33;
        v17 = v34;
        *(_OWORD *)(a1 + 48) = v35;
        *(_OWORD *)(a1 + 32) = v17;
        *(_OWORD *)(a1 + 16) = v16;
        *(_OWORD *)a1 = v15;
        *(_BYTE *)(a1 + 72) = v5;
      }
      return core::ptr::drop_in_place<core::option::Option<just::namepath::Namepath>>(&v44);
    }
    result = 0x8000000000000000LL;
    *(_QWORD *)a1 = 0x8000000000000000LL;
LABEL_13:
    *(_BYTE *)(a1 + 72) = 37;
    return result;
  }
  *(_QWORD *)(a1 + 64) = *(_QWORD *)&v25[64];
  v11 = *(_OWORD *)&v25[1];
  v12 = *(_OWORD *)&v25[17];
  v13 = *(_OWORD *)&v25[33];
  *(_OWORD *)(a1 + 49) = *(_OWORD *)&v25[49];
  *(_OWORD *)(a1 + 33) = v13;
  *(_OWORD *)(a1 + 17) = v12;
  *(_OWORD *)(a1 + 1) = v11;
  v14 = DWORD1(v26);
  *(_DWORD *)(a1 + 73) = *(_DWORD *)((char *)&v26 + 1);
  *(_DWORD *)(a1 + 76) = v14;
  *(_BYTE *)a1 = v3;
  *(_BYTE *)(a1 + 72) = v4;
  return core::ptr::drop_in_place<core::option::Option<just::namepath::Namepath>>(&v44);
}