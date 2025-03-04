fn uu_wc::process_chunk(a0: &struct32, a1: u32, a2: u32, a3: &struct8) -> u64 {
    let v0: u64;  // [sp-0x40]
    let v1: u64;  // [sp-0x38]
    let v3: void*;  // r12, Other Possible Types: u64
    let v4: u32;  // edx
    let v5: u32;  // r14d
    let v6: u64;  // r13
    let v7: u64;  // r15
    let v8: u64;  // rbp
    let v9: u64;  // rax
    let v10: u64;  // rax

    v0 = a1;
    v1 = a1 + a2;
    v3 = *(a3);
    if !core::str::validations::next_code_point(&v0) as i32 {
        v6 = a0[4];
    } else {
        v5 = v4;
        v6 = a0[4];
        v7 = a0[2];
        v8 = a0[1] + 1;
        do {
            if v5 - 12 < 2 {
LABEL_4ba68d:
                v6 = core::cmp::max_by(v3, v6);
                a0[4] = v6;
                v3 = 0;
                goto LABEL_4ba6cd;
            } else {
                if v5 == 9 {
                    v3 = (v3 & -8) + 8;
                    *(a3) = v3;
                    continue;
                }
                if v5 == 10 {
                    goto LABEL_4ba68d;
                }
                v9 = (v5 < 127 ? 32 <= v5 : (v5 <= 159 ? 0 : unicode_width::tables::charwidth::lookup_width(v5)));
                v3 += v9;
LABEL_4ba6cd:
                *(a3) = v3;
                if v5 == 10 {
                    v7 += 1;
                    a0[2] = v7;
                }
            }
        } while ((a0[1] = v8, v5 = v4, v8 += 1, core::str::validations::next_code_point(&v0) as i32));
    }
    *(a0) = *(a0) + a2;
    v10 = core::cmp::max_by(v3, v6);
    a0[4] = v10;
    return v10;
}
