fn uu_ls::display_group(a1: i32, a2: i8) -> : struct24 {
    let a0: u32;  // esi
    let v0: u64;  // [bp-0x8]
    let v1: u32;  // [bp-0x4], Other Possible Types: struct24
    let v3: u64;  // rax

    if !a1 {
        goto LABEL_0x52bad0;
    }
    v0 = v3;
    v1 = a0;
    v1 = <T as alloc::string::ToString>::to_string(a1);
    return;
}
