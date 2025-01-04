fn uu_ptx::tex_mapper(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: i32;  // [sp-0x4c]
    let v1: i64;  // [bp-0x48]
    let v2: i64;  // [sp-0x40]
    let v3: i64;  // [sp-0x38], Other Possible Types: struct24
    let v4: i64;  // [sp-0x30]
    let v5: i64;  // [sp-0x28]
    let v6: i64;  // [sp-0x20]
    let v7: i64;  // [sp-0x18]
    let v9: i64;  // rax
    let v10: i64;  // rdx

    v0 = a1;
    if a1 - 35 < 4 {
        goto LABEL_5b7d6a;
    }
    switch (a1) {
    case 92:
        return <T as alloc::slice::hack::ConvertVec>::to_vec(a0, "\\backslash{}");
    case 95:
LABEL_5b7d6a:
        v1 = &v0;
        v2 = <char as core::fmt::Display>::fmt;
        v3 = "\\";
        v4 = 1;
        break;
    case 123: case 125:
        v1 = &v0;
        v2 = <char as core::fmt::Display>::fmt;
        v3 = "$\\";
        v4 = 2;
        break;
    default:
        v1 = 0;
        v3 = <T as alloc::slice::hack::ConvertVec>::to_vec(core::char::methods::encode_utf8_raw(a1 & 4294967295, &v1), v10);
        v9 = v5;
        *((a0 + 16) as &i64) = v9;
        *(a0 as &i192) = v3;
        return v9;
    }
    v7 = 0;
    v5 = &v1;
    v6 = 1;
    v9 = core::option::Option<T>::map_or_else(a0, &v3);
    return v9;
}
