fn fd::exec::CommandTemplate::generate(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64, a6: i64) {
    let v0: i64;  // [bp-0x138]
    let v1: Result<struct24, struct24>;  // [bp-0x130]
    let v2: u704;  // [sp-0x130]
    let v5: i64;  // rbp
    let v6: struct24;  // r13
    let v7: struct24;  // r13
    let v8: u64;  // r13
    let v9: u64;  // rdx

    v1 = fd::fmt::FormatTemplate::generate(a1, a3, a4, a5, a6);
    v1 as u1792 = argmax::Command::new(&v1);
    if a2 * 32 != 32 {
        do {
            v7 = v6;
            v1 = fd::fmt::FormatTemplate::generate(v5, a3, a4, a5, a6);
            if (argmax::Command::try_arg(&v1 as u1792, &v1) & 1) {
                *((v0 + 8) as &u64) = v9;
                *(v0 as &i64) = 0x8000000000000000;
                return;
            }
            v5 += 32;
            v8 = v7 - 32;
            v6 = v8;
        } while (v7 != 32);
    }
    memcpy(a0, &v2, 232);
    return;
}
