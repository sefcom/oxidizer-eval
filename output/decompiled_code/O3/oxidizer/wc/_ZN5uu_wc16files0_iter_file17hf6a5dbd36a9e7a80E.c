fn uu_wc::files0_iter_file(a0: void*, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [bp-0x50], Other Possible Types: struct8, struct24
    let v1: i8;  // [bp-0x48]
    let v2: i16;  // [sp-0x44]
    let v3: Enum;  // [sp-0x38], Other Possible Types: i64
    let v4: i8;  // [bp-0x30]
    let v6: i32;  // ebp
    let v7: i64;  // rax
    let v8: i64;  // r15
    let v9: i64;  // r12

    v0 = struct8 {
        field_0: 0x1b600000000
    };
    v1 = 0;
    v2 = 0;
    v1 = 1;
    v3 = std::fs::OpenOptions::_open(&v0, a1, a2);
    if !v3 {
        v6 = *((&v3 as &char + 4) as &i32);
        v0 = std::sys::os_str::bytes::Slice::to_owned(a1, a2);
        v8 = *((&v0 as &char + 8) as &i64);
        v9 = *((&v0 as &char + 16) as &i64);
        v7 = __rust_alloc(0x2000, 1);
        *((a0 + 40) as &i128) = 0;
        *((a0 + 56) as &i64) = 0;
        *(a0 as &i64) = v0;
        *((a0 + 8) as &i64) = v8;
        *((a0 + 16) as &i64) = v9;
        *((a0 + 24) as &i64) = v7;
        *((a0 + 32) as &i64) = 0x2000;
        *((a0 + 64) as &i32) = v6;
        *((a0 + 72) as &i8) = 0;
        return v7;
    }
    *(a0 as &i64) = 9223372036854775809;
    *((a0 + 8) as &double) = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v4);
    *((a0 + 16) as &&i64) = &anon.8ae93ed5783cc3dfed1aac42e59f686c.53.llvm.7002947973987599328;
    return &anon.8ae93ed5783cc3dfed1aac42e59f686c.53.llvm.7002947973987599328;
}
