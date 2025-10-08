fn starship::modules::package::get_jsr_package_version(a0: u64, a1: u64, a2: i64) -> long long {
    let v0: Result<struct32, struct8>;  // [bp-0xa8]
    let v1: Result<struct32, struct9>;  // [bp-0xa8]
    let v2: struct32;  // [bp-0xa8]
    let v3: u64;  // [bp-0xa0]
    let v4: i64;  // [bp-0x90]
    let v5: &str;  // [bp-0x88], Other Possible Types: struct16
    let v6: struct16;  // [bp-0x87]
    let v8: u128;  // [bp-0x68]
    let v9: u64;  // [bp-0x60]
    let v10: core::option::Option<&str>;  // [bp-0x58]
    let v11: struct24;  // [bp-0x50], Other Possible Types: u16
    let v12: u8;  // [bp-0x4e]
    let v13: struct16;  // [bp-0x38]
    let v14: iNone;  // [bp-0x29]
    let v16: struct72;  // rcx
    let v17: &str;  // al
    let v18: struct16;  // xmm0
    let v19: &str;  // rax

    v5 = struct16 {
        field_0: "deno.json"
        field_8: "src/modules/package.rs"
    };
    v2 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find_map(&v5, a1);
    if (((0 ^ v3) & (0 ^ -(v3))) >> 63) as char {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v16 = v2.field_0 as i64;
    v10 = v4;
    v8 = *((&v2.field_0 as &char + 8) as &i128);
    if core::slice::<impl [T]>::ends_with(*(v16 as &i64), *((v16 + 8) as &i64)) {
        v11 = 257;
        v12 = 1;
        v0 = jsonc_parser::serde::parse_to_serde_value(v9, v10, &v11);
        v17 = v0 as i8;
        if let Ok(_) = v0 {
            v14 = *((&v0 as &char + 16) as &i128);
            *(&v13.field_0 as &i128) = *((&v0 as &char + 1) as &i128);
            if let Err(_) = v0 {
                goto LABEL_baf070;
            }
        }
    } else {
        v11 = struct24 {
            field_0: *((&v8 as &char + 8) as &i128)
            field_16: 0
        };
        v1 = serde_json::de::from_trait(&v11, a2 as u8);
        v17 = v1 as i8;
        if let Ok(_) = v1 {
LABEL_baf070:
            v6 = v18;
            v5 = v17;
            v19 = serde_json::value::Value::get(&v5, "version");
            if !v19 || *(v19 as &i8) != 3 {
                return struct8 {
                    field_0: 0x8000000000000000
                };
            }
            starship::modules::package::format_version(a0, *((v19 + 16) as &i64), *((v19 + 24) as &i64), *((a2 + 48) as &i64), *((a2 + 56) as &i64));
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
