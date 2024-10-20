fn uu_wc::files0_iter_stdin(a0: void*, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [sp-0x50]
    let v1: struct24;  // [sp-0x48], Other Possible Types: i192
    let v3: i64;  // r15
    let v4: i64;  // r12
    let v5: i64;  // r13
    let v6: i64;  // rax
    let v7: i8;  // dl

    v0 = std::io::stdio::stdin();
    v1 = std::sys::os_str::bytes::Slice::to_owned(&anon.8ae93ed5783cc3dfed1aac42e59f686c.18.llvm.7002947973987599328, 1);
    v3 = v1;
    v4 = *((&v1 as &char + 8) as &i64);
    v5 = *((&v1 as &char + 16) as &i64);
    v6 = __rust_alloc(0x2000, 1);
    *((a0 + 40) as &i128) = 0;
    *((a0 + 56) as &i64) = 0;
    *(a0 as &i64) = v3;
    *((a0 + 8) as &i64) = v4;
    *((a0 + 16) as &i64) = v5;
    *((a0 + 24) as &i64) = v6;
    *((a0 + 32) as &i64) = 0x2000;
    *((a0 + 64) as &long long) = std::io::stdio::Stdin::lock(&v0);
    *((a0 + 72) as &i8) = v7 & 1;
    *((a0 + 80) as &i8) = 0;
    return v6;
}
