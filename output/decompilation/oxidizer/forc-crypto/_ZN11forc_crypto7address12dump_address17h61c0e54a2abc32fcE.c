fn forc_crypto::address::dump_address(a0: i64, a1: i64) -> int {
    let v0: struct40;  // [bp-0xf0]
    let v1: Option<struct32>;  // [bp-0xf0]
    let v2: Result<struct33, struct9>;  // [bp-0xf0]
    let v3: u128;  // [bp-0xe9]
    let v4: void*;  // [bp-0xd9]
    let v5: u128;  // [bp-0xc8]
    let v9: u128;  // [bp-0xb8]
    let v11: void*;  // [bp-0xa0]
    let v12: void*;  // [bp-0x90]
    let v13: iNone;  // [bp-0x88]
    let v14: u64;  // [bp-0x78]
    let v15: struct24;  // [bp-0x70]
    let v16: struct32;  // [bp-0x58]
    let v17: void*;  // [bp-0x48]
    let v18: u128;  // [bp-0x38]
    let v19: u128;  // [bp-0x28]
    let v21: i64;  // rax
    let v22: u64;  // rdx
    let v25: u64;  // rax

    v21 = <alloc::string::String as core::convert::AsRef<[u8]>>::as_ref(*((a1 + 8) as &i64), *((a1 + 16) as &i64));
    if v22 == 32 {
        v19 = *((v21 + 16) as &i128);
        v18 = *(v21 as &i128);
        v9 = *((v21 + 16) as &i128);
        v5 = v18;
    } else {
        v2 = forc_crypto::address::handle_string_conversion(a1);
        if let Ok(_) = v2 {
            return struct16 {
                field_0: 6
                padding_1: <UNKNOWN>
                field_8: *((&v2 as &char + 8) as &i64)
            };
        }
    }
    v11 = 0;
    v12 = 0;
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v0, "Address");
    v14 = *((&v2 as &char + 16) as &i64);
    v13 = v2 as i128;
    v15 = <T as alloc::string::SpecToString>::spec_to_string(&v5);
    serde_json::value::to_value(&v0, &v15);
    v16 = core::result::Result<T,E>::unwrap(&v0, "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/sway/forc-plugins/forc-crypto/src/address.rs");
    v1 = alloc::collections::btree::map::BTreeMap<K,V,A>::insert(&v11, &v13, &v16);
    v17 = 0;
    v3 = *(&v11 as &i128);
    v4 = 0;
    v25 = *((&v3 as &char + 8) as &i64);
    return struct40 {
        field_0: 5
        field_1: <UNKNOWN>
        field_16: 0
        field_24: <UNKNOWN>
    };
    return;
}
