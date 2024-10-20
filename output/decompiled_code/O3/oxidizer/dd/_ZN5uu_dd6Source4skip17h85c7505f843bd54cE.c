fn uu_dd::Source::skip(a0: &u32, a1: u64) -> u64 {
    let v0: u128;  // [sp-0xf8]
    let v1: u64;  // [sp-0xf0]
    let v2: Argument;  // [bp-0xe8]
    let v3: u128;  // [sp-0xd8]
    let v4: u64;  // [sp-0xd0]
    let v5: Arguments;  // [sp-0xc8], Other Possible Types: u128, struct16
    let v6: u64;  // [sp-0xc0]
    let v7: u128;  // [bp-0xb0]
    let v8: i8;  // [bp-0x90]
    let v10: u32;  // eax
    let v11: void*;  // rax
    let v12: u64;  // rdx
    let v13: u64;  // rdx

    v10 = *(a0);
    if v10 {
        if v10 != 1 {
            v5 = a0 + 1;
            v6 = a1;
            v11 = std::io::copy::generic_copy() as i64;
            return v11;
        }
        v5 = std::fs::File::metadata(v5);
        if v5 as i32 == 2 {
            v1 = v6;
            goto LABEL_499292;
        } else {
            if (0xf000 & v8) == 0x6000 {
                if !(<std::fs::File as std::io::Seek>::seek(v5, 1)) && (!(<std::fs::File as std::io::Seek>::seek(v5, 0)) || !(v12)) {
                    if v12 < a1 {
                        v3 = uucore::util_name();
                        v4 = v12;
                        v2 = Argument {
                            value: &v3
                            formatter: <&T as core::fmt::Display>::fmt
                        };
                        v5 = Arguments {
                            pieces: [&g_515c08, ": "]
                            args: [&v2]
                            fmt: None
                        };
                        std::io::stdio::_eprint(&v5);
                        v5 = Arguments {
                            pieces: ["'standard input': cannot skip: Invalid argument\n"]
                            args: [8]
                            fmt: None
                        };
                        v7 = 0;
                        std::io::stdio::_eprint(&v5);
                        _ZN6uucore4mods5error9EXIT_CODE17h7e79f2b7e24d7d70E.0.llvm.3928628070634382108 = 1;
                        if BinaryOp CasCmpNE {
                            goto LABEL_0x49942c;
                        }
                        return 0;
                    }
                } else {
                    v1 = v13;
LABEL_499292:
                    v0 = 2;
                }
            }
            v0 = v5;
            v11 = std::io::copy::generic_copy() as i64;
            if v11 {
                return v11;
            }
            if v12 >= a1 {
                return v11;
            }
            if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
                once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
            }
            v3 = g_51be68;
            v2 = Argument {
                value: &v3
                formatter: <&T as core::fmt::Display>::fmt
            };
            v5 = Arguments {
                pieces: [&g_515c08, ": "]
                args: [&v2]
                fmt: None
            };
            std::io::stdio::_eprint(&v5);
            v5 = Arguments {
                pieces: ["'standard input': cannot skip to specified offset\n"]
                args: [8]
                fmt: None
            };
            v7 = 0;
            std::io::stdio::_eprint(&v5);
            return v11;
        }
    } else if a1 < 0 {
        core::result::unwrap_failed(); /* do not return */
    } else {
        v11 = <std::fs::File as std::io::Seek>::seek(a0 + 1, 2);
        return v11;
    }
}
