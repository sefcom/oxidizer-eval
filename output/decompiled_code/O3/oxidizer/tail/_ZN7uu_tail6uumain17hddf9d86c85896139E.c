fn uu_tail::uumain(a0: i64, a1: i64) -> u64 {
    let v0: i64;  // [sp-0x128]
    let v1: i64;  // [sp-0x120]
    let v2: Arguments;  // [sp-0x118], Other Possible Types: i64, Enum
    let v3: i64;  // [sp-0x110]
    let v4: i64;  // [sp-0x108]
    let v5: i64;  // [bp-0x100]
    let v6: i64;  // [sp-0xc0]
    let v7: i64;  // [sp-0xb8]
    let v8: i64;  // [sp-0xb0]
    let v9: i8;  // [sp-0xa8]
    let v10: i64;  // [sp-0xa0], Other Possible Types: String
    let v11: i64;  // [sp-0x98]
    let v12: i64;  // [sp-0x88]
    let v13: i64;  // [sp-0x80]
    let v14: i64;  // [sp-0x78]
    let v15: i128;  // [sp-0x70]
    let v16: i128;  // [sp-0x60]
    let v17: i128;  // [sp-0x50]
    let v18: i64;  // [sp-0x40]
    let v19: i192;  // [sp-0x38], Other Possible Types: String
    let v21: i64;  // rdx
    let v22: i64;  // r14
    let v23: i64;  // r15
    let v24: i64;  // rax
    let v25: i128;  // xmm0
    let v26: i32;  // eax
    let v27: i64;  // rdx
    let v28: i64;  // r12
    let v29: i64;  // rax

    v21 = a1;
    v2 = uu_tail::args::parse_args(a0, a1);
    v22 = v3;
    v23 = v4;
    if v12 != 5 {
        v18 = *((&v2 as &char + 72) as &i64);
        v17 = *((&v2 as &char + 56) as &i128);
        v16 = *((&v2 as &char + 40) as &i128);
        v15 = *((&v2 as &char + 24) as &i128);
        v12 = v2;
        v13 = v22;
        v14 = v23;
        v12 = v2;
        v24 = uu_tail::args::Settings::verify(&v12);
        if v24 == 2 {
            v22 = 0;
            goto LABEL_455f36;
        }
        if v24 == 1 {
            v6 = 0;
            v7 = &g_419ce7;
            v8 = 1;
            v9 = 1;
            v0 = &v6;
            v1 = <os_display::Quoted as core::fmt::Display>::fmt;
            v2 = Arguments {
                pieces: ["cannot follow ", " by name"]
                args: &[&Argument] {
                    ptr: &v0
                    len: <UNKNOWN>
                }
                fmt: None
            };
            v5 = 1;
            v10 = alloc::fmt::format::format_inner(&v2);
            v5 = 1;
            v2 = v10;
            v4 = *((&v10 as &char + 16) as &i64);
            v22 = __rust_alloc(32, 8);
            v25 = v2;
            *((v22 + 16) as &i64) = v4;
            *(v22 as &i128) = v25;
LABEL_455f36:
            v23 = &g_558bd0;
        } else {
            v22 = uu_tail::uu_tail() as i64;
            if !v22 {
                v26 = uucore::mods::error::get_exit_code() as i32;
                return v26;
            }
LABEL_455f56:
            v0 = v22;
            v1 = v23;
            v12 = &v0;
            v13 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
            v2 = Arguments {
                pieces: [&anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654]
                args: &[&Argument] {
                    ptr: &v12
                    len: <UNKNOWN>
                }
                fmt: None
            };
            v5 = 1;
            v19 = alloc::fmt::format::format_inner(&v2);
            v12 = v19;
            v14 = *((&v19 as &char + 16) as &i64);
            if v14 {
                v6 = uucore::util_name();
                v7 = v27;
                v10 = &v6;
                v11 = <&T as core::fmt::Display>::fmt;
                v2 = Arguments {
                    pieces: [&g_558b18, ": "]
                    args: &[&Argument] {
                        ptr: &v10
                        len: <UNKNOWN>
                    }
                    fmt: None
                };
                v4 = &v10;
                v5 = 1;
                std::io::stdio::_eprint(&v2);
                v6 = &v12;
                v7 = <alloc::string::String as core::fmt::Display>::fmt;
                v2 = Arguments {
                    pieces: [&g_558b38, "\n"]
                    args: &[&Argument] {
                        ptr: &v6
                        len: <UNKNOWN>
                    }
                    fmt: None
                };
                v5 = 1;
                std::io::stdio::_eprint(&v2);
            }
            if *((v1 + 104) as &i64)() {
                v6 = uucore::execution_phrase();
                v7 = v27;
                v10 = &v6;
                v11 = <&T as core::fmt::Display>::fmt;
                v2 = Arguments {
                    pieces: ["Try '", " --help' for more information.\n"]
                    args: &[&Argument] {
                        ptr: &v10
                        len: <UNKNOWN>
                    }
                    fmt: None
                };
                v5 = 1;
                std::io::stdio::_eprint(&v2);
            }
            v26 = *((v1 + 96) as &i64)();
            v28 = v1;
            if *(v28 as &i64) {
                v29();
            }
            if *((v28 + 8) as &i64) {
                return v26;
            }
            return v26;
        }
    }
    if !v22 {
        vvar_470{reg 16} = uucore::mods::error::get_exit_code() as i32;
        return v26;
    }
    goto LABEL_455f56;
}
