fn uu_split::n_chunks_by_line_round_robin(a0: i64, a1: u64, a2: u64, a3: u64, a4: u64) -> long long {
    let v0: std::io::stdio::Stdout;  // [bp-0xa0], Other Possible Types: alloc::vec::Vec<u8, alloc::alloc::Global>
    let v1: struct24;  // [bp-0xa0]
    let v2: u64;  // [bp-0x98]
    let v3: u64;  // [bp-0x90]
    let v4: void*;  // [bp-0x80], Other Possible Types: struct24
    let v5: u64;  // [bp-0x78]
    let v6: void*;  // [bp-0x70]
    let v7: u64;  // [bp-0x68]
    let v8: u32;  // [bp-0x5c]
    let v9: u8;  // [bp-0x58]
    let v11: u64;  // [bp-0x50]
    let v12: u64;  // [bp-0x48]
    let v15: u64;  // r13
    let v16: void*;  // r12
    let v18: core::result::Result<(), std::io::error::Error>;  // rax
    let v19: u64;  // rax
    let v21: core::result::Result<(), std::io::error::Error>;  // rbp
    let v22: i64;  // r12
    let v23: void*;  // rbx
    let v30: u64;  // rdx
    let v37: core::result::Result<usize, std::io::error::Error>;  // rax:rdx
    let v38: core::result::Result<usize, std::io::error::Error>;  // rax:rdx
    let v39: core::result::Result<usize, std::io::error::Error>;  // rax:rdx
    let v40: core::result::Result<usize, std::io::error::Error>;  // rax:rdx

    v0 = std::io::stdio::stdout();
    v7 = std::io::stdio::Stderr::lock(&v0);
    v4 = 0;
    v5 = 8;
    v6 = 0;
    if !a3 {
        v1 = <alloc::vec::Vec<uu_split::OutFile> as uu_split::ManageOutFiles>::init(a2, a0, *((a0 + 161) as &i8));
        v19 = v2;
        if !((((0 ^ v1.field_0) & (0 ^ -(v0))) >> 63) as char) {
            v4 = struct24 {
                field_0: v1.field_0
                field_8: v19
                field_16: v3
            };
            if a2 {
                v12 = *((a0 + 136) as &i64);
                v8 = *((a0 + 162) as &i8);
                loop {
                    v0 = Vec::new();
                    v39 = std::io::BufRead::read_until(a1, v8, &v0);
                    if let Err(_) = v39 {
                        break;
                    }
                    if !*((&v39 as &char + 8) as &i64) {
                        return v19;
                    }
                    <alloc::vec::Vec<uu_split::OutFile> as uu_split::ManageOutFiles>::get_writer(v22, &v4, (!(v21 | a2) >> 32 ? ((0 CONCAT v21 as u32) % (a2 & 4294967295) CONCAT (0 CONCAT v21 as u32) / (a2 & 4294967295)) >> 32 : (((0 CONCAT v21) % a2) as u64 CONCAT ((0 CONCAT v21) / a2) as u64) >> 64), a0);
                    if *(&v9 as &i64) {
                        return v19;
                    }
                    uu_split::custom_write_all(v22, 1, 0, v11, v12);
                    if v9 != 1 {
                        if v23 == a2 {
                            return v19;
                        }
                    } else {
                        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v11);
                    }
                }
            } else {
                v0 = Vec::new();
                v37 = std::io::BufRead::read_until(a1, v8, &v0);
                if let Err(_) = v37 {
                    goto LABEL_471849;
                }
            }
        }
    } else if a2 {
        v15 = a4 - 1;
        loop {
            v0 = Vec::new();
            v40 = std::io::BufRead::read_until(a1, *((a0 + 162) as &i8), &v0);
            if let Err(_) = v40 {
                break;
            }
            if !*((&v40 as &char + 8) as &i64) {
                return v19;
            }
            if (v16 | a2) >> 32 {
                if ((0 CONCAT v16) % a2 CONCAT (0 CONCAT v16) / a2) >> 64 != v15 {
                    continue;
                }
            } else {
                if ((0 CONCAT v16 as u32) % (a2 & 4294967295) CONCAT (0 CONCAT v16 as u32) / (a2 & 4294967295)) >> 32 != v15 {
                    continue;
                }
            }
            v18 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v7, 1, 0);
            if let Err(_) = v18 {
                uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v18);
            }
        }
LABEL_471849:
        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v30);
    } else {
        v0 = Vec::new();
        v38 = std::io::BufRead::read_until(a1, *((a0 + 162) as &i8), &v0);
        if let Err(_) = v38 {
            goto LABEL_471849;
        }
    }
    return v19;
}
