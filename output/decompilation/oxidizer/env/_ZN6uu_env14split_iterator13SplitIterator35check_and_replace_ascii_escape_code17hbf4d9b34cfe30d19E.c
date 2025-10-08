fn uu_env::split_iterator::SplitIterator::check_and_replace_ascii_escape_code(a0: i64, a1: u64, a2: u32) -> long long {
    let v0: u32;  // [bp-0x54]
    let v1: struct16;  // [bp-0x50]
    let v2: Option<struct17>;  // [bp-0x40]
    let v3: u128;  // [bp-0x30]
    let v4: i8;  // [bp-0x20]
    let v6: i64;  // rax
    let v7: u64;  // rax
    let v8: u64;  // rax

    v0 = a2;
    v1 = struct16 {
        field_0: &g_41e7c0
        field_8: &g_41e808
    };
    v6 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find(&v1, &v0);
    if !v6 {
        *((a0 + 4) as &i8) = 0;
    }
    v2 = uu_env::split_iterator::SplitIterator::skip_one(a1);
    match v2 {
        Some(_) => {
            v8 = *(&v4 as &i64);
            return struct40 {
                field_0: v2 as i128
                field_16: v3
                field_32: v8
            };
        },
        None => {
            v7 = uu_env::split_iterator::SplitIterator::push_char_to_word(a1, *((v6 + 4) as &i32)) as u64;
            return struct8 {
                field_0: 12
                field_4: 1
            };
        },
    }
}
