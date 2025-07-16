fn uu_ls::match_quoting_style_name(a0: i64, a1: i32, a2: i64) -> long long {
    let v1: u8;  // bl
    let v2: u16;  // ax

    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "literal") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "shell") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "shell-always") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "shell-escape") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "shell-escape-always") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "c") as i8 {
        v1 = (<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "escape") as i32 ^ 1) * 2 + 2;
    }
    return v2 | v1 * 0x10000;
}
