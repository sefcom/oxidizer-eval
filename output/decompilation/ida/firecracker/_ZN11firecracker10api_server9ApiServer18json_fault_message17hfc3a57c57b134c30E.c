__int64 __fastcall firecracker::api_server::ApiServer::json_fault_message(__int64 a1, __int64 a2)
{
  __int128 v3; // [rsp+0h] [rbp-98h] BYREF
  __int64 v4; // [rsp+10h] [rbp-88h]
  char v5[8]; // [rsp+18h] [rbp-80h] BYREF
  __int128 v6; // [rsp+20h] [rbp-78h]
  __int64 v7; // [rsp+30h] [rbp-68h]
  _BYTE v8[24]; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v9[72]; // [rsp+50h] [rbp-48h] BYREF

  *(_QWORD *)&v3 = 0LL;
  v4 = 0LL;
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v8);
  serde_core::ser::impls::<impl serde_core::ser::Serialize for alloc::string::String>::serialize(
    v5,
    *(_QWORD *)(a2 + 8),
    *(_QWORD *)(a2 + 16));
  core::result::Result<T,E>::unwrap(v9, v5, &off_3A3A88);
  alloc::collections::btree::map::BTreeMap<K,V,A>::insert(v5, &v3, v8, v9);
  core::ptr::drop_in_place<core::option::Option<serde_json::value::Value>>(v5);
  v6 = v3;
  v7 = v4;
  v5[0] = 5;
  <T as alloc::string::SpecToString>::spec_to_string(a1, v5);
  core::ptr::drop_in_place<serde_json::value::Value>(v5, v5);
  return core::ptr::drop_in_place<alloc::string::String>(a2);
}