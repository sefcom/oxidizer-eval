fn starship::modules::utils::directory::truncate(a1: &str, a2: i32) -> Option<struct24> {
    let a0: i64;  // rdi
    let v0: struct8;  // [bp-0x78], Other Possible Types: u8
    let v1: i64;  // [bp-0x70]
    let v2: &mut [u8];  // [bp-0x68]
    let v3: struct24;  // [bp-0x60]
    let v4: Result<struct24, struct24>;  // [bp-0x60]
    let v5: struct16;  // [bp-0x58]
    let v6: core::str::pattern::CharSearcher;  // [bp-0x50]
    let v7: Option<struct24>;  // [bp-0x20]
    let v9: &mut [u8];  // r14
    let v10: struct16;  // rdx
    let v11: struct24;  // rsi

    if !a2 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v9 = a2;
    v6 = <char as core::str::pattern::Pattern>::into_searcher(0x2f, a1);
    v3 = 0;
    v5 = v10;
    v7 = 1;
    core::iter::traits::iterator::Iterator::collect(&v0, &v3);
    if !*((v1 + 8) as &i64) {
        v0 = alloc::vec::Vec<T,A>::remove();
        if v2 <= v9 {
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
    } else if v2 <= v9 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v4 = alloc::str::join_generic_copy(v11 * 16 + v1, v9, "/");
    return Some(struct24 {
        field_0: v4 as i128
        field_16: *((&v4 as &char + 16) as &i64)
    });
}
