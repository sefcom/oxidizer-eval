unsigned __int64 __fastcall sniffnet::mmdb::types::mmdb_reader::MmdbReader::lookup(__int64 a1, _QWORD *a2)
{
  unsigned __int64 result; // rax
  __int128 v3; // xmm0
  _BYTE v4[8]; // [rsp+0h] [rbp-38h] BYREF
  __int128 v5; // [rsp+8h] [rbp-30h]
  __int128 v6; // [rsp+18h] [rbp-20h]

  result = 1LL;
  if ( (*a2 ^ 0x8000000000000000LL) < 3 )
    result = *a2 ^ 0x8000000000000000LL;
  if ( result )
  {
    if ( result != 1 )
    {
      *(_QWORD *)(a1 + 8) = 3LL;
      goto LABEL_10;
    }
    result = maxminddb::Reader<S>::lookup_prefix(v4);
    if ( (v4[0] & 1) != 0 )
    {
LABEL_6:
      v3 = v5;
      *(_OWORD *)(a1 + 16) = v6;
      *(_OWORD *)a1 = v3;
      return result;
    }
  }
  else
  {
    result = maxminddb::Reader<S>::lookup_prefix(v4, a2 + 1);
    if ( (v4[0] & 1) != 0 )
      goto LABEL_6;
  }
  result = v6;
  *(_QWORD *)(a1 + 24) = v6;
  *(_OWORD *)(a1 + 8) = v5;
LABEL_10:
  *(_QWORD *)a1 = 7LL;
  return result;
}