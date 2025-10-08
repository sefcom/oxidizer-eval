fn fd::fmt::input::remove_extension(a0: i64, a1: void*, a2: u64) -> long long {
    let v0: struct24;  // [bp-0x68]
    let v1: u64;  // [bp-0x60]
    let v2: u64;  // [bp-0x58]
    let v3: struct24;  // [bp-0x50]
    let v4: u64;  // [bp-0x48]
    let v5: u64;  // [bp-0x40]
    let v6: struct24;  // [bp-0x38]
    let v8: void*;  // rax
    let v9: struct24;  // r8, Other Possible Types: u64
    let v10: struct24;  // rdx
    let v11: void*;  // rax

    v0 = fd::fmt::input::dirname(a1, a2);
    v8 = std::path::Path::file_stem(a1, a2);
    if !v8 {
        v9 = a2;
        if !v8 {
            goto LABEL_5f56a4;
        }
LABEL_5f56a3:
        v11 = v8;
    } else {
        v9 = v10;
        if v8 {
            goto LABEL_5f56a3;
        }
LABEL_5f56a4:
        v11 = a1;
    }
    v3 = std::path::Path::join(v1, v2, v11, v9);
    core::mem::drop(v0.field_0, v1);
    v6 = std::sys::pal::unix::os::split_paths::bytes_to_path(fd::filesystem::strip_current_dir(v4, v5));
    *((a0 + 16) as &i64) = *((&v6.field_8 as &char + 8) as &i64);
    *(a0 as &i128) = *(&v6.field_0 as &i128);
    return core::mem::drop(v3.field_0, v4);
}
