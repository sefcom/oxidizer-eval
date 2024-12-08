fn uu_env::split_iterator::SplitIterator::check_and_replace_ascii_escape_code(a0: i64, a1: i64, a2: i32) -> u64 {
    let v0: struct4;  // [bp-0x54]
    let v1: struct16;  // [bp-0x50]
    let v2: i168;  // [sp-0x40], Other Possible Types: struct21
    let v3: i8;  // [bp-0x20]
    let v5: i64;  // rax
    let v6: i64;  // rdx
    let v7: i128;  // xmm0

    v0 = struct4 {
        field_0: a2
    };
    v1 = struct16 {
        field_0: &g_42541c
        field_8: &g_425464
    };
    v5 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find(&v1, &v0);
    if !v5 {
        return struct5 {
            field_0: 8
            field_4: 0
        };
    }
    v2 = uu_env::split_iterator::SplitIterator::skip_one(a1);
    if v2 != 8 {
        v5 = v3;
        v7 = v2;
        return struct40 {
            field_0: v7
            field_16: v2
            field_32: v5
        };
    }
    v5 = uu_env::split_iterator::SplitIterator::push_char_to_word(a1, *((v5 + 4) as &i32), v6);
    *((a0 + 4) as &i8) = 1;
    *(a0 as &i32) = 8;
    return v5;
}
