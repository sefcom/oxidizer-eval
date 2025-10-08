fn starship::print::should_add_implicit_module(a0: i192, a1: i192, a2: u64, a3: i192, a4: u64, a5: u64, a6: u64) -> long long {
    let v0: u8;  // [bp-0xd0]
    let v1: i64;  // [bp-0xc8]
    let v2: i64;  // [bp-0xc0]
    let v3: struct24;  // [bp-0xb8]
    let v4: struct24;  // [bp-0xb0]
    let v5: struct24;  // [bp-0xa8]
    let v6: struct24;  // [bp-0xa0]
    let v7: Result<struct24, struct16>;  // [bp-0x98]
    let v8: struct24;  // [bp-0x90]
    let v9: Option<struct48>;  // [bp-0x88]
    let v10: Option<struct24>;  // [bp-0x80]
    let v11: Option<struct48>;  // [bp-0x78], Other Possible Types: struct16
    let v12: core::str::pattern::CharSearcher;  // [bp-0x70]
    let v13: struct40;  // [bp-0x68]
    let v14: struct40;  // [bp-0x60]
    let v15: struct66;  // [bp-0x58]
    let v16: u32;  // r14d
    let v17: struct24;  // r15
    let v18: struct361;  // rax

    v3 = a0;
    v4 = a1;
    v5 = a2;
    v6 = a3;
    v7 = &v3;
    v8 = <&T as core::fmt::Display>::fmt;
    v9 = &v5;
    v10 = <&T as core::fmt::Display>::fmt;
    v11 = &g_11f6f70;
    v12 = 2;
    v15 = 0;
    v13 = &v7;
    v14 = 2;
    v16 = 0;
    v17 = &v11;
    core::option::Option<T>::map_or_else(&v0, 0, a2, &v11);
    if !alloc::collections::btree::map::BTreeMap<K,V,A>::get(a5, a6, v1, v2) {
        v11 = struct16 {
            field_0: 9223372036854775811
            field_8: 0
        };
        v18 = toml::value::Value::get(a4, "disabled");
    }
    return v16;
}
