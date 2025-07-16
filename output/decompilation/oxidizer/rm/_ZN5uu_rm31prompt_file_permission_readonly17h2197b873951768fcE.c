fn uu_rm::prompt_file_permission_readonly(a0: i64, a1: i64) -> long long {
    let v1: u64;  // [bp-0x108]
    let v2: u64;  // [bp-0x100], Other Possible Types: core::result::Result<(), std::io::error::Error>
    let v3: u64;  // [bp-0xf8]
    let v4: u8;  // [bp-0xf0]
    let v5: u64;  // [bp-0xe8]
    let v6: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xe0]
    let v8: u32;  // ebp
    let v9: u64;  // rdx
    let v10: u64;  // rdx

    v6 = std::fs::metadata(a0, a1);
    match v6 {
        Err(_) => {
LABEL_4b8f48:
            v1 = uucore::util_name();
            v2 = v9;
            eprint!("{}: ", &v1);
            v1 = 1;
            v2 = a0;
            v3 = a1;
            v4 = 1;
            eprint!("remove write-protected regular file {}?", &v1);
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
        },
        Ok(_) => {
            if (*((&v6 as &char + 56) as &i8) & 146) {
                return v8 as u64;
            }
            if !(!*((&v6 as &char + 80) as &i64)) {
                goto LABEL_4b8f48;
            }
            v1 = uucore::util_name();
            v2 = v10;
            eprint!("{}: ", &v1);
            v1 = 1;
            v2 = a0;
            v3 = a1;
            v4 = 1;
            eprint!("remove write-protected regular empty file {}?", &v1);
            eprint!(" ");
            v5 = std::io::stdio::Stderr {
                inner: &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E
            };
            if <std::io::stdio::Stderr as std::io::Write>::flush(&v5) {
                v1 = uucore::util_name();
                v2 = v10;
                eprint!("{}: ", &v1);
                eprintln!("{}", &v0);
                std::process::exit(1); /* do not return */
            }
        },
    }
    uucore::read_yes();
    return v8;
}
