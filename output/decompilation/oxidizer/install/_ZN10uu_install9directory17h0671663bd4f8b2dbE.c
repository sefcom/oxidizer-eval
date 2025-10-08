fn uu_install::directory(a0: i64, a1: i64, a2: &struct104) -> u64 {
    let v0: u8;  // [bp-0x151]
    let v1: struct16;  // [bp-0x150], Other Possible Types: u64
    let v2: u64;  // [bp-0x148]
    let v3: u32;  // [bp-0x13c]
    let v4: u64;  // [bp-0x138]
    let v5: u64;  // [bp-0x130]
    let v6: u64;  // [bp-0x128]
    let v7: u8;  // [bp-0x120]
    let v8: struct16;  // [bp-0x118]
    let v9: u64;  // [bp-0x108]
    let v10: struct24;  // [bp-0x108]
    let v11: u64;  // [bp-0x100]
    let v12: u64;  // [bp-0xf8]
    let v13: u64;  // [bp-0xe8]
    let v14: u64;  // [bp-0xe0]
    let v15: u64;  // [bp-0xe0]
    let v16: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xe0]
    let v18: void*;  // r12
    let v19: u64;  // r15
    let v20: u64;  // rbx
    let v21: u64;  // r13
    let v22: u64;  // rbp
    let v23: u64;  // rax
    let v25: &u64;  // rax
    let v27: u64;  // rdx, Other Possible Types: unsigned long

    if !a1 {
        v14 = 1;
        return alloc::boxed::Box<T>::new(&v14) as u64;
    }
    v0 = *((a2 + 97) as &i8);
    v13 = a1 * 24;
    v18 = 0;
    do {
        v19 = *((8 + a0 + v18 as &u8) as &i64);
        v20 = *((16 + a0 + v18 as &u8) as &i64);
        v16 = std::fs::metadata(v19, v20);
        if let Err(_) = v16 {
            v10 = uucore::features::fs::dir_strip_dot_for_creation(v19, v20);
            v21 = v11;
            v22 = v12;
            v23 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(std::fs::create_dir_all(v21, v22), v21, v22);
            if v23 {
                v8 = struct16 {
                    field_0: v23
                    field_8: &g_501e30
                };
                uucore::mods::error::set_exit_code(uucore::mods::error::UError::code() as u32 as u64);
                v1 = uucore::util_name();
                v2 = v27;
                eprintln!("{}: {}", &v1, &v8);
                v15 = v14;
                continue;
            } else {
                v15 = v15;
                if (v0 & 1) {
                    v4 = 1;
                    v5 = v21;
                    v6 = v22;
                    v7 = 1;
                    println!("creating directory {}", &v4);
                    v15 = v14;
                }
                v15 = v15;
            }
        }
        if uu_install::mode::chmod(v19, v20, v3) {
            uucore::mods::error::set_exit_code(1);
        } else {
            v25 = uu_install::chown_optional_user_group(v19, v20, a2);
            if v25 {
                v1 = struct16 {
                    field_0: v25
                    field_8: &g_502208
                };
                uucore::mods::error::set_exit_code(<uu_install::InstallError as uucore::mods::error::UError>::code(v25));
                v9 = uucore::util_name();
                v11 = v27;
                eprintln!("{}: {}", &v9, &v1);
                v15 = v14;
            } else {
                v15 = v15;
            }
        }
        v18 += 24;
    } while (v13 != v18);
    return 0;
}
