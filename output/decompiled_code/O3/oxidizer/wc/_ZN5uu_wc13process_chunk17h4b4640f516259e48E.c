fn uu_wc::process_chunk(a0: &u64, a1: u64, a2: u64, a3: &u64) -> u64 {
    let v0: u64;  // [sp-0x40]
    let v1: u64;  // [sp-0x38]
    let v3: void*;  // r12
    let v4: u64;  // r13
    let v5: u64;  // r14
    let v6: u64;  // rdx
    let v8: u64;  // r12
    let v9: u64;  // rax

    v0 = a1;
    v1 = a1 + a2;
    v3 = *(a3);
    if !core::str::validations::next_code_point(&v0) as i32 {
        v4 = a0[4];
    } else {
        v4 = a0[4];
        v5 = a0[1] + 1;
        do {
            if v6 - 12 < 2 {
LABEL_4ba550:
                v4 = core::cmp::max_by(v3, v4);
                a0[4] = v4;
                v3 = 0;
            } else {
                if v6 == 9 {
                    v3 = (v3 & -8) + 8;
                    continue;
                }
                if v6 == 10 {
                    goto LABEL_4ba550;
                }
                v3 += (v6 < 127 ? -0x100 | 32 <= v6 : (v6 <= 159 ? 0 : unicode_width::tables::charwidth::lookup_width(v6 & 4294967295)));
            }
        } while ((*(a3) = v3 as u64, a0[1] = v5, v5 += 1, core::str::validations::next_code_point(&v0) as i32));
    }
    *(a0) = *(a0) + a2;
    v9 = core::cmp::max_by(v8, v4);
    a0[4] = v9;
    return v9;
}
