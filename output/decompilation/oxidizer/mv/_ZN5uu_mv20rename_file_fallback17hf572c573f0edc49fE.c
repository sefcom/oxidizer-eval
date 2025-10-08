fn uu_mv::rename_file_fallback(a0: u64, a1: u64, a2: u64, a3: u64) -> long long {
    let v0: u64;  // [bp-0x60]
    let v1: u64;  // [bp-0x58]
    let v2: u64;  // [bp-0x50]
    let v3: u64;  // [bp-0x48]
    let v4: struct32;  // [bp-0x40]
    let v6: u64;  // rax
    let v7: u64;  // rdx

    v0 = a0;
    v1 = a1;
    v2 = a2;
    v3 = a3;
    if std::path::Path::is_symlink(a2, a3) {
        v6 = std::fs::remove_file(a2, a3);
        v4 = struct32 {
            field_0: a2
            field_8: a3
            field_16: a0
            field_24: a1
        };
        if v6 {
            return uu_mv::rename_file_fallback::{{closure}}(&v4, v6);
        }
    }
    if (std::fs::copy(a0, a1, a2, a3) & 1) {
        return v7;
    }
    return uucore::features::fsxattr::copy_xattrs(&v0, &v2);
}
