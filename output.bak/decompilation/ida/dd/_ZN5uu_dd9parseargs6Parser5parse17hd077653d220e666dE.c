__int64 __fastcall uu_dd::parseargs::Parser::parse(__int64 a1, void *a2, __int64 a3, __int64 a4)
{
  __int128 v5; // [rsp+0h] [rbp-1E8h]
  __int64 v6; // [rsp+28h] [rbp-1C0h] BYREF
  __int128 v7; // [rsp+30h] [rbp-1B8h]
  __int128 v8; // [rsp+40h] [rbp-1A8h]
  _BYTE src[176]; // [rsp+50h] [rbp-198h] BYREF
  __int64 v10; // [rsp+100h] [rbp-E8h] BYREF
  __int128 v11; // [rsp+108h] [rbp-E0h]
  __int128 v12; // [rsp+118h] [rbp-D0h]
  _BYTE dest[176]; // [rsp+128h] [rbp-C0h] BYREF

  uu_dd::parseargs::Parser::read((char *)&v6, a2, a3, a4);
  v5 = v7;
  if ( v6 == 2 )
  {
    *(_OWORD *)(a1 + 24) = v8;
    *(_OWORD *)(a1 + 8) = v5;
    *(_QWORD *)a1 = 3LL;
  }
  else
  {
    memcpy(dest, src, sizeof(dest));
    v10 = v6;
    v11 = v7;
    v12 = v8;
    uu_dd::parseargs::Parser::validate(a1, (__int64)&v10);
  }
  return a1;
}
