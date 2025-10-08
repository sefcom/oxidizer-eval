fn uu_install::perform_backup(a0: i64, a1: u64, a2: u64, a3: i64) -> int {
    let v0: u64;  // [bp-0x150]
    let v1: u64;  // [bp-0x140]
    let v2: struct64;  // [bp-0x138], Other Possible Types: u64
    let v3: u64;  // [bp-0x130]
    let v4: u64;  // [bp-0x128]
    let v5: u8;  // [bp-0x120]
    let v6: iNone;  // [bp-0x110]
    let v7: core::fmt::Arguments;  // [bp-0x100]
    let v8: struct24;  // [bp-0xf8]
    let v9: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xe0], Other Possible Types: u64
    let v10: u128;  // [bp-0xd8]
    let v11: u128;  // [bp-0xc8]
    let v12: iNone;  // [bp-0xb8]
    let v13: core::fmt::Arguments;  // [bp-0xa8]
    let v15: u64;  // rax

    v9 = std::fs::metadata(a1, a2);
    match v9 {
        Err(_) => {
            return struct8 {
                field_0: 0x8000000000000000
            };
        },
        Ok(_) => {
            if *((a3 + 97) as &i8) {
                v2 = 1;
                v3 = a1;
                v4 = a2;
                v5 = 1;
                println!("removed {}", &v2);
            }
            uucore::features::backup_control::get_backup_path(&v0, *((a3 + 103) as &i8));
            if v0 == 0x8000000000000000 {
                return struct24 {
                    field_0: *(&v0 as &i128)
                    field_16: v1
                };
            }
            v15 = std::fs::rename(a1, a2, &v0);
            v8 = struct24 {
                field_0: a1
                field_8: a2
                field_16: &v0
            };
            if v15 {
                v2 = uu_install::perform_backup::{{closure}}(&v8, v15);
                v13 = v7;
                v12 = v6;
                v11 = *((&v2.field_16 as &char + 8) as &i128) as u128;
                v10 = *(&v2.field_8 as &i128) as u128;
                v9 = v2.field_0;
                return struct24 {
                    field_0: 9223372036854775809
                    field_8: alloc::boxed::Box<T>::new(&v9) as u64
                    field_16: &g_502208
                };
            }
            return struct24 {
                field_0: *(&v0 as &i128)
                field_16: v1
            };
        },
    }
}
