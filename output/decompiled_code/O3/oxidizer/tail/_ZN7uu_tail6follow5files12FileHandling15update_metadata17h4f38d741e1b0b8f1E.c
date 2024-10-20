fn uu_tail::follow::files::FileHandling::update_metadata(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: Enum;  // [sp-0x178], Other Possible Types: i1408
    let v1: i8;  // [bp-0xc8]
    let v3: i64;  // r13
    let v4: i64;  // r12
    let v5: i64;  // rcx
    let v6: i64;  // rcx
    let v7: i64;  // r13
    let v8: i64;  // r8
    let v9: i64;  // r9
    let v10: i64;  // rax

    v3 = *(a3 as &i64);
    if v3 != 2 {
        v4 = *((a3 + 8) as &i64);
        v5 = a3 + 16;
        goto LABEL_4ae9a6;
    } else {
        v0 = std::sys::pal::unix::fs::stat(a1, a2);
        v3 = v0;
        v4 = *((&v0 as &char + 8) as &i64);
        if v3 != 2 {
            v5 = &v0;
LABEL_4ae9a6:
            memcpy(&v1, v5, 160);
        }
    }
    v10 = uu_tail::follow::files::FileHandling::get_mut(a0, a1, a2, v6, v8, v9);
    *(v10 as &i64) = v7;
    *((v10 + 8) as &i64) = v4;
    return memcpy(v10 + 16, &v1, 160);
}
