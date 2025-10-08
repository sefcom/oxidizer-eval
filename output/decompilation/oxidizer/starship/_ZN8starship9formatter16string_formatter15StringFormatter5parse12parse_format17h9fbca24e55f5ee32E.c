fn starship::formatter::string_formatter::StringFormatter::parse::parse_format(a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> : struct32 {
    let a0: u64;  // rdi
    let v0: u64;  // [bp-0xb0]
    let v1: u8;  // [bp-0xa8]
    let v2: u64;  // [bp-0xa0]
    let v3: i64;  // [bp-0x90]
    let v4: struct32;  // [bp-0x88]
    let v5: struct16;  // [bp-0x68], Other Possible Types: struct56
    let v6: i64;  // [bp-0x60]
    let v7: u64;  // [bp-0x58]
    let v8: Option<struct24>;  // [bp-0x50]
    let v9: struct40;  // [bp-0x48]
    let v11: u64;  // rax
    let v12: u64;  // rax

    v0 = a5;
    v4 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a1);
    v5 = a2;
    v6 = &v0;
    v7 = a3;
    v8 = a4;
    core::iter::traits::iterator::Iterator::collect(&v1, &v4);
    if *(&v1 as &i32) != 1 {
        v4 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v2);
        v5 = 0;
        v9 = 0;
        core::iter::traits::iterator::Iterator::collect(a0 + 8, &v4);
    }
    v11 = 1;
    return struct32 {
        field_0: v12
        field_8: v2
        field_24: v3
    };
}
