fn starship::modules::pulumi::get_pulumi_workspace(a1: i64, a2: i64, a3: i64, a4: &[u8]) -> Option<struct24> {
    let a0: i64;  // rdi
    let v0: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x168], Other Possible Types: core::str::pattern::CharSearcher, struct104
    let v1: Option<struct24>;  // [bp-0x168]
    let v2: struct32;  // [bp-0x160], Other Possible Types: unsigned long
    let v3: struct66;  // [bp-0x158], Other Possible Types: u64
    let v4: &str;  // [bp-0x150]
    let v5: struct32;  // [bp-0x148]
    let v6: Result<struct32, struct9>;  // [bp-0xf8]
    let v7: struct24;  // [bp-0xe8]
    let v8: struct16;  // [bp-0xd8], Other Possible Types: struct28
    let v9: u128;  // [bp-0xd8]
    let v10: Option<struct72>;  // [bp-0xd0]
    let v11: Option<struct24>;  // [bp-0xc8], Other Possible Types: struct32
    let v12: Option<struct32>;  // [bp-0xc0]
    let v13: &str;  // [bp-0xb8]
    let v14: &str;  // [bp-0xa8]
    let v15: struct16;  // [bp-0x98]
    let v16: iNone;  // [bp-0x88]
    let v17: i8;  // [bp-0x78]
    let v18: Option<struct80>;  // [bp-0x68]
    let v19: Option<struct24>;  // [bp-0x60]
    let v20: struct24;  // [bp-0x58]
    let v21: struct20;  // [bp-0x40]
    let v23: &str;  // xmm0

    v18 = a2;
    v19 = a3;
    v8 = <digest::core_api::wrapper::CoreWrapper<T> as core::default::Default>::default();
    v0 = core::str::converts::from_utf8(a4);
    match v0 {
        Err(_) => {
            return struct8 {
                field_0: 0x8000000000000000
            };
        },
        Ok(_) => {
            <D as digest::digest::Digest>::update(&v8, v2, v3);
            v23 = *(&v8.field_0 as &i128);
            v0 = struct104 {
                field_0: v23
                field_16: *((&v8.field_8 as &char + 8) as &i128)
                field_32: v13
                field_48: v14
                field_64: v15
                field_80: v16
                field_96: *(&v17 as &i64)
            };
            v21 = digest::FixedOutput::finalize_fixed(&v0);
            v20 = starship::utils::encode_to_hex(&v21);
            v9 as u64 = &v18;
            v10 = <&T as core::fmt::Display>::fmt;
            v11 = &v20;
            v12 = <alloc::string::String as core::fmt::Display>::fmt;
            v0 = &g_11f5ce8.haystack.data_ptr;
            v2 = 3;
            v5 = 0;
            v3 = &v9 as u64;
            v4 = 2;
            core::option::Option<T>::map_or_else(&v21, 0, a2, &v0);
            v6 = v21.field_0;
            v7 = *(&v21.field_16 as &i64);
            v1 = starship::modules::pulumi::pulumi_home_dir();
            if !((((0 ^ v1 as i64) & (0 ^ -(v0))) >> 63) as char) {
                v11 = v3;
                v9 = v1 as i128 as u128;
                std::path::PathBuf::push(&v9 as u64, "workspaces");
                v8 = std::path::PathBuf::push(&v6);
                return Some(struct24 {
                    field_0: *(&v8.field_0 as &i128)
                    field_16: v11
                });
            }
            return struct8 {
                field_0: 0x8000000000000000
            };
        },
    }
}
