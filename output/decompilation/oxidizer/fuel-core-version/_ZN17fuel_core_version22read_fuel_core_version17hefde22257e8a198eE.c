fn fuel_core_version::read_fuel_core_version(a1: &struct24) -> Result<struct40, struct16> {
    let a0: i64;  // rdi
    let v0: Result<struct24, struct16>;  // [bp-0xf8], Other Possible Types: u64
    let v1: Option<struct24>;  // [bp-0xf8], Other Possible Types: u64
    let v2: struct40;  // [bp-0xf8]
    let v3: struct24;  // [bp-0xf0]
    let v4: u64;  // [bp-0xe8]
    let v5: u128;  // [bp-0xe0]
    let v6: u64;  // [bp-0xd8]
    let v7: iNone;  // [bp-0xd0]
    let v8: iNone;  // [bp-0xc0]
    let v9: iNone;  // [bp-0xb0]
    let v10: u64;  // [bp-0xa0]
    let v11: struct24;  // [bp-0x98]
    let v12: struct32;  // [bp-0x98]
    let v13: iNone;  // [bp-0x88]
    let v14: Result<struct96, struct40>;  // [bp-0x78], Other Possible Types: struct32
    let v15: iNone;  // [bp-0x60]
    let v16: iNone;  // [bp-0x50]
    let v17: iNone;  // [bp-0x40]
    let v18: iNone;  // [bp-0x30]
    let v21: u64;  // rdx
    let v22: u64;  // rax
    let v23: u64;  // rdi

    v0 = std::fs::read_to_string(<&T as core::convert::AsRef<U>>::as_ref(a1), v21);
    if (((0 ^ v0 as i64) & (0 ^ -(v1))) >> 63) as char {
        return struct16 {
            field_0: 0
            field_8: eyre::error::<impl eyre::Report>::from_std(*((&v0 as &char + 8) as &i64), "scripts/fuel-core-version/src/main.rs")
        };
    }
    v14 = <toml::value::Value as core::str::traits::FromStr>::from_str(*((&v0 as &char + 8) as &i64), v4);
    v22 = v14 as i64;
    v11 = *((&v14 as &char + 8) as &i128);
    v13 = v15;
    if v22 != 2 {
        v10 = *((&v14 as &char + 88) as &i64);
        v9 = v18;
        v8 = v17;
        v7 = v16;
        v3 = v11;
        *(&v5 as void*) = v13;
        v0 = v22;
        return struct16 {
            field_0: 0
            field_8: eyre::error::<impl eyre::Report>::from_std(&v0)
        };
    }
    v14 = v12;
    v1 = fuel_core_version::find_dependency_version(&v14);
    match v1 {
        None => {
            return struct16 {
                field_0: 0
                field_8: eyre::error::<impl eyre::Report>::from_adhoc()
            };
        },
        Some(_) => {
            v2 = semver::parse::<impl core::str::traits::FromStr for semver::Version>::from_str(*((&v1 as &char + 8) as &i64), v4);
            v23 = *((&v2.field_0 as &char + 8) as &i64);
            if !v2.field_0 as i64 {
                return struct16 {
                    field_0: 0
                    field_8: eyre::error::<impl eyre::Report>::from_std(v23)
                };
            }
            return Ok(struct40 {
                field_0: v2.field_0 as i64
                field_8: v23
                field_16: *(&v2.field_16 as &i128)
                field_32: v6
            });
        },
    }
}
