fn uu_tail::paths::Input::from(a0: u64, a1: u64) -> int {
    let v0: i64;  // [sp-0x60], Other Possible Types: struct24
    let v1: struct24;  // [sp-0x48], Other Possible Types: i192
    let v3: i64;  // r14
    let v4: i64;  // r12
    let v5: i64;  // r14
    let v7: i64;  // r13
    let v9: i64;  // r13
    let v10: i64;  // rax
    let v11: i128;  // xmm0
    let v12: i256;  // ymm0

    v3 = *((a1 + 8) as &i64);
    v4 = *((a1 + 16) as &i64);
    if !(v4 == 1) || !(*(v3 as &i8) == 45) {
        v0 = std::sys::os_str::bytes::Slice::to_owned(v3, v4);
        if v0 == 0x8000000000000000 {
            goto LABEL_4af551;
        }
        v1 = std::sys::os_str::bytes::Slice::to_string_lossy(v3, v4);
        v5 = *((&v1 as &char + 16) as &i64);
        if v5 {
            v10 = __rust_alloc(v5, 1);
        }
        memcpy(v9, *((&v1 as &char + 8) as &i64), v5);
    } else {
        v0 = 0x8000000000000000;
LABEL_4af551:
        v5 = 14;
        v7 = __rust_alloc(14, 1);
        *((v7 + 6) as &i64) = 8391737100187231346;
        *(v7 as &i64) = 7237954635114312819;
    }
    *((a0 + 40) as &i64) = *((&v0 as &char + 16) as &i64);
    v11 = v0;
    *((a0 + 24) as &i128) = v11;
    *(a0 as &i64) = v5;
    *((a0 + 8) as &i64) = v7;
    *((a0 + 16) as &i64) = v5;
    return Conv(256->64, ((vvar_146{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_145{reg 224})));
}
