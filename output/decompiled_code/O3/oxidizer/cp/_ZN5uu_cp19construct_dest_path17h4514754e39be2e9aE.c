fn uu_cp::construct_dest_path(a0: void*, a1: u32, a2: u32, a3: u32, a4: u32, a5: u8) -> u64 {
    let v0: i128;  // [sp-0xa8]
    let v1: i64;  // [sp-0xa0]
    let v2: i64;  // [sp-0x98]
    let v3: i8;  // [sp-0x90]
    let v4: struct24;  // [sp-0x88], Other Possible Types: i128
    let v5: i64;  // [sp-0x78]
    let v6: struct20;  // [sp-0x70], Other Possible Types: i160, struct8
    let v7: i64;  // [sp-0x58]
    let v8: i8;  // [bp-0x50]
    let v10: i8;  // [bp-0x36]
    let v11: i64;  // [bp+0x8]
    let v12: i8;  // [bp+0x10]
    let v13: i8;  // r12b
    let v14: i64;  // rax
    let v15: i64;  // r12
    let v16: i64;  // rax
    let v18: i64;  // rsi
    let v19: i64;  // rdx
    let v22: i128;  // xmm0

    v13 = v12;
    if v11 && std::path::Path::is_dir(a3, a4) as i8 {
        v0 = 1;
        v1 = a3;
        v2 = a4;
        v3 = 1;
        v14 = format!("cannot overwrite directory {:?} with non-directory", &v0);
        *(a0 as &i64) = 4;
        return v14;
    }
    if !v13 {
        if a5 {
            vvar_313{stack -136} = std::sys::pal::unix::os::split_paths::bytes_to_path(a3, a4);
            return struct32 {
                field_0: 13
                field_8: v4
                field_24: v5
            };
        }
        v15 = a2;
        v16 = std::path::Path::parent(a1, v15, a2, a3);
    } else {
        if !std::path::Path::is_dir(a3, a4) as i8 {
            return <uu_cp::Error as core::convert::From<&str>>::from(a0, "with --parents, the destination must be a directory");
        }
        if a5 {
            v4 = std::sys::pal::unix::os::split_paths::bytes_to_path(a3, a4);
            return struct32 {
                field_0: 13
                field_8: v4
                field_24: v5
            };
        }
        v15 = a2;
        v6 = std::path::Path::components(a1, v15);
        if v10 {
            v18 = &g_42cf20;
            v19 = 1;
        } else {
            v19 = -0x100 | *((&v6 as &char + 16) as &i8) < 5;
            v18 = (*((&v6 as &char + 16) as &i8) < 5 ? &g_42cf20 : 1);
        }
    }
    v6 = uu_cp::localize_to_target(v18, v19, a1, v15, a3, a4);
    v14 = v6;
    v0 = v6;
    v2 = v7;
    if v14 == 13 {
        v4 = v0;
        v5 = v2;
        v14 = v5;
        return struct32 {
            field_0: 13
            field_8: v4
            field_24: v14
        };
    }
    v22 = v8;
    return struct64 {
        field_0: v14
        field_8: v0
        field_24: v2
        field_32: v22
        field_48: v9
    };
}
