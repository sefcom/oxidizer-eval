void __fastcall sniffnet::networking::types::host_data_states::HostData::update(_DWORD *a1, __int64 a2)
{
  __int64 v2; // rdx
  char v3; // al
  int v4; // ecx
  char v5; // al
  int v6; // ecx
  char v7; // al
  int v8; // ecx
  _BYTE v9[48]; // [rsp+8h] [rbp-30h] BYREF

  v2 = *(_QWORD *)(a2 + 16);
  if ( v2 )
  {
    core::net::parser::<impl core::str::traits::FromStr for core::net::ip_addr::IpAddr>::from_str(
      v9,
      *(_QWORD *)(a2 + 8),
      v2);
    if ( v9[0] == 2 )
    {
      <alloc::string::String as core::clone::Clone>::clone(v9, a2);
      v3 = alloc::collections::btree::map::BTreeMap<K,V,A>::insert(a1, v9);
      LOBYTE(v4) = 1;
      if ( v3 )
        v4 = a1[6];
      *((_BYTE *)a1 + 24) = v4;
    }
  }
  if ( *(_QWORD *)(a2 + 64) )
  {
    <alloc::string::String as core::clone::Clone>::clone(v9, a2 + 48);
    v5 = alloc::collections::btree::map::BTreeMap<K,V,A>::insert(a1 + 8, v9);
    LOBYTE(v6) = 1;
    if ( v5 )
      v6 = a1[14];
    *((_BYTE *)a1 + 56) = v6;
  }
  if ( *(_BYTE *)(a2 + 72) != 0xF9 )
  {
    <T as alloc::string::SpecToString>::spec_to_string(v9, a2 + 72);
    v7 = alloc::collections::btree::map::BTreeMap<K,V,A>::insert(a1 + 16, v9);
    LOBYTE(v8) = 1;
    if ( v7 )
      v8 = a1[22];
    *((_BYTE *)a1 + 88) = v8;
  }
}