fn uu_wc::process_chunk(a0: &u64, a1: u64, a2: u64, a3: &u64, a4: &u8) -> u64 {
    let v0: u32;  // [sp-0x64], Other Possible Types: i32
    let v1: u64;  // [sp-0x60]
    let v2: u64;  // [sp-0x40]
    let v3: u64;  // [sp-0x38]
    let v5: void*;  // r13
    let v6: u64;  // rbp
    let v7: u64;  // r15
    let v8: u64;  // r12
    let v10: u32;  // r14d
    let v12: u32;  // r14d
    let v14: u64;  // rax

    v2 = a1;
    v3 = a1 + a2;
    v0 = *(a4);
    v5 = *(a3);
    if !core::str::validations::next_code_point(&v2) as i32 {
        v6 = a0[4];
    } else {
        v1 = a0[3];
        v6 = a0[4];
        v7 = a0[2];
        v8 = a0[1] + 1;
        do {
            v10 = v12;
            if v10 - 9 < 5 || v10 == 32 || v10 >= 128 && core::unicode::unicode_data::white_space::lookup(v10) as i8 {
                *(a4) = 0;
                v0 = 0;
            } else if !v0 as i8 {
                *(a4) = 1;
                v1 += 1;
                a0[3] = v1;
                v0 = v1 | -0x100 | 1;
            }
            if v10 - 12 < 2 {
LABEL_4ba41a:
                v6 = core::cmp::max_by(v5, v6);
                a0[4] = v6;
                v5 = 0;
                goto LABEL_4ba4ac;
            } else {
                if v10 == 9 {
                    v5 = (v5 & -8) + 8;
                    *(a3) = v5;
                    continue;
                }
                if v10 == 10 {
                    goto LABEL_4ba41a;
                }
                v5 += (v10 < 127 ? -0x100 | 32 <= v10 : (v10 <= 159 ? 0 : unicode_width::tables::charwidth::lookup_width(v10)));
LABEL_4ba4ac:
                *(a3) = v5;
                if v10 == 10 {
                    v7 += 1;
                    a0[2] = v7;
                }
            }
        } while ((a0[1] = v8, v8 += 1, core::str::validations::next_code_point(&v2) as i32));
    }
    *(a0) = *(a0) + a2;
    v14 = core::cmp::max_by(v5, v6);
    a0[4] = v14;
    return v14;
}
