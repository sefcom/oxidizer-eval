fn starship::modules::aws::get_aws_profile_and_region(a0: i64, a1: u64, a2: u64) -> int {
    let v0: Option<struct24>;  // [bp-0x118], Other Possible Types: alloc::string::String, struct16
    let v1: u128;  // [bp-0x118]
    let v2: Result<struct24, struct16>;  // [bp-0x108], Other Possible Types: struct32, u64
    let v3: Option<struct24>;  // [bp-0x100], Other Possible Types: Result<struct24, struct24>
    let v4: struct24;  // [bp-0xf0]
    let v5: Option<struct24>;  // [bp-0xe8]
    let v6: u128;  // [bp-0xe8]
    let v7: alloc::string::String;  // [bp-0xd0]
    let v8: i64;  // [bp-0xc0]
    let v9: iNone;  // [bp-0xb8]
    let v10: u64;  // [bp-0xa8]
    let v11: &str;  // [bp-0xa0]
    let v12: &str;  // [bp-0x90]
    let v13: Option<struct24>;  // [bp-0x80]
    let v14: alloc::string::String;  // [bp-0x80], Other Possible Types: u64
    let v15: iNone;  // [bp-0x78]
    let v16: &str;  // [bp-0x68]
    let v17: &str;  // [bp-0x58]
    let v18: &str;  // [bp-0x48]
    let v19: &str;  // [bp-0x38]
    let v20: &str;  // [bp-0x28]
    let v21: i8;  // [bp-0x18]
    let v23: struct32;  // rax
    let v24: u64;  // rax

    v16 = "AWSU_PROFILE";
    v17 = "AWS_VAULT";
    v18 = "AWSUME_PROFILE";
    v19 = "AWS_PROFILE";
    v20 = "AWS_SSO_PROFILE";
    v11 = "AWS_REGION";
    v12 = "AWS_DEFAULT_REGION";
    v0 = struct16 {
        field_0: &v16 as u64
        field_8: &v21
    };
    v13 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find_map(&v0);
    v0 = struct16 {
        field_0: &v11 as u64
        field_8: &v13
    };
    v5 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find_map(&v0);
    if (((0 ^ v13 as i64) & (0 ^ -(v14))) >> 63) as char {
        match v5 {
            None => {
                v3 = 0x8000000000000000;
                v0 = starship::modules::aws::get_aws_region_from_config(a1, &g_53e6c8, a2);
                v23 = v2;
                return struct40 {
                    field_0: v3 as i128
                    field_16: v4
                    field_24: v0 as i128
                };
            },
            Some(_) => {
                return struct48 {
                    field_0: 0x8000000000000000
                    padding_8: <UNKNOWN>
                    field_24: <UNKNOWN>
                    padding_32: <UNKNOWN>
                    field_40: v24
                };
            },
        }
    } else {
        match v5 {
            None => {
                v7 = v14;
                v0 = <alloc::string::String as core::clone::Clone>::clone(&v7);
                v10 = v2;
                v9 = *(&v0.vec.buf.inner.cap as &i128);
                v2 = v8;
                v1 = *(&v7.vec.buf.inner.cap as &i128) as u128;
                v3 = starship::modules::aws::get_aws_region_from_config(a1, &v0, a2);
                return struct48 {
                    field_0: v9
                    field_16: v10
                    field_24: v3 as i128
                    field_40: v4
                };
            },
            Some(_) => {
                return struct24 {
                    field_0: v13 as i64
                    field_8: v15
                };
            },
        }
    }
}
