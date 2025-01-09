fn uu_yes::splice::splice_data(a0: u32, a1: u32, a2: &u32) -> u64 {
    let v0: u32;  // [sp-0xe8]
    let v1: u32;  // [sp-0xe4], Other Possible Types: i32
    let v2: u64;  // [sp-0xe0]
    let v3: Result<struct8, struct4>;  // [sp-0xd8], Other Possible Types: u64
    let v4: u8;  // [bp-0xd0]
    let v5: struct16;  // [sp-0xc8], Other Possible Types: Option<struct4>, u32
    let v6: u8;  // [bp-0xc4]
    let v7: u64;  // [sp-0xc0]
    let v8: i8;  // [bp-0xa8]
    let v10: u64;  // rax
    let v11: u64;  // rax
    let v13: u64;  // rdi
    let v14: u64;  // rax
    let v17: u64;  // rbp
    let v18: u32;  // eax
    let v19: u64;  // rdi

    v5 = nix::sys::stat::fstat(*(a2)) as u32;
    if v5 {
        v10 = *(&v6 as &i32) * 0x100000000;
    } else if !(v8 & 0x1000) {
        v11 = uucore::features::pipes::pipe();
        if v11 == -1 {
            v10 = v11 & -0x100000000;
        } else {
            v0 = v11;
            v1 = v11 >> 32;
            if a1 {
                v2 = a0;
                loop {
                    do {
                        v5 = struct16 {
                            field_0: v15
                            field_8: v16
                        };
                        v3 = nix::fcntl::vmsplice(&v1, &v5, 0x1, 0) as u64;
                        match v3 {
                            Err(_) => {
                                core::ops::function::FnOnce::call_once(v19);
                                return v14;
                            },
                            Ok(v17) => {
                                v18 = uucore::features::pipes::splice_exact(&v0, a2, v17) as u64 as u32;
                            },
                        }
                        if v18 != 134 {
                            v19 = v18;
                            v14 = core::ops::function::FnOnce::call_once(v19);
                            return v14;
                        }
                        if v7 < v17 {
                            core::slice::index::slice_start_index_len_fail(v17, v7, "src/uu/yes/src/splice.rs"); /* do not return */
                        }
                    } while (v7 != v17);
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
                    field_0: v12
                    field_8: vvar_25{reg 56}
                };
                v3 = nix::fcntl::vmsplice(a2, &v5, 0x1, 0) as u64;
                match v3 {
                    Err(_) => {
                        v14 = core::ops::function::FnOnce::call_once(*((&v3 as &char + 4) as &i32) as u32 as u64);
                        return v14;
                    },
                    Ok(v13) => {
                    },
                }
                if v7 < v13 {
                    core::slice::index::slice_start_index_len_fail(v13, v7, "src/uu/yes/src/splice.rs"); /* do not return */
                }
            } while (v7 != v13);
        }
    } else {
        loop ;
    }
    v14 = v10 | 2;
    return v14;
}
