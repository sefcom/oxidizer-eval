fn forc_crypto::has_sensible_info(a0: u64) -> long long {
    let v0: u8;  // [bp-0x48]
    let v1: u128;  // [bp-0x40]
    let v2: u64;  // [bp-0x30]
    let v3: u128;  // [bp-0x28]
    let v4: u64;  // [bp-0x20]
    let v5: u64;  // [bp-0x18]
    let v7: u32;  // eax
    let v8: core::result::Result<(), std::io::error::Error>;  // ebx
    let v10: u32;  // eax

    serde_json::value::to_value(&v0, a0);
    v7 = v0;
    if v7 == 6 {
        return v8 as u64;
    }
    if v7 != 5 {
        return v8 as u64;
    }
    v3 = v1;
    v5 = v2;
    alloc::collections::btree::map::BTreeMap<K,V,A>::get(v3 as i64, v4);
    v10 = v0;
    if v10 == 5 {
        return v8 as u64;
    } else if v10 == 6 {
        return v8 as u64;
    }
    return v8 as u64;
}
