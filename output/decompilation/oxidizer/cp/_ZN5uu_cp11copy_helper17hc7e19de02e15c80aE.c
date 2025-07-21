fn uu_cp::copy_helper(a1: i64, a2: i64, a3: i64, a4: i64, a5: i64, a6: i64, a7: i64, a8: i8, a9: i8, a10: i64) -> : struct67 {
    let a0: i64;  // rdi
    let v0: alloc::raw_vec::Cap;  // [bp-0xb8], Other Possible Types: struct11, u128
    let v1: struct16;  // [bp-0xb8]
    let v2: u16;  // [bp-0xb0]
    let v3: u8;  // [bp-0xae]
    let v4: u128;  // [bp-0xad]
    let v5: u64;  // [bp-0xa8]
    let v6: i8;  // [bp-0x9d]
    let v7: i8;  // [bp-0x98]
    let v8: i8;  // [bp-0x8d]
    let v9: i8;  // [bp-0x88]
    let v10: u64;  // [bp-0x80]
    let v11: struct24;  // [bp-0x78], Other Possible Types: u16
    let v12: u8;  // [bp-0x76]
    let v13: u64;  // [bp-0x68]
    let v14: struct16;  // [bp-0x60], Other Possible Types: u16
    let v15: u8;  // [bp-0x5e]
    let v16: u64;  // [bp-0x50]
    let v17: u32;  // [bp-0x48]
    let v18: core::result::Result<std::fs::File, std::io::error::Error>;  // [bp-0x40]
    let v19: core::option::Option<&std::path::Path>;  // rax
    let v23: u64;  // rax

    if *((a5 + 68) as &i8) {
        v19 = std::path::Path::parent(a3, a4) as u64;
        match v19 {
            None => {
                if !(!v19) {
                    goto LABEL_50826f;
                }
LABEL_50826e:
            },
            Some(_) => {
                if let None = v19 {
                    goto LABEL_50826e;
                }
LABEL_50826f:
            },
        }
        v23 = std::fs::create_dir_all(a3, a4);
        if v23 {
            return struct16 {
                field_0: 2
                field_8: v23
            };
        }
    }
    if uucore::features::fs::path_ends_with_terminator(a3, a4) as i8 && !std::path::Path::is_dir(a3, a4) {
        std::sys::pal::unix::os::split_paths::bytes_to_path(a3);
        return struct8 {
            field_0: 12
        };
    }
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "/dev/null") as i8 {
        v18 = std::fs::File::create(a3, a4);
        v14 = struct16 {
            field_0: a3
            field_8: a4
        };
        v11 = <T as alloc::string::ToString>::to_string(&v14);
        v5 = v13;
        v0 = v11.field_0;
        if let Err(_) = v18 {
            v16 = *((&v0 as &char + 12) as &i64);
            v17 = *((&v5 as &char + 4) as &i32);
            if v0 as i64 != 0x8000000000000000 {
                return struct48 {
                    field_0: 3
                    field_8: v0 as i64
                    field_16: *((&v0 as &char + 8) as &i32)
                    field_20: <UNKNOWN>
                    field_28: *((&v18 as &char + 8) as &i64)
                    field_32: <UNKNOWN>
                };
            }
        }
    } else if a9 && *((a5 + 70) as &i8) && !*((a5 + 63) as &i8) {
        v0 = uu_cp::copy_fifo(a3, a4, *((a5 + 60) as &i32), *((a5 + 71) as &i8));
        if v0.__0 as i32 != 13 {
            return struct64 {
                field_0: *(&v1.field_0 as &i128)
                field_16: *(&v5 as &i128)
                field_32: *(&v7 as &i128)
                field_48: *(&v9 as &i128)
            };
        }
    } else if a8 {
        v1 = uu_cp::copy_link(a1, a2, a3, a4, a10);
        if v1.field_0 as i32 != 13 {
            return struct64 {
                field_0: *(&v1.field_0 as &i128)
                field_16: *(&v5 as &i128)
                field_32: *(&v7 as &i128)
                field_48: *(&v9 as &i128)
            };
        }
    } else {
        v0 = uu_cp::platform::linux::copy_on_write(a1, a2, a3, a4, *((a5 + 75) as &i8), *((a5 + 74) as &i8), a6, a7, a9);
        v11 = v2;
        v12 = v3;
        if v0.field_0 != 13 {
            return struct72 {
                field_0: v0.field_0
                field_8: v11
                field_10: v12
                field_11: <UNKNOWN>
                field_27: <UNKNOWN>
                field_43: <UNKNOWN>
                field_56: <UNKNOWN>
            };
        }
        v14 = v11;
        v15 = v12;
        if !*((a5 + 62) as &i8) && *((a5 + 71) as &i8) {
            uu_cp::show_debug(&v14);
        }
    }
    return struct8 {
        field_0: 13
    };
}
