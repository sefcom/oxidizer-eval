fn fd::ensure_use_hidden_option_for_leading_dot_pattern(a0: i8, a1: i64, a2: i64) -> u64 {
    let v0: struct16;  // [bp-0x30], Other Possible Types: struct40

    if !(a0 & 1) {
        return 0;
    }
    v0 = struct16 {
        field_0: a1
        field_8: a1 + a2 * 24
    };
    if <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v0) {
        v0 = struct40 {
            field_0: "The pattern(s) seems to only match files with a leading dot, but hidden files are filtered by default. Consider adding -H/--hidden to search hidden files as well or adjust your search pattern(s)."
            field_8: 1
            field_16: 8
            field_24: 0
        };
        return anyhow::__private::format_err(&v0);
    }
    return 0;
}
