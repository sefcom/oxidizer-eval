__int64 __fastcall sniffnet::networking::types::service::Service::to_string_with_equal_prefix(__int64 a1, _DWORD *a2)
{
  _BYTE v3[24]; // [rsp+0h] [rbp-58h] BYREF
  _QWORD v4[2]; // [rsp+18h] [rbp-40h] BYREF
  __int128 v5; // [rsp+28h] [rbp-30h]
  __int128 v6; // [rsp+38h] [rbp-20h] BYREF
  __int64 v7; // [rsp+48h] [rbp-10h]

  if ( *a2 == 1 )
    return <T as alloc::string::SpecToString>::spec_to_string(a1, a2);
  <T as alloc::string::SpecToString>::spec_to_string(v3, a2);
  v4[0] = asc_1839062;
  v4[1] = 1LL;
  v5 = *(_OWORD *)&v3[8];
  alloc::str::join_generic_copy(&v6, v4, 2LL);
  *(_QWORD *)(a1 + 16) = v7;
  *(_OWORD *)a1 = v6;
  return core::ptr::drop_in_place<alloc::string::String>(v3);
}