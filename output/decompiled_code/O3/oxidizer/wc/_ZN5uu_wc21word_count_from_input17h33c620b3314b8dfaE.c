fn uu_wc::word_count_from_input(a0: &struct_0, a1: &u64, a2: u64) -> u64 {
    let v0: u64;  // [sp-0x50], Other Possible Types: Result<struct4, struct8>
    let v1: i8;  // [bp-0x48]
    let v2: u8;  // [bp-0x40]
    let v3: i8;  // [bp-0x30]
    let v4: i8;  // [bp-0x20]
    let v5: i8;  // [bp-0x18]
    let v7: u32;  // edx
    let v8: u64;  // rax
    let v9: u128;  // xmm0
    let v10: u64;  // rax

    if *(a1) == 9223372036854775809 {
        v0 = std::io::stdio::stdin();
        uu_wc::word_count_from_reader(&v2, std::io::stdio::Stdin::lock(&v0), v7 & 1, a2);
    } else {
        v0 = std::fs::File::open(a1, a2);
        match v0 {
            Err(_) => {
                v8 = v1;
                return struct16 {
                    field_0: 2
                    field_8: v8
                };
            },
            Ok(_) => {
                uu_wc::word_count_from_reader(&v2, *((&v0 as &char + 4) as &i32) as u32 as u64, a2);
            },
        }
    }
    *((&a0->field_18 as &char + 8) as &i8) = v4;
    v9 = *(&v2 as &i128);
    (&a0->padding_10)[1] = v3;
    a0->field_8 = v9;
    v10 = v5;
    if !v10 {
        v8 = 0;
    } else {
        a0->field_28 = v10;
        v8 = 1;
    }
    return struct8 {
        field_0: v8
    };
}
