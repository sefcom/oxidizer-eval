fn uu_wc::process_chunk(a0: &struct24, a1: u32, a2: u32, a3: &struct1) -> u64 {
    let v0: u64;  // [sp-0x50]
    let v1: u64;  // [sp-0x40]
    let v2: u64;  // [sp-0x38]
    let v4: u64;  // rbp
    let v5: u64;  // r14
    let v7: u32;  // r13d
    let v8: u32;  // edx
    let v9: u32;  // r13d
    let v10: u64;  // rax

    v1 = a1;
    v2 = a1 + a2;
    v4 = *(a3);
    if !core::str::validations::next_code_point(&v1) as i32 {
        a0->field_0 = a0->field_0 + a2;
        v10 = core::cmp::max_by(0, *(&a0->field_20 as &i64));
        a0->field_20 = v10;
        return v10;
    }
    v5 = a0->field_10;
    v0 = a0->field_18;
    do {
        v7 = v9;
        if v7 - 9 < 5 || v7 == 32 || v7 >= 128 && core::unicode::unicode_data::white_space::lookup(v7) as i8 {
            *(a3) = 0;
            v4 = 0;
        } else if !v4 {
            *(a3) = 1;
            v0 += 1;
            a0->field_18 = v0;
            v4 = v4 & -0x100 | 1;
        }
        if v7 == 10 {
            v5 += 1;
            a0->field_10 = v5;
        }
        v9 = v8;
    } while (core::str::validations::next_code_point(&v1) as i32);
}
