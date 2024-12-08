fn uu_rm::handle_writable_directory(a0: u32, a1: u32, a2: u8, a3: u8) -> u64 {
    let v0: u64;  // [sp-0x60]
    let v1: u64;  // [sp-0x58]
    let v2: u64;  // [sp-0x50]
    let v3: u64;  // [sp-0x48]
    let v4: u8;  // [sp-0x40]
    let v5: u64;  // [sp-0x38]
    let v7: u64;  // rax
    let v8: u64;  // rax
    let v9: u64;  // rdx
    let v10: u64;  // rdx
    let v11: u64;  // rsi
    let v12: u64;  // rax
    let v13: u64;  // rax
    let v14: u64;  // rdi
    let v15: u64;  // rdx

    if a3 < 0 {
        v8 = v7 | -0x100 | 1;
        if a2 != 2 {
            return v8;
        }
        v1 = uucore::util_name();
        v2 = v10;
        eprint!("{:?}: ", &v1);
        v1 = 1;
        v2 = a0;
        v3 = a1;
        v4 = 1;
        eprint!("remove directory {:?}?", &v1);
        eprint!(" ");
        v5 = &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E;
        v13 = <std::io::stdio::Stderr as std::io::Write>::flush(&v5, v11, v10);
        if v13 {
            v0 = v13;
            v1 = uucore::util_name();
            v2 = v10;
            eprint!("{:?}: ", &v1);
            eprintln!("{:?}", &v0);
            std::process::exit(1); /* do not return */
        }
    } else {
        v1 = uucore::util_name();
        v2 = v9;
        eprint!("{:?}: ", &v1);
        v1 = 1;
        v2 = a0;
        v3 = a1;
        v4 = 1;
        eprint!("remove write-protected directory {:?}?", &v1);
        eprint!(" ");
        v5 = &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E;
        v12 = <std::io::stdio::Stderr as std::io::Write>::flush(&v5, v11, v9);
        if v12 {
            v0 = v12;
            v1 = uucore::util_name();
            v2 = v9;
            eprint!("{:?}: ", &v1);
            eprintln!("{:?}", &v0);
            std::process::exit(1); /* do not return */
        }
    }
    v8 = uucore::read_yes(v14, v11, v15);
    return v8;
}
