fn uu_wc::process_chunk(a0: &struct_0, a1: u64, a2: u64, a3: &u8) -> u64 {
    let v0: u64;  // [sp-0x50]
    let v1: u64;  // [sp-0x40]
    let v2: u64;  // [sp-0x38]
    let v4: u64;  // rbp
    let v5: u64;  // r14
    let v6: u64;  // r12
    let v8: u32;  // r13d
    let v9: u32;  // edx
    let v10: u32;  // r13d
    let v11: u64;  // rax

    v1 = a1;
    v2 = a1 + a2;
    v4 = *(a3);
    if !core::str::validations::next_code_point(&v1) as i32 {
        a0->field_0 = a0->field_0 + a2;
        v11 = core::cmp::max_by(0, *(&a0->field_20 as &i64));
        a0->field_20 = v11;
        return v11;
    }
    v0 = a0->field_18;
    v5 = a0->field_8;
    v6 = a0->field_10;
    do {
        v8 = v10;
        if v8 - 9 < 5 || v8 == 32 || v8 >= 128 && core::unicode::unicode_data::white_space::lookup(v8) as i8 {
            *(a3) = 0;
            v4 = 0;
        } else if !v4 {
            *(a3) = 1;
            v0 += 1;
            a0->field_18 = v0;
            v4 = v4 | -0x100 | 1;
        }
        if v8 == 10 {
            v6 += 1;
            a0->field_10 = v6;
        }
        v5 += 1;
        v10 = v9;
    } while (core::str::validations::next_code_point(&v1) as i32);
    a0->field_8 = v5;
}
