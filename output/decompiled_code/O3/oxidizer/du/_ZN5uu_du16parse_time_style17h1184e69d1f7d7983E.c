fn uu_du::parse_time_style(a0: &u64, a1: &u16, a2: u64) -> u64 {
    let v2: u64;  // r15
    let v4: u64;  // rax
    let v5: &u64;  // rax

    if !a1 {
        a0[1] = &g_426c4a;
        a0[2] = 14;
        goto LABEL_4b0ef7;
    } else {
        if !a2 {
            goto LABEL_4b0f68;
        }
        if a2 == 3 {
            if !(!(a1[1] ^ 111)) || !(!(*(a1) ^ 29545)) {
                goto LABEL_4b0f38;
            }
            a0[1] = &g_416c78;
            a0[2] = 8;
LABEL_4b0ef7:
            v4 = 0;
        } else {
            if a2 != 8 {
                goto LABEL_4b0f38;
            }
            if *(&a1 as &i64) == 8030878204345218406 {
                a0[1] = &g_426c58;
                a0[2] = 23;
                goto LABEL_4b0ef7;
            }
            if *(&a1 as &i64) != 8030878204261461868 {
LABEL_4b0f38:
LABEL_4b0f68:
                memcpy(v2, a1, a2);
                v5 = __rust_alloc(32, 8);
                *(v5) = 2;
                v5[1] = a2;
                v5[2] = v2;
                v5[3] = a2;
                a0[1] = v5;
                a0[2] = &g_5349c0;
                v4 = 1;
            }
        }
    }
    *(a0) = v4;
    return a0;
}
