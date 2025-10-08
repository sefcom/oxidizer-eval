fn uu_nl::NumberFormat::format(a0: u64, a1: i64, a2: u64, a3: u64) -> long long {
    let v0: core::fmt::Arguments;  // [bp-0x68]
    let v9: u64;  // [bp-0x18]
    let v10: u64;  // [bp-0x10]
    let v12: u32;  // eax

    v9 = a2;
    v12 = *(a1 as &i8);
    if v12 {
        if v12 == 1 {
            if a3 > 65535 {
                panic!("Formatting argument out of range");
            }
        } else {
            if a2 < 0 {
                v10 = -(a2);
                if a3 - 1 > 65535 {
                    panic!("Formatting argument out of range");
                }
            } else if a3 > 65535 {
                panic!("Formatting argument out of range");
            }
        }
    } else {
        if a3 > 65535 {
            panic!("Formatting argument out of range");
        }
    }
    vvar_182{stack -104} = core::fmt::Arguments OrderedDict([(0, &[&str] OrderedDict([(0, 𝜙@64b [((5354267, None), vvar_161{stack -104}), ((5354186, None), vvar_129{stack -104}), ((5354465, None), vvar_150{stack -104})])])), (16, [vvar_180{stack -56}, vvar_181{stack -40}]), (32, vvar_5{reg 16})])
    core::option::Option<T>::map_or_else(a0, &v0);
    return a0;
}
