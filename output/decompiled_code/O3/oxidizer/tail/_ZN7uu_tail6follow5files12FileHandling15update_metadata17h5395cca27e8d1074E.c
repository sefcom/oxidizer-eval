fn uu_tail::follow::files::FileHandling::update_metadata(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: i1408;  // [sp-0x178], Other Possible Types: Result<struct176, struct16>
    let v1: i8;  // [bp-0xc8]
    let v3: i64;  // r12
    let v4: i64;  // rcx
    let v5: i64;  // rcx
    let v6: i64;  // r8
    let v7: i64;  // r9
    let v8: i64;  // rax

    v3 = *(a3 as &i64);
    if v3 != 2 {
        v4 = a3 + 8;
        goto LABEL_502b31;
    } else {
        v0 = std::fs::metadata(a1, a2);
        v3 = v0;
        if v3 != 2 {
            v4 = &v0;
LABEL_502b31:
            memcpy(&v1, v4, 168);
        }
    }
    v8 = uu_tail::follow::files::FileHandling::get_mut(a0, a1, a2, v5, v6, v7);
    *(v8 as &i64) = v3;
    return memcpy(v8 + 8, &v1, 168);
}
