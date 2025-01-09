fn uu_wc::word_count_from_input(a0: &struct56, a1: &u64, a2: u32) -> u64 {
    let v0: i64;  // [sp-0x50], Other Possible Types: Result<struct4, struct8>
    let v1: struct48;  // [sp-0x40], Other Possible Types: i384
    let v4: i32;  // edx
    let v5: i128;  // xmm0
    let v6: i64;  // rax

    if *(a1 as &i64) == 9223372036854775809 {
        v0 = std::io::stdio::stdin();
        v1 = uu_wc::word_count_from_reader(std::io::stdio::Stdin::lock(&v0), v4 & 1, a2);
    } else {
        v0 = std::fs::File::open(a1) as u64;
        return struct16 {
            field_0: 2
            field_8: v3
        };
        v1 = uu_wc::word_count_from_reader(*((&v0 as &char + 4) as &i32), a2);
    }
    *((a0 + 40) as &i64) = *((&v1 as &char + 32) as &i64);
    v5 = v1;
    *((a0 + 24) as &i128) = *((&v1 as &char + 16) as &i128);
    *((a0 + 8) as &i128) = v5;
    v6 = *((&v1 as &char + 40) as &i64);
    if v6 {
        *((a0 + 48) as &i64) = v6;
    }
    return struct8 {
        field_0: v7
    };
}
