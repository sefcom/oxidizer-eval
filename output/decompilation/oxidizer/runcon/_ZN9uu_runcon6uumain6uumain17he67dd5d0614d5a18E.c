fn uu_runcon::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: Option<struct72>;  // [bp-0x468], Other Possible Types: struct72, u128
    let v1: u128;  // [bp-0x458]
    let v2: iNone;  // [bp-0x448]
    let v3: u128;  // [bp-0x438]
    let v4: u64;  // [bp-0x428]
    let v5: iNone;  // [bp-0x424]
    let v6: struct152;  // [bp-0x418], Other Possible Types: struct76
    let v7: struct72;  // [bp-0x418]
    let v8: u64;  // [bp-0x410]
    let v9: u8;  // [bp-0x378]
    let v10: u64;  // [bp-0x370]
    let v11: u32;  // [bp-0x368]
    let v12: u64;  // [bp-0x360]
    let v14: u64;  // [bp-0x350]
    let v15: u64;  // [bp-0x348]
    let v16: void*;  // [bp-0x340]
    let v17: u64;  // [bp-0x338]
    let v18: u64;  // [bp-0x330]
    let v20: u64;  // [bp-0x320]
    let v23: u64;  // [bp-0x308]
    let v24: u64;  // [bp-0x300]
    let v25: u64;  // [bp-0x2f8]
    let v26: u64;  // [bp-0x2f0]
    let v27: u8;  // [bp-0x2e8]
    let v28: struct700;  // [bp-0x2e0]
    let v30: u64;  // rdx
    let v31: u32;  // eax
    let v32: u128;  // xmm0
    let v33: u128;  // xmm1
    let v34: iNone;  // xmm2
    let v35: void*;  // rax
    let v39: u64;  // rax
    let v43: void*;  // rax
    let v45: void*;  // rdx
    let v51: u32;  // eax
    let v52: u128;  // xmm0
    let v53: u128;  // xmm1
    let v54: iNone;  // xmm2
    let v55: void*;  // rbx

    v28 = uu_runcon::uu_app();
    v6 = uu_runcon::parse_command_line(&v28, a0, a1);
    if (((0 ^ v6.field_0) & (0 ^ -(v6.field_0))) >> 63) as char {
        return v8;
    }
    memcpy(&v9, &v6, 152);
    if v30 {
        if v30 == 1 {
            v7 = uu_runcon::get_plain_context(v14, v15);
            if v7.field_0 == 17 {
                v0 = uu_runcon::uumain::uumain::{{closure}}(v8);
                if v31 != 17 {
                    v6 = struct76 {
                        field_0: v31
                        field_4: *((&v0 as &char + 4) as &i128)
                        field_20: *((&v0 as &char + 20) as &i128)
                        field_36: *((&v0 as &char + 36) as &i128)
                        field_52: *((&v0 as &char + 52) as &i128)
                        field_68: v5 as i32
                        field_72: 1
                    };
                    alloc::boxed::Box<T>::new(&v6);
                    return v39;
                }
            } else {
                v4 = *((&v7.field_56 as &char + 8) as &i64);
                v32 = *(&v7.field_0 as &i128);
                v33 = *((&v7.field_8 as &char + 8) as &i128);
                v34 = *((&v7.field_24 as &char + 8) as &i128);
                v3 = *((&v7.field_40 as &char + 8) as &i128);
                v2 = v34;
                v1 = v33;
                v0 = v32;
                if v0 as i32 != 17 {
                    v6 = struct76 {
                        field_0: v31
                        field_4: *((&v0 as &char + 4) as &i128)
                        field_20: *((&v0 as &char + 20) as &i128)
                        field_36: *((&v0 as &char + 36) as &i128)
                        field_52: *((&v0 as &char + 52) as &i128)
                        field_68: v5 as i32
                        field_72: 1
                    };
                    alloc::boxed::Box<T>::new(&v6);
                    return v39;
                }
            }
            uu_runcon::execute_command(v17, v18, v10, v11);
        } else if v24 == 0x8000000000000000 {
            v0 = uu_runcon::print_current_context();
            if v0.field_0 != 17 {
                v6 = struct76 {
                    field_0: *(&v0.field_0 as &i128)
                    field_4: <UNKNOWN>
                    field_20: <UNKNOWN>
                    field_36: <UNKNOWN>
                    field_52: <UNKNOWN>
                    field_68: <UNKNOWN>
                    field_72: 1
                };
                alloc::boxed::Box<T>::new(&v6);
            }
            v55 = v43;
            return v55;
        } else {
            if v12 == 0x8000000000000000 {
                if v15 != 0x8000000000000000 {
                    goto LABEL_45b8e6;
                }
LABEL_45b76d:
                if v18 != 0x8000000000000000 {
                    goto LABEL_45b77d;
                }
            } else {
                if v15 == 0x8000000000000000 {
                    goto LABEL_45b76d;
                }
LABEL_45b8e6:
                if v18 != 0x8000000000000000 {
LABEL_45b77d:
                }
            }
            v7 = uu_runcon::get_custom_context(v27, v45, v14, v16, v17, 0, v20, 0, v23, v25, v26);
            if v7.field_0 == 17 {
                v0 = uu_runcon::uumain::uumain::{{closure}}(v8);
                if v51 != 17 {
                    v6 = struct76 {
                        field_0: v51
                        field_4: *((&v0 as &char + 4) as &i128)
                        field_20: *((&v0 as &char + 20) as &i128)
                        field_36: *((&v0 as &char + 36) as &i128)
                        field_52: *((&v0 as &char + 52) as &i128)
                        field_68: v5 as i32
                        field_72: 1
                    };
                    alloc::boxed::Box<T>::new(&v6);
                    return v39;
                }
            } else {
                v4 = *((&v7.field_56 as &char + 8) as &i64);
                v52 = *(&v7.field_0 as &i128);
                v53 = *((&v7.field_8 as &char + 8) as &i128);
                v54 = *((&v7.field_24 as &char + 8) as &i128);
                v3 = *((&v7.field_40 as &char + 8) as &i128);
                v2 = v54;
                v1 = v53;
                v0 = v52;
                if v0 as i32 != 17 {
                    v6 = struct76 {
                        field_0: v51
                        field_4: *((&v0 as &char + 4) as &i128)
                        field_20: *((&v0 as &char + 20) as &i128)
                        field_36: *((&v0 as &char + 36) as &i128)
                        field_52: *((&v0 as &char + 52) as &i128)
                        field_68: v5 as i32
                        field_72: 1
                    };
                    alloc::boxed::Box<T>::new(&v6);
                    return v39;
                }
            }
            uu_runcon::execute_command(v25, v26, v10, v11);
        }
        v55 = v35;
        return v55;
    } else {
        v0 = uu_runcon::print_current_context();
        if v0.field_0 == 17 {
            return v43;
        }
        v6 = struct76 {
            field_0: *(&v0.field_0 as &i128)
            field_4: <UNKNOWN>
            field_20: <UNKNOWN>
            field_36: <UNKNOWN>
            field_52: <UNKNOWN>
            field_68: <UNKNOWN>
            field_72: 1
        };
        alloc::boxed::Box<T>::new(&v6);
        return v43;
    }
}
