fn uu_rm::handle_writable_directory(a0: u32, a1: u32, a2: u8, a3: u8) -> u8 {
    let v0: u64;  // [sp-0x60]
    let v1: u64;  // [sp-0x58]
    let v2: u64;  // [sp-0x50]
    let v3: u64;  // [sp-0x48]
    let v4: u8;  // [sp-0x40]
    let v5: struct8;  // [bp-0x38]
    let v7: u64;  // rdx
    let v8: u64;  // rdx
    let v9: u64;  // rax
    let v10: u64;  // rax

    if a3 >= 0 {
        v1 = uucore::util_name();
        v2 = v7;
        eprint!("{:?}: ", &v1);
        v1 = 1;
        v2 = a0;
        v3 = a1;
        v4 = 1;
        eprint!("remove write-protected directory {:?}?", &v1);
        eprint!(" ");
        v5 = struct8 {
            field_0: &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E
        };
        v9 = <std::io::stdio::Stderr as std::io::Write>::flush(&v5);
        if v9 {
            v0 = v9;
            v1 = uucore::util_name();
            v2 = v7;
            eprint!("{:?}: ", &v1);
            eprintln!("{:?}", &v0);
            std::process::exit(1); /* do not return */
        }
    } else if a2 != 2 {
        return 1;
    } else {
        v1 = uucore::util_name();
        v2 = v8;
        eprint!("{:?}: ", &v1);
        v1 = 1;
        v2 = a0;
        v3 = a1;
        v4 = 1;
        eprint!("remove directory {:?}?", &v1);
        eprint!(" ");
        v5 = struct8 {
            field_0: &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E
        };
        v10 = <std::io::stdio::Stderr as std::io::Write>::flush(&v5);
        if v10 {
            v0 = v10;
            v1 = uucore::util_name();
            v2 = v8;
            eprint!("{:?}: ", &v1);
            eprintln!("{:?}", &v0);
            std::process::exit(1); /* do not return */
        }
    }
    uucore::read_yes();
    return 1;
}
