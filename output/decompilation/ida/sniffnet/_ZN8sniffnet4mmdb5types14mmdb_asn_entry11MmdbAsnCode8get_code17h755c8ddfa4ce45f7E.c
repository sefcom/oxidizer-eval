void __fastcall sniffnet::mmdb::types::mmdb_asn_entry::MmdbAsnCode::get_code(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int128 v4; // [rsp+0h] [rbp-30h] BYREF
  __int64 v5; // [rsp+10h] [rbp-20h]
  _BYTE v6[18]; // [rsp+1Eh] [rbp-12h] BYREF

  if ( *(_DWORD *)a2 == 1 )
  {
    if ( *(_QWORD *)(a2 + 8) )
    {
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
      return;
    }
  }
  else if ( *(_DWORD *)(a2 + 4) == 1 )
  {
    v2 = core::fmt::num::imp::<impl u32>::_fmt(*(unsigned int *)(a2 + 8), v6, 10LL);
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v4, v2, v3);
    *(_QWORD *)(a1 + 16) = v5;
    *(_OWORD *)a1 = v4;
    return;
  }
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 1LL;
  *(_QWORD *)(a1 + 16) = 0LL;
}