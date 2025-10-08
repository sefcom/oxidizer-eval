fn uu_cp::copy_helper(a0: u64, a1: u64, a2: u64, a3: u64, a4: u64, a5: i64, a6: u64, a7: u64, a8: u8, a9: u8, a10: u64, a11: u8) -> long long {
    let v0: u16;  // [bp-0x78]
    let v1: u8;  // [bp-0x76]
    let v2: u16;  // [bp-0x74]
    let v3: u8;  // [bp-0x72]
    let v4: struct40;  // [bp-0x68], Other Possible Types: u8
    let v5: u16;  // [bp-0x60]
    let v6: u8;  // [bp-0x5e]
    let v7: i8;  // [bp-0x58]
    let v8: i8;  // [bp-0x48]
    let v9: u128;  // [bp-0x40]
    let v10: i8;  // [bp-0x38]
    let v11: u64;  // r13
    let v12: u64;  // rax
    let v16: u64;  // rax
    let v17: u32;  // eax

    if *((a5 + 92) as &i8) {
        v12 = std::path::Path::parent(a3, a4);
        if !v12 {
            if v12 {
                goto LABEL_4a5098;
            }
LABEL_4a5097:
        } else {
            if !v12 {
                goto LABEL_4a5097;
            }
LABEL_4a5098:
        }
        v16 = std::fs::create_dir_all(a3, a4);
        if v16 {
            return struct16 {
                field_0: 9223372036854775809
                field_8: v16
            };
        }
    }
    if a4 {
        v17 = *((a3 + a4 - 1) as &i8);
        if v17 != 47 && v17 != 92 || std::path::Path::is_dir(a3, a4) {
            goto LABEL_4a50e3;
        }
        std::sys::pal::unix::os::split_paths::bytes_to_path(a0 + 8, a3);
    } else {
LABEL_4a50e3:
        if !(!a9 || *((a5 + 94) as &i8) != 1 || *((a5 + 87) as &i8)) {
            uu_cp::copy_fifo(&v4, a3, a4, *((a5 + 84) as &i32), *((a5 + 95) as &i8));
            if v4 != 9223372036854775820 {
                return struct56 {
                    field_0: *(&v4 as &i128)
                    field_16: *(&v7 as &i128)
                    field_32: *(&v8 as &i128)
                    field_48: *(&v10 as &i64)
                };
            }
        } else if a8 {
            uu_cp::copy_link(a1, a2, a3, a4, a10);
            if v4 != 9223372036854775820 {
                return struct56 {
                    field_0: *(&v4 as &i128)
                    field_16: *(&v7 as &i128)
                    field_32: *(&v8 as &i128)
                    field_48: *(&v10 as &i64)
                };
            }
        } else {
            v4 = uu_cp::platform::linux::copy_on_write(a1, a2, a3, a4, *((a5 + 100) as &i32), *((a5 + 99) as &i8), a6, a7, a9, a11);
            v0 = v5;
            v1 = v6;
            if v4.field_0 != 9223372036854775820 {
                return struct64 {
                    field_0: v4.field_0
                    field_8: v0
                    field_10: v1
                    field_11: <UNKNOWN>
                    field_27: <UNKNOWN>
                    field_40: <UNKNOWN>
                };
            }
            v2 = v0;
            v3 = v1;
            if !*((a5 + 86) as &i8) && *((a5 + 95) as &i8) {
                uu_cp::show_debug(&v2);
            }
        }
    }
    return struct8 {
        field_0: v11
    };
}
