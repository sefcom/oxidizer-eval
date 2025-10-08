fn starship::configure::print_configuration(a0: i64, a1: i64, a2: u32, a3: u32, a4: u32) -> long long {
    let v0: struct16;  // [bp-0x67f8], Other Possible Types: struct80, Result<struct80, struct32>
    let v1: struct32;  // [bp-0x67f8]
    let v2: u64;  // [bp-0x6790]
    let v3: Result<struct80, struct75>;  // [bp-0x6788], Other Possible Types: struct16, struct80, u128
    let v4: struct80;  // [bp-0x6788], Other Possible Types: struct24
    let v5: struct16;  // [bp-0x6788]
    let v6: struct24;  // [bp-0x6738]
    let v7: struct80;  // [bp-0x6710]
    let v8: iNone;  // [bp-0x6710]
    let v9: struct80;  // [bp-0x6710], Other Possible Types: u640
    let v10: struct13128;  // [bp-0x66c0]
    let v11: void*;  // [bp-0x6030]
    let v12: void*;  // [bp-0x5030]
    let v13: void*;  // [bp-0x4030]
    let v14: struct241;  // [bp-0x3378]
    let v15: void*;  // [bp-0x3030]
    let v16: void*;  // [bp-0x2030]
    let v17: void*;  // [bp-0x1030]
    let v19: i64;  // rax
    let v21: struct24;  // [bp-0x67a0]

    v17 = 0;
    v16 = 0;
    v15 = 0;
    v13 = 0;
    v12 = 0;
    v11 = 0;
    if a2 {
        v14 = <starship::configs::FullConfig as core::default::Default>::default();
        v0 = toml::value::Value::try_from(&v14);
        v7 = core::result::Result<T,E>::unwrap(&v0, "src/configure.rs");
    } else {
        v3 = starship::configure::get_configuration();
        v10 = starship::config::ModuleConfig::load(&v3);
        v0 = toml::value::Value::try_from(&v10);
        v7 = core::result::Result<T,E>::unwrap(&v0, "src/configure.rs");
    }
    println!("# Warning: This config does not include keys that have an unset value\n");
    if a4 {
        v0 = struct16 {
            field_0: a3
            field_8: a3 + a4 * 24
        };
        if !<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v0) {
            goto LABEL_b6b8c7;
        }
    }
    v6 = struct24 {
        field_0: 0
        field_8: ""
    };
    v4 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(&v6);
    println!("# $all is shorthand for {}", &v4);
    v19 = toml::value::Value::get(&v8 as u8, "custom");
    if !v19 || *(v19 as &i64) < 9223372036854775814 {
        core::option::unwrap_failed(); /* do not return */
    }
    if !a2 && *((v19 + 48) as &i64) {
        v4 = core::iter::traits::iterator::Iterator::fold(*((v19 + 8) as &i64), *((v19 + 16) as &i64) * 112 + *((v19 + 8) as &i64), &v6);
        println!("# $custom (excluding any modules already listed in `format`) is shorthand for {}", &v4);
    }
    if a4 {
LABEL_b6b8c7:
        v0 = v9;
        v4 = starship::configure::extract_toml_paths(&v0, a3, a4);
        v3 = v3;
    } else {
        v3 = v9;
        v3 = v5;
    }
    toml::ser::to_string_pretty(&v1, &v3);
    v21 = core::result::Result<T,E>::unwrap(&v1);
    println!("{}", &v21);
    return struct24 {
        field_0: *(&v21.field_0 as &i128)
        field_16: v2
    };
}
