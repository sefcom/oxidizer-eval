fn uu_yes::splice::splice_data(a0: u32, a1: u32, a2: &u32) -> u64 {
    let v0: i32;  // [sp-0xe8]
    let v1: i32;  // [sp-0xe4]
    let v2: i64;  // [sp-0xe0]
    let v3: Result<struct8, struct4>;  // [sp-0xd8], Other Possible Types: i96
    let v4: i64;  // [sp-0xc8], Other Possible Types: Option<struct4>
    let v5: i64;  // [sp-0xc0]
    let v6: i8;  // [bp-0xa8]
    let v8: i64;  // rax
    let v9: i64;  // rax
    let v10: i64;  // 4096
    let v12: i64;  // 4096
    let v13: i64;  // rdi
    let v15: i64;  // rax
    let v16: i64;  // 4096
    let v17: i64;  // rbp
    let v18: i32;  // eax
    let v21: i64;  // rdi

    v4 = nix::sys::stat::fstat(*(a2 as &i32));
    if v4 {
        v8 = *((&v4 as &char + 4) as &i32) * 0x100000000;
    } else if !(v6 & 0x1000) {
        v9 = uucore::features::pipes::pipe();
        if v9 == -1 {
            v8 = v9 & -0x100000000;
        } else {
            v0 = v9;
            v1 = v9 >> 32;
            if a1 {
                v2 = a0;
                loop {
                    v2 = v2;
                    do {
                        v4 = v2;
                        v5 = v16;
                        v3 = nix::fcntl::vmsplice(&v1, &v4, 0x1, 0);
                        match v3 {
                            Err(_) => {
                                core::ops::function::FnOnce::call_once(v21);
                                return v15;
                            },
                            Ok(v17) => {
                                v18 = uucore::features::pipes::splice_exact(&v0, a2, v17) as u64 as u32;
                            },
                        }
                        if v18 != 134 {
                            v21 = v18;
                            v15 = core::ops::function::FnOnce::call_once(v21);
                            return v15;
                        }
                        v2 = v4 + v17;
                        v16 = v5 - v17;
                    } while (v5 != v17);
                }
            } else {
                loop ;
            }
        }
    } else if a1 {
        v2 = a0;
        loop {
            do {
                v4 += v13;
                v5 = v12;
                v3 = nix::fcntl::vmsplice(a2, &v4, 0x1, 0);
                if v3 {
                    v15 = core::ops::function::FnOnce::call_once(*((&v3 as &char + 4) as &i32));
                    return v15;
                }
            } while ((v13 = v3, v12 = v5 - v13, v5 != v13));
            v10 = v2;
        }
    } else {
        loop ;
    }
    v15 = v8 | 2;
    return v15;
}
