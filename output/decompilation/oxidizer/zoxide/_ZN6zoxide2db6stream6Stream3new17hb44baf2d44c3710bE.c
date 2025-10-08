fn zoxide::db::stream::Stream::new(a1: i64, a2: i64) -> : struct120 {
    let a0: i64;  // rdi
    let v1: u64;  // rax
    let v2: u128;  // xmm1
    let v3: iNone;  // xmm2
    let v4: iNone;  // xmm3

    zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::sort_by_score(a1, *((a2 + 72) as &i64));
    v1 = *((a1 + 16) as &i64);
    v2 = *((a2 + 16) as &i128);
    v3 = *((a2 + 32) as &i128);
    v4 = *((a2 + 48) as &i128);
    return struct120 {
        field_0: *(a2 as &i128)
        field_16: v2
        field_32: v3
        field_48: v4
        field_64: *((a2 + 64) as &i128)
        field_80: *((a2 + 80) as &i128)
        field_96: a1
        field_104: 0
        field_112: v1
    };
}
