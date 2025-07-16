fn uu_join::parse_file_number(a1: i64, a2: i64) -> Result<struct16, struct9> {
    let a0: u64;  // rsi
    let v0: core::result::Result<(), std::io::error::Error>;  // [bp-0x98]
    let v1: u64;  // [bp-0x90]
    let v2: core::option::Option<u32>;  // [bp-0x88]
    let v3: struct8;  // [bp-0x80]
    let v4: u64;  // [bp-0x78]
    let v5: u8;  // [bp-0x70]
    let v6: struct8;  // [bp-0x68], Other Possible Types: struct24
    let v7: u64;  // [bp-0x60]
    let v8: i64;  // [bp-0x58]
    let v9: u64;  // [bp-0x50]
    let v10: void*;  // [bp-0x48]
    let v11: u8;  // [bp-0x38]
    let v14: i64;  // rdi
    let v15: i64;  // rdi

    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "1") as i8 {
        *((v14 + 8) as &i8) = 0;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "2") as i8 {
        *((v14 + 8) as &i8) = 1;
    } else {
        v2 = 0;
        v3 = a0;
        v4 = a1;
        v5 = 1;
        v0 = &v2;
        v1 = <os_display::Quoted as core::fmt::Display>::fmt;
        v6 = "invalid file number: ";
        v7 = 1;
        v10 = 0;
        v8 = &v0;
        v9 = 1;
        v6 = core::option::Option<T>::map_or_else(a1);
        *(v15 as &double) = alloc::boxed::Box<T>::new(&v11);
        *((v15 + 8) as &&u8) = &g_5352b8;
        return;
    }
    *(v14 as &i64) = 0;
    return;
}
