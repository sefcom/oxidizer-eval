fn uu_rm::prompt_file_permission_readonly(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x110]
    let v1: i64;  // [sp-0x108]
    let v2: i64;  // [sp-0x100]
    let v3: i64;  // [sp-0xf8]
    let v4: i8;  // [sp-0xf0]
    let v5: struct8;  // [bp-0xe8]
    let v6: Result<struct176, struct8>;  // [sp-0xe0]
    let v8: i64;  // rdx
    let v9: i64;  // rdx
    let v10: i64;  // rax
    let v11: i64;  // rax

    v6 = std::fs::metadata(a0, a1);
    if v6 as i32 != 2 {
        if (*((&v6 as &char + 56) as &i8) & 146) {
            return vvar_7{reg 56};
        } else if !*((&v6 as &char + 80) as &i64) {
            v1 = uucore::util_name();
            v2 = v9;
            eprint!("{}: ", &v1);
            v1 = 1;
            v2 = a0;
            v3 = a1;
            v4 = 1;
            eprint!("remove write-protected regular empty file {}?", &v1);
            eprint!(" ");
            v5 = struct8 {
                field_0: &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E
            };
            v11 = <std::io::stdio::Stderr as std::io::Write>::flush(&v5);
            if !v11 {
                uucore::read_yes();
                return vvar_7{reg 56};
            }
            v0 = v11;
            v2 = v9;
            show_error!("{}", &v0);
            std::process::exit(1); /* do not return */
        }
    }
    v1 = uucore::util_name();
    v2 = v8;
    eprint!("{}: ", &v1);
    v1 = 1;
    v2 = a0;
    v3 = a1;
    v4 = 1;
    eprint!("remove write-protected regular file {}?", &v1);
    eprint!(" ");
    v5 = struct8 {
        field_0: &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E
    };
    v10 = <std::io::stdio::Stderr as std::io::Write>::flush(&v5);
    if !v10 {
        uucore::read_yes();
        return vvar_7{reg 56};
    }
    v0 = v10;
    v2 = v8;
    show_error!("{}", &v0);
    std::process::exit(1); /* do not return */
}
