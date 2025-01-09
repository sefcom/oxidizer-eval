fn uu_wc::process_chunk(a0: &struct24, a1: u32, a2: u32, a3: &struct8, a4: &u8) -> u64 {
    let v0: u64;  // [sp-0x60]
    let v1: u64;  // [sp-0x40]
    let v2: u64;  // [sp-0x38]
    let v4: u64;  // r15
    let v5: void*;  // r13
    let v6: u64;  // rbp
    let v7: u64;  // r12
    let v9: u32;  // r14d
    let v11: u32;  // r14d
    let v12: u64;  // r13
    let v14: u64;  // rax

    v1 = a1;
    v2 = a1 + a2;
    v4 = *(a4);
    v5 = *(a3);
    if !core::str::validations::next_code_point(&v1) as i32 {
        v6 = a0[4];
    } else {
        v0 = a0[3];
        v6 = a0[4];
        v7 = a0[1] + 1;
        do {
            v9 = v11;
            if v9 - 9 < 5 || v9 == 32 || v9 >= 128 && core::unicode::unicode_data::white_space::lookup(v9) as i8 {
                *(a4) = 0;
                v4 = 0;
            } else if !v4 {
                *(a4) = 1;
                v0 += 1;
                a0[3] = v0;
                v4 = v4 & -0x100 | 1;
            }
            if v9 - 12 < 2 {
LABEL_4ba8f0:
                v6 = core::cmp::max_by(v12, v6);
                a0[4] = v6;
                v5 = 0;
            } else {
                if v9 == 9 {
                    v5 = (v12 & -8) + 8;
                    continue;
                }
                if v9 == 10 {
                    goto LABEL_4ba8f0;
                }
                v5 = v12 + (v9 < 127 ? 32 <= v9 : (v9 <= 159 ? 0 : unicode_width::tables::charwidth::lookup_width(v9)));
            }
        } while ((*(a3) = v5 as u64, a0[1] = v7, v7 += 1, core::str::validations::next_code_point(&v1) as i32));
    }
    *(a0) = *(a0) + a2;
    v14 = core::cmp::max_by(v5, v6);
    a0[4] = v14;
    return v14;
}
