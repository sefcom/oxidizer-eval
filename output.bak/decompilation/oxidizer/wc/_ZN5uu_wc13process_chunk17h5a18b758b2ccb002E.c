fn uu_wc::process_chunk(a0: &struct16, a1: u32, a2: u32, a3: &struct8, a4: &u8) -> u64 {
    let v0: u64;  // [sp-0x50]
    let v1: u64;  // [sp-0x40]
    let v2: u64;  // [sp-0x38]
    let v4: u64;  // rbx
    let v5: void*;  // r13
    let v6: u64;  // rbp
    let v8: u32;  // r14d
    let v10: u32;  // r14d
    let v12: u64;  // rax

    v1 = a1;
    v2 = a1 + a2;
    v4 = *(a4);
    v5 = *(a3);
    if !core::str::validations::next_code_point(&v1) as i32 {
        v6 = a0[4];
    } else {
        v0 = a0[3];
        v6 = a0[4];
        do {
            v8 = v10;
            if v8 - 9 < 5 || v8 == 32 || v8 >= 128 && core::unicode::unicode_data::white_space::lookup(v8) as i8 {
                *(a4) = 0;
                v4 = 0;
            } else if !v4 {
                *(a4) = 1;
                v0 += 1;
                a0[3] = v0;
                v4 = v4 | -0x100 | 1;
            }
            if v8 - 12 < 2 {
LABEL_4ba780:
                v6 = core::cmp::max_by(v5, v6);
                a0[4] = v6;
                v5 = 0;
            } else {
                if v8 == 9 {
                    v5 = (v5 & -8) + 8;
                    continue;
                }
                if v8 == 10 {
                    goto LABEL_4ba780;
                }
                v5 += (v8 < 127 ? -0x100 | 32 <= v8 : (v8 <= 159 ? 0 : unicode_width::tables::charwidth::lookup_width(v8)));
            }
        } while ((*(a3) = v5 as u64, core::str::validations::next_code_point(&v1) as i32));
    }
    *(a0) = *(a0) + a2;
    v12 = core::cmp::max_by(v5, v6);
    a0[4] = v12;
    return v12;
}
