fn versions_replacer::metadata::collect_versions_from_cargo_toml(a0: i64, a1: void*) -> int {
    let v0: void*;  // [bp-0x288], Other Possible Types: struct24
    let v1: u64;  // [bp-0x280]
    let v2: u128;  // [bp-0x278]
    let v3: u64;  // [bp-0x268]
    let v4: void*;  // [bp-0x260]
    let v5: u64;  // [bp-0x258]
    let v6: u64;  // [bp-0x240]
    let v7: u64;  // [bp-0x228]
    let v8: void*;  // [bp-0x210]
    let v9: void*;  // [bp-0x200]
    let v10: u32;  // [bp-0x1f8]
    let v11: struct48;  // [bp-0x1f0]
    let v12: u128;  // [bp-0x1e0]
    let v13: u128;  // [bp-0x1d0]
    let v14: struct48;  // [bp-0x1c0]
    let v17: Result<struct208, struct16>;  // [bp-0xf0]
    let v18: u64;  // [bp-0xe8]
    let v21: u64;  // rdx

    v5 = 0x8000000000000000;
    v6 = 0x8000000000000000;
    v7 = 0x8000000000000000;
    v0 = 0;
    v1 = 8;
    v2 = 0;
    v3 = 8;
    v4 = 0;
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v0 = cargo_metadata::MetadataCommand::manifest_path(<&T as core::convert::AsRef<U>>::as_ref(a1), v21);
    v14 = cargo_metadata::MetadataCommand::exec(&v0);
    v17 = eyre::context::<impl eyre::WrapErr<T,E> for core::result::Result<T,E>>::wrap_err(&v14);
    match v17 {
        Ok(_) => {
            memcpy(&v14 as u8, &v17 as u8, 192);
            v11 = core::iter::traits::iterator::Iterator::collect(v18, v14.field_16 as i64 * 600 + v18);
            return struct48 {
                field_0: *(&v11.field_0 as &i128)
                field_16: v12
                field_32: v13
            };
        },
        Err(_) => {
            return struct16 {
                field_0: 0
                field_8: v18
            };
        },
    }
}
