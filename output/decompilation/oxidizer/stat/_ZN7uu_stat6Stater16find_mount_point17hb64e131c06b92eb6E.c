fn uu_stat::Stater::find_mount_point(a0: i64, a1: i64, a2: void*) -> void {
    let v0: core::result::Result<std::path::PathBuf, std::io::error::Error>;  // [bp-0x48]
    let v1: alloc::string::String;  // [bp-0x48], Other Possible Types: u64
    let v2: u64;  // [bp-0x40]
    let v6: u64;  // rbp
    let v7: u64;  // r12
    let v8: u64;  // r12

    v0 = std::fs::canonicalize(<&T as core::convert::AsRef<U>>::as_ref(a2), a2);
    if (((0 ^ v0 as i64) & (0 ^ -(v1))) >> 63) as char {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    if *((a1 + 72) as &i64) == 0x8000000000000000 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    loop {
        v7 = v8;
        if !v6 {
            break;
        }
        v8 = v7 + 24;
        v6 -= 24;
        if std::path::Path::starts_with(v2, *((&v0 as &char + 16) as &i64), v7) {
            v1 = <alloc::string::String as core::clone::Clone>::clone(v8 - 24);
            return struct24 {
                field_0: *(&v1.vec.buf.inner.cap as &i128)
                field_16: v1.vec.len
            };
        }
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
