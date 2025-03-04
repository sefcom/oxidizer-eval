fn uu_wc::process_chunk(a0: &struct32, a1: u32, a2: u32, a3: &struct8, a4: &u8) -> u64 {
    let v0: u32;  // [sp-0x64]
    let v1: u64;  // [sp-0x60]
    let v2: u64;  // [sp-0x40]
    let v3: u64;  // [sp-0x38]
    let v5: u64;  // r13, Other Possible Types: void*
    let v6: u32;  // edx
    let v7: u32;  // r14d
    let v8: u64;  // rbp
    let v9: u64;  // r15
    let v10: u64;  // r12
    let v11: u64;  // rax
    let v12: u64;  // rax

    v2 = a1;
    v3 = a1 + a2;
    v0 = *(a4);
    v5 = *(a3);
    if !core::str::validations::next_code_point(&v2) as i32 {
        v8 = a0[4];
    } else {
        v7 = v6;
        v1 = a0[3];
        v8 = a0[4];
        v9 = a0[2];
        v10 = a0[1] + 1;
        do {
            if v7 - 9 < 5 || v7 == 32 || v7 >= 128 && core::unicode::unicode_data::white_space::lookup(v7) as i8 {
                *(a4) = 0;
                v0 = 0;
            } else if !v0 as i8 {
                *(a4) = 1;
                v1 += 1;
                a0[3] = v1;
                v0 = v1 & -0x100 | 1;
            }
            if v7 - 12 < 2 {
LABEL_4ba41a:
                v8 = core::cmp::max_by(v5, v8);
                a0[4] = v8;
                v5 = 0;
                goto LABEL_4ba4ac;
            } else {
                if v7 == 9 {
                    v5 = (v5 & -8) + 8;
                    *(a3) = v5;
                    continue;
                }
                if v7 == 10 {
                    goto LABEL_4ba41a;
                }
                v11 = (v7 < 127 ? 32 <= v7 : (v7 <= 159 ? 0 : unicode_width::tables::charwidth::lookup_width(v7)));
                v5 += v11;
LABEL_4ba4ac:
                *(a3) = v5;
                if v7 == 10 {
                    v9 += 1;
                    a0[2] = v9;
                }
            }
        } while ((a0[1] = v10, v7 = v6, v10 += 1, core::str::validations::next_code_point(&v2) as i32));
    }
    *(a0) = *(a0) + a2;
    v12 = core::cmp::max_by(v5, v8);
    a0[4] = v12;
    return v12;
}
