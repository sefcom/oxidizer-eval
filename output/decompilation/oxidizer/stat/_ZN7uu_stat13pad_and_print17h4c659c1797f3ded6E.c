fn uu_stat::pad_and_print(a0: u64, a1: u64, a2: u32, a3: u64, a4: u8) -> long long {
    let v0: core::fmt::Arguments;  // [bp-0x60]
    let v8: struct16;  // [bp-0x10]

    v8 = struct16 {
        field_0: a0
        field_8: a1
    };
    if a2 {
        if a4 {
            if a3 > 65535 {
                panic!("Formatting argument out of range");
            }
        } else {
            if a3 > 65535 {
                panic!("Formatting argument out of range");
            }
        }
    } else {
        if a4 {
            if a3 > 65535 {
                panic!("Formatting argument out of range");
            }
        } else {
            if a3 > 65535 {
                panic!("Formatting argument out of range");
            }
        }
    }
    vvar_156{stack -96} = core::fmt::Arguments OrderedDict([(0, &[&str] OrderedDict([(0, 𝜙@64b [((4666084, None), vvar_137{stack -96}), ((4665923, None), vvar_126{stack -96}), ((4666005, None), vvar_115{stack -96}), ((4665832, None), vvar_104{stack -96})])])), (16, [vvar_154{stack -48}, vvar_155{stack -32}]), (32, vvar_9{reg 16})])
    return std::io::stdio::_print(&v0);
}
