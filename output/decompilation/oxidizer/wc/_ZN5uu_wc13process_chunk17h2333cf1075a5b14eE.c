fn uu_wc::process_chunk(a0: &struct32, a1: u32, a2: u32, a3: &struct1) -> u64 {
    let v0: u64;  // [sp-0x48]
    let v1: u64;  // [sp-0x40]
    let v2: u64;  // [sp-0x38]
    let v4: u64;  // r14
    let v5: u64;  // rbp
    let v6: u64;  // r13
    let v7: u64;  // r14
    let v8: u64;  // rdx
    let v9: u64;  // rax

    v4 = a2;
    v1 = a1;
    v2 = a1 + a2;
    v5 = *(a3);
    if !core::str::validations::next_code_point(&v1) as i32 {
        a0->field_0 = a0->field_0 + v4;
        v9 = core::cmp::max_by(0, *(&a0->field_20 as &i64));
        a0->field_20 = v9;
        return v9;
    }
    v0 = a2;
    v6 = a0->field_8;
    v7 = a0->field_18;
    do {
        if v8 - 9 < 5 || v8 == 32 || v8 >= 128 && core::unicode::unicode_data::white_space::lookup(v8 & 4294967295) as i8 {
            *(a3) = 0;
            v5 = 0;
        } else if !v5 {
            *(a3) = 1;
            v7 += 1;
            a0->field_18 = v7;
            v5 = v5 & -0x100 | 1;
        }
    } while ((v6 += 1, core::str::validations::next_code_point(&v1) as i32));
    a0->field_8 = v6;
    v4 = v0;
}
