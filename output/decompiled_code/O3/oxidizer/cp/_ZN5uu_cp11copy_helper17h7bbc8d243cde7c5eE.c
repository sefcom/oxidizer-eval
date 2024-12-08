fn uu_cp::copy_helper(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: i8;  // [bp-0xd8]
    let v1: i8;  // [bp-0xc0]
    let v2: i128;  // [sp-0xb8], Other Possible Types: Option<Result<struct32, struct3>>
    let v3: i64;  // [sp-0xa8]
    let v4: i128;  // [bp-0x9d]
    let v5: i8;  // [bp-0x98]
    let v9: i16;  // [sp-0x78], Other Possible Types: struct24
    let v10: i8;  // [sp-0x76]
    let v11: i16;  // [bp-0x60], Other Possible Types: struct16
    let v12: i8;  // [sp-0x5e]
    let v13: i64;  // [sp-0x50]
    let v14: i32;  // [sp-0x48]
    let v15: i64;  // [sp-0x40], Other Possible Types: Result<struct4, struct8>
    let v16: i8;  // [bp-0x38]
    let v17: i64;  // [bp+0x8]
    let v18: i8;  // [bp+0x10]
    let v19: i8;  // [bp+0x18]
    let v20: i8;  // [bp+0x20]
    let v21: i8;  // [bp+0x28]
    let v23: i64;  // 4096
    let v25: i64;  // 4096
    let v26: struct64;  // rax
    let v27: i64;  // rcx
    let v28: i32;  // ebp
    let v29: i128;  // xmm1
    let v30: i128;  // xmm2
    let v31: i128;  // xmm0
    let v32: i128;  // xmm1

    if *((a5 + 68) as &i8) {
        v26 = std::fs::create_dir_all(v25, v23, v23);
        if v26 {
            return struct16 {
                field_0: 2
                field_8: v26
            };
        }
    }
    if uucore::features::fs::path_ends_with_terminator(a3, a4) as i8 && !std::path::Path::is_dir(a3, a4) as i8 {
        v26 = std::sys::pal::unix::os::split_paths::bytes_to_path(a0 + 8, a3, a4);
        *(a0 as &i64) = 12;
        return v26;
    }
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "/dev/null") as i8 {
        v15 = std::fs::File::create(a3, a4);
        v11 = struct16 {
            field_0: a3
            field_8: a4
        };
        v9 = <T as alloc::string::ToString>::to_string(&v11);
        v3 = *((&v9 as &char + 16) as &i64);
        v2 = v9;
        if v15 {
            v26 = v16;
            v27 = v2;
            v28 = *((&v2 as &char + 8) as &i32);
            v13 = *((&v2 as &char + 12) as &i64);
            v14 = *((&v3 as &char + 4) as &i32);
            if v27 != 0x8000000000000000 {
                return struct40 {
                    field_0: 3
                    field_8: v27
                    field_16: v28
                    field_20: v13
                    field_28: v14
                    field_32: v26
                };
            }
        }
    } else if !(!v20 || !*((a5 + 70) as &i8) || *((a5 + 63) as &i8)) {
        v26 = uu_cp::copy_fifo(a3, a4, *((a5 + 60) as &i32), *((a5 + 71) as &i8));
        if v2 != 13 {
            vvar_389{reg 256} = v3;
            vvar_390{reg 288} = v5;
            return struct64 {
                field_0: v2
                field_16: v29
                field_32: v30
                field_48: v7
            };
        }
    } else if !v19 {
        v2 = uu_cp::platform::linux::copy_on_write(a1, a2, a3, a4, *((a5 + 75) as &i8), v0, v17, v18, v1);
        v26 = v2;
        v9 = *((&v2 as &char + 8) as &i16);
        v10 = *((&v2 as &char + 10) as &i8);
        if v26 != 13 {
            v31 = *((&v2 as &char + 11) as &i128);
            v32 = v4;
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
        v26 = v10;
        v12 = v26 as u8;
        if !*((a5 + 62) as &i8) && *((a5 + 71) as &i8) {
            v26 = uu_cp::show_debug(&v11);
        }
    } else {
        v26 = uu_cp::copy_link(a1, a2, a3, a4, v21);
        if v2 != 13 {
            v29 = v3;
            v30 = v5;
            return struct64 {
                field_0: v2
                field_16: v29
                field_32: v30
                field_48: v7
            };
        }
    }
    return struct8 {
        field_0: 13
    };
}
