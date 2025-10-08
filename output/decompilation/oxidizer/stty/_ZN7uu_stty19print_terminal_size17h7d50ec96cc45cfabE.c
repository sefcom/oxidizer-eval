fn uu_stty::print_terminal_size(a0: i64, a1: i64) -> long long {
    let v0: u64;  // [bp-0x80]
    let v1: void*;  // [bp-0x80]
    let v2: core::fmt::Arguments;  // [bp-0x78]
    let v3: struct72;  // [bp-0x78]
    let v7: u32;  // eax
    let v8: u32;  // edi
    let v9: u32;  // edx

    v7 = nix::sys::termios::cfgetospeed(a0);
    *(&v0 as &&str) = "0";
    if v7 {
        *(&v0 as &&str) = "50";
        if v7 != 1 {
            *(&v0 as &&str) = "75";
            if v7 != 2 {
                *(&v0 as &&str) = "110";
                if v7 != 3 {
                    *(&v0 as &&str) = "134";
                    if v7 != 4 {
                        *(&v0 as &&str) = "150";
                        if v7 != 5 {
                            *(&v0 as &&str) = "200";
                            if v7 != 6 {
                                *(&v0 as &&str) = "300";
                                if v7 != 7 {
                                    *(&v0 as &&str) = "600";
                                    if v7 != 8 {
                                        *(&v0 as &&str) = "1200";
                                        if v7 != 9 {
                                            *(&v0 as &&str) = "1800";
                                            if v7 != 10 {
                                                *(&v0 as &&str) = "2400";
                                                if v7 != 11 {
                                                    *(&v0 as &&str) = "9600";
                                                    if v7 != 13 {
                                                        *(&v0 as &&str) = "19200";
                                                        if v7 != 14 {
                                                            *(&v0 as &&str) = "38400";
                                                            if v7 != 15 {
                                                                *(&v0 as &&str) = "57600";
                                                                if v7 != 4097 {
                                                                    *(&v0 as &&str) = "115200";
                                                                    if v7 != 4098 {
                                                                        *(&v0 as &&str) = "230400";
                                                                        if v7 != 4099 {
                                                                            *(&v0 as &&str) = "500000";
                                                                            if v7 != 4101 {
                                                                                *(&v0 as &&str) = "576000";
                                                                                if v7 != 4102 {
                                                                                    *(&v0 as &&str) = "921600";
                                                                                    if v7 != 4103 {
                                                                                        *(&v0 as &&str) = "1000000";
                                                                                        if v7 != 4104 {
                                                                                            *(&v0 as &&str) = "1152000";
                                                                                            if v7 != 4105 {
                                                                                                *(&v0 as &&str) = "1500000";
                                                                                                if v7 != 4106 {
                                                                                                    *(&v0 as &&str) = "2000000";
                                                                                                    if v7 != 4107 {
                                                                                                        *(&v0 as &&str) = "2500000";
                                                                                                        if v7 != 4108 {
                                                                                                            *(&v0 as &&str) = "3000000";
                                                                                                            if v7 != 4109 {
                                                                                                                *(&v0 as &&str) = "3500000";
                                                                                                                if v7 != 4110 {
                                                                                                                    *(&v0 as &&str) = "4000000";
                                                                                                                    if v7 != 4111 {
                                                                                                                        goto LABEL_458b05;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    print!("speed {} baud; ", &v0);
LABEL_458b05:
    if *((a1 + 40) as &i8) {
        v1 = 0;
        v8 = 1;
        if (uu_stty::tiocgwinsz(v8, &v1 as u8) & 1) {
            return v9;
        }
        print!("rows {}; columns {}; ", &v1 as u8, &v10);
    }
    vvar_301{stack -120} = struct72 OrderedDict([(0, 𝜙@64b [((4557573, None), vvar_237{stack -120}), ((4557640, None), vvar_269{stack -120})]), (24, 𝜙@64b [((4557573, None), vvar_241{stack -96}), ((4557640, None), vvar_273{stack -96})])])
    <core::cell::RefCell<T> as core::clone::Clone>::clone(&v3, a0 + 32);
    v0 = v3.field_24;
    print!("line = {};", &v0);
    v2 = core::fmt::Arguments {
        pieces: ["\n"]
        args: []
        fmt: 0
    };
    std::io::stdio::_print(&v2);
    return 134;
}
