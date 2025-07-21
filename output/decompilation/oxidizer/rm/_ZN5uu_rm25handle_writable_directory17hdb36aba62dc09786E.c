fn uu_rm::handle_writable_directory(a0: i64, a1: i64, a2: i8, a3: i8) -> long long {
    let v1: core::option::Option<&std::path::Path>;  // [bp-0x58], Other Possible Types: u64
    let v2: core::fmt::Arguments;  // [bp-0x50], Other Possible Types: u64
    let v3: u64;  // [bp-0x48]
    let v4: u8;  // [bp-0x40]
    let v5: std::io::stdio::Stderr;  // [bp-0x38]
    let v7: core::fmt::Arguments;  // rdx
    let v8: u64;  // rax
    let v9: core::fmt::Arguments;  // rdx

    if a3 >= 0 {
        v1 = uucore::util_name();
        v2 = v7;
        eprint!("{}: ", &v1);
        v1 = 1;
        v2 = a0;
        v3 = a1;
        v4 = 1;
        eprint!("remove write-protected directory {}?", &v1);
        eprint!(" ");
        v5 = std::io::stdio::Stderr {
            inner: &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E
        };
        if <std::io::stdio::Stderr as std::io::Write>::flush(&v5) {
            v1 = uucore::util_name();
            v2 = v7;
            eprint!("{}: ", &v1);
            eprintln!("{}", &v0);
            std::process::exit(1); /* do not return */
        }
    } else if a2 == 2 {
        v1 = uucore::util_name();
        v2 = v9;
        eprint!("{}: ", &v1);
        v1 = 1;
        v2 = a0;
        v3 = a1;
        v4 = 1;
        eprint!("remove directory {}?", &v1);
        eprint!(" ");
        v5 = std::io::stdio::Stderr {
            inner: &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E
        };
        if <std::io::stdio::Stderr as std::io::Write>::flush(&v5) {
            v1 = uucore::util_name();
            v2 = v9;
            eprint!("{}: ", &v1);
            eprintln!("{}", &v0);
            std::process::exit(1); /* do not return */
        }
    } else {
        return v8 & -0x100 | 1;
    }
    return uucore::read_yes();
}
