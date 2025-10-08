__int64 __fastcall sniffnet::gui::sniffer::Sniffer::handle_new_host(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm0
  __int128 v3; // xmm1
  __int128 v4; // xmm2
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int128 *v8; // r15
  __int128 v10; // [rsp+0h] [rbp-1C8h] BYREF
  int v11; // [rsp+10h] [rbp-1B8h]
  _BYTE v12[104]; // [rsp+20h] [rbp-1A8h] BYREF
  __m256i v13; // [rsp+90h] [rbp-138h] BYREF
  __int128 v14; // [rsp+B0h] [rbp-118h]
  __int128 v15; // [rsp+C0h] [rbp-108h]
  __int128 v16; // [rsp+D0h] [rbp-F8h]
  __int128 v17; // [rsp+E0h] [rbp-E8h]
  _OWORD v18[5]; // [rsp+100h] [rbp-C8h] BYREF
  _BYTE v19[112]; // [rsp+158h] [rbp-70h] BYREF

  v18[4] = a2[4];
  v2 = *a2;
  v3 = a2[1];
  v4 = a2[2];
  v18[3] = a2[3];
  v18[2] = v4;
  v18[1] = v3;
  v18[0] = v2;
  v10 = *(__int128 *)((char *)a2 + 216);
  LOBYTE(v11) = *((_BYTE *)a2 + 232);
  <sniffnet::networking::types::host::Host as core::clone::Clone>::clone(v19, v18);
  hashbrown::rustc_entry::<impl hashbrown::map::HashMap<K,V,S,A>>::rustc_entry(
    v12,
    a1 + 912,
    v19,
    v5,
    v6,
    v7,
    v10,
    *((_QWORD *)&v10 + 1),
    v11);
  v8 = a2 + 5;
  if ( __OFSUB__(0LL, *(_QWORD *)v12) )
  {
    *(_OWORD *)&v13.m256i_u64[1] = *(_OWORD *)&v12[8];
    v13.m256i_i64[0] = 0x8000000000000000LL;
  }
  else
  {
    v17 = *(_OWORD *)&v12[80];
    v16 = *(_OWORD *)&v12[64];
    v15 = *(_OWORD *)&v12[48];
    v14 = *(_OWORD *)&v12[32];
    v13 = *(__m256i *)v12;
  }
  std::collections::hash::map::Entry<K,V>::and_modify(v12, &v13, v8);
  std::collections::hash::map::Entry<K,V>::or_insert(v12, v8);
  <sniffnet::networking::types::host::Host as core::clone::Clone>::clone(&v13, v18);
  *(_QWORD *)&v12[16] = *((_QWORD *)a2 + 26);
  *(_OWORD *)v12 = a2[12];
  *(__m256i *)&v12[24] = v13;
  *(_OWORD *)&v12[56] = v14;
  *(_OWORD *)&v12[72] = v15;
  *(_OWORD *)&v12[88] = v16;
  hashbrown::map::HashMap<K,V,S,A>::insert(&v13, a1 + 1056, &v10, v12);
  core::ptr::drop_in_place<core::option::Option<(alloc::string::String,sniffnet::networking::types::host::Host)>>(&v13);
  sniffnet::networking::types::host_data_states::HostData::update(a1 + 2232, v18);
  return core::ptr::drop_in_place<sniffnet::networking::types::host::Host>(v18);
}