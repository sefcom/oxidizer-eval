fn just::search::Search::global_justfile_paths(a0: i64) -> long long {
    let v0: struct24;  // [bp-0xd8], Other Possible Types: struct48
    let v1: struct24;  // [bp-0xd8], Other Possible Types: u64
    let v2: u64;  // [bp-0xd0]
    let v3: &u8;  // [bp-0xc8]
    let v4: struct16;  // [bp-0xc0]
    let v5: struct16;  // [bp-0xc0]
    let v6: struct16;  // [bp-0xc0]
    let v7: struct40;  // [bp-0xa8]
    let v8: u64;  // [bp-0xa0]
    let v9: u128;  // [bp-0x98]
    let v10: u128;  // [bp-0x88]
    let v11: struct40;  // [bp-0x78], Other Possible Types: struct24
    let v12: void*;  // [bp-0x70]
    let v13: &u8;  // [bp-0x68]
    let v14: i64;  // [bp-0x50]
    let v15: Option<struct24>;  // [bp-0x48]
    let v16: void*;  // [bp-0x40]
    let v18: struct24;  // rdx
    let v19: struct24;  // rax
    let v20: struct24;  // r14
    let v21: i64;  // rdx
    let v22: core::result::Result<&str, core::str::error::Utf8Error>;  // r13
    let v23: void*;  // [bp-0xa8], Other Possible Types: struct40

    v0 = struct48 {
        field_0: dirs::config_dir()
        field_24: 0
        field_32: ""
    };
    if !((((0 ^ v0.field_0) & (0 ^ -(v1))) >> 63) as char) {
        v11 = std::path::Path::join(v2, v3, "just");
        v23 = struct40 {
            field_0: v11.field_0
            field_16: v13
            field_24: "justfile"
        };
        v6 = alloc::vec::Vec<T,A>::push(&v23, "src/search.rs");
    }
    v15 = dirs::home_dir();
    if let Some(_) = v15 {
        v11 = std::path::Path::join(v16, *((&v15 as &char + 16) as &i64), ".config");
        v1 = std::path::Path::join(v12, v13, "just");
        v7 = struct40 {
            field_0: v1.field_0
            field_16: v3
            field_24: "justfile"
        };
        v4 = alloc::vec::Vec<T,A>::push(&v7, "src/search.rs");
        v23 = 0;
        v8 = 2;
        v9 = g_82e5b0.field_0;
        v10 = g_82e5c0.field_0;
        v19 = core::array::iter::iter_inner::PolymorphicIter<[core::mem::maybe_uninit::MaybeUninit<T>]>::next(&v23);
        if v19 {
            v22 = v21;
            do {
                v0 = <just::module_path::ModulePath as core::convert::TryFrom<&[&str]>>::try_from::{{closure}}(v16, v18);
                v11 = struct40 {
                    field_0: v0.field_0
                    field_16: v3
                    field_24: v20
                    field_32: v21
                };
                v5 = alloc::vec::Vec<T,A>::push(&v11, "src/search.rs");
                v20 = core::array::iter::iter_inner::PolymorphicIter<[core::mem::maybe_uninit::MaybeUninit<T>]>::next(&v23);
            } while (v19);
        }
    }
    *((v14 + 16) as &i64) = 0;
    *(v14 as &i128) = *(&v0.field_40 as &i128);
    return 0;
}
