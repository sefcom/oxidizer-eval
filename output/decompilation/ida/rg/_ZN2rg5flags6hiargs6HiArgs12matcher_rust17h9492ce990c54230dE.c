__int64 __fastcall rg::flags::hiargs::HiArgs::matcher_rust(__int64 a1, __int64 a2)
{
  char v2; // al
  __int64 result; // rax
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm2
  __int64 v7; // [rsp+8h] [rbp-110h] BYREF
  __int64 v8; // [rsp+10h] [rbp-108h]
  int v9; // [rsp+18h] [rbp-100h]
  __int16 v10; // [rsp+1Ch] [rbp-FCh]
  __int16 v11; // [rsp+1Eh] [rbp-FAh]
  int v12; // [rsp+20h] [rbp-F8h]
  __int16 v13; // [rsp+24h] [rbp-F4h]
  char v14; // [rsp+26h] [rbp-F2h]
  char v15; // [rsp+27h] [rbp-F1h]
  int v16; // [rsp+28h] [rbp-F0h]
  _OWORD v17[2]; // [rsp+30h] [rbp-E8h] BYREF
  __int128 v18; // [rsp+58h] [rbp-C0h] BYREF
  __int128 v19; // [rsp+68h] [rbp-B0h]
  __int128 v20; // [rsp+78h] [rbp-A0h]
  __int128 v21; // [rsp+88h] [rbp-90h]
  __int128 v22; // [rsp+98h] [rbp-80h]
  __int128 v23; // [rsp+A8h] [rbp-70h]
  __int64 v24; // [rsp+B8h] [rbp-60h]
  _BYTE v25[24]; // [rsp+C0h] [rbp-58h] BYREF
  _BYTE v26[24]; // [rsp+D8h] [rbp-40h] BYREF
  _BYTE v27[40]; // [rsp+F0h] [rbp-28h] BYREF

  v7 = 104857600LL;
  v8 = 1048576000LL;
  v9 = 250;
  LOBYTE(v10) = 2;
  LOBYTE(v11) = 0;
  v12 = 0x10000;
  v13 = 0;
  v16 = 0;
  v14 = *(_BYTE *)(a2 + 902) ^ 1;
  v15 = 0;
  BYTE2(v16) = *(_BYTE *)(a2 + 882);
  if ( *(_BYTE *)(a2 + 915) )
  {
    if ( *(_BYTE *)(a2 + 915) != 1 )
    {
      BYTE1(v12) = 1;
      v2 = *(_BYTE *)(a2 + 913);
      if ( v2 == 2 )
        goto LABEL_9;
      goto LABEL_7;
    }
    LOBYTE(v12) = 1;
  }
  v2 = *(_BYTE *)(a2 + 913);
  if ( v2 == 2 )
  {
LABEL_9:
    if ( *(_BYTE *)(a2 + 893) )
      goto LABEL_10;
    goto LABEL_13;
  }
LABEL_7:
  if ( (v2 & 1) != 0 )
  {
    BYTE1(v16) = 1;
    goto LABEL_9;
  }
  HIBYTE(v16) = 1;
  if ( *(_BYTE *)(a2 + 893) )
  {
LABEL_10:
    HIBYTE(v12) = *(_BYTE *)(a2 + 894);
    if ( *(_BYTE *)(a2 + 881) )
    {
      LOBYTE(v16) = 1;
      LOBYTE(v10) = 2;
    }
    goto LABEL_17;
  }
LABEL_13:
  v10 = 2560;
  HIBYTE(v12) = 0;
  if ( *(_BYTE *)(a2 + 881) )
  {
    LOBYTE(v10) = 1;
    LOBYTE(v16) = 1;
  }
  if ( *(_BYTE *)(a2 + 903) )
    v10 = 0;
LABEL_17:
  if ( (*(_BYTE *)(a2 + 80) & 1) != 0 )
  {
    v7 = *(_QWORD *)(a2 + 88);
    if ( *(_DWORD *)a2 != 1 )
    {
LABEL_19:
      if ( (unsigned __int8)rg::flags::hiargs::BinaryDetection::is_none(a2 + 792) )
        goto LABEL_21;
      goto LABEL_20;
    }
  }
  else if ( *(_DWORD *)a2 != 1 )
  {
    goto LABEL_19;
  }
  v8 = *(_QWORD *)(a2 + 8);
  if ( !(unsigned __int8)rg::flags::hiargs::BinaryDetection::is_none(a2 + 792) )
LABEL_20:
    v11 = 1;
LABEL_21:
  grep_regex::matcher::RegexMatcherBuilder::build_many(&v18, &v7, *(_QWORD *)(a2 + 376), *(_QWORD *)(a2 + 384));
  if ( BYTE3(v24) == 2 )
  {
    v17[1] = v19;
    v17[0] = v18;
    <T as alloc::string::SpecToString>::spec_to_string(v27, v17);
    rg::flags::hiargs::suggest_multiline(v26, v27);
    rg::flags::hiargs::suggest_text(v25, v26);
    *(_QWORD *)a1 = anyhow::kind::Adhoc::new(v25);
    *(_BYTE *)(a1 + 99) = 2;
    return core::ptr::drop_in_place<grep_regex::error::Error>(v17);
  }
  else
  {
    result = v24;
    *(_QWORD *)(a1 + 96) = v24;
    *(_OWORD *)(a1 + 80) = v23;
    *(_OWORD *)(a1 + 64) = v22;
    v4 = v18;
    v5 = v19;
    v6 = v20;
    *(_OWORD *)(a1 + 48) = v21;
    *(_OWORD *)(a1 + 32) = v6;
    *(_OWORD *)(a1 + 16) = v5;
    *(_OWORD *)a1 = v4;
  }
  return result;
}