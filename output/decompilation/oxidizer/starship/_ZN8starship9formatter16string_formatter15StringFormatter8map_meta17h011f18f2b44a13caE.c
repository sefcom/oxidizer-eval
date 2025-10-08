fn starship::formatter::string_formatter::StringFormatter::map_meta(a0: i64, a1: i64, a2: i64, a3: i64) -> int {
    let v0: Option<struct24>;  // [bp-0x138]
    let v1: Option<struct40>;  // [bp-0x130]
    let v2: struct24;  // [bp-0x128]
    let v3: u64;  // [bp-0x118]
    let v4: struct40;  // [bp-0x110], Other Possible Types: struct72
    let v5: struct24;  // [bp-0xc8]
    let v6: struct16;  // [bp-0xb8]
    let v7: struct16;  // [bp-0xb0]
    let v8: struct48;  // [bp-0x98]
    let v9: u64;  // [bp-0x88]
    let v10: struct24;  // [bp-0x80]
    let v11: u64;  // [bp-0x70]
    let v12: struct25;  // [bp-0x68], Other Possible Types: Result<struct16, struct64>
    let v13: u128;  // [bp-0x58]
    let v14: struct24;  // [bp-0x40]
    let v16: struct16;  // rax
    let v17: struct16;  // rax
    let v19: u128;  // xmm0
    let v20: Option<struct40>;  // xmm1
    let v21: iNone;  // xmm2

    v0 = a2;
    v1 = a3;
    v7 = <starship::formatter::string_formatter::StringFormatter as starship::formatter::model::VariableHolder<alloc::string::String>>::get_variables(a1);
    v16 = *((a1 + 24) as &i64);
    v17 = v16;
    if v17 {
        v17 = *((a1 + 40) as &i64);
    }
    v4 = struct72 {
        field_0: (v16) as u8 as u64
        field_8: 0
        field_16: v16
        field_24: *((a1 + 32) as &i64)
        field_32: v4
        field_40: 0
        field_48: v16
        field_56: *((a1 + 32) as &i64)
        field_64: v17
    };
    v12 = 0;
    v14 = 0;
    v13 = 0;
    v8 = core::iter::traits::iterator::Iterator::fold(&v4, &v12, &v0);
    v5 = v8.field_0;
    v6 = v9;
    v2 = v10;
    v3 = v11;
    v12 = <alloc::collections::btree::map::BTreeMap<K,V,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v5);
    core::iter::traits::iterator::Iterator::fold(&v12, a1 + 24);
    v12 = <alloc::collections::btree::map::BTreeMap<K,V,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v2);
    core::iter::traits::iterator::Iterator::fold(&v12, a1 + 48);
    v19 = *(a1 as &i128);
    v20 = *((a1 + 16) as &i128);
    v21 = *((a1 + 32) as &i128);
    return struct72 {
        field_0: v19
        field_16: v20
        field_32: v21
        field_48: *((a1 + 48) as &i128)
        field_64: *((a1 + 64) as &i64)
    };
}
