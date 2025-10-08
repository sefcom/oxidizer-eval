fn uu_join::parse_file_number(a1: i64, a2: i64) -> : struct16 {
    let a0: i64;  // rdi
    let v0: core::result::Result<(), std::io::error::Error>;  // [bp-0x98]
    let v1: u64;  // [bp-0x90]
    let v2: void*;  // [bp-0x88]
    let v3: void*;  // [bp-0x80]
    let v4: u64;  // [bp-0x78]
    let v5: u8;  // [bp-0x70]
    let v6: struct40;  // [bp-0x68]
    let v7: struct24;  // [bp-0x38]

    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "1") {
        return struct16 {
            field_0: 0
            field_8: 0
        };
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "2") {
        *((a0 + 8) as &i8) = 1;
    } else {
        v2 = 0;
        v3 = a1;
        v4 = a2;
        v5 = 1;
        v0 = &v2;
        v1 = <os_display::Quoted as core::fmt::Display>::fmt;
        v6 = struct40 {
            field_0: "invalid file number: "
            field_8: 1
            field_16: &v0
            field_24: ""
        };
        v7 = core::option::Option<T>::map_or_else(&v6);
        return struct16 {
            field_0: alloc::boxed::Box<T>::new(&v7) as u64
            field_8: &g_4fe360
        };
    }
}
