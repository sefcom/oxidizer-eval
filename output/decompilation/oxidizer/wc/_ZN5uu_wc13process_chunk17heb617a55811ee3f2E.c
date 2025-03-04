fn uu_wc::process_chunk(a0: &struct32, a1: u32, a2: u32, a3: &struct1) -> u64 {
    let v0: u64;  // [sp-0x50]
    let v1: u64;  // [sp-0x48]
    let v2: u64;  // [sp-0x40]
    let v3: u64;  // [sp-0x38]
    let v5: u64;  // r14
    let v6: u64;  // rbp
    let v7: u32;  // edx
    let v8: u32;  // r13d
    let v9: u64;  // r14
    let v10: u64;  // r12
    let v11: u64;  // rax

    v5 = a2;
    v2 = a1;
    v3 = a1 + a2;
    v6 = *(a3);
    if !core::str::validations::next_code_point(&v2) as i32 {
        a0->field_0 = a0->field_0 + v5;
        v11 = core::cmp::max_by(0, *(&a0->field_20 as &i64));
        a0->field_20 = v11;
        return v11;
    }
    v8 = v7;
    v1 = a2;
    v0 = a0->field_18;
    v9 = a0->field_8;
    v10 = a0->field_10;
    do {
        if v8 - 9 < 5 || v8 == 32 || v8 >= 128 && core::unicode::unicode_data::white_space::lookup(v8) as i8 {
            *(a3) = 0;
            v6 = 0;
        } else if !v6 {
            *(a3) = 1;
            v0 += 1;
            a0->field_18 = v0;
            v6 = v6 & -0x100 | 1;
        }
        if v8 == 10 {
            v10 += 1;
            a0->field_10 = v10;
        }
        v9 += 1;
        v8 = v7;
    } while (core::str::validations::next_code_point(&v2) as i32);
    a0->field_8 = v9;
    v5 = v1;
}
