fn uu_rm::prompt_file_permission_readonly(a0: u32, a1: u32) -> u64 {
    let v0: u64;  // [sp-0x110]
    let v1: u64;  // [sp-0x108]
    let v2: u64;  // [sp-0x100]
    let v3: u64;  // [sp-0xf8]
    let v4: u8;  // [sp-0xf0]
    let v5: struct8;  // [bp-0xe8]
    let v6: struct16;  // [sp-0xe0], Other Possible Types: u128
    let v7: u8;  // [bp-0xa8]
    let v8: i8;  // [bp-0x90]
    let v10: u32;  // ebp
    let v11: u64;  // rdx
    let v12: u64;  // rdx
    let v13: u64;  // rax
    let v14: u64;  // rax

    v6 = std::fs::metadata(a0, a1);
    if v6 as i32 != 2 {
        v10 = vvar_33{reg 56} | -0x100 | 1;
        if (v7 & 146) {
            return v10;
        } else if !v8 {
            v1 = uucore::util_name();
            v2 = v12;
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
            v14 = <std::io::stdio::Stderr as std::io::Write>::flush(&v5);
            if !v14 {
                vvar_318{reg 16} = uucore::read_yes() as i32;
                return v10;
            }
            v0 = v14;
            v1 = uucore::util_name();
            v2 = v12;
            eprint!("{:?}: ", &v1);
            eprintln!("{:?}", &v0);
            std::process::exit(1); /* do not return */
        }
    }
    v1 = uucore::util_name();
    v2 = v11;
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
    v13 = <std::io::stdio::Stderr as std::io::Write>::flush(&v5);
    if !v13 {
        v10 = uucore::read_yes() as i32;
        return v10;
    }
    v0 = v13;
    v1 = uucore::util_name();
    v2 = v11;
    eprint!("{:?}: ", &v1);
    eprintln!("{:?}", &v0);
    std::process::exit(1); /* do not return */
}
