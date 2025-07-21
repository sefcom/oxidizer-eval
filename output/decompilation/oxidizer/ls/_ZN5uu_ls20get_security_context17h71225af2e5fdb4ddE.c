fn uu_ls::get_security_context(a1: i64, a2: i32, a3: i32) -> : struct24 {
    let a0: i64;  // rdi
    let v0: u128;  // [bp-0x188]
    let v1: u64;  // [bp-0x178]
    let v2: u64;  // [bp-0x170]
    let v3: std::path::PathBuf;  // [bp-0x150]
    let v4: u64;  // [bp-0x140]
    let v5: u64;  // [bp-0x120]
    let v6: u64;  // [bp-0x118]
    let v7: struct40;  // [bp-0x110]
    let v8: i8;  // [bp-0xd8]
    let v9: i8;  // [bp-0xd0]
    let v11: u32;  // r8d
    let v12: u64;  // rdx

    <T as alloc::slice::hack::ConvertVec>::to_vec("?", a3);
    if a3 {
        uu_ls::get_metadata_with_deref_opt(a1, a2, 1, v11);
        if *(&v8 as &i32) == 2 {
            v2 = *(&v9 as &i64);
            v3 = std::sys::pal::unix::os::split_paths::bytes_to_path(a1, a2);
            v7 = struct40 {
                field_0: 2
                padding_2: <UNKNOWN>
                field_8: *(&v9 as &i64)
                field_16: *(&v3.inner.inner.inner.buf.cap as &i128)
                field_32: v4
            };
            uucore::mods::error::set_exit_code(1);
            v5 = uucore::util_name();
            v6 = v12;
            eprintln!("{}: {}", &v5, &v7);
        }
    }
    return struct24 {
        field_0: v0
        field_16: v1
    };
}
