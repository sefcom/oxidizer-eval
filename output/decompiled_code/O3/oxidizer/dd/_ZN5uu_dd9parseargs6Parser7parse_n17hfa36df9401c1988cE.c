fn uu_dd::parseargs::Parser::parse_n(a0: &u64, a1: &u8, a2: u32) -> u64 {
    let v0: u8;  // [bp-0x40]
    let v1: i8;  // [bp-0x38]
    let v2: i8;  // [bp-0x30]
    let v4: u64;  // rax
    let v5: u64;  // r12
    let v6: &u8;  // rcx

    uu_dd::parseargs::parse_bytes_with_opt_multiplier(&v0, a1, a2);
    v4 = *(&v0 as &i64);
    v5 = v1;
    if v4 != 14 {
        *(&a0[2] as &i8) = v2;
        *(a0) = v4;
        a0[1] = v5;
        return v4;
    }
    if a2 > 15 {
        if core::slice::memchr::memchr_aligned(66, a1) == 1 {
            goto LABEL_49708a;
        }
        v4 = 0;
    } else {
        if !a2 {
            a0[1] = 0;
            a0[2] = v5;
            *(a0) = 14;
            return v4;
        }
        v6 = 0;
        while (*((a1 + v6) as &i8) != 66) {
            v6 += 1;
            if a2 == v6 {
                a0[1] = 0;
                a0[2] = v5;
                *(a0) = 14;
                return v4;
            }
        }
LABEL_49708a:
        v4 = 1;
    }
    a0[1] = v4;
    a0[2] = v5;
    *(a0) = 14;
    return v4;
}
