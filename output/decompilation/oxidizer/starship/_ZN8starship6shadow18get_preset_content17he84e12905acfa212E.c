fn starship::shadow::get_preset_content(a0: i64, a1: i32) -> u64 {
    let v0: u64;  // [bp-0x18]
    let v2: u64;  // rax
    let v3: u64;  // rbx

    v0 = v2;
    v3 = a1;
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "bracketed-segments") {
        return &g_54b24b;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "catppuccin-powerline") {
        return &g_549d61;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "gruvbox-rainbow") {
        return &g_548e3d;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "jetpack") {
        return &g_5474b6;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "nerd-font-symbols") {
        return &g_546c75;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "no-empty-icons") {
        return &g_546252;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "no-nerd-font") {
        return &g_54615c;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "no-runtime-versions") {
        return &g_545890;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "pastel-powerline") {
        return &g_544ce3;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "plain-text-symbols") {
        return &g_54418a;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "pure-preset") {
        return &g_543e26;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v3, "tokyo-night") {
        return &g_5438e7;
    } else {
        core::panicking::panic("internal error: entered unreachable code"); /* do not return */
    }
}
