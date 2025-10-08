fn zoxide::db::stream::StreamOptions::with_keywords(a1: &struct24, a2: i64, a3: i64) -> : struct96 {
    let a0: i64;  // rdi
    let v0: u128;  // [bp-0x28]
    let v1: i8;  // [bp-0x18]
    let v3: u32;  // rdx
    let v5: u128;  // xmm0
    let v6: u64;  // rax
    let v7: u64;  // rcx
    let v8: u128;  // xmm1

    core::iter::traits::iterator::Iterator::collect(&v0, core::iter::traits::iterator::Iterator::map(core::iter::traits::iterator::Iterator::map(a2, a3), v3), a2);
    *((a1 + 16) as &i64) = *(&v1 as &i64);
    *(a1 as &u128) = v0;
    v5 = *(a1 as &i128);
    v6 = *((a1 + 16) as &i64);
    v7 = *((a1 + 24) as &i64);
    v8 = *((a1 + 32) as &i128);
    return struct96 {
        field_0: v5
        field_16: v6
        field_24: v7
        field_32: v8
        field_48: *((a1 + 48) as &i128)
        field_64: *((a1 + 64) as &i128)
        field_80: *((a1 + 80) as &i128)
    };
}
