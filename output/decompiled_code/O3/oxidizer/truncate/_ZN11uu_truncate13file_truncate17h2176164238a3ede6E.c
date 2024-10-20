fn uu_truncate::file_truncate(a0: i64, a1: i64, a2: i8, a3: i64) -> u64 {
    let v0: i192;  // [sp-0x120], Other Possible Types: Enum, String
    let v1: i8;  // [bp-0x118]
    let v2: i32;  // [sp-0x108]
    let v3: i32;  // [bp-0x100]
    let v4: i64;  // [sp-0xf8]
    let v5: i64;  // [sp-0xf0]
    let v6: i8;  // [sp-0xe8]
    let v7: Argument;  // [bp-0xe0]
    let v8: i1408;  // [sp-0xd0], Other Possible Types: Enum, struct8, Arguments
    let v9: i64;  // [bp-0xc8]
    let v10: i8;  // [sp-0xc7]
    let v11: i8;  // [bp-0xc4]
    let v13: i64;  // rax
    let v14: i64;  // r15
    let v15: i128;  // xmm0

    v8 = std::sys::pal::unix::fs::stat(a0, a1);
    if v8 != 2 && (0xf000 & *((&v8 as &char + 56) as &i32)) == 0x1000 {
        v3 = 0;
        v4 = a0;
        v5 = a1;
        v6 = 1;
        v7 = Argument {
            value: &v3
            formatter: <os_display::Quoted as core::fmt::Display>::fmt
        };
        v8 = Arguments {
            pieces: &[&str] {
                ptr: "cannot open "
                len: <UNKNOWN>
            }
            args: [&v7]
            fmt: None
        };
        v9 = 2;
        v0 = alloc::fmt::format::format_inner(&v8);
        v2 = 1;
        v13 = __rust_alloc(32, 8);
        v15 = v0;
        *((v13 + 16) as &i192) = v0;
        *(v13 as &i128) = v15;
        return v13;
    }
    v8 = struct8 {
        field_0: 0x1b600000000
    };
    v9 = 0;
    v11 = 0;
    v10 = 1;
    v11 = a2;
    v0 = std::fs::OpenOptions::_open(&v8, a0, a1);
    if !v0 {
        v3 = *((&v0 as &char + 4) as &i32);
        v14 = std::fs::File::set_len(&v3, a3);
        if !v14 {
            goto LABEL_480f68;
        }
LABEL_480f58:
        v13 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v14, a0, a1);
    } else {
        v14 = v1;
        if !(!std::io::error::Error::kind(v14) as i8) || !(!a2) {
            goto LABEL_480f58;
        }
LABEL_480f68:
        v13 = 0;
    }
    return v13;
}
