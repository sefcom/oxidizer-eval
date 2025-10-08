fn starship::modules::git_metrics::count_lines(a0: u64, a1: u64, a2: u64, a3: u32, a4: u64, a5: u64) -> long long {
    let v0: struct20;  // [bp-0x28]
    let v1: Option<struct8>;  // [bp-0x14]

    v0 = struct20 {
        field_0: 0
        field_16: 0
    };
    v1 = starship::modules::git_metrics::diff_two_opt(a0, a1, &v0, a3, a0, a1, a2, a3, a4, a5);
    return core::option::Option<T>::map_or(&v1);
}
