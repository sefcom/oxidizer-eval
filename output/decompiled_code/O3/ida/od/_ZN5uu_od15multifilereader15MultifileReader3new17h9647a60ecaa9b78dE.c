_OWORD *__fastcall uu_od::multifilereader::MultifileReader::new(_OWORD *a1, __int128 *a2)
{
  __int128 v2; // xmm0
  __int128 v3; // xmm1
  __int128 v5; // [rsp+0h] [rbp-38h] BYREF
  __int128 v6; // [rsp+10h] [rbp-28h]
  __int128 v7; // [rsp+20h] [rbp-18h]

  v6 = *((unsigned __int64 *)a2 + 2);
  v5 = *a2;
  BYTE8(v7) = 0;
  uu_od::multifilereader::MultifileReader::next_file(&v5);
  v2 = v5;
  v3 = v6;
  a1[2] = v7;
  a1[1] = v3;
  *a1 = v2;
  return a1;
}
