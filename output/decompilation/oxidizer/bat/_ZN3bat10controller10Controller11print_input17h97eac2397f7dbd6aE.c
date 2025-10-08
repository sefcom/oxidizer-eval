fn bat::controller::Controller::print_input(a1: i64, a2: i64, a3: i32, a4: i64, a5: i8) -> Option<struct80> {
    let a0: u64;  // rdi
    let v0: iNone;  // [bp-0x6c8]
    let v1: iNone;  // [bp-0x6b8]
    let v2: iNone;  // [bp-0x6a8]
    let v3: iNone;  // [bp-0x698]
    let v4: iNone;  // [bp-0x688]
    let v5: u128;  // [bp-0x678]
    let v6: void*;  // [bp-0x678]
    let v7: iNone;  // [bp-0x668]
    let v8: iNone;  // [bp-0x658]
    let v9: u64;  // [bp-0x640]
    let v10: iNone;  // [bp-0x638]
    let v11: iNone;  // [bp-0x628]
    let v12: iNone;  // [bp-0x618]
    let v13: iNone;  // [bp-0x608]
    let v14: iNone;  // [bp-0x5f8]
    let v15: iNone;  // [bp-0x5e8]
    let v16: iNone;  // [bp-0x5d8]
    let v17: iNone;  // [bp-0x5c8]
    let v18: iNone;  // [bp-0x5b8]
    let v19: iNone;  // [bp-0x5a8]
    let v20: iNone;  // [bp-0x598]
    let v21: u128;  // [bp-0x588]
    let v22: u64;  // [bp-0x580]
    let v23: u64;  // [bp-0x578]
    let v25: u64;  // [bp-0x570]
    let v26: Option<struct48>;  // [bp-0x570]
    let v27: i8;  // [bp-0x568]
    let v28: i8;  // [bp-0x558], Other Possible Types: u64
    let v29: iNone;  // [bp-0x548]
    let v30: iNone;  // [bp-0x538]
    let v31: iNone;  // [bp-0x528]
    let v32: iNone;  // [bp-0x518]
    let v33: iNone;  // [bp-0x508]
    let v34: iNone;  // [bp-0x4f8]
    let v35: iNone;  // [bp-0x4e8]
    let v36: iNone;  // [bp-0x4d8]
    let v37: iNone;  // [bp-0x4c8]
    let v38: u128;  // [bp-0x4b8]
    let v39: i8;  // [bp-0x4a8]
    let v40: struct88;  // [bp-0x2d0]
    let v41: u8;  // [bp-0x278]
    let v43: i64;  // r12
    let v44: struct72;  // r12
    let v45: u64;  // r13

    bat::input::Input::open(&v25, a2, a4);
    v0 = *(&v27 as &i128);
    v1 = *(&v28 as &i128);
    v2 = v29;
    v3 = v30;
    v4 = v31;
    if v25 == 2 {
        return Some(struct80 {
            field_0: v0
            field_16: v1
            field_32: v2
            field_48: v3
            field_64: v4
        });
    }
    v23 = *(&v39 as &i64);
    v21 = v38;
    v20 = v37;
    v19 = v36;
    v18 = v35;
    v17 = v34;
    v16 = v33;
    v15 = v32;
    v10 = v0;
    v11 = v1;
    v12 = v2;
    v13 = v3;
    v14 = v4;
    v9 = v25;
    v43 = *(a1 as &i64);
    if (((0 ^ *((v43 + 144) as &i64)) & (0 ^ -(*((v43 + 144) as &i64)))) >> 63) as char || !*((v43 + 291) as &i8) && bat::style::StyleComponents::changes(v43 + 192) {
        if v21 as i64 > 9223372036854775809 {
            v26 = bat::diff::get_git_diff(v22, v23);
            if *((v43 + 144) as &i64) == 0x8000000000000000 && v26 as i64 && !v28 {
                return struct1 {
                    field_0: 13
                };
            }
            v8 = *((&v26 as &char + 32) as &i128);
            v7 = *((&v26 as &char + 16) as &i128);
            v5 = v26 as i128;
            if *((v43 + 291) as &i8) {
                alloc::boxed::Box<T>::new(v43);
                bat::controller::Controller::print_file(a0, a1, v44, v45, a3, &v9, a5 ^ 1, &v5);
            }
            goto LABEL_8379af;
        } else if *((v43 + 144) as &i64) == 0x8000000000000000 {
            return struct1 {
                field_0: 13
            };
        }
    }
    v6 = 0;
    if *((v43 + 291) as &i8) {
        alloc::boxed::Box<T>::new(v43);
        bat::controller::Controller::print_file(a0, a1, v44, v45, a3, &v9, a5 ^ 1, &v5);
    }
LABEL_8379af:
    bat::printer::InteractivePrinter::new(&v25, v43, *((a1 + 8) as &i64), &v9, &v5);
    v0 = *((&v26 as &char + 8) as &i128);
    v1 = *((&v26 as &char + 24) as &i128);
    v2 = v29;
    v3 = v30;
    v4 = v31;
    if v25 != 0x8000000000000000 {
        memcpy(&v41, &v32, 584);
        v40 = struct88 {
            field_0: v25
            field_8: v0
            field_24: v1
            field_40: v2
            field_56: v3
            field_72: v4
        };
        alloc::boxed::Box<T>::new(&v40);
        bat::controller::Controller::print_file(a0, a1, v44, v45, a3, &v9, a5 ^ 1, &v5);
    }
    return Some(struct80 {
        field_0: v0
        field_16: v1
        field_32: v2
        field_48: v3
        field_64: v4
    });
}
