fn uu_ln::exec(a0: void*, a1: u32, a2: void*, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: struct24;  // [sp-0x60], Other Possible Types: i64
    let v1: i64;  // [sp-0x58]
    let v2: i64;  // [sp-0x50]
    let v3: i64;  // [sp-0x48]
    let v4: i8;  // [bp-0x40]
    let v6: i64;  // r9
    let v7: i64;  // rax
    let v9: i64;  // rbx
    let v11: i64;  // r14
    let v13: i64;  // rbx
    let v14: i64;  // r9
    let v15: i64;  // r12
    let v18: i64;  // r14
    let v19: i64;  // r15
    let v20: i64;  // r13
    let v22: i64;  // r9
    let v23: i128;  // xmm0
    let v24: i128;  // xmm1

    if *((a2 + 24) as &i64) != 0x8000000000000000 {
        v0 = std::sys::os_str::bytes::Slice::to_owned(*((a2 + 32) as &i64), *((a2 + 40) as &i64));
        v7 = uu_ln::link_files_in_dir(a0, a1, v1, v2, a2, v6);
        goto LABEL_4883a2;
    }
    if *((a2 + 51) as &i8) {
        if a1 == 1 {
            v9 = *((a0 + 16) as &i64);
            memcpy(v1, *((a0 + 8) as &i64), v9);
            v0 = v9;
            v1 = v11;
            v2 = v9;
            v3 = 9223372036854775811;
            v7 = __rust_alloc(48, 8);
            vvar_456{reg 224} = v0;
            vvar_457{reg 256} = v2;
            *((v7 + 32) as &i8) = v4;
            *((v7 + 16) as &i128) = v24;
            *(v7 as &i128) = v23;
            return v7;
        } else if a1 > 2 {
            v13 = *((a0 + 64) as &i64);
            memcpy(v1, *((a0 + 56) as &i64), v13);
            v0 = v13;
            v1 = v18;
            v2 = v13;
            v3 = 9223372036854775812;
            v7 = __rust_alloc(48, 8);
            v23 = v0;
            v24 = v2;
            *((v7 + 32) as &i8) = v4;
            *((v7 + 16) as &i128) = v24;
            *(v7 as &i128) = v23;
            return v7;
        } else if !a1 {
            core::panicking::panic(); /* do not return */
        }
    } else {
        if a1 == 1 {
            v0 = std::sys::os_str::bytes::Slice::to_owned(&g_41a708, 1);
            v7 = uu_ln::link_files_in_dir(a0, 1, v1, v2, a2, v14);
            goto LABEL_4883a2;
        } else {
            if !a1 {
                core::option::unwrap_failed(); /* do not return */
            }
            v15 = a1 - 1;
            v0 = std::sys::os_str::bytes::Slice::to_owned(*((a0 + v15 * 24 + 8) as &i64), *((a0 + v15 * 24 + 16) as &i64));
            v19 = v1;
            v20 = v2;
            if !(!(a1 > 2) && !(std::path::Path::is_dir(v19, v20) as i8)) {
                v7 = uu_ln::link_files_in_dir(a0, v15, v19, v20, a2, v22);
LABEL_4883a2:
                return v7;
            }
        }
    }
    v7 = uu_ln::link() as i64;
    return v7;
}
