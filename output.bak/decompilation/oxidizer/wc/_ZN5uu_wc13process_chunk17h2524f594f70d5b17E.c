fn uu_wc::process_chunk(a0: &struct24, a1: u32, a2: u32, a3: &struct8) -> u64 {
    let v0: u64;  // [sp-0x40]
    let v1: u64;  // [sp-0x38]
    let v3: void*;  // r12
    let v4: u64;  // rbp
    let v5: u64;  // r13
    let v7: u32;  // r14d
    let v9: u32;  // r14d
    let v11: u64;  // rax

    v0 = a1;
    v1 = a1 + a2;
    v3 = *(a3);
    if !core::str::validations::next_code_point(&v0) as i32 {
        v5 = a0[4];
    } else {
        v4 = a0[2];
        v5 = a0[4];
        do {
            v7 = v9;
            if v7 - 12 < 2 {
LABEL_4ba2d1:
                v5 = core::cmp::max_by(v3, v5);
                a0[4] = v5;
                v3 = 0;
                goto LABEL_4ba311;
            } else {
                if v7 == 9 {
                    v3 = (v3 & -8) + 8;
                    *(a3) = v3;
                    continue;
                }
                if v7 == 10 {
                    goto LABEL_4ba2d1;
                }
                v3 += (v7 < 127 ? -0x100 | 32 <= v7 : (v7 <= 159 ? 0 : unicode_width::tables::charwidth::lookup_width(v7)));
LABEL_4ba311:
                *(a3) = v3;
                if v7 == 10 {
                    v4 += 1;
                    a0[2] = v4;
                }
            }
        } while (core::str::validations::next_code_point(&v0) as i32);
    }
    *(a0) = *(a0) + a2;
    v11 = core::cmp::max_by(v3, v5);
    a0[4] = v11;
    return v11;
}
