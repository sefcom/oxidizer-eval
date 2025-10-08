fn starship::modules::azure::get_azure_profile_info(a1: i64) -> Option<struct56> {
    let a0: i64;  // rdi
    let v0: struct24;  // [bp-0xb8]
    let v1: Option<struct24>;  // [bp-0xa0]
    let v2: struct24;  // [bp-0xa0]
    let v3: u128;  // [bp-0x90]
    let v4: iNone;  // [bp-0x80]
    let v5: struct40;  // [bp-0x70]
    let v6: iNone;  // [bp-0x68]
    let v7: u128;  // [bp-0x58]
    let v8: iNone;  // [bp-0x48]
    let v9: struct32;  // [bp-0x38]
    let v11: u64;  // rdx
    let v12: u64;  // rcx
    let v13: u64;  // r8

    v1 = starship::modules::azure::get_config_file_location(a1);
    if (((0 ^ v1 as i64) & (0 ^ -(v1 as i64))) >> 63) as char {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v0 = v2;
    std::path::PathBuf::push(&v0, "azureProfile.json");
    v1 = starship::modules::azure::load_azure_profile(&v0);
    match v1 {
        None => {
            return struct8 {
                field_0: 0x8000000000000000
            };
        },
        Some(_) => {
            v8 = v4;
            v7 = v3;
            v6 = v1 as i128;
            v9 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v7 as u8);
            <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::try_fold(&v1, &v9, v11, v12, v13);
            match v1 {
                Some(_) => {
                    return Some(struct56 {
                        field_0: v1 as i128
                        field_16: v3
                        field_32: v4
                        field_48: v5
                    });
                },
                None => {
                    return struct8 {
                        field_0: 0x8000000000000000
                    };
                },
            }
        },
    }
}
