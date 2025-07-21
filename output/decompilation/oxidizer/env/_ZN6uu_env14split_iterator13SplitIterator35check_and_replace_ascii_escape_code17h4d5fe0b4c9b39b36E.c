fn uu_env::split_iterator::SplitIterator::check_and_replace_ascii_escape_code(a1: i64, a2: i264) -> Result<struct40, struct5> {
    let a0: i64;  // rdi
    let v0: struct40;  // [bp-0x54]
    let v1: struct16;  // [bp-0x50]
    let v2: core::fmt::Arguments;  // [bp-0x40], Other Possible Types: char
    let v3: core::fmt::rt::Argument;  // [bp-0x30]
    let v4: i8;  // [bp-0x20]
    let v6: i64;  // rax
    let v7: u64;  // rax

    v0 = a2;
    v1 = struct16 {
        field_0: &g_4252d0
        field_8: &g_425318
    };
    v6 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find(&v1, &v0);
    if !v6 {
        return struct8 {
            field_0: 8
            field_4: 0
        };
    }
    uu_env::split_iterator::SplitIterator::skip_one(a1, a2 as u64);
    if *(&v2 as &i32) != 8 {
        return Ok(struct40 {
            field_0: v2
            field_16: v3
            field_32: *(&v4 as &i64)
        });
    }
    v7 = uu_env::split_iterator::SplitIterator::push_char_to_word(a1, *((v6 + 4) as &i32));
    return struct8 {
        field_0: 8
        field_4: 1
    };
}
