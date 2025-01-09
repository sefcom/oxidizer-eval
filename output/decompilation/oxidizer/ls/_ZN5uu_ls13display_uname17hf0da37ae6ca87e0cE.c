fn uu_ls::display_uname(a0: &struct24, a1: u32, a2: u8) -> u64 {
    let v0: u32;  // [bp-0x8]
    let v1: struct4;  // [bp-0x4]
    let v3: u64;  // rax

    if !a2 {
        goto LABEL_0x52b860;
    }
    v0 = v3;
    v1 = struct4 {
        field_0: a1
    };
    <T as alloc::string::ToString>::to_string(a0, &v1);
    return *(&v0 as &i64);
}
