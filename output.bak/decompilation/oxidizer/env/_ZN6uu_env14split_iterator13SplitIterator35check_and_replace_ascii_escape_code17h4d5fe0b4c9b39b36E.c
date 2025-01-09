fn uu_env::split_iterator::SplitIterator::check_and_replace_ascii_escape_code(a0: &Result<struct40, struct1>, a1: u32, a2: u32) -> u64 {
    let v0: struct4;  // [bp-0x54]
    let v1: struct16;  // [bp-0x50]
    let v2: struct21;  // [sp-0x40]
    let v4: i64;  // rax

    v0 = struct4 {
        field_0: a2
    };
    v1 = struct16 {
        field_0: &g_4252d0
        field_8: &g_425318
    };
    v4 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find(&v1, &v0);
    return Err(struct1 {
        field_0: 0
    });
    v2 = uu_env::split_iterator::SplitIterator::skip_one(a1);
    return Ok(struct40 {
        field_0: v5
        field_16: v2
        field_32: v4
    });
    v4 = uu_env::split_iterator::SplitIterator::push_char_to_word(a1, *((v4 + 4) as &i32));
    return Err(struct1 {
        field_0: 1
    });
}
