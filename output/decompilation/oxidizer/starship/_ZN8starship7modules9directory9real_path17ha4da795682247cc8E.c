fn starship::modules::directory::real_path(a0: u64, a1: u64, a2: u64) -> void {
    let v0: <anon>;  // [bp-0x148]
    let v1: u128;  // [bp-0x148]
    let v2: u128;  // [bp-0x148]
    let v3: struct16;  // [bp-0x148]
    let v4: u64;  // [bp-0x140]
    let v5: struct16;  // [bp-0x138]
    let v6: i64;  // [bp-0x130]
    let v7: core::result::Result<std::path::PathBuf, std::io::error::Error>;  // [bp-0x128]
    let v8: struct160;  // [bp-0x120]
    let v9: u64;  // [bp-0x118]
    let v10: struct24;  // [bp-0x108]
    let v11: Option<struct48>;  // [bp-0xf8]
    let v12: struct32;  // [bp-0xf0]
    let v13: struct16;  // [bp-0xe8], Other Possible Types: u128
    let v14: u64;  // [bp-0xe0]
    let v15: iNone;  // [bp-0xd8]
    let v16: iNone;  // [bp-0xc8]
    let v17: core::result::Result<(), std::io::error::Error>;  // [bp-0xb8]
    let v18: struct20;  // [bp-0xa8]
    let v19: iNone;  // [bp-0x98]
    let v20: iNone;  // [bp-0x88]
    let v21: iNone;  // [bp-0x78]
    let v22: core::option::Option<std::path::Component>;  // [bp-0x68]
    let v24: u32;  // rdx
    let v26: struct24;  // [bp-0x100]

    v0 = 0;
    v4 = 1;
    v5 = 0;
    v10 = <&T as core::convert::AsRef<U>>::as_ref(a1, a2);
    v18 = std::path::Path::components(v10, a2);
    v17 = v21;
    v16 = v20;
    v15 = v19;
    v13 = *(&v18.field_0 as &i128);
    loop {
        v22 = <std::path::Components as core::iter::traits::iterator::Iterator>::next(&v13);
        if &v22 == "\n" {
            break;
        }
        v26 = std::path::Path::join(0x1, v5, &v22);
        v7 = std::fs::read_link(v11, v12);
        if v7 as i64 == 0x8000000000000000 {
            v5 = v12;
            v1 = v26.field_0;
        } else if std::path::Path::is_absolute(v8, v9) {
            v5 = v9;
            v2 = v7 as i128;
        } else {
            v3 = std::path::PathBuf::push(&v7);
        }
    }
    v13 = std::fs::canonicalize(0x1);
    if v13.field_16 == 0x8000000000000000 {
        starship::modules::directory::real_path::{{closure}}(a0, v10, v24, v14);
    } else {
        *((v6 + 16) as &i64) = v15 as i64;
        *(v6 as &i128) = *(&v13.field_16 as &i128);
    }
    return;
}
