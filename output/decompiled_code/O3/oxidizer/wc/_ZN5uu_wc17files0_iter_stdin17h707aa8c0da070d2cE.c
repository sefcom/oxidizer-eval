fn uu_wc::files0_iter_stdin(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [sp-0x50]
    let v1: i128;  // [sp-0x48]
    let v2: i64;  // [sp-0x38]
    let v3: struct24;  // [sp-0x30], Other Possible Types: i192
    let v5: i32;  // edx

    v0 = std::io::stdio::stdin();
    v3 = std::sys::os_str::bytes::Slice::to_owned("-");
    v2 = *((&v3 as &char + 16) as &i64);
    v1 = v3;
    return uu_wc::files0_iter(a0, std::io::stdio::Stdin::lock(&v0), v5 & 1, &v1);
}
