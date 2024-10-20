fn uu_head::uu_head() -> u32 {
    let v0: u8;  // [sp-0x10159]
    let v1: u32;  // [sp-0x10158]
    let v2: u8;  // [sp-0x10152]
    let v3: u8;  // [sp-0x10151]
    let v4: u64;  // [sp-0x10150], Other Possible Types: Enum
    let v5: u8;  // [bp-0x10148]
    let v6: &u64;  // [sp-0x10138]
    let v7: u64;  // [sp-0x10130]
    let v8: u8;  // [sp-0x10121]
    let v9: Argument;  // [bp-0x10120]
    let v10: Argument;  // [bp-0x10118]
    let v11: u64;  // [sp-0x10108]
    let v12: &u8;  // [sp-0x100d8]
    let v13: u64;  // [sp-0x100d0]
    let v14: u128;  // [sp-0x100c8]
    let v15: u64;  // [sp-0x10090]
    let v16: u64;  // [sp-0x10088]
    let v17: &u8;  // [sp-0x10080]
    let v18: u64;  // [sp-0x10078]
    let v19: u64;  // [sp-0x10068]
    let v20: u64;  // [sp-0x10060]
    let v21: u64;  // [sp-0x10058]
    let v22: Arguments;  // [bp-0x10038], Other Possible Types: struct8
    let v23: u8;  // [bp-0x10030]
    let v24: u128;  // [bp-0x10020]
    let v25: void*;  // [sp-0x2030]
    let v27: &struct_2;  // rdi
    let v28: &struct_0;  // rbx
    let v29: &u8;  // r15
    let v31: &struct_3;  // rbx
    let v32: u256;  // ymm0
    let v34: u128;  // xmm0
    let v36: u8;  // dl

    do {
        v25 = 0;
    } while (&v25 != &v23);
    v19 = v27->field_20;
    if !v19 {
        return;
    }
    v28 = v27->field_18;
    v20 = v28 as &u8 + 24 * v19;
    v8 = v27->field_2a;
    v3 = v27->field_29;
    v2 = v27->field_28 & !v3;
    v16 = v27->field_0;
    v0 = v27->field_2b;
    v7 = v27->field_8;
    v21 = v7 + 1;
    v15 = "src/uu/head/src/head.rs";
    if v8 {
        v29 = v28->field_8;
        goto LABEL_488c81;
    }
    do {
        v31 = &v28[1].field_8;
        v29 = v31[1].field_-10;
        if v13 == 1 && *(v29) == 45 {
            goto LABEL_488c81;
        } else {
            v12 = v29;
            v13 = v31->field_-8;
            v22 = struct8 {
                field_0: 0x1b600000000
            };
            v23 = 0;
            v23 = 1;
            v4 = std::fs::OpenOptions::_open(&v22, v29, v13);
            if !v4 as i32 {
                v17 = v29;
                v1 = *((&v4 as &char + 4) as &i32);
                if v19 != 1 {
                    if v2 {
                        goto *((4299552 + (stack_base)[65672] as i64 * 4) as &i32) + 4299552;
                    }
                } else {
                    if !v3 {
                        goto *((4299552 + (stack_base)[65672] as i64 * 4) as &i32) + 4299552;
                    }
                }
                v9 = Argument {
                    value: &v12
                    formatter: <&T as core::fmt::Display>::fmt
                };
                v22 = Arguments {
                    pieces: &[&str] {
                        ptr: "==> "
                        len: <UNKNOWN>
                    }
                    args: [&v9]
                    fmt: None
                };
                v23 = 2;
                std::io::stdio::_print(&v22);
                goto *((4299552 + (stack_base)[65672] as i64 * 4) as &i32) + 4299552;
            }
            v6 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(*(&v5 as &i64), v12, v13);
            _ZN6uucore4mods5error9EXIT_CODE17h7e79f2b7e24d7d70E.0.llvm.3928628070634382108 = 1;
            if BinaryOp CasCmpNE {
                goto LABEL_0x488d5e;
            }
            if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 == 2 {
                goto LABEL_488d80;
            }
            once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
        }
LABEL_488d80:
        v34 = g_4f49e8;
        vvar_35{reg 224} = ((vvar_35{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_185{reg 224}))
        v14 = v34;
        v9 = Argument {
            value: &v14
            formatter: <&T as core::fmt::Display>::fmt
        };
        v10 = Argument {
            value: <&T as core::fmt::Display>::fmt
            formatter: &v6
        };
        v11 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        v22 = Arguments {
            pieces: &[&str] {
                ptr: &g_4efdf8
                len: <UNKNOWN>
            }
            args: [&v9, &v10]
            fmt: None
        };
        v23 = 3;
        std::io::stdio::_eprint(&v22);
    } while (v31 != v20);
LABEL_488c81:
    v17 = v29;
    if v19 != 1 {
        if v2 {
            vvar_464{stack -65656} = std::io::stdio::stdin();
            vvar_466{stack -65872} = std::io::stdio::Stdin::lock(&v18);
            vvar_467{stack -65864} = v36 & 1;
            goto *((4299568 + (stack_base)[65672] as i64 * 4) as &i32) + 4299568;
        }
    } else {
        if !v3 {
            vvar_458{stack -65656} = std::io::stdio::stdin();
            vvar_460{stack -65872} = std::io::stdio::Stdin::lock(&v18);
            vvar_461{stack -65864} = v36 & 1;
            goto *((4299568 + (stack_base)[65672] as i64 * 4) as &i32) + 4299568;
        }
    }
    v22 = Arguments {
        pieces: &[&str] {
            ptr: "==> standard input <==\n"
            len: <UNKNOWN>
        }
        args: [8, 16]
        fmt: None
    };
    v23 = 1;
    v24 = 0;
    std::io::stdio::_print(&v22);
    v18 = std::io::stdio::stdin();
    v4 = std::io::stdio::Stdin::lock(&v18);
    v5 = v36 & 1;
    goto *((4299568 + (stack_base)[65672] as i64 * 4) as &i32) + 4299568;
}
