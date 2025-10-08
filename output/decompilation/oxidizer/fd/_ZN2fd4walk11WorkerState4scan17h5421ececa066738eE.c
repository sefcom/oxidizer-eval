fn fd::walk::WorkerState::scan(a0: i64, a1: i64, a2: u32) -> long long {
    let v0: Result<struct112, struct16>;  // [bp-0x128], Other Possible Types: struct16, struct32
    let v1: u128;  // [bp-0x128]
    let v2: u64;  // [bp-0x120]
    let v3: iNone;  // [bp-0x118]
    let v4: iNone;  // [bp-0x108]
    let v5: iNone;  // [bp-0xf8]
    let v6: iNone;  // [bp-0xe8], Other Possible Types: u128
    let v7: iNone;  // [bp-0xd8]
    let v8: iNone;  // [bp-0xc8], Other Possible Types: struct56
    let v9: iNone;  // [bp-0xb8]
    let v10: iNone;  // [bp-0xa8]
    let v11: i64;  // [bp-0x98]
    let v12: u64;  // [bp-0x88]
    let v13: struct24;  // [bp-0x80]
    let v14: iNone;  // [bp-0x78]
    let v15: core::option::Option<&str>;  // [bp-0x68]
    let v16: iNone;  // [bp-0x58]
    let v17: struct40;  // [bp-0x48]
    let v18: iNone;  // [bp-0x38]
    let v19: struct56;  // [bp-0x28]
    let v23: struct12;  // 4097
    let v24: core::str::pattern::CharSearcher;  // 4097
    let v25: u64;  // rdx
    let v26: core::fmt::rt::Argument;  // xmm0
    let v27: struct32;  // rax
    let v28: struct104;  // cl
    let v29: u8;  // r14b

    v0 = fd::walk::WorkerState::build_walker(a1, a2);
    match v0 {
        Err(_) => {
            *((a0 + 8) as &struct24) = v13;
        },
        Ok(_) => {
            v19 = v8;
            v18 = v7;
            v17 = v6;
            v16 = v5;
            v15 = v4;
            v14 = v3;
            v12 = v0 as i64;
            v13 = v2;
            if !((((0 ^ *((a1 + 200) as &i64)) & (0 ^ -(*((a1 + 200) as &i64)))) >> 63) as char) && !*((a1 + 456) as &i64) {
                v23 = atomic_fetch_add(*((a1 + 528) as &i64)) as u64;
                if _ccall(14, 24, v23 + 1, 0, (*((a1 + 456) as &i64) < 0) as u8 as u64) as char {
                    [D] Unsupported jumpkind Ijk_NoDecode at address 6266674()
                }
                v24 = atomic_fetch_add(*((a1 + 536) as &i64)) as u64;
                if _ccall(14, 24, v24 + 1, 0, _ccall(24, v23 + 1, 0, (*((a1 + 456) as &i64) < 0) as u8 as u64)) as char {
                    [D] Unsupported jumpkind Ijk_NoDecode at address 6266674()
                }
                v0 = ctrlc::init_and_set_handler(*((a1 + 528) as &i64), *((a1 + 536) as &i64));
                core::result::Result<T,E>::unwrap(&v0);
            }
            v1 as u256 = crossbeam_channel::channel::bounded(*((a1 + 416) as &i64) * 2, v25, v12);
            v26 = *(&v0.field_0 as &i128);
            v11 = a1;
            v10 = v3;
            v1 = *(&v12 as &i128) as u128;
            v3 = v14;
            v4 = v15;
            v5 = v16;
            v6 = v17;
            v7 = v18;
            v8 = v19;
            v9 = v26;
            v27 = std::thread::scoped::scope(&v1 as u256) as u32 as u64;
            v28 = (!core::sync::atomic::atomic_load(*((a1 + 536) as &i64) + 16, 0) as u8 ? v27 as u8 : 5);
            return struct2 {
                field_0: v29
                field_1: v28
            };
        },
    }
}
