fn uu_cp::construct_dest_path(a0: &u64, a1: u32, a2: u32, a3: u32, a4: u32, a5: u8) -> u64 {
    let v0: i128;  // [sp-0xa8], Other Possible Types: struct24
    let v1: i64;  // [sp-0xa0]
    let v2: i64;  // [sp-0x98]
    let v3: i8;  // [sp-0x90]
    let v4: Argument;  // [bp-0x80]
    let v5: Arguments;  // [bp-0x70], Other Possible Types: i160, struct20
    let v6: struct24;  // [sp-0x68], Other Possible Types: i192
    let v7: i64;  // [sp-0x58]
    let v8: i8;  // [bp-0x36]
    let v9: i64;  // [bp+0x8]
    let v10: i8;  // [bp+0x10]
    let v11: i64;  // rax
    let v14: i64;  // rax
    let v15: i64;  // rcx
    let v17: i64;  // rdx

    if v9 && std::path::Path::is_dir(a3, a4) as i8 {
        v0 = 1;
        v1 = a3;
        v2 = a4;
        v3 = 1;
        v4 = Argument {
            value: &v0
            formatter: <os_display::Quoted as core::fmt::Display>::fmt
        };
        v5 = Arguments {
            pieces: ["cannot overwrite directory ", " with non-directory"]
            args: [&v4]
            fmt: None
        };
        v11 = alloc::fmt::format::format_inner(a0 + 8, &v5);
        *(a0 as &i64) = 4;
        return v11;
    }
    if !v10 {
        if a5 {
            vvar_295{stack -168} = std::sys::pal::unix::os::split_paths::bytes_to_path(a3, a4);
            *((a0 + 24) as &i64) = v2;
            *((a0 + 8) as &i192) = v0;
            *(a0 as &i64) = 13;
            return v11;
        }
    } else {
        if !std::path::Path::is_dir(a3, a4) as i8 {
            v11 = __rust_alloc(51, 1);
            *((v11 + 32) as &i128) = 154706542488042656157512144450942629229;
            *((v11 + 16) as &i128) = 43108708221997256654623738406126315636;
            *(v11 as &i128) = 42766098628630104680664506471619520887;
            *((v11 + 47) as &i32) = 2037542772;
            *(a0 as &i64) = 4;
            *((a0 + 8) as &i64) = 51;
            *((a0 + 16) as &i64) = v11;
            *((a0 + 24) as &i64) = 51;
            return v11;
        }
        if a5 {
            v0 = std::sys::pal::unix::os::split_paths::bytes_to_path(a3, a4);
            *((a0 + 24) as &i64) = v2;
            *((a0 + 8) as &i192) = v0;
            *(a0 as &i64) = 13;
            return v11;
        }
        v5 = std::path::Path::components(a1, a2);
        if v8 {
            v14 = &g_426f19;
            v15 = 1;
        } else {
            v15 = -0x100 | *((&v5 as &char + 16) as &i8) < 5;
            v14 = (*((&v5 as &char + 16) as &i8) < 5 ? &g_426f19 : 1);
        }
    }
    v11 = std::path::Path::_strip_prefix(a1, a2, v14, v15);
    if !v11 {
        *(a0 as &i64) = 7;
        return v11;
    }
    v6 = std::path::Path::_join(a3, a4, v11, v17);
    v2 = v7;
    v0 = v6;
    v11 = v2;
    *((a0 + 24) as &i64) = v11;
    *((a0 + 8) as &i192) = v0;
    *(a0 as &i64) = 13;
    return v11;
}
