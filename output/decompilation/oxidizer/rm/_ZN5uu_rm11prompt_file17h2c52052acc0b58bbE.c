fn uu_rm::prompt_file(a0: i64, a1: i64, a2: i8) -> long long {
    let v0: u32;  // [bp-0x164]
    let v1: u64;  // [bp-0x160]
    let v2: u64;  // [bp-0x158]
    let v3: u64;  // [bp-0x150]
    let v4: u8;  // [bp-0x148]
    let v10: u64;  // [bp-0x108]
    let v11: u32;  // [bp-0x100]
    let v12: u16;  // [bp-0xfc]
    let v13: u64;  // [bp-0xf8]
    let v14: core::result::Result<std::fs::File, std::io::error::Error>;  // [bp-0xf0]
    let v15: u32;  // [bp-0xec]
    let v16: u64;  // [bp-0xe8]
    let v17: std::io::error::Error;  // [bp-0xe0]
    let v18: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xe0]
    let v22: u8;  // al
    let v24: u64;  // rax
    let v25: u32;  // ebx
    let v26: u64;  // rdx
    let v27: u64;  // rdx

    v10 = 0x1b600000000;
    v11 = 0;
    v12 = 0;
    v11 = 257;
    v14 = std::fs::OpenOptions::open(&v10, a0, a1);
    if let Ok(_) = v14 {
        v0 = std::fs::File {
            inner: std::sys::pal::unix::fs::File {
                __0: std::sys::pal::unix::fd::FileDesc {
                    __0: std::os::fd::owned::OwnedFd {
                        fd: v15
                    }
                }
            }
        };
        v18 = std::fs::File::metadata(&v0);
        if let Err(_) = v18 {
            return v25 as u64;
        }
        if !(a2 == 2 && (*((&v18 as &char + 56) as &i32) as i8 & 146)) {
            goto LABEL_0x4b8d27;
        }
        if *((&v18 as &char + 80) as &i64) {
            v1 = uucore::util_name();
            v2 = v26;
            eprint!("{}: ", &v1);
            v1 = 1;
            v2 = a0;
            v3 = a1;
            v4 = 1;
            eprint!("remove file {}?", &v1);
            eprint!(" ");
            v13 = std::io::stdio::Stderr {
                inner: &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E
            };
            if <std::io::stdio::Stderr as std::io::Write>::flush(&v13) {
                v1 = uucore::util_name();
                v2 = v26;
                eprint!("{}: ", &v1);
                eprintln!("{}", &v5);
                std::process::exit(1); /* do not return */
            }
        } else {
            v1 = uucore::util_name();
            v2 = v27;
            eprint!("{}: ", &v1);
            v1 = 1;
            v2 = a0;
            v3 = a1;
            v4 = 1;
            eprint!("remove regular empty file {}?", &v1);
            eprint!(" ");
            v13 = std::io::stdio::Stderr {
                inner: &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E
            };
            if <std::io::stdio::Stderr as std::io::Write>::flush(&v13) {
                v1 = uucore::util_name();
                v2 = v27;
                eprint!("{}: ", &v1);
                eprintln!("{}", &v5);
                std::process::exit(1); /* do not return */
            }
        }
        v25 = uucore::read_yes() as i32;
        return v25 as u64;
    }
    v17 = v16;
    v22 = std::io::error::Error::kind(v16);
    v24 = core::ptr::drop_in_place<std::io::error::Error>(&v17) & -0x100 | 1;
}
