fn uu_head::parse::parse_num(a0: void*, a1: u32, a2: u32) -> u64 {
    let v0: i128;  // [sp-0x108]
    let v1: i256;  // [sp-0xf8], Other Possible Types: struct32
    let v2: Argument;  // [bp-0xd8]
    let v3: i64;  // [sp-0xc8]
    let v4: i64;  // [sp-0xc0]
    let v5: i64;  // [sp-0xb8]
    let v6: i8;  // [sp-0xb0]
    let v7: struct8;  // [bp-0xa8]
    let v8: i64;  // [sp-0x98]
    let v9: i16;  // [sp-0x88]
    let v10: i8;  // [sp-0x86]
    let v11: Arguments;  // [bp-0x80]
    let v12: String;  // [sp-0x48], Other Possible Types: i192
    let v14: i64;  // rax
    let v15: i64;  // rdx
    let v16: i64;  // rcx
    let v17: i32;  // edx
    let v18: i32;  // edi
    let v20: i64;  // r14
    let v21: i32;  // esi
    let v23: i64;  // rcx
    let v24: i8;  // bpl
    let v25: i64;  // r14
    let v27: i64;  // rdx
    let v28: i64;  // rdx
    let v29: i64;  // rdi
    let v30: i64;  // rdx
    let v31: i32;  // esi
    let v32: i32;  // esi
    let v33: i32;  // r9d
    let v34: i32;  // r8d
    let v35: i64;  // rdx
    let v36: i64;  // rdx
    let v37: i64;  // rcx
    let v38: i64;  // r14
    let v39: i64;  // rax
    let v40: i64;  // rax
    let v41: i64;  // rcx

    v14 = core::str::<impl str>::trim_matches(a1, a2);
    if !v15 {
        memcpy(v20, a1, a2);
        *(a0 as &i64) = 1;
        *((a0 + 8) as &i64) = a2;
        *((a0 + 16) as &i64) = v20;
        *((a0 + 24) as &i64) = a2;
        return a0;
    }
    v16 = *(v14 as &i8);
    if v16 >= 0 {
LABEL_48d538:
    } else {
        v17 = v16 & 31;
        v18 = *((v14 + 1) as &i8) & 63;
        if (v16 & 255) <= 223 {
            v16 = v17 * 64 | v18;
            goto LABEL_48d538;
        }
        v21 = *((v14 + 2) as &i8) & 63 | v18 * 64;
        if (v16 & 255) < 240 {
            v16 = v21 | v17 * 0x1000;
        } else {
            v16 = *((v14 + 3) as &i8) & 63 | v21 * 64 | (v17 & 7) * 0x40000;
            if v16 != 43 && v16 != 45 {
                v24 = 0;
                goto LABEL_48d563;
            }
        }
    }
    if v15 != 1 && *((v14 + 1) as &i8) < 192 {
        core::str::slice_error_fail(); /* do not return */
    }
    v14 += 1;
    v25 = v15 - 1;
    v24 = vvar_125{reg 56} | -0x100 | v23 == 45;
LABEL_48d563:
    do {
        v27 = 0;
        if v27 == v25 {
            break;
        }
        v28 = v27 + v14;
        v29 = *(v28 as &i8);
        if v29 >= 0 {
            v30 = v28 + 1;
            v31 = v29;
        } else {
            v32 = v29 & 31;
            v33 = *((v28 + 1) as &i8) & 63;
            if (v29 & 255) <= 223 {
                v30 = v28 + 2;
                v31 = v32 * 64 | v33;
            } else {
                v34 = *((v28 + 2) as &i8) & 63 | v33 * 64;
                if (v29 & 255) < 240 {
                    v30 = v28 + 3;
                    v31 = v32 * 0x1000 | v34;
                } else {
                    v30 = v28 + 4;
                    v31 = (v32 & 7) * 0x40000 | *((v28 + 3) as &i8) & 63 | v34 * 64;
                }
            }
        }
        v35 = v30 - v14;
    } while (v31 == 48);
    v37 = v36;
    v38 = v25 - v37;
    if v25 == v37 {
        *((a0 + 8) as &i64) = 0;
        *((a0 + 16) as &i8) = v24;
        *(a0 as &i64) = 3;
        return a0;
    }
    v39 = v14 + v37;
    v9 = 0;
    v10 = 0;
    v7 = struct8 {
        field_0: 0
    };
    v8 = 0;
    v1 = uucore::parser::parse_size::Parser::parse(&v7, v39, v38);
    v40 = v1;
    if v40 != 3 {
        v41 = *((&v1 as &char + 8) as &i64);
        v0 = *((&v1 as &char + 16) as &i128);
    } else if *((&v1 as &char + 24) as &i64) {
        v3 = 0;
        v4 = v39;
        v5 = v38;
        v6 = 1;
        v2 = Argument {
            value: &v3
            formatter: <os_display::Quoted as core::fmt::Display>::fmt
        };
        v11 = Arguments {
            pieces: [&anon.edec59db3b863b6761f2fcbb7c5018ad.77.llvm.1026247603497507326, ": Value too large for defined data type"]
            args: [&v2]
            fmt: None
        };
        v12 = alloc::fmt::format::format_inner(&v11);
        v41 = v12;
        v0 = *((&v12 as &char + 8) as &i128);
        v40 = 2;
    } else {
        *((a0 + 8) as &i64) = *((&v1 as &char + 16) as &i64);
        *((a0 + 16) as &i8) = v24;
        *(a0 as &i64) = 3;
        return a0;
    }
    *(a0 as &i64) = v40;
    *((a0 + 8) as &i64) = v41;
    *((a0 + 16) as &i128) = v0;
    return a0;
}
