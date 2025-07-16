fn uu_sort::make_sort_mode_arg(a0: &struct592, a1: i64, a2: i64, a3: i32, a4: i64, a5: i64) -> long long {
    let v0: u128;  // [bp-0x720]
    let v1: u8;  // [bp-0x4d0]
    let v2: u8;  // [bp-0x280]
    let v4: struct8;  // rax

    clap_builder::builder::arg::Arg::new(&v2, a1, a2);
    clap_builder::builder::arg::Arg::short(&v0, &v2, a3);
    clap_builder::builder::arg::Arg::long(&v2, &v0, a1, a2);
    clap_builder::builder::arg::Arg::help(&v0, &v2, a4, a5);
    clap_builder::builder::arg::Arg::action(&v1, &v0, 2);
    v0 = struct16 {
        field_0: "general-numeric-sort"
        field_8: &g_5ffc58
    };
    v4 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
    if v4 {
        do {
            if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*(v4 as &i64), *((v4 + 8) as &i64), a1, a2) as i8 {
                memcpy(&v2, &v1, 592);
                clap_builder::builder::arg::Arg::conflicts_with(&v1, &v2, v4);
            }
        } while ((v4 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0), v4));
    }
    return memcpy(a0, &v1, 592);
}
