fn starship::context::Context::get_shell() -> u64 {
    let v0: Result<struct24, struct24>;  // [bp-0x50]
    let v1: void*;  // [bp-0x48]
    let v2: u32;  // [bp-0x40]
    let v3: Result<struct32, struct16>;  // [bp-0x38]
    let v5: struct25;  // rbp
    let v6: u32;  // eax

    v3 = std::env::var(&g_533750);
    v0 = core::result::Result<T,E>::unwrap_or_default(&v3);
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v1, v2, "bash") {
        return v5 & 4294967295;
    }
    v5 = vvar_13{reg 56} & -0x100 | 1;
    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v1, v2, "fish") {
        v5 = v5 & -0x100 | 2;
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v1, v2, "ion") {
            v5 = v5 & -0x100 | 3;
            if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v1, v2, "pwsh") {
                v5 = v5 & -0x100 | 4;
                if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v1, v2, "powershell") {
                    v5 = v5 & -0x100 | 5;
                    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v1, v2, "zsh") {
                        v5 = v5 & -0x100 | 6;
                        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v1, v2, "elvish") {
                            v5 = v5 & -0x100 | 7;
                            if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v1, v2, "tcsh") {
                                v5 = v5 & -0x100 | 8;
                                if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v1, v2, "nu") {
                                    v5 = v5 & -0x100 | 9;
                                    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v1, v2, "xonsh") {
                                        v6 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v1, v2, "cmd");
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return v5 & 4294967295;
}
