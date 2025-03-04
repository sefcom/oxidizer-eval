fn uu_tail::follow::files::FileHandling::update_metadata(a0: u32, a1: u32, a2: u32, a3: &u64) -> u64 {
    let v0: Result<struct176, struct8>;  // [sp-0x178]
    let v1: i8;  // [bp-0xc8]
    let v3: i64;  // r12
    let v4: i64;  // rsi
    let v5: i64;  // rax

    v3 = *(a3 as &i64);
    if v3 != 2 {
        v4 = a3 + 8;
        goto LABEL_50eb8c;
    } else {
        v0 = std::fs::metadata(a1, a2);
        v3 = v0 as i64;
        if v3 != 2 {
            v4 = &v0;
LABEL_50eb8c:
            memcpy(&v1, v4, 168);
        }
    }
    v5 = uu_tail::follow::files::FileHandling::get_mut(a0, a1, a2);
    *(v5 as &unsigned long) = v3;
    return memcpy(v5 + 8, &v1, 168);
}
