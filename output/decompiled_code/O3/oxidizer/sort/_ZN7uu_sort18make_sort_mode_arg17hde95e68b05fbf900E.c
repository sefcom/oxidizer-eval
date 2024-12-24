fn uu_sort::make_sort_mode_arg(a0: i64, a1: i64, a2: i64, a3: i32, a4: i64, a5: i64) -> u64 {
    let v0: i4736;  // [sp-0x720], Other Possible Types: struct592, struct16
    let v1: i4736;  // [sp-0x4d0], Other Possible Types: struct592
    let v2: struct592;  // [sp-0x280], Other Possible Types: i4736
    let v4: i64;  // rax

    v2 = clap_builder::builder::arg::Arg::new(a1, a2);
    v0 = clap_builder::builder::arg::Arg::short(&v2, a3);
    v2 = clap_builder::builder::arg::Arg::long(&v0, a1, a2);
    v0 = clap_builder::builder::arg::Arg::help(&v2, a4, a5);
    v1 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v0 = struct16 {
        field_0: "general-numeric-sort"
        field_8: &g_5ff130
    };
    v4 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
    if v4 {
        do {
            if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*(v4 as &i64), *((v4 + 8) as &i64), a1, a2) as i8 {
                memcpy(&v2, &v1, 592);
                v1 = clap_builder::builder::arg::Arg::conflicts_with(&v2, v4);
            }
        } while ((v4 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0), v4));
    }
    return memcpy(a0, &v1, 592);
}
