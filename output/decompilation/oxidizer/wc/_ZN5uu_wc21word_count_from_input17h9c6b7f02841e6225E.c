fn uu_wc::word_count_from_input(a0: &struct56, a1: &u64, a2: u32) -> u64 {
    let v0: i64;  // [sp-0x50], Other Possible Types: Result<struct4, struct8>
    let v1: struct48;  // [sp-0x40], Other Possible Types: int
    let v3: i32;  // edx
    let v4: i64;  // rax
    let v5: iNone;  // xmm0
    let v6: i64;  // rax

    if *(a1 as &i64) == 9223372036854775809 {
        v0 = std::io::stdio::stdin();
        v1 = uu_wc::word_count_from_reader(std::io::stdio::Stdin::lock(&v0), (v3 & 1) as u64, a2);
    } else {
        v0 = std::fs::File::open(a1);
        match v0 {
            Err(v4) => {
                return struct16 {
                    field_0: 2
                    field_8: v4
                };
            },
            Ok(_) => {
                v1 = uu_wc::word_count_from_reader(*((&v0 as &char + 4) as &i32) as u32 as u64, a2);
            },
        }
    }
    *((a0 + 40) as &i64) = (&v1)[32] as i64;
    v5 = v1 as i128;
    *((a0 + 24) as &i128) = (&v1)[16] as i128;
    *((a0 + 8) as void*) = v5;
    v6 = (&v1)[40] as i64;
    if v6 {
        *((a0 + 48) as &unsigned long) = v6;
    }
    return struct8 {
        field_0: v4
    };
}
