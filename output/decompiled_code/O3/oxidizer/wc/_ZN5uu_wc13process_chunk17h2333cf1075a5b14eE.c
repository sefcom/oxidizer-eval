fn uu_wc::process_chunk(a0: &struct_0, a1: u64, a2: u64, a3: &u8) -> u64 {
    let v0: u64;  // [sp-0x40]
    let v1: u64;  // [sp-0x38]
    let v3: u64;  // rbp
    let v4: u64;  // r13
    let v5: u64;  // r14
    let v6: u64;  // rdx
    let v7: u64;  // rax

    v0 = a1;
    v1 = a1 + a2;
    v3 = *(a3);
    if !core::str::validations::next_code_point(&v0) as i32 {
        a0->field_0 = a0->field_0 + a2;
        v7 = core::cmp::max_by(0, *(&a0->field_20 as &i64));
        a0->field_20 = v7;
        return v7;
    }
    v4 = a0->field_8;
    v5 = a0->field_18;
    do {
        if v6 - 9 < 5 || v6 == 32 || v6 >= 128 && core::unicode::unicode_data::white_space::lookup(v6 & 4294967295) as i8 {
            *(a3) = 0;
            v3 = 0;
        } else if !v3 {
            *(a3) = 1;
            v5 += 1;
            a0->field_18 = v5;
            v3 = v3 | -0x100 | 1;
        }
    } while ((v4 += 1, core::str::validations::next_code_point(&v0) as i32));
    a0->field_8 = v4;
}
