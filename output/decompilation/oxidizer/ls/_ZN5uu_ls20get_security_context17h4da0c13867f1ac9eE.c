fn uu_ls::get_security_context(a0: i64, a1: u64, a2: u32, a3: u32) -> long long {
    let v0: struct24;  // [bp-0x188]
    let v1: u64;  // [bp-0x178]
    let v2: u64;  // [bp-0x170]
    let v3: std::path::PathBuf;  // [bp-0x168]
    let v4: i64;  // [bp-0x158]
    let v5: u64;  // [bp-0x138]
    let v6: u64;  // [bp-0x130]
    let v7: struct48;  // [bp-0x128]
    let v8: Result<struct176, struct16>;  // [bp-0xd8]
    let v10: u64;  // rdx

    v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("?");
    if a3 {
        v8 = uu_ls::get_metadata_with_deref_opt(a1, a2, 1);
        if let Err(_) = v8 {
            v2 = *((&v8 as &char + 8) as &i64);
            v3 = std::sys::pal::unix::os::split_paths::bytes_to_path(a1, a2);
            v7 = struct48 {
                field_0: 9223372036854775810
                field_8: *(&v3.inner.inner.inner.buf.inner.cap as &i128)
                field_24: v4
                field_32: *((&v8 as &char + 8) as &i64)
                field_40: 0
            };
            uucore::mods::error::set_exit_code(1);
            v5 = uucore::util_name();
            v6 = v10;
            eprintln!("{}: {}", &v5, &v7);
        }
    }
    return struct24 {
        field_0: *(&v0.field_0 as &i128)
        field_16: v1
    };
}
