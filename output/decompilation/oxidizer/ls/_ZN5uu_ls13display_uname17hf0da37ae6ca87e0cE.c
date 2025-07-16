fn uu_ls::display_uname(a1: i32, a2: i8) -> : struct24 {
    let a0: u32;  // esi
    let v0: u64;  // [bp-0x8]
    let v1: u32;  // [bp-0x4]
    let v3: u64;  // rax
    let v4: u64;  // rdi

    if !a1 {
        goto LABEL_0x52b860;
    }
    v0 = v3;
    v1 = a0;
    <T as alloc::string::ToString>::to_string(v4, &v1);
    return;
}
