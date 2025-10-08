fn uu_stty::apply_flag(a0: i64, a1: i64, a2: i64, a3: i8) -> u64 {
    let v0: u64;  // [bp-0x28]
    let v2: u64;  // rax
    let v3: struct64;  // rdi, Other Possible Types: u64
    let v4: u64;  // rax
    let v5: u64;  // rax

    v0 = v2;
    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "ignbrk") && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "brkint") && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "ignpar") && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "parmrk") && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "inpck") && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "istrip") && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "inlcr") && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "igncr") && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "icrnl") && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "ixoff") && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "tandem") && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "ixon") && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "ixany") && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "imaxbel") {
        v4 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "iutf8");
        if !v4 {
            return v4 & -0x100 | 2;
        }
    }
    v5 = *(v3 as &i32);
    if a3 {
        if v5 {
            return 0;
        }
    } else {
        if (v5 & 1) {
            <nix::sys::termios::InputFlags as uu_stty::TermiosFlag>::apply(v3 + 4, a0, 0);
        }
    }
    return <nix::sys::termios::InputFlags as uu_stty::TermiosFlag>::apply(v3 + 24, a0, a3 ^ 1) & -0x100 | 1;
}
