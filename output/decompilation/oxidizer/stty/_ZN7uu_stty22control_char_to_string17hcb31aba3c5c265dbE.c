fn uu_stty::control_char_to_string(a0: u64, a1: u8) -> long long {
    let v0: u32;  // [bp-0x84]
    let v1: struct16;  // [bp-0x80]
    let v2: std::io::stdio::Stdout;  // [bp-0x70]
    let v3: u64;  // [bp-0x68]
    let v5: u8;  // al
    let v6: u64;  // rcx
    let v7: u32;  // edx

    if !a1 {
        return <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a0, "<undef>");
    }
    v1 = struct16 {
        field_0: (a1 >= 0 ? 1 : &g_41b210)
        field_8: (a1 >> 6 & 2) as u64
    };
    v2 = v7;
    v3 = v6;
    v0 = v5;
    return format!("{}{}{}", &v1, &v2, &v0);
}
