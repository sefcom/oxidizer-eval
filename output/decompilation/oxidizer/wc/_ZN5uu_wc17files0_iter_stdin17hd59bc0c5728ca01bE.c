fn uu_wc::files0_iter_stdin() -> : struct81 {
    let a0: u64;  // rdi
    let v0: std::io::stdio::Stdin;  // [bp-0x50]
    let v1: struct24;  // [bp-0x48]
    let v2: struct24;  // [bp-0x30], Other Possible Types: u8
    let v4: u64;  // rax
    let v5: u32;  // edx

    v0 = std::io::stdio::stdin();
    v4 = std::io::stdio::Stdin::lock(&v0);
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v2, "-");
    v1 = v2;
    uu_wc::files0_iter(a0, v4, v5 & 1, &v1);
    return;
}
