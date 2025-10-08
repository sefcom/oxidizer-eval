fn uu_install::copy(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> u64 {
    let v0: core::fmt::Arguments;  // [bp-0xd8], Other Possible Types: struct9
    let v1: struct56;  // [bp-0xd8]
    let v2: u64;  // [bp-0xd0]
    let v3: u64;  // [bp-0xc8]
    let v4: struct56;  // [bp-0xa8]
    let v5: u64;  // [bp-0xa0]
    let v6: u64;  // [bp-0x98]
    let v7: u64;  // [bp-0x90]
    let v8: u64;  // [bp-0x88]
    let v9: u64;  // [bp-0x80]
    let v10: struct16;  // [bp-0x78], Other Possible Types: u8
    let v11: u64;  // [bp-0x70]
    let v12: u64;  // [bp-0x68]
    let v13: u64;  // [bp-0x60]
    let v14: u8;  // [bp-0x58]
    let v16: core::fmt::rt::Argument;  // rax, Other Possible Types: u64

    if *((a4 + 99) as &i8) {
        v0 = uu_install::need_copy(a0, a1, a2, a3, a4);
        if v0.field_0 {
            return v0.field_0;
        } else if !v0.field_8 {
            return 0;
        }
    }
    uu_install::perform_backup(&v1, a2, a3, a4);
    if v1 == 9223372036854775809 {
        return v2;
    }
    v4 = v1;
    v5 = v2;
    v6 = v3;
    v16 = uu_install::copy_file(a0, a1, a2, a3);
    if v16 {
        return v16;
    }
    if *((a4 + 100) as &i8) {
        v16 = uu_install::strip_file(a2, a3, a4);
        if !v16 {
            goto LABEL_469774;
        }
    } else {
LABEL_469774:
        v16 = uu_install::set_ownership_and_permissions(a2, a3, a4);
        if !v16 {
            if *((a4 + 98) as &i8) {
                v16 = uu_install::preserve_timestamps(a0, a1, a2, a3);
                if !v16 {
                    goto LABEL_4697cb;
                }
            } else {
LABEL_4697cb:
                if !*((a4 + 97) as &i8) {
                    return 0;
                }
                v11 = 1;
                v12 = a0;
                v13 = a1;
                v14 = 1;
                v7 = 1;
                v8 = a2;
                v9 = a3;
                v10 = 1;
                print!("{} -> {}", &v11, &v7);
                if v1.field_0 == 0x8000000000000000 {
                    v0 = core::fmt::Arguments {
                        pieces: ["\n"]
                        args: []
                        fmt: 0
                    };
                    std::io::stdio::_print(&v0);
                } else {
                    v7 = 1;
                    v8 = *(&v5 as &i128);
                    v10 = 1;
                    println!(" (backup: {})", &v7);
                }
                return 0;
            }
        }
    }
    return v16;
}
