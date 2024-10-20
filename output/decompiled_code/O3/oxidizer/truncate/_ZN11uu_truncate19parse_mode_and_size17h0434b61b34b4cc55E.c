fn uu_truncate::parse_mode_and_size(a0: &u64, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [sp-0x218]
    let v1: struct32;  // [sp-0xf8], Other Possible Types: i256
    let v2: i128;  // [bp-0xd8], Other Possible Types: Arguments
    let v3: Argument;  // [bp-0xa0]
    let v4: i64;  // [sp-0x90]
    let v5: i64;  // [sp-0x88]
    let v6: i64;  // [sp-0x80]
    let v7: i8;  // [sp-0x78]
    let v8: struct8;  // [bp-0x70]
    let v9: i64;  // [sp-0x60]
    let v10: i16;  // [sp-0x50]
    let v11: i8;  // [sp-0x4e]
    let v12: String;  // [sp-0x40], Other Possible Types: i192
    let v14: i64;  // rax
    let v15: i64;  // rdx
    let v16: i64;  // r12
    let v17: i32;  // ecx
    let v18: i32;  // esi
    let v19: i32;  // edx
    let v20: i64;  // r15
    let v21: i64;  // r14
    let v22: i64;  // r12
    let v23: i64;  // r13

    v14 = core::str::<impl str>::trim_matches(a1, a2);
    if !v15 {
        *(a0 as &i64) = 1;
        *((a0 + 8) as &i64) = 0;
        *((a0 + 16) as &i64) = 1;
        *((a0 + 24) as &i64) = 0;
        return v14;
    }
    v16 = *(v14 as &i8);
    if v16 < 0 {
        v17 = v16 & 31;
        v18 = *((v14 + 1) as &i8) & 63;
        if (v16 & 255) <= 223 {
            v16 = v17 * 64 | v18;
        } else {
            v19 = *((v14 + 2) as &i8) & 63 | v18 * 64;
            if (v16 & 255) >= 240 {
                v16 = *((v14 + 3) as &i8) & 63 | v19 * 64 | (v17 & 7) * 0x40000;
            } else {
                v16 = v19 | v17 * 0x1000;
                if v16 <= 62 && (v0 = 0x5000a82000000000, ((*((&v0 as &u8 + ((v16 & 4294967295 & 63) >> 3)) as &i8) as u8 as u64 >> (v16 & 4294967295 & 63 & 7) as i8 as u8 as u64) as u8 & 1)) {
                    v20 = v14 + 1;
                    if v15 == 1 {
                        v21 = 0;
                    } else {
                        if *(v20 as &i8) < 192 {
                            core::str::slice_error_fail(); /* do not return */
                        }
                        v21 -= 1;
                    }
LABEL_481f69:
                    v10 = 0;
                    v11 = 0;
                    v8 = struct8 {
                        field_0: 0
                    };
                    v9 = 0;
                    v1 = uucore::parser::parse_size::Parser::parse(&v8, v20, v21);
                    v23 = v1;
                    if v23 != 3 {
                        v14 = *((&v1 as &char + 8) as &i64);
                        v2 = *((&v1 as &char + 16) as &i128);
                    } else if !*((&v1 as &char + 24) as &i64) {
                        v14 = *((&v1 as &char + 16) as &i64);
                    } else {
                        v4 = 0;
                        v5 = v20;
                        v6 = v21;
                        v7 = 1;
                        v3 = Argument {
                            value: &v4
                            formatter: <os_display::Quoted as core::fmt::Display>::fmt
                        };
                        v2 = Arguments {
                            pieces: [&anon.edec59db3b863b6761f2fcbb7c5018ad.77.llvm.1026247603497507326, ": Value too large for defined data type"]
                            args: [&v3]
                            fmt: None
                        };
                        v12 = alloc::fmt::format::format_inner(&v2);
                        v14 = v12;
                        v2 = *((&v12 as &char + 8) as &i128);
                        v23 = 2;
                    }
                    switch (v22) {
                    case 37:
                        if v23 == 3 {
                            vvar_354{reg 16} = uu_truncate::TruncateMode::Absolute(v14);
                            *((a0 + 16) as &i64) = v15;
                            *((a0 + 8) as &i64) = v14;
                            *(a0 as &i64) = v23;
                            return v14;
                        }
                    case 43:
                        if v23 == 3 {
                            vvar_347{reg 16} = uu_truncate::TruncateMode::Absolute(v14);
                            *((a0 + 16) as &i64) = v15;
                            *((a0 + 8) as &i64) = v14;
                            *(a0 as &i64) = v23;
                            return v14;
                        }
                    case 45:
                        if v23 == 3 {
                            v14 = uu_truncate::TruncateMode::Absolute(v14);
                            *((a0 + 16) as &i64) = v15;
                            *((a0 + 8) as &i64) = v14;
                            *(a0 as &i64) = v23;
                            return v14;
                        }
                    case 47:
                        goto LABEL_4820d9;
                    case 60:
                        if v23 == 3 {
                            vvar_340{reg 16} = uu_truncate::TruncateMode::Absolute(v14);
                            *((a0 + 16) as &i64) = v15;
                            *((a0 + 8) as &i64) = v14;
                            *(a0 as &i64) = v23;
                            return v14;
                        }
                    case 62:
                        if v23 == 3 {
                            vvar_361{reg 16} = uu_truncate::TruncateMode::Absolute(v14);
                            *((a0 + 16) as &i64) = v15;
                            *((a0 + 8) as &i64) = v14;
                            *(a0 as &i64) = v23;
                            return v14;
                        }
                    default:
LABEL_4820d9:
                        if v23 == 3 {
                            vvar_368{reg 16} = uu_truncate::TruncateMode::Absolute(v14);
                            *((a0 + 16) as &i64) = v15;
                            *((a0 + 8) as &i64) = v14;
                            *(a0 as &i64) = v23;
                            return v14;
                        }
                    }
                    *((a0 + 16) as &i128) = v2;
                    *((a0 + 8) as &i64) = v14;
                    *(a0 as &i64) = v23;
                    return v14;
                }
            }
        }
    }
    goto LABEL_481f69;
}
