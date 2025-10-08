fn uu_wc::word_count_from_input(a0: i64, a1: i64, a2: void*) -> long long {
    let v0: Result<struct4, struct8>;  // [bp-0x78], Other Possible Types: u64
    let v1: i32;  // [bp-0x74]
    let v2: u64;  // [bp-0x70]
    let v3: iNone;  // [bp-0x68], Other Possible Types: struct48
    let v4: iNone;  // [bp-0x58]
    let v5: u64;  // [bp-0x48]
    let v6: u64;  // [bp-0x40]
    let v7: iNone;  // [bp-0x38]
    let v8: iNone;  // [bp-0x28]
    let v9: u64;  // [bp-0x18]
    let v12: u8;  // dl
    let v13: u64;  // rax

    if *(a1 as &i64) == 9223372036854775809 {
        *(&v0 as &std::io::stdio::Stdin) = std::io::stdio::stdin();
        v3 = uu_wc::word_count_from_reader(std::io::stdio::Stdin::lock(&v0), v12 & 1, a2);
    } else {
        v0 = std::fs::File::open(a1);
        match v0 {
            Err(_) => {
                return struct16 {
                    field_0: 2
                    field_8: v2
                };
            },
            Ok(_) => {
                v3 = uu_wc::word_count_from_reader(v1 as u64, a2);
            },
        }
    }
    v9 = v5;
    v8 = v4;
    v7 = v3;
    return struct56 {
        field_0: v13
        field_8: v3
        field_24: v4
        field_40: v5
        field_48: v6
    };
}
