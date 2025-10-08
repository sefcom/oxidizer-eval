fn uu_ls::match_quoting_style_name(a0: void*, a1: u32, a2: i192) -> long long {
    let v1: struct17;  // al

    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "literal") && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "shell") && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "shell-always") && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "shell-escape") && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "shell-escape-always") && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "c") {
        v1 = (<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "escape") ^ 1) * 2 + 2;
        a2 = 0;
    }
    return (v1 as u32 | a2 * 0x100) as u64;
}
