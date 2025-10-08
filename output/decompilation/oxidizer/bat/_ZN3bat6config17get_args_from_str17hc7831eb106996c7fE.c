fn bat::config::get_args_from_str(a1: &str) -> Option<struct24> {
    let a0: i64;  // rdi
    let v0: u8;  // [bp-0x90]
    let v1: struct24;  // [bp-0x80]
    let v2: u128;  // [bp-0x78]
    let v3: struct24;  // [bp-0x70]
    let v4: struct24;  // [bp-0x68]
    let v5: struct16;  // [bp-0x58], Other Possible Types: struct24
    let v6: core::str::pattern::CharSearcher;  // [bp-0x48]
    let v7: void*;  // [bp-0x38]
    let v8: u16;  // [bp-0x18]
    let v10: u64;  // rdx

    v6 = <char as core::str::pattern::Pattern>::into_searcher(0xa, a1);
    v5 = struct16 {
        field_0: 0
        field_8: v10
    };
    v8 = 1;
    core::iter::traits::iterator::Iterator::collect(&v0, &v5);
    if !((((0 ^ *(&v0 as &i64)) & (0 ^ -(*(&v0 as &i64)))) >> 63) as char) {
        v4 = v1;
        v2 = v0;
        v5 = struct24 {
            field_0: v3
            field_8: v3 + v4 * 24
            field_16: 0
        };
        v7 = 0;
        core::iter::traits::iterator::Iterator::collect(&v0, &v5);
        return Some(struct24 {
            field_0: v0
            field_16: v1
        });
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
