fn uu_dd::parseargs::parse_bytes_with_opt_multiplier(a0: &u64, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [sp-0x140]
    let v1: i64;  // [sp-0x130]
    let v2: i64;  // [sp-0x120], Other Possible Types: Arguments
    let v3: i64;  // [sp-0x118]
    let v4: struct24;  // [sp-0xf0], Other Possible Types: i192
    let v5: Argument;  // [bp-0xd8], Other Possible Types: i64
    let v6: i64;  // [sp-0xd0]
    let v7: i64;  // [sp-0xc8]
    let v8: i8;  // [sp-0xc0]
    let v9: i64;  // [bp-0xb8]
    let v10: i64;  // [sp-0xb0]
    let v11: i64;  // [sp-0xa8]
    let v12: i8;  // [sp-0xa0]
    let v13: Argument;  // [bp-0x98]
    let v14: Argument;  // [bp-0x90]
    let v15: i64;  // [sp-0x80]
    let v16: struct57;  // [bp-0x78]
    let v17: i16;  // [sp-0x38]
    let v19: i64;  // r14
    let v20: i64;  // r14
    let v22: i64;  // r13
    let v23: i64;  // rax
    let v24: i64;  // rbp
    let v25: i64;  // r13
    let v26: i64;  // r13
    let v27: i256;  // ymm0
    let v28: i64;  // cc_ndep
    let v29: i64;  // rbx
    let v30: i64;  // r15
    let v31: i128;  // xmm0
    let v32: i64;  // rax
    let v33: i64;  // rcx
    let v34: i64;  // rax
    let v35: i64;  // r13
    let v36: i64;  // rax
    let v37: i64;  // rcx
    let v39: i64;  // rbx

    v16 = struct57 {
        field_0: 0
        field_8: a2
        field_16: a1
        field_24: a2
        field_32: 0
        field_40: a2
        field_48: 515396075640
        field_56: 1
    };
    v17 = 1;
    v4 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v16, a2);
    v19 = *((&v4 as &char + 16) as &i64);
    if v19 == 1 {
        v20 = *((&v4 as &char + 8) as &i64);
        if !v4 {
            return v23;
        }
    }
    v1 = v4;
    v22 = *((&v4 as &char + 8) as &i64);
    v0 = v22;
    if !v19 {
        v24 = 1;
    }
    v24 = 1;
    do {
        v26 = v25;
        v29 = *(v26 as &i64);
        v30 = *((v26 + 8) as &i64);
        v2 = v2;
        v3 = v3;
        if v30 == 1 {
            v2 = v2;
            v3 = v3;
            if *(v29 as &i8) == 48 {
                if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
                    once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
                }
                v31 = g_51be68;
                vvar_35{reg 224} = ((vvar_35{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_208{reg 224}))
                v9 = v31;
                v5 = Argument {
                    value: &v9
                    formatter: <&T as core::fmt::Display>::fmt
                };
                v2 = Arguments {
                    pieces: [&g_515ac0, ": warning: "]
                    args: [&v5]
                    fmt: None
                };
                std::io::stdio::_eprint(&v2);
                v5 = 0;
                v6 = &g_41e80f;
                v7 = 2;
                v8 = 1;
                v9 = 0;
                v10 = &g_41e811;
                v11 = 3;
                v12 = 1;
                v13 = Argument {
                    value: &v5
                    formatter: <os_display::Quoted as core::fmt::Display>::fmt
                };
                v14 = Argument {
                    value: <os_display::Quoted as core::fmt::Display>::fmt
                    formatter: &v9
                };
                v15 = <os_display::Quoted as core::fmt::Display>::fmt;
                v2 = Arguments {
                    pieces: [&g_515ae0, " is a zero multiplier; use ", " if that is intended\n"]
                    args: [&v13, &v14]
                    fmt: None
                };
                std::io::stdio::_eprint(&v2);
                v2 = v2;
                v3 = v3;
            }
        }
        v3 = v3;
        v2 = v2;
        uu_dd::parseargs::parse_bytes_no_x(&v2, a1, a2, v29, v30);
        v32 = v2;
        v33 = v3;
        if v32 != 14 {
            a0 = a0;
            *((a0 + 16) as &i128) = *(&v2.args.ptr as &i128);
            *(a0 as &i64) = v32;
            v36 = 8;
            goto LABEL_498344;
        } else {
            v34 = v24;
            if amd64g_calculate_condition(0, 48, v34, v33, v28) as char {
                memcpy(v39, a1, a2);
                *(a0 as &i64) = 13;
                *((a0 + 8) as &i64) = a2;
                *((a0 + 16) as &i64) = v39;
                v36 = 24;
LABEL_498344:
                *((a0 + v36) as &i64) = v37;
                if !v1 {
                    return v23;
                }
            }
        }
    } while ((v24 = (v34 * v33) as i64, v35 = v26 + 16, v35 != (v19 << 4) + v22));
}
