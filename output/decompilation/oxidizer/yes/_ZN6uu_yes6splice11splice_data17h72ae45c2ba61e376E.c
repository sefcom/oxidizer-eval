fn uu_yes::splice::splice_data(a0: u32, a1: u32, a2: &u32) -> u64 {
    let v0: i32;  // [sp-0xe8]
    let v1: i32;  // [sp-0xe4]
    let v2: i64;  // [sp-0xe0]
    let v3: Result<struct8, struct4>;  // [sp-0xd8]
    let v4: Option<struct4>;  // [sp-0xc8]
    let v5: i64;  // [sp-0xc0]
    let v6: i8;  // [bp-0xa8]
    let v8: i64;  // r15
    let v9: i64;  // rax
    let v10: i64;  // rax
    let v11: i64;  // rbp
    let v12: i64;  // rbp
    let v13: i64;  // rdi
    let v15: i64;  // rax
    let v16: i64;  // r15
    let v17: i64;  // r14
    let v18: i64;  // r14
    let v19: i64;  // rbp
    let v20: i32;  // eax
    let v22: i64;  // rdi

    v8 = a0;
    v4 = nix::sys::stat::fstat(*(a2 as &i32));
    if v4 as i32 {
        v9 = *((&v4 as &char + 4) as &i32) * 0x100000000;
    } else if !(*(&v6 as &i32) & 0x1000) {
        v10 = uucore::features::pipes::pipe();
        if v10 as u32 == -1 {
            v9 = v10 & -0x100000000;
        } else {
            v0 = v10 as u32;
            v1 = (v10 >> 32) as u32;
            if a1 {
                v2 = a0;
                loop {
                    v16 = v2;
                    v17 = a1;
                    do {
                        v18 = v17;
                        v4 = v16;
                        v5 = v18;
                        v3 = nix::fcntl::vmsplice(&v1, &v4, 0x1, 0);
                        match v3 {
                            Err(_) => {
                                core::ops::function::FnOnce::call_once(v22);
                                return v15;
                            },
                            Ok(v19) => {
                                v20 = uucore::features::pipes::splice_exact(&v0, a2, v19) as u64 as u32;
                            },
                        }
                        if v20 != 134 {
                            v22 = v20 as u64;
                            v15 = core::ops::function::FnOnce::call_once(v22);
                            return v15;
                        }
                        v16 += v19;
                        v17 = v18 - v19;
                    } while (v18 != v19);
                }
            } else {
                loop ;
            }
        }
    } else if a1 {
        v2 = a0;
        loop {
            v11 = a1;
            do {
                v12 = v11;
                v4 = v8;
                v5 = v12;
                v3 = nix::fcntl::vmsplice(a2, &v4, 0x1, 0);
                if v3 as i32 {
                    v15 = core::ops::function::FnOnce::call_once(*((&v3 as &char + 4) as &i32));
                    return v15;
                }
            } while ((v13 = *((&v3 as &char + 8) as &i64), v8 += v13, v11 = v12 - v13, v12 != v13));
            v8 = v2;
        }
    } else {
        loop ;
    }
    v15 = v9 | 2;
    return v15;
}
