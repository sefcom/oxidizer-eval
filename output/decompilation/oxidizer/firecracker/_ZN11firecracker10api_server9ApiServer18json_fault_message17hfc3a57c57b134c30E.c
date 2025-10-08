fn firecracker::api_server::ApiServer::json_fault_message(a1: i64) -> : struct24 {
    let a0: u64;  // rdi
    let v0: void*;  // [bp-0x98]
    let v1: void*;  // [bp-0x88]
    let v2: Option<struct32>;  // [bp-0x80], Other Possible Types: struct32, struct33
    let v3: struct24;  // [bp-0x60]
    let v4: struct32;  // [bp-0x48]

    v0 = 0;
    v1 = 0;
    v3 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("fault_message");
    v2 = serde_core::ser::impls::<impl serde_core::ser::Serialize for alloc::string::String>::serialize(*((a1 + 8) as &i64), *((a1 + 16) as &i64));
    v4 = core::result::Result<T,E>::unwrap(&v2, "src/firecracker/src/api_server/mod.rs");
    v2 = alloc::collections::btree::map::BTreeMap<K,V,A>::insert(&v0, &v3, &v4);
    v2 = struct32 {
        field_0: 5
        padding_1: <UNKNOWN>
        field_8: *(&v0 as &i128)
        field_24: 0
    };
    <T as alloc::string::SpecToString>::spec_to_string(a0, &v2);
    return;
}
