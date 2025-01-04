fn uu_yes::splice::splice_data(a0: u64, a1: u64, a2: &u32) -> u64 {
    let v0: u32;  // [sp-0xe8]
    let v1: u32;  // [sp-0xe4], Other Possible Types: i32
    let v2: u64;  // [sp-0xe0]
    let v3: Result<struct8, struct4>;  // [sp-0xd8], Other Possible Types: u64
    let v4: u8;  // [bp-0xd0]
    let v5: struct16;  // [sp-0xc8], Other Possible Types: u32, Option<struct4>
    let v6: u8;  // [bp-0xc4]
    let v7: u64;  // [sp-0xc0]
    let v8: i8;  // [bp-0xa8]
    let v10: u64;  // rax
    let v11: u64;  // rdi
    let v12: u64;  // rsi
    let v13: u64;  // rdx
    let v14: u64;  // rax
    let v16: u64;  // rdi
    let v17: u64;  // rax
    let v20: u64;  // rbp
    let v21: u32;  // eax
    let v22: u64;  // rdi

    v5 = nix::sys::stat::fstat(*(a2), a2);
    if v5 {
        v10 = *(&v6 as &i32) * 0x100000000;
    } else if !(v8 & 0x1000) {
        v14 = uucore::features::pipes::pipe(v11, v12, v13);
        if v14 == -1 {
            v10 = v14 & -0x100000000;
        } else {
            v0 = v14;
            v1 = v14 >> 32;
            if a1 {
                v2 = a0;
                loop {
                    do {
                        v5 = struct16 {
                            field_0: v18
                            field_8: v19
                        };
                        v3 = nix::fcntl::vmsplice(&v1, &v5, 0x1, 0);
                        match v3 {
                            Err(_) => {
                                core::ops::function::FnOnce::call_once(v22);
                                return v17;
                            },
                            Ok(v20) => {
                                v21 = uucore::features::pipes::splice_exact(&v0, a2, v20) as u64 as u32;
                            },
                        }
                        if v21 != 134 {
                            v22 = v21;
                            v17 = core::ops::function::FnOnce::call_once(v22);
                            return v17;
                        }
                        if v7 < v20 {
                            core::slice::index::slice_start_index_len_fail(); /* do not return */
                        }
                    } while (v7 != v20);
                }
            } else {
                loop ;
            }
        }
    } else if a1 {
        v2 = a0;
        loop {
            do {
                v5 = struct16 {
                    field_0: v15
                    field_8: vvar_25{reg 56}
                };
                v3 = nix::fcntl::vmsplice(a2, &v5, 0x1, 0);
                match v3 {
                    Err(_) => {
                        v17 = core::ops::function::FnOnce::call_once(*((&v3 as &char + 4) as &i32) as u32 as u64);
                        return v17;
                    },
                    Ok(v16) => {
                    },
                }
                if v7 < v16 {
                    core::slice::index::slice_start_index_len_fail(); /* do not return */
                }
            } while (v7 != v16);
        }
    } else {
        loop ;
    }
    v17 = v10 | 2;
    return v17;
}
