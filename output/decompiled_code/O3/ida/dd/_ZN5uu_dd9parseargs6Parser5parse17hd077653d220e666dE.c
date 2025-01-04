__int64 __fastcall uu_dd::parseargs::Parser::parse(__int64 a1, void *a2)
{
  __int128 v3; // [rsp+0h] [rbp-1E8h]
  __int64 v4; // [rsp+28h] [rbp-1C0h] BYREF
  __int128 v5; // [rsp+30h] [rbp-1B8h]
  __int128 v6; // [rsp+40h] [rbp-1A8h]
  _BYTE src[176]; // [rsp+50h] [rbp-198h] BYREF
  __int64 v8; // [rsp+100h] [rbp-E8h] BYREF
  __int128 v9; // [rsp+108h] [rbp-E0h]
  __int128 v10; // [rsp+118h] [rbp-D0h]
  _BYTE dest[176]; // [rsp+128h] [rbp-C0h] BYREF

  uu_dd::parseargs::Parser::read(&v4, a2);
  v3 = v5;
  if ( v4 == 2 )
  {
    *(_OWORD *)(a1 + 24) = v6;
    *(_OWORD *)(a1 + 8) = v3;
    *(_QWORD *)a1 = 3LL;
  }
  else
  {
    memcpy(dest, src, sizeof(dest));
    v8 = v4;
    v9 = v5;
    v10 = v6;
    uu_dd::parseargs::Parser::validate(a1, &v8);
  }
  return a1;
}
