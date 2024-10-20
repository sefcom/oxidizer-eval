fn uu_du::parse_depth(a0: &u64, a1: u64, a2: u64, a3: u8) -> u64 {
    let v0: Enum;  // [sp-0x40], Other Possible Types: u128
    let v2: u64;  // rcx
    let v3: u64;  // rax
    let v5: u64;  // r15
    let v7: u64;  // rax
    let v10: &u64;  // rax

    if !a1 {
        v2 = 0;
        goto LABEL_4b10ed;
    }
    v0 = core::num::<impl core::str::traits::FromStr for usize>::from_str(a1, a2);
    if !v0 as i8 {
        if !(!a3) {
            goto LABEL_4b10ac;
        }
        v3 = *((&v0 as &char + 8) as &i64);
        v2 = 1;
LABEL_4b10ed:
        a0[1] = v2;
        a0[2] = v3;
        v7 = 0;
    } else {
        if !a3 {
            memcpy(v5, a1, a2);
            v10 = __rust_alloc(32, 8);
            *(v10) = 0;
        } else {
LABEL_4b10ac:
            memcpy(v5, a1, a2);
            v10 = __rust_alloc(32, 8);
            *(v10) = 1;
        }
        v10[1] = a2;
        v10[2] = v5;
        v10[3] = a2;
        a0[1] = v10;
        a0[2] = &g_5349c0;
        v7 = 1;
    }
    *(a0) = v7;
    return a0;
}
