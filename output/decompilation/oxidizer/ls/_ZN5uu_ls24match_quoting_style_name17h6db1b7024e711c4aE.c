fn uu_ls::match_quoting_style_name(a0: u32, a1: u32, a2: u32) -> u64 {
    let v1: u32;  // eax
    let v2: u64;  // rax
    let v3: u64;  // rax
    let v4: u64;  // rax
    let v5: u64;  // rax

    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "literal") as i8 {
        v1 = a2;
        return v1 | 0x30000;
    }
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "shell") as i8 {
        return 0 | 0x30000;
    }
    v2 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "shell-always");
    if v2 {
        v1 = v2 & -0x10000 | 0x100;
        return v1 | 0x30000;
    }
    v3 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "shell-escape");
    if v3 {
        v1 = v3 & -0x10000 | 1;
        return v1 | 0x30000;
    }
    v4 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "shell-escape-always");
    if v4 {
        v1 = v4 & -0x10000 | 257;
        return v1 | 0x30000;
    }
    v5 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "c");
    if v5 {
        v1 = v5 & -0x10000 | 2;
        return v1 | 0x30000;
    }
    <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "escape");
}
