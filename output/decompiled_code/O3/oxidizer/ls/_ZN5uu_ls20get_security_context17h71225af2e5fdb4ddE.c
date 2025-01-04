fn uu_ls::get_security_context(a0: u64, a1: u64, a2: u64, a3: u64) -> int {
    let v0: i192;  // [sp-0x188], Other Possible Types: struct24
    let v1: i64;  // [sp-0x170]
    let v2: i192;  // [sp-0x150], Other Possible Types: struct24
    let v3: i64;  // [sp-0x140]
    let v4: i64;  // [sp-0x120]
    let v5: i64;  // [sp-0x118]
    let v6: i16;  // [sp-0x110]
    let v7: i64;  // [sp-0x108]
    let v8: i128;  // [sp-0x100]
    let v9: i64;  // [sp-0xf0]
    let v10: i1408;  // [sp-0xd8], Other Possible Types: Result<struct176, struct16>
    let v12: i128;  // xmm0
    let v15: i64;  // rdx
    let v16: i128;  // xmm0

    v0 = <T as alloc::slice::hack::ConvertVec>::to_vec("?");
    if !a3 {
        v16 = v0;
        return struct24 {
            field_0: v16
            field_16: *((&v0 as &char + 16) as &i64)
        };
    }
    v10 = uu_ls::get_metadata_with_deref_opt(a1, a2, 1);
    if v10 == 2 {
        v1 = v7;
        v2 = std::sys::pal::unix::os::split_paths::bytes_to_path(a1, a2);
        v7 = v1;
        v12 = v2;
        v8 = v12;
        v9 = v3;
        v6 = 2;
        uucore::mods::error::set_exit_code();
        v4 = uucore::util_name();
        v5 = v15;
        eprintln!("{:?}: {:?}", &v4, &v6);
    }
}
