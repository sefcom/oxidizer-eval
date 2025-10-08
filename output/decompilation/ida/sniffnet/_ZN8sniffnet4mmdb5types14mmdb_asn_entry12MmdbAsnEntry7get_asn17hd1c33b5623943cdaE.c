__int64 __fastcall sniffnet::mmdb::types::mmdb_asn_entry::MmdbAsnEntry::get_asn(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 result; // rax
  __int128 v7; // [rsp+8h] [rbp-40h] BYREF
  __int64 v8; // [rsp+18h] [rbp-30h]
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]

  sniffnet::mmdb::types::mmdb_asn_entry::MmdbAsnCode::get_code(&v7);
  v3 = *(_QWORD *)(a2 + 24);
  v4 = *(_QWORD *)(a2 + 32);
  if ( !v3 )
    v4 = 0LL;
  v5 = 1LL;
  if ( v3 )
    v5 = *(_QWORD *)(a2 + 24);
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v9, v5, v4);
  *(_QWORD *)(a1 + 40) = v10;
  *(_OWORD *)(a1 + 24) = v9;
  result = v8;
  *(_QWORD *)(a1 + 16) = v8;
  *(_OWORD *)a1 = v7;
  return result;
}