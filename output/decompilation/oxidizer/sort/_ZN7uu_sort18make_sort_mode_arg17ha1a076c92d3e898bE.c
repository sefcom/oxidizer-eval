fn uu_sort::make_sort_mode_arg(a0: void*, a1: u64, a2: void*, a3: u32, a4: u64, a5: u64) -> long long {
    let v0: struct640;  // [bp-0x7b0]
    let v1: struct640;  // [bp-0x530]
    let v2: struct640;  // [bp-0x2b0]

    v2 = clap_builder::builder::arg::Arg::new(a1, a2);
    v1 = clap_builder::builder::arg::Arg::short(&v2, a3);
    v2 = clap_builder::builder::arg::Arg::long(&v1, a1, a2);
    v1 = clap_builder::builder::arg::Arg::help(&v2, a4, a5);
    v0 = clap_builder::builder::arg::Arg::action(&v1, 2);
    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal("general-numeric-sort", a1, a2) {
        memcpy(&v2, &v0, 640);
        v1 = clap_builder::builder::arg::Arg::conflicts_with(&v2, "general-numeric-sort");
        memcpy(&v0, &v1, 640);
    }
    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal("human-numeric-sort", a1, a2) {
        memcpy(&v2, &v0, 640);
        v1 = clap_builder::builder::arg::Arg::conflicts_with(&v2, "human-numeric-sort");
        memcpy(&v0, &v1, 640);
    }
    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal("month-sort", a1, a2) {
        memcpy(&v2, &v0, 640);
        v1 = clap_builder::builder::arg::Arg::conflicts_with(&v2, "month-sort");
        memcpy(&v0, &v1, 640);
    }
    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal("numeric-sort", a1, a2) {
        memcpy(&v2, &v0, 640);
        v1 = clap_builder::builder::arg::Arg::conflicts_with(&v2, "numeric-sort");
        memcpy(&v0, &v1, 640);
    }
    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal("version-sort", a1, a2) {
        memcpy(&v2, &v0, 640);
        v1 = clap_builder::builder::arg::Arg::conflicts_with(&v2, "version-sort");
        memcpy(&v0, &v1, 640);
    }
    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal("random-sort", a1, a2) {
        memcpy(&v2, &v0, 640);
        v1 = clap_builder::builder::arg::Arg::conflicts_with(&v2, "random-sort");
        memcpy(&v0, &v1, 640);
    }
    return memcpy(a0, &v0, 640);
}
