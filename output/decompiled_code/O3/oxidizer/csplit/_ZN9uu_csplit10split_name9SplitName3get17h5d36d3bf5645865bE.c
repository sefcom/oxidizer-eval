fn uu_csplit::split_name::SplitName::get(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: Enum;  // [bp-0x68]
    let v1: i64;  // [sp-0x60]
    let v2: i64;  // [sp-0x58]
    let v3: i64;  // [sp-0x50]
    let v4: i192;  // [sp-0x48], Other Possible Types: struct24
    let v7: i64;  // r15
    let v8: i64;  // rax
    let v10: i64;  // r15
    let v12: i64;  // r12

    v7 = *((a1 + 16) as &i64);
    if v7 {
        if v7 < 0 {
            v3 = 0;
        }
        v3 = 1;
    }
    memcpy(v1, *((a1 + 8) as &i64), v7);
    v0 = Enum {
        field_0: v7
        field_8: vvar_6{reg 56}
        field_16: v7
    };
    v8 = uucore::features::format::Format<F>::fmt(a1 + 24, &v0, a2);
    if !v8 {
        v4 = alloc::string::String::from_utf8_lossy(v1, v2);
        v10 = *((&v4 as &char + 16) as &i64);
        memcpy(v12, *((&v4 as &char + 8) as &i64), v10);
        *(a0 as &i64) = v10;
        *((a0 + 8) as &i64) = v12;
        *((a0 + 16) as &i64) = v10;
        return a0;
    }
    v4 = v8;
    core::result::unwrap_failed(); /* do not return */
}
