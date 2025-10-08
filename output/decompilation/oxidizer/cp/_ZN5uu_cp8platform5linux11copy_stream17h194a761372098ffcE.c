fn uu_cp::platform::linux::copy_stream(a0: u64, a1: u64, a2: u64, a3: u64, a4: u8) -> long long {
    let v0: u64;  // [bp-0x100]
    let v1: u64;  // [bp-0xfc]
    let v2: Result<struct4, struct8>;  // [bp-0xf8]
    let v3: struct32;  // [bp-0xe8]
    let v4: Result<struct4, struct8>;  // [bp-0xc8], Other Possible Types: struct13, struct16
    let v5: u32;  // [bp-0xc4]
    let v6: core::fmt::Arguments;  // [bp-0xbc]

    v3 = struct32 {
        field_0: a0
        field_8: a1
        field_16: a2
        field_24: a3
    };
    v4 = std::fs::File::open(&v3);
    if let Ok(v0) = v4 {
        v6 = 0;
        v4 = struct13 {
            field_0: 0
            field_4: ~(uucore::features::mode::get_umask() as u32) & 402
            field_8: 0
            field_12: 1
        };
        v2 = std::fs::OpenOptions::open(&v4, &v3 as u64);
        if let Ok(v1) = v2 {
            v4 = uucore::features::buf_copy::linux::copy_stream(&v0, &v1);
            if !v4.field_0 {
                if !a4 {
                    return 0;
                }
                v4 = std::fs::File::metadata(&v0);
            }
        }
    }
    return 1;
}
