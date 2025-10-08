fn uu_join::State::combine(a0: i64, a1: u64, a2: i64) -> long long {
    let v0: u8;  // [bp-0xb1]
    let v1: u64;  // [bp-0xb0]
    let v2: u64;  // [bp-0xb0]
    let v3: u64;  // [bp-0xb0]
    let v4: i64;  // [bp-0xa8], Other Possible Types: u64
    let v5: struct48;  // [bp-0xa0]
    let v6: u64;  // [bp-0x98]
    let v7: u64;  // [bp-0x90]
    let v8: u64;  // [bp-0x88]
    let v9: u64;  // [bp-0x80]
    let v10: u64;  // [bp-0x78]
    let v11: u64;  // [bp-0x70]
    let v12: struct40;  // [bp-0x68], Other Possible Types: u8
    let v13: u8;  // [bp-0x68]
    let v14: u64;  // [bp-0x40]
    let v15: u64;  // [bp-0x38]
    let v17: u64;  // rdx
    let v18: u64;  // rcx
    let v19: u64;  // rsi
    let v20: struct48;  // rdi
    let v21: i64;  // rcx
    let v22: struct48;  // rdi
    let v23: struct48;  // rdi
    let v24: struct48;  // rcx
    let v25: struct48;  // rbp
    let v26: struct48;  // rcx
    let v27: struct48;  // rbp
    let v28: u64;  // rax
    let v29: core::result::Result<(), std::io::error::Error>;  // rax
    let v30: u64;  // rcx
    let v31: u64;  // rsi
    let v32: u64;  // rcx
    let v34: struct48;  // rdi
    let v35: struct48;  // rdi
    let v36: struct48;  // r12
    let v37: struct48;  // rbp
    let v38: struct48;  // r12
    let v39: struct48;  // rbp
    let v40: core::result::Result<(), std::io::error::Error>;  // rax
    let v41: u64;  // rax
    let v42: u64;  // rax
    let v43: core::result::Result<(), std::io::error::Error>;  // rax
    let v44: u64;  // rax
    let v45: u64;  // rsi
    let v46: u64;  // rax

    v4 = uu_join::State::get_current_key(a0);
    v14 = v4;
    v6 = v17;
    v15 = v17;
    if !*((a0 + 16) as &i64) {
        return 0;
    }
    v18 = *((a0 + 8) as &i64);
    v3 = v18;
    v19 = v18 + 48;
    v20 = *((a2 + 8) as &i64);
    v7 = *((a2 + 16) as &i64) * 48 + v20;
    v0 = *((v21 + 328) as &i8);
    v5 = v20;
    if *((v21 + 320) as &i64) {
        v4 = v21;
        v9 = *((a0 + 16) as &i64) * 48 + v18;
        v22 = v20;
        do {
            v23 = v22;
            v1 = v3;
            v2 = v19;
            loop {
                v24 = v23;
                v25 = v24 + 48;
                v26 = v24;
                if v26 == v7 {
                    break;
                }
                v27 = v26;
                v12 = struct40 {
                    field_0: &v14
                    field_8: a0
                    field_16: v1
                    field_24: a2
                    field_32: v24
                };
                v28 = uu_join::Repr<Sep>::print_format(v4, a1, &v12);
                if v28 {
                    return v28;
                }
                v13 = v0;
                v29 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, &v13, 1);
                v23 = v27;
                if let Err(_) = v29 {
                    return v29;
                }
            }
            v30 = v2;
            v31 = v30 + 48;
            if v30 == v9 {
                v32 = v30;
            } else {
                v32 = v31;
            }
            v19 = v32;
            v3 = v2;
            v22 = v5;
        } while (v30 != v9);
        return 0;
    } else {
        v11 = *((a0 + 64) as &i64);
        v10 = *((a2 + 64) as &i64);
        v34 = v20;
        do {
            v35 = v34;
            v8 = v19;
            loop {
                v36 = v35;
                v37 = v36 + 48;
                v38 = v36;
                if v38 == v7 {
                    break;
                }
                v39 = v38;
                v40 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, v4, v6);
                match v40 {
                    Err(_) => {
                        return v40;
                    },
                    Ok(_) => {
                        v41 = uu_join::Repr<Sep>::print_fields(*((v21 + 264) as &i64), *((v21 + 272) as &i64), a1, v3, v11);
                        if v41 {
                            return v41;
                        }
                        v42 = uu_join::Repr<Sep>::print_fields(*((v21 + 264) as &i64), *((v21 + 272) as &i64), a1, v36, v10);
                        if v42 {
                            return v42;
                        }
                        v12 = v0;
                        v43 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, &v12 as u64, 1);
                        v35 = v39;
                        if let Err(_) = v43 {
                            return v43;
                        }
                    },
                }
            }
            v44 = v8;
            v45 = v44 + 48;
            v3 = v44;
            if v44 == v9 {
                v46 = v44;
            } else {
                v46 = v45;
            }
            v19 = v46;
            v34 = v5;
        } while (v44 != v9);
        return 0;
    }
}
