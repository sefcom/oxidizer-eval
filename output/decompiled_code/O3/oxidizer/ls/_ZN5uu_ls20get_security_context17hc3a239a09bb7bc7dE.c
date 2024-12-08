fn uu_ls::get_security_context(a0: u64, a1: u64, a2: u64, a3: u64) -> int {
    let v0: struct24;  // [sp-0x188], Other Possible Types: i192
    let v1: i64;  // [sp-0x170]
    let v2: i192;  // [sp-0x150], Other Possible Types: struct24
    let v3: i64;  // [sp-0x120]
    let v4: i64;  // [sp-0x118]
    let v5: i16;  // [sp-0x110]
    let v6: i64;  // [sp-0x108]
    let v7: i128;  // [sp-0x100]
    let v8: i64;  // [sp-0xf0]
    let v9: Result<struct176, struct16>;  // [sp-0xd8], Other Possible Types: i1408
    let v11: i128;  // xmm0
    let v14: i64;  // rdx
    let v15: i128;  // xmm0

    v0 = <T as alloc::slice::hack::ConvertVec>::to_vec("?");
    if !a3 {
        v15 = v0;
        return struct24 {
            field_0: v15
            field_16: *((&v0 as &char + 16) as &i64)
        };
    }
    v9 = uu_ls::get_metadata_with_deref_opt(a1, a2, 1);
    if v9 == 2 {
        v1 = v6;
        v2 = std::sys::pal::unix::os::split_paths::bytes_to_path(a1, a2);
        v6 = v1;
        v11 = v2;
        v7 = v11;
        v8 = v2.field_16;
        v5 = 2;
        uucore::mods::error::set_exit_code();
        v3 = uucore::util_name();
        v4 = v14;
        eprintln!("{:?}: {:?}", &v3, &v5);
    }
}
