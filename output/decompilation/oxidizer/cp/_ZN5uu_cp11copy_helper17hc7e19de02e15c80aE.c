fn uu_cp::copy_helper(a0: &struct67, a1: u32, a2: u32, a3: u32, a4: u32, a5: void*) -> u64 {
    let v0: i8;  // [bp-0xd8]
    let v1: i8;  // [bp-0xc0]
    let v2: i192;  // [sp-0xb8], Other Possible Types: Option<Result<struct32, struct3>>, struct24
    let v9: struct24;  // [sp-0x78], Other Possible Types: i16
    let v10: i8;  // [sp-0x76]
    let v11: i16;  // [bp-0x60], Other Possible Types: struct16
    let v12: i8;  // [sp-0x5e]
    let v13: i64;  // [sp-0x50]
    let v14: i32;  // [sp-0x48]
    let v15: Result<struct4, struct8>;  // [sp-0x40]
    let v16: i64;  // [bp+0x8]
    let v17: i8;  // [bp+0x10]
    let v18: i8;  // [bp+0x18]
    let v19: i8;  // [bp+0x20]
    let v20: i8;  // [bp+0x28]
    let v22: i64;  // 4096
    let v25: i64;  // 4096
    let v26: i64;  // rax

    if *((a5 + 68) as &i8) {
        if std::fs::create_dir_all(v25, v22) {
            return struct16 {
                field_0: 2
                field_8: v26
            };
        }
    }
    if uucore::features::fs::path_ends_with_terminator(a3, a4) as i8 && !std::path::Path::is_dir(a3, a4) as i8 {
        std::sys::pal::unix::os::split_paths::bytes_to_path(a0 + 8, a3, a4);
        return struct8 {
            field_0: 12
        };
    }
    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "/dev/null") as i8 {
        if v19 && *((a5 + 70) as &i8) && !*((a5 + 63) as &i8) {
            uu_cp::copy_fifo(a3, a4, *((a5 + 60) as &i32), *((a5 + 71) as &i8));
            if v2 == 13 {
                return struct8 {
                    field_0: 13
                };
            }
        } else if v18 {
            uu_cp::copy_link(a1, a2, a3, a4, v20);
            if v2 == 13 {
                return struct8 {
                    field_0: 13
                };
            }
        } else {
            v2 = uu_cp::platform::linux::copy_on_write(a1, a2, a3, a4, *((a5 + 75) as &i8), v0, v16, v17, v1);
            v9 = *((&v2 as &char + 8) as &i16);
            v10 = *((&v2 as &char + 10) as &i8);
            if v2 != 13 {
                return struct67 {
                    field_0: v26
                    field_8: v9
                    field_10: v10
                    field_11: v31
                    field_27: v32
                    field_43: v6
                    field_56: <UNKNOWN>
                };
            }
            v11 = v9;
            v12 = v10;
            if !*((a5 + 62) as &i8) && *((a5 + 71) as &i8) {
                uu_cp::show_debug(&v11);
                return struct8 {
                    field_0: 13
                };
            }
            goto LABEL_50842c;
        }
        return struct64 {
            field_0: v2
            field_16: v29
            field_32: v30
            field_48: v7
        };
    } else {
        v15 = std::fs::File::create(a3, a4);
        v11 = struct16 {
            field_0: a3
            field_8: a4
        };
        v9 = <T as alloc::string::ToString>::to_string(&v11);
        v2 = v9;
        match v15 {
            Ok(_) => {
LABEL_50842c:
                return struct8 {
                    field_0: 13
                };
            },
            Err(v26) => {
                v13 = *((&v2 as &char + 12) as &i64);
                v14 = *((&v2 as &char + 20) as &i32);
                if v2 != 0x8000000000000000 {
                    return struct40 {
                        field_0: 3
                        field_8: v27
                        field_16: v28
                        field_20: v13
                        field_28: v14
                        field_32: v26
                    };
                }
            },
        }
    }
}
