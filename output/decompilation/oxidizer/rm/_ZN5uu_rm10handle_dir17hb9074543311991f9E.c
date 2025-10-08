fn uu_rm::handle_dir(a0: i64, a1: i64, a2: i64) -> u64 {
    let v2: core::fmt::Arguments;  // [bp-0x90], Other Possible Types: struct20
    let v3: u8;  // [bp-0x56]
    let v4: u64;  // [bp-0x50]
    let v5: u64;  // [bp-0x48]
    let v9: u64;  // r14
    let v10: u64;  // rdx
    let v11: i64;  // r12
    let v12: u64;  // rax
    let v13: u8;  // cl
    let v14: u64;  // rax
    let v15: u64;  // rax

    v9 = uu_rm::clean_trailing_slashes(a0, a1);
    if uu_rm::path_is_current_or_parent_directory(v9, v10) {
        v4 = uucore::util_name();
        v5 = v10;
        eprint!("{}: ", &v4);
        v2 = core::fmt::Arguments {
            pieces: &[&str] {
                ptr: v12
                len: 2
            }
            args: &[core::fmt::rt::Argument] {
                ptr: v11
                len: 1
            }
            fmt: 0
        };
        std::io::stdio::_eprint(&v2);
        return v15 & -0x100 | 1;
    }
    v2 = std::path::Path::components(v9, v10);
    if !v3 && v2.field_16 - 5 < 2 {
        v13 = *((a2 + 3) as &i8);
        if *((a2 + 3) as &i8) {
            return uu_rm::remove_dir_recursive(v9, v10, a2);
        }
        if *((a2 + 4) as &i8) {
            return uu_rm::remove_dir(v9, v10, a2);
        }
    } else {
        v14 = std::path::Path::parent(v9, v10);
        v13 = *((a2 + 3) as &i8);
        if v13 {
            if v14 {
                return uu_rm::remove_dir_recursive(v9, v10, a2);
            }
            if !*((a2 + 2) as &i8) {
                return uu_rm::remove_dir_recursive(v9, v10, a2);
            }
        } else if *((a2 + 4) as &i8) && (v14 || !*((a2 + 2) as &i8)) {
            goto LABEL_0x45dad2;
        }
    }
    if !v13 {
        v4 = uucore::util_name();
        v5 = v10;
        eprint!("{}: ", &v4);
        v2 = core::fmt::Arguments {
            pieces: &[&str] {
                ptr: v12
                len: 2
            }
            args: &[core::fmt::rt::Argument] {
                ptr: v11
                len: 1
            }
            fmt: 0
        };
        std::io::stdio::_eprint(&v2);
        return v15 & -0x100 | 1;
    }
    v4 = uucore::util_name();
    v5 = v10;
    eprint!("{}: ", &v4);
    eprintln!("it is dangerous to operate recursively on '{}'", &g_418b04);
    v4 = uucore::util_name();
    v5 = v10;
    eprint!("{}: ", &v4);
    eprintln!("use --no-preserve-root to override this failsafe")    return v15 & -0x100 | 1;
}
