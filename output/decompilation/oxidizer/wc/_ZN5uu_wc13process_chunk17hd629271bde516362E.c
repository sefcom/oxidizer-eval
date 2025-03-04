fn uu_wc::process_chunk(a0: &struct16, a1: u32, a2: u32, a3: &struct8) -> u64 {
    let v0: u64;  // [sp-0x40]
    let v1: u64;  // [sp-0x38]
    let v3: void*;  // r12, Other Possible Types: u64
    let v4: u64;  // r13
    let v5: u64;  // rdx
    let v7: u64;  // rax

    v0 = a1;
    v1 = a1 + a2;
    v3 = *(a3);
    v4 = a0[4];
    if core::str::validations::next_code_point(&v0) as i32 {
        do {
            if v5 - 12 < 2 {
LABEL_4bac80:
                v4 = core::cmp::max_by(v3, v4);
                a0[4] = v4;
                v3 = 0;
            } else {
                if v5 == 9 {
                    v3 = (v3 & -8) + 8;
                    continue;
                }
                if v5 == 10 {
                    goto LABEL_4bac80;
                }
                v3 += (v5 < 127 ? 32 <= v5 : (v5 <= 159 ? 0 : unicode_width::tables::charwidth::lookup_width(v5 & 4294967295)));
            }
        } while ((*(a3) = v3 as u64, core::str::validations::next_code_point(&v0) as i32));
    }
    *(a0) = *(a0) + a2;
    v7 = core::cmp::max_by(v3, v4);
    a0[4] = v7;
    return v7;
}
