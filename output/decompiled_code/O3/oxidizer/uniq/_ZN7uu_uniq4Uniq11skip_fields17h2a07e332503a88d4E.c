fn uu_uniq::Uniq::skip_fields(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v2: i64;  // [sp-0x60]
    let v3: i64;  // [sp-0x58]
    let v7: i64;  // rdi
    let v8: i64;  // rbx
    let v13: i64;  // r14

    v7 = a0;
    v8 = a3;
    if !a1 {
        *(a0 as &i64) = a4;
        *((a0 + 8) as &i64) = v13;
        *((a0 + 16) as &i64) = a4;
        return memcpy(v13, a3, a4);
    }
    v2 = a3;
    v3 = a4 + a3;
    if !a2 {
        goto LABEL_0x4889d9;
    } else {
        goto LABEL_0x488886;
    }
}
