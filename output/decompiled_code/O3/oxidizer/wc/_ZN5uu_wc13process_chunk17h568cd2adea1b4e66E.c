fn uu_wc::process_chunk(a0: &u64, a1: u64, a2: u64, a3: &u64) -> u64 {
    let v0: u64;  // [sp-0x40]
    let v1: u64;  // [sp-0x38]
    let v3: void*;  // r12
    let v4: u64;  // r13
    let v5: u64;  // r15
    let v6: u64;  // rbp
    let v8: u32;  // r14d
    let v10: u32;  // r14d
    let v12: u64;  // rax

    v0 = a1;
    v1 = a1 + a2;
    v3 = *(a3);
    if !core::str::validations::next_code_point(&v0) as i32 {
        v4 = a0[4];
    } else {
        v4 = a0[4];
        v5 = a0[2];
        v6 = a0[1] + 1;
        do {
            v8 = v10;
            if v8 - 12 < 2 {
LABEL_4ba68d:
                v4 = core::cmp::max_by(v3, v4);
                a0[4] = v4;
                v3 = 0;
                goto LABEL_4ba6cd;
            } else {
                if v8 == 9 {
                    v3 = (v3 & -8) + 8;
                    *(a3) = v3;
                    continue;
                }
                if v8 == 10 {
                    goto LABEL_4ba68d;
                }
                v3 += (v8 < 127 ? -0x100 | 32 <= v8 : (v8 <= 159 ? 0 : unicode_width::tables::charwidth::lookup_width(v8)));
LABEL_4ba6cd:
                *(a3) = v3;
                if v8 == 10 {
                    v5 += 1;
                    a0[2] = v5;
                }
            }
        } while ((a0[1] = v6, v6 += 1, core::str::validations::next_code_point(&v0) as i32));
    }
    *(a0) = *(a0) + a2;
    v12 = core::cmp::max_by(v3, v4);
    a0[4] = v12;
    return v12;
}
