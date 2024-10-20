fn uu_seq::print_seq() -> u32 {
    let v0: i64;  // [sp-0x1d0]
    let v1: Arguments;  // [bp-0x1c8]
    let v2: i64;  // [bp-0x198]
    let v3: i64;  // [sp-0x190]
    let v4: i64;  // [bp-0x188]
    let v5: i64;  // [sp-0x180]
    let v6: i64;  // [sp-0x178]
    let v7: i64;  // [sp-0x170]
    let v8: i8;  // [sp-0x168]
    let v9: i128;  // [sp-0x158]
    let v10: i128;  // [sp-0x148]
    let v11: i64;  // [sp-0x138]
    let v12: i64;  // [sp-0x128], Other Possible Types: Argument
    let v13: Argument;  // [sp-0x120], Other Possible Types: i64
    let v14: Argument;  // [bp-0x118]
    let v15: i64;  // [sp-0x108]
    let v16: i64;  // [sp-0x100]
    let v17: i128;  // [sp-0xf8], Other Possible Types: String
    let v18: i64;  // [sp-0xe8]
    let v19: i128;  // [sp-0xd8]
    let v20: i128;  // [sp-0xc8]
    let v21: i64;  // [sp-0xb8]
    let v22: i64;  // [sp-0xa8]
    let v23: i64;  // [sp-0xa0]
    let v24: i64;  // [sp-0x98]
    let v25: i64;  // [sp-0x90]
    let v26: i128;  // [sp-0x88]
    let v27: i128;  // [sp-0x78]
    let v28: i64;  // [sp-0x68]
    let v29: i64;  // [sp-0x60]
    let v30: i64;  // [sp-0x58]
    let v31: i64;  // [sp-0x50]
    let v32: i64;  // [sp-0x48]
    let v33: i64;  // [sp-0x40]
    let v34: i64;  // [sp-0x38]
    let v35: i64;  // [sp-0x30]
    let v36: i64;  // [bp+0x8]
    let v37: i8;  // [bp+0x10]
    let v38: i8;  // [bp+0x18]
    let v39: i64;  // rbx
    let v40: i64;  // rdx
    let v41: i64;  // rcx
    let v42: i64;  // r8
    let v43: i64;  // r9
    let v47: i64;  // rsi
    let v48: i64;  // rdi
    let v51: i64;  // rsi
    let v52: i64;  // rdi
    let v53: i64;  // rax
    let v54: i64;  // rax
    let v56: i64;  // rdi
    let v57: i64;  // rax
    let v58: i64;  // rax
    let v59: i64;  // rsi
    let v60: i64;  // rsi
    let v61: i64;  // rsi
    let v62: i64;  // rdi

    v35 = v39;
    v31 = v40;
    v32 = v41;
    v33 = v42;
    v34 = v43;
    v30 = std::io::stdio::stdout();
    v0 = std::io::stdio::Stderr::lock(&v30, v47, v40);
    v11 = *((v48 + 32) as &i64);
    v10 = *((v48 + 16) as &i128);
    v9 = *(v48 as &i128);
    v21 = *((v48 + 72) as &i64);
    v20 = *((v48 + 56) as &i128);
    v19 = *((v48 + 40) as &i128);
    v28 = *((v48 + 112) as &i64);
    v27 = *((v48 + 96) as &i128);
    v26 = *((v48 + 80) as &i128);
    v52 = v51 + v37;
    if !v36 {
        v52 = 0;
    }
    v22 = v52;
    v29 = *(v38 as &i64);
    v24 = 0x8000000000000000;
    v23 = 9223372036854775810;
    v4 = 0x10000000000000000;
    v2 = 0x80000000000000000;
    v6 = 0;
    if <uu_seq::extendedbigdecimal::ExtendedBigDecimal as core::cmp::PartialOrd>::partial_cmp(&v9) as i8 == 1 {
        if !<std::io::stdio::StdoutLock as std::io::Write>::flush(&v0) {
            v56 = v0;
            *((v56 + 12) as &i32) = *((v56 + 12) as &i32) - 1;
            if vvar_778 != 1 {
                return;
            }
            *(v56 as &i64) = 0;
            *((v56 + 8) as &i32) = 0;
            if BinaryOp CasCmpNE {
                goto LABEL_0x494897;
            }
            if ((Not (Load(addr=(vvar_491{reg 72} + 0x8<64>), size=4, endness=Iend_LE) == 0x2<32>))) { Goto None } else { Goto None }
            std::sys::sync::mutex::futex::Mutex::wake(v56 + 8);
        }
    } else {
        if v29 != v24 {
            v53 = v9;
            v54 = 9223372036854775811 + v53 - 2;
            if 9223372036854775812 <= v53 {
                v54 = 0;
            }
            goto *((4321532 + vvar_129{reg 16} * 4) as &i32) + 4321532;
        } else {
            v25 = &v9;
            if v9 >= v23 {
                v12 = &v25;
                v13 = Argument {
                    value: <&T as core::fmt::Display>::fmt
                    formatter: v47
                };
                v14 = Argument {
                    value: v47
                    formatter: 0
                };
                v15 = v22;
                v16 = 0;
                v2 = 1;
                v3 = 1;
                v4 = 1;
                v5 = 2;
                v6 = 0;
                v7 = 34359738400;
                v8 = 1;
                v1 = Arguments {
                    pieces: [&anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654]
                    args: [&v12, &v13, &v14]
                    fmt: 
                };
                v17 = alloc::fmt::format::format_inner(&v1);
            } else {
                v12 = Argument {
                    value: &v25
                    formatter: <&T as core::fmt::Display>::fmt
                };
                v13 = Argument {
                    value: <&T as core::fmt::Display>::fmt
                    formatter: v47
                };
                v14 = Argument {
                    value: v47
                    formatter: 0
                };
                v15 = v22;
                v16 = 0;
                v2 = 1;
                v3 = 1;
                v4 = 1;
                v5 = 2;
                v6 = 0;
                v7 = 32;
                v8 = 1;
                v1 = Arguments {
                    pieces: [&anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654]
                    args: [&v12, &v13, &v14]
                    fmt: 
                };
                v17 = alloc::fmt::format::format_inner(&v1);
            }
            v12 = &v17;
            v13 = <alloc::string::String as core::fmt::Display>::fmt;
            v2 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
            v3 = 1;
            v6 = 0;
            v4 = &v12;
            v5 = 1;
            if !std::io::Write::write_fmt(&v0, &v2) {
                v17 = v10;
                v18 = v11;
                v57 = v19;
                v58 = 9223372036854775811 + v57 - 2;
                if 9223372036854775812 <= v57 {
                    v58 = 0;
                }
                goto *((4321552 + vvar_130{reg 16} * 4) as &i32) + 4321552;
            }
        }
    }
    v59 = v9;
    v60 = v26;
    v61 = v19;
    v62 = v0;
    *((v62 + 12) as &i32) = *((v62 + 12) as &i32) - 1;
    if vvar_782 == 1 {
        *(v62 as &i64) = 0;
        *((v62 + 8) as &i32) = 0;
        if BinaryOp CasCmpNE {
            goto LABEL_0x4947e8;
        }
        if ((Not (Load(addr=(vvar_549{reg 72} + 0x8<64>), size=4, endness=Iend_LE) == 0x2<32>))) { Goto None } else { Goto None }
        std::sys::sync::mutex::futex::Mutex::wake(v62 + 8);
    }
    return;
}
