fn uu_cp::disk_usage(a0: i64, a1: i64, a2: i8) -> u64 {
    let v0: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xe0]
    let v2: &[u8];  // r14
    let v3: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // r13
    let v4: u64;  // r13
    let v6: alloc::string::String;  // rdx
    let v8: u64;  // r13

    if !a1 {
        return 0;
    }
    v2 = a0;
    v3 = a1 * 24;
    if !a2 {
        loop {
            v4 = v3;
            v0 = std::fs::metadata(v2, a2);
            if let Err(_) = v0 {
                break;
            }
            v2 += 24;
            v3 = v4 - 24;
            if v4 == 24 {
                return 0;
            }
        }
    } else {
        loop {
            v8 = v3;
            v0 = std::fs::metadata(v2, v6);
            if let Err(_) = v0 {
                break;
            }
            if (*((&v0 as &char + 56) as &i32) & 0xf000) != 0x4000 {
                v2 += 24;
                v3 = v8 - 24;
                if v8 == 24 {
                    return 0;
                }
            } else if !(uu_cp::disk_usage_directory(*((v2 + 8) as &i64), *((v2 + 16) as &i64)) & 1) {
                v2 += 24;
                v3 = v8 - 24;
                if v8 == 24 {
                    return 0;
                }
            } else {
                return 1;
            }
        }
    }
    return 1;
}
