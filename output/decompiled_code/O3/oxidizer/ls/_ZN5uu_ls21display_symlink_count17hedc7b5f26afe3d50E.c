fn uu_ls::display_symlink_count(a0: u32, a1: u32) -> u64 {
    let v0: u64;  // [sp-0x8], Other Possible Types: struct8
    let v2: u64;  // rax

    v0 = v2;
    v0 = struct8 {
        field_0: a1
    };
    <T as alloc::string::ToString>::to_string(a0, &v0);
    return v0;
}
