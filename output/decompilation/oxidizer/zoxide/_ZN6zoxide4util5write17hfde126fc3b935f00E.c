fn zoxide::util::write(a0: void*, a1: i64) -> long long {
    let v0: u64;  // [bp-0x88]
    let v1: iNone;  // [bp-0x80]
    let v2: struct224;  // [bp-0x70], Other Possible Types: struct32, struct36
    let v3: u64;  // [bp-0x68]
    let v4: struct16;  // [bp-0x40]
    let v6: u64;  // rdx
    let v7: struct32;  // rax
    let v8: struct48;  // r15
    let v10: &std::ffi::os_str::OsStr;  // rax:rdx

    v4 = struct16 {
        field_0: <&T as core::convert::AsRef<U>>::as_ref(a0)
        field_8: v6
    };
    v10 = <std::ffi::os_str::OsString as core::ops::index::Index<core::ops::range::RangeFull>>::index(*((a1 + 8) as &i64));
    v7 = std::path::Path::parent(v4.field_0, v6);
    core::option::unwrap(v7);
    v2 = zoxide::util::tmpfile(v7, v6);
    v8 = v2.field_0;
    if !((((0 ^ v3) & (0 ^ -(v3))) >> 63) as char) {
        v1 = *(&v2.field_16 as &i128);
        v0 = v3;
        v2 = struct36 {
            field_0: v10.data_ptr
            field_8: v10.length
            field_16: &v0
            field_24: &v4
            field_32: v8 as u32
        };
        v8 = zoxide::util::write::{{closure}}(&v2);
        if v8 {
            v2 = std::fs::remove_file(&v0);
        }
        core::mem::drop(v0, v1 as i64);
    }
    return v8;
}
