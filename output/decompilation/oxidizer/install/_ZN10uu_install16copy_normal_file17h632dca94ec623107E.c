fn uu_install::copy_normal_file(a0: i64, a1: i64, a2: i64, a3: i64) -> long long {
    let v0: u64;  // [bp-0xb0]
    let v1: struct16;  // [bp-0xa8]
    let v2: struct24;  // [bp-0x98]
    let v3: u64;  // [bp-0x88]
    let v4: struct24;  // [bp-0x80]
    let v5: u64;  // [bp-0x70]
    let v6: struct64;  // [bp-0x68]
    let v8: u64;  // rdx

    v1 = struct16 {
        field_0: std::fs::copy(a0, a1, a2, a3)
        field_8: v8
    };
    if !(v1.field_0 & 1) {
        return 0;
    }
    v0 = v8;
    v2 = std::sys::pal::unix::os::split_paths::bytes_to_path(a0);
    v4 = std::sys::pal::unix::os::split_paths::bytes_to_path(a2);
    v6 = struct64 {
        field_0: 8
        field_8: v8
        field_16: *(&v2.field_0 as &i128)
        field_32: v3
        field_40: *(&v4.field_0 as &i128)
        field_56: v5
    };
    return alloc::boxed::Box<T>::new(&v6) as u64;
}
