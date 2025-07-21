fn uu_yes::splice::splice_data(a0: i64, a1: i64, a2: i64) -> long long {
    let v0: u32;  // [bp-0xe8]
    let v1: u32;  // [bp-0xe4]
    let v2: u64;  // [bp-0xe0]
    let v3: core::fmt::rt::Argument;  // [bp-0xe0]
    let v4: struct12;  // [bp-0xd8], Other Possible Types: u32
    let v5: u32;  // [bp-0xd8]
    let v6: struct12;  // [bp-0xd8], Other Possible Types: u32
    let v7: u32;  // [bp-0xd4]
    let v8: u64;  // [bp-0xd0]
    let v9: alloc::string::String;  // [bp-0xd0], Other Possible Types: u64
    let v10: struct8;  // [bp-0xc8], Other Possible Types: struct16
    let v12: i8;  // [bp-0xa8]
    let v14: u64;  // rax
    let v15: u64;  // rax
    let v16: u64;  // 4096
    let v17: u64;  // r15
    let v18: u64;  // 4096
    let v19: u64;  // rbp
    let v20: u64;  // rdi
    let v23: u64;  // 4096
    let v24: u64;  // r14
    let v25: u64;  // r15
    let v26: alloc::string::String;  // rbp
    let v27: core::fmt::Arguments;  // eax
    let v30: u64;  // rdi

    v10 = nix::sys::stat::fstat(*(a2 as &i32));
    if v10.field_0 {
        return v14 | 2;
    }
    if !(*(&v12 as &i32) & 0x1000) {
        v15 = uucore::features::pipes::pipe();
        if v15 != -1 {
            v0 = v15;
            v1 = v15 >> 32;
            if !a1 {
                goto LABEL_0x4a66f0;
            }
            v2 = a0;
            loop {
                v3 = v2;
                v23 = a1;
                do {
                    v24 = v23;
                    v25 = v3;
                    vvar_306{stack -216} = struct12 OrderedDict({0: 𝜙@32b [((4875896, None), vvar_248{stack -216}), ((4875992, None), vvar_253{stack -216})]})
                    v10 = struct16 {
                        field_0: v25
                        field_8: v24
                    };
                    nix::fcntl::vmsplice(&v6, &v1, &v10, 1, 0);
                    if v6.field_0 || !((v26 = v9, v27 = uucore::features::pipes::splice_exact(&v0, a2, v26) as i32, uucore::features::pipes::splice_exact(&v0, a2, v26) as i32 == 134)) {
                        return core::ops::function::FnOnce::call_once(v30);
                    }
                    v4 = v5;
                    v8 = v9;
                    v3 = v25 + v26;
                    v23 = v24 - v26;
                } while (v24 != v26);
            }
        }
    } else {
        v2 = a0;
        v16 = a0;
        loop {
            v17 = v16;
            v18 = a1;
            do {
                v19 = v18;
                vvar_308{stack -216} = struct12 OrderedDict({0: 𝜙@32b [((4876097, None), vvar_261{stack -216}), ((4876038, None), vvar_266{stack -216})]})
                v10 = struct16 {
                    field_0: v17
                    field_8: v19
                };
                nix::fcntl::vmsplice(&v4, a2, &v10, 1, 0);
                if v4.field_0 {
                    return core::ops::function::FnOnce::call_once(v7);
                }
                v20 = v8;
                v17 += v20;
                v18 = v19 - v20;
            } while (v19 != v20);
            v5 = v6;
            v9 = v8;
            v16 = v2;
        }
    }
    return v14 | 2;
}
