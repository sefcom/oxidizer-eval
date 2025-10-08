fn uu_wc::count_fast::count_bytes_using_splice() -> long long {
    let v0: u32;  // [bp-0xe0]
    let v1: u32;  // [bp-0xdc]
    let v2: Result<struct4, struct8>;  // [bp-0xd8], Other Possible Types: u32
    let v3: struct14;  // [bp-0xc8], Other Possible Types: struct8
    let v4: Result<struct12, struct8>;  // [bp-0xc8]
    let v5: i8;  // [bp-0x98]
    let v7: u64;  // rax
    let v8: u64;  // rax

    v3 = struct14 {
        field_0: 0x1b600000000
        field_8: 0
        field_12: 0
    };
    v2 = std::fs::OpenOptions::open(&v3);
    match v2 {
        Err(_) => {
            return 1;
        },
        Ok(_) => {
            v3 = nix::sys::stat::fstat(v0 as u64);
            if (v3.field_0 as i8 & 1) {
                return 1;
            }
            v7 = *(&v5 as &i64);
            if ((v7 >> 32) as u32 & -0x1000 | v7 as u32 >> 8 & 4095) == 1 && ((v7 >> 12) as u32 & -0x100 | v7 as u32) == 3 {
                v8 = uucore::features::pipes::pipe();
                if v8 as u32 != -1 {
                    v1 = v8 as u32;
                    v2 = (v8 >> 32) as u32;
                    loop {
                        v4 = nix::fcntl::splice(&v2);
                        if let Err(_) = v4 {
                            break;
                        }
                        if !*((&v4 as &char + 8) as &i64) {
                            return 0;
                        }
                        if uucore::features::pipes::splice_exact(&v1, &v0, *((&v4 as &char + 8) as &i64)) as u32 != 134 {
                            break;
                        }
                    }
                }
            }
            return 1;
        },
    }
}
