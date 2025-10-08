__int64 __fastcall just::parser::Parser::presume_any(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm2
  int v7; // ecx
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  __int128 v11; // xmm1
  __int128 v12; // xmm2
  __int128 v13; // xmm3
  __int128 v14; // xmm4
  _BYTE v15[72]; // [rsp+0h] [rbp-178h] BYREF
  __int128 v16; // [rsp+48h] [rbp-130h]
  _OWORD v17[4]; // [rsp+60h] [rbp-118h] BYREF
  __int64 v18; // [rsp+A0h] [rbp-D8h]
  unsigned __int8 v19; // [rsp+A8h] [rbp-D0h]
  _BYTE v20[7]; // [rsp+A9h] [rbp-CFh]
  _QWORD v21[4]; // [rsp+D0h] [rbp-A8h] BYREF
  _QWORD v22[4]; // [rsp+F0h] [rbp-88h] BYREF
  __int128 v23; // [rsp+110h] [rbp-68h]
  __int128 v24; // [rsp+120h] [rbp-58h]
  __int128 v25; // [rsp+130h] [rbp-48h]
  __int128 v26; // [rsp+140h] [rbp-38h]
  _QWORD v27[5]; // [rsp+150h] [rbp-28h] BYREF

  just::parser::Parser::advance((__int64)v17, a2);
  result = v19;
  *(_OWORD *)v15 = v17[0];
  *(_OWORD *)&v15[16] = v17[1];
  *(_OWORD *)&v15[32] = v17[2];
  *(_OWORD *)&v15[48] = v17[3];
  *(_QWORD *)&v15[64] = v18;
  if ( v19 == 37 )
  {
    v23 = *(_OWORD *)v15;
    v24 = *(_OWORD *)&v15[16];
    v25 = *(_OWORD *)&v15[32];
    v26 = *(_OWORD *)&v15[48];
    v27[0] = *(_QWORD *)&v15[64];
    if ( (unsigned __int8)<T as core::slice::cmp::SliceContains>::slice_contains(v27) )
    {
      result = v27[0];
      *(_QWORD *)(a1 + 64) = v27[0];
      v4 = v23;
      v5 = v24;
      v6 = v25;
      *(_OWORD *)(a1 + 48) = v26;
      *(_OWORD *)(a1 + 32) = v6;
      *(_OWORD *)(a1 + 16) = v5;
      *(_OWORD *)a1 = v4;
      *(_BYTE *)(a1 + 72) = 37;
    }
    else
    {
      v22[0] = "orattributeaan";
      v22[1] = 2LL;
      v22[2] = &unk_715EE;
      v22[3] = &unk_715F0;
      v21[0] = v22;
      v21[1] = <just::list::List<T,I> as core::fmt::Display>::fmt;
      v21[2] = v27;
      v21[3] = <just::token_kind::TokenKind as core::fmt::Display>::fmt;
      *(_QWORD *)v15 = &off_430728;
      *(_QWORD *)&v15[8] = 2LL;
      *(_QWORD *)&v15[32] = 0LL;
      *(_QWORD *)&v15[16] = v21;
      *(_QWORD *)&v15[24] = 2LL;
      core::option::Option<T>::map_or_else((char *)v17 + 8, 0LL, v3, v15);
      *(_QWORD *)&v17[0] = 0x8000000000000028LL;
      result = just::parser::Parser::error((__int64)v15, (__int64)a2, (__int64)v17);
      v11 = *(_OWORD *)&v15[8];
      v12 = *(_OWORD *)&v15[24];
      v13 = *(_OWORD *)&v15[40];
      v14 = *(_OWORD *)&v15[56];
      *(_OWORD *)(a1 + 64) = v16;
      *(_OWORD *)(a1 + 48) = v14;
      *(_OWORD *)(a1 + 32) = v13;
      *(_OWORD *)(a1 + 16) = v12;
      *(_OWORD *)a1 = v11;
    }
  }
  else
  {
    v7 = *(_DWORD *)v20;
    *(_DWORD *)(a1 + 76) = *(_DWORD *)&v20[3];
    *(_DWORD *)(a1 + 73) = v7;
    *(_QWORD *)(a1 + 64) = *(_QWORD *)&v15[64];
    v8 = *(_OWORD *)v15;
    v9 = *(_OWORD *)&v15[16];
    v10 = *(_OWORD *)&v15[32];
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v15[48];
    *(_OWORD *)(a1 + 32) = v10;
    *(_OWORD *)(a1 + 16) = v9;
    *(_OWORD *)a1 = v8;
    *(_BYTE *)(a1 + 72) = result;
  }
  return result;
}