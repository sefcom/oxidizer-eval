fn starship::modules::rust::find_rust_toolchain_file::read_channel(a0: i64, a1: u32, a2: u32, a3: u8) -> int {
    let v0: u64;  // [bp-0x100]
    let v1: u128;  // [bp-0xf8]
    let v2: u64;  // [bp-0xf0]
    let v3: Option<struct24>;  // [bp-0xe8]
    let v4: Result<struct24, struct16>;  // [bp-0xd0], Other Possible Types: struct66, struct88
    let v5: struct24;  // [bp-0xd0], Other Possible Types: u64
    let v6: struct24;  // [bp-0xd0]
    let v7: struct24;  // [bp-0xc8]
    let v8: u128;  // [bp-0xc0]
    let v9: Result<struct32, struct9>;  // [bp-0x78], Other Possible Types: core::str::pattern::CharSearcher
    let v10: u128;  // [bp-0x68]
    let v11: struct16;  // [bp-0x40]
    let v14: &str;  // rax

    v4 = std::fs::read_to_string(a1, a2);
    if (((0 ^ v4 as i64) & (0 ^ -(v5))) >> 63) as char {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v1 = *((&v4 as &char + 8) as &i128);
    v0 = v4 as i64;
    v9 = <char as core::str::pattern::Pattern>::into_searcher(0xa, v1 as i64, v2);
    v4 = struct66 {
        field_0: 0
        field_8: v2
        field_16: *(&v9.haystack.data_ptr as &i128)
        field_32: v10
        field_48: v10
        field_64: 0
    };
    v14 = core::iter::traits::iterator::Iterator::fold(&v4);
    if v14 {
        if v14 == 1 && !a3 {
            v3 = core::option::Option<T>::filter(&v0);
            match v3 {
                Some(_) => {
                    v5 = starship::bug_report::get_shell_info::{{closure}}(&v3);
                    return struct24 {
                        field_0: *(&v5.field_0 as &i128)
                        field_16: v5.field_16
                    };
                },
                None => {
                    return struct8 {
                        field_0: 0x8000000000000000
                    };
                },
            }
        }
        v4 = toml::de::from_str(v1 as i64, v2);
        if v4.field_0 as i32 != 2 {
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
        v9 = v8;
        if v7 == 9223372036854775809 {
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
    }
    v11 = v7;
    v3 = core::option::Option<T>::filter(&v11);
    match v3 {
        None => {
            return struct8 {
                field_0: 0x8000000000000000
            };
        },
        Some(_) => {
            v6 = starship::bug_report::get_shell_info::{{closure}}(&v3);
            return struct24 {
                field_0: *(&v6.field_0 as &i128)
                field_16: v6.field_16
            };
        },
    }
}
