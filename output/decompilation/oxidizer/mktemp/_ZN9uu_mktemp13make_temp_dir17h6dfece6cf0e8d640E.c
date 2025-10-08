fn uu_mktemp::make_temp_dir(a0: i64, a1: u64, a2: u64, a3: u64, a4: u64, a5: u64, a6: u64, a7: u64) -> int {
    let v0: core::fmt::rt::Argument;  // [bp-0x188], Other Possible Types: struct24
    let v1: core::fmt::Arguments;  // [bp-0x178]
    let v2: u128;  // [bp-0x168]
    let v3: struct24;  // [bp-0x168]
    let v4: core::fmt::Arguments;  // [bp-0x158], Other Possible Types: u64
    let v5: u128;  // [bp-0x150]
    let v6: core::fmt::Arguments;  // [bp-0x140]
    let v7: struct24;  // [bp-0x130]
    let v8: struct24;  // [bp-0x130]
    let v9: u64;  // [bp-0x118]
    let v10: u64;  // [bp-0x110]
    let v11: u64;  // [bp-0x108]
    let v12: u64;  // [bp-0x100]
    let v13: struct24;  // [bp-0xf8]
    let v14: u64;  // [bp-0xe8]
    let v15: struct24;  // [bp-0xc8]
    let v16: u128;  // [bp-0xc0]
    let v17: struct50;  // [bp-0xb0]
    let v18: struct24;  // [bp-0x78]
    let v19: struct24;  // [bp-0x60]
    let v20: u64;  // [bp-0x50]
    let v21: alloc::string::String;  // [bp-0x48]
    let v22: u64;  // rdx

    v9 = a3;
    v10 = a4;
    v11 = a6;
    v12 = a7;
    v17 = struct50 {
        field_0: 1924145348609
        field_8: a3
        field_16: a4
        field_24: a6
        field_32: a7
        field_40: a5
        field_48: 0
    };
    v8 = tempfile::Builder::tempdir_in(&v17, a1, a2);
    if v8.field_16 as i8 != 2 {
        v18 = v7;
        v19 = tempfile::dir::TempDir::keep(&v18);
        return struct24 {
            field_0: v19.field_0
            field_16: v20
        };
    } else if std::io::error::Error::kind(v8.field_0 as i64) as u8 {
        return struct24 {
            field_0: 0x8000000000000000
            field_8: uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v8.field_0 as i64)
            field_16: v22
        };
    } else {
        v3 = alloc::slice::<impl [T]>::repeat(a5);
        v1 = v4;
        v0 = v3.field_0;
        v21 = format!("{}{}{}", &v9, &v0, &v11);
        v15 = std::path::Path::join(a1, a2, &v21);
        v2 = v16;
        v0 = <T as alloc::string::SpecToString>::spec_to_string(&v2);
        v13 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("directory");
        v4 = v14;
        v2 = v13.field_0;
        v5 = v0.field_0;
        v6 = v1;
        return struct24 {
            field_0: 0x8000000000000000
            field_8: alloc::boxed::Box<T>::new(&v2) as u64
            field_16: &g_4f9098
        };
    }
}
