fn uu_wc::files0_iter_stdin(a0: &struct81) -> u64 {
    let v0: i64;  // [sp-0x50]
    let v1: struct24;  // [sp-0x48]
    let v2: struct24;  // [sp-0x30]
    let v4: i32;  // edx

    v0 = std::io::stdio::stdin();
    v2 = std::sys::os_str::bytes::Slice::to_owned("-");
    v1 = v2;
    return uu_wc::files0_iter(a0, std::io::stdio::Stdin::lock(&v0), (v4 & 1) as u64, &v1);
}
