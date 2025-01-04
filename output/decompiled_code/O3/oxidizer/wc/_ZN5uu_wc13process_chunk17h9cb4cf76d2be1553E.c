fn uu_wc::process_chunk(a0: &u64, a1: u64, a2: u64, a3: &u64, a4: &u8) -> u64 {
    let v0: u64;  // [sp-0x60]
    let v1: u64;  // [sp-0x40]
    let v2: u64;  // [sp-0x38]
    let v4: u64;  // r15
    let v5: void*;  // r13
    let v6: u64;  // r12
    let v7: u64;  // rbp
    let v9: u32;  // r14d
    let v11: u32;  // r14d
    let v13: u64;  // rax

    v1 = a1;
    v2 = a1 + a2;
    v4 = *(a4);
    v5 = *(a3);
    if !core::str::validations::next_code_point(&v1) as i32 {
        v7 = a0[4];
    } else {
        v6 = a0[2];
        v0 = a0[3];
        v7 = a0[4];
        do {
            v9 = v11;
            if v9 - 9 < 5 || v9 == 32 || v9 >= 128 && core::unicode::unicode_data::white_space::lookup(v9) as i8 {
                *(a4) = 0;
                v4 = 0;
            } else if !v4 {
                *(a4) = 1;
                v0 += 1;
                a0[3] = v0;
                v4 = v4 | -0x100 | 1;
            }
            if v9 - 12 < 2 {
LABEL_4baabe:
                v7 = core::cmp::max_by(v5, v7);
                a0[4] = v7;
                v5 = 0;
                goto LABEL_4bab47;
            } else {
                if v9 == 9 {
                    v5 = (v5 & -8) + 8;
                    *(a3) = v5;
                    continue;
                }
                if v9 == 10 {
                    goto LABEL_4baabe;
                }
                v5 += (v9 < 127 ? -0x100 | 32 <= v9 : (v9 <= 159 ? 0 : unicode_width::tables::charwidth::lookup_width(v9)));
LABEL_4bab47:
                *(a3) = v5;
                if v9 == 10 {
                    v6 += 1;
                    a0[2] = v6;
                }
            }
        } while (core::str::validations::next_code_point(&v1) as i32);
    }
    *(a0) = *(a0) + a2;
    v13 = core::cmp::max_by(v5, v7);
    a0[4] = v13;
    return v13;
}
