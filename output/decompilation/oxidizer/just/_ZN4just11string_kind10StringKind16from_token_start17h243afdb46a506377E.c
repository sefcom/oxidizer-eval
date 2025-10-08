fn just::string_kind::StringKind::from_token_start(a0: i64, a1: i64) -> u64 {
    let v0: struct16;  // [bp-0x10]
    let v2: i64;  // rax

    v0 = struct16 {
        field_0: &g_47187d
        field_8: &g_471889
    };
    v2 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find(&v0, a0, a1);
    if !v2 {
        return 2;
    }
    return *(v2 as &i8);
}
