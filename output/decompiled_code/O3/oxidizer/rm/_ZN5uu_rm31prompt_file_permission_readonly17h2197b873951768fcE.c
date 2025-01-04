fn uu_rm::prompt_file_permission_readonly(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x110]
    let v1: i64;  // [sp-0x108]
    let v2: i64;  // [sp-0x100]
    let v3: i64;  // [sp-0xf8]
    let v4: i8;  // [sp-0xf0]
    let v5: struct8;  // [bp-0xe8]
    let v6: Result<struct176, struct16>;  // [sp-0xe0], Other Possible Types: i1408
    let v8: i32;  // ebp
    let v9: i64;  // rdx
    let v10: i64;  // rdx
    let v11: i64;  // rsi
    let v12: i64;  // rax
    let v13: i64;  // rax
    let v14: i64;  // rdi
    let v15: i64;  // rdx

    v6 = std::fs::metadata(a0, a1);
    if v6 != 2 {
        v8 = vvar_33{reg 56} | -0x100 | 1;
        if (*((&v6 as &char + 56) as &i8) & 146) {
            return v8;
        } else if !*((&v6 as &char + 80) as &i64) {
            v1 = uucore::util_name();
            v2 = v10;
            eprint!("{:?}: ", &v1);
            v1 = 1;
            v2 = a0;
            v3 = a1;
            v4 = 1;
            eprint!("remove write-protected regular empty file {:?}?", &v1);
            eprint!(" ");
            v5 = struct8 {
                field_0: &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E
            };
            v13 = <std::io::stdio::Stderr as std::io::Write>::flush(&v5, v11, v10);
            if !v13 {
                vvar_318{reg 16} = uucore::read_yes(v14, v11, v15) as i32;
                return v8;
            }
            v0 = v13;
            v1 = uucore::util_name();
            v2 = v10;
            eprint!("{:?}: ", &v1);
            eprintln!("{:?}", &v0);
            std::process::exit(1); /* do not return */
        }
    }
    v1 = uucore::util_name();
    v2 = v9;
    eprint!("{:?}: ", &v1);
    v1 = 1;
    v2 = a0;
    v3 = a1;
    v4 = 1;
    eprint!("remove write-protected regular file {:?}?", &v1);
    eprint!(" ");
    v5 = struct8 {
        field_0: &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E
    };
    v12 = <std::io::stdio::Stderr as std::io::Write>::flush(&v5, v11, v9);
    if !v12 {
        v8 = uucore::read_yes(v14, v11, v15) as i32;
        return v8;
    }
    v0 = v12;
    v1 = uucore::util_name();
    v2 = v9;
    eprint!("{:?}: ", &v1);
    eprintln!("{:?}", &v0);
    std::process::exit(1); /* do not return */
}
