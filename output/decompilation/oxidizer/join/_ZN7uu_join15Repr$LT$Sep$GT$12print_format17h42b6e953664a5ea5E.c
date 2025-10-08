fn uu_join::Repr<Sep>::print_format(a0: i64, a1: u64, a2: void*) -> long long {
    let v0: u64;  // [bp-0x38]
    let v2: u64;  // rax
    let v3: u64;  // r13
    let v4: core::result::Result<(), std::io::error::Error>;  // r15
    let v5: u64;  // rax
    let v6: u64;  // rax
    let v7: core::result::Result<(), std::io::error::Error>;  // r15
    let v8: i64;  // rdx
    let v9: i64;  // rdx
    let v10: core::result::Result<(), std::io::error::Error>;  // rax
    let v11: i64;  // r12
    let v12: i64;  // r13
    let v13: core::result::Result<(), std::io::error::Error>;  // rax
    let v14: u64;  // rax
    let v15: u64;  // rax
    let v16: i64;  // rdx
    let v17: core::result::Result<(), std::io::error::Error>;  // r15
    let v18: i64;  // rdx
    let v19: core::result::Result<(), std::io::error::Error>;  // rax

    v0 = v2;
    v3 = *((a0 + 16) as &i64);
    if !*((a0 + 16) as &i64) {
        return 0;
    }
    v4 = *((a0 + 32) as &i64);
    v5 = uu_join::State::combine::{{closure}}(a2, *((a0 + 8) as &i64));
    if v5 {
        v6 = v5;
        if v5 {
            goto LABEL_45e72e;
        }
LABEL_45e72d:
        v7 = v4;
    } else {
        if !v5 {
            goto LABEL_45e72d;
        }
LABEL_45e72e:
        v7 = v9;
    }
    v10 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, v6, v7);
    match v10 {
        Err(_) => {
            return v10;
        },
        Ok(_) => {
            v0 = *((a0 + 24) as &i64);
            v11 = *((a0 + 8) as &i64) + 16;
            loop {
                v12 = v3 - 1;
                if v3 == 1 {
                    break;
                }
                v13 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, 1, 0);
                if let Err(_) = v13 {
                    return v13;
                }
                v14 = uu_join::State::combine::{{closure}}(a2, v11);
                if !v14 {
                    v15 = v0;
                    v16 = v8;
                    if v14 {
                        goto LABEL_45e783;
                    }
                    goto LABEL_45e782;
                } else {
                    v15 = v14;
                    v16 = v8;
                    if !v14 {
LABEL_45e782:
                        v17 = v4;
                        goto LABEL_45e785;
                    } else {
LABEL_45e783:
                        v18 = v16;
                        v17 = v18;
LABEL_45e785:
                        v19 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, v15, v17);
                        v11 += 16;
                        v3 = v12;
                        if let Err(_) = v19 {
                            return v19;
                        }
                    }
                }
            }
        },
    }
    return 0;
}
