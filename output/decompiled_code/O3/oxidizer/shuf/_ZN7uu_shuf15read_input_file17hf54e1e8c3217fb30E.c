fn uu_shuf::read_input_file(a0: &u64, a1: &u8, a2: u32) -> u64 {
    let v0: void*;  // [bp-0xa0], Other Possible Types: struct8
    let v1: u64;  // [bp-0x98]
    let v2: u16;  // [sp-0x94]
    let v3: void*;  // [sp-0x90]
    let v4: u64;  // [sp-0x88]
    let v5: u64;  // [sp-0x80]
    let v6: u128;  // [sp-0x78]
    let v7: void*;  // [sp-0x68]
    let v8: &u32;  // [sp-0x60]
    let v9: &&struct_0;  // [sp-0x58]
    let v10: Enum;  // [sp-0x50], Other Possible Types: u128
    let v11: u64;  // [sp-0x40], Other Possible Types: struct16, Enum
    let v13: &u32;  // rax
    let v14: u64;  // rax
    let v15: &&struct_0;  // r13
    let v16: u64;  // rcx
    let v18: u64;  // rdx
    let v19: u64;  // rax
    let v20: u64;  // rcx
    let v21: &&struct_0;  // rax
    let v22: &&struct_0;  // rax

    if a2 != 1 || *(a1) != 45 {
        v0 = struct8 {
            field_0: 0x1b600000000
        };
        v1 = 0;
        v2 = 0;
        v1 = 1;
        v11 = std::fs::OpenOptions::_open(&v0, a1, a2);
        v10 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v11, a1, a2);
        v14 = v10;
        if v14 {
            v16 = *((&v10 as &char + 8) as &i64);
            a0[1] = v14;
            a0[2] = v16;
            *(a0) = 0x8000000000000000;
            return a0;
        }
        v13 = __rust_alloc(4, 4);
        *(v13) = *((&v10 as &char + 8) as &i32);
        v15 = &g_4f23c0;
    } else {
        v13 = __rust_alloc(8, 8);
        *(&v13 as &long long) = std::io::stdio::stdin();
        v15 = &g_4f2418;
    }
    v4 = __rust_alloc(0x2000, 1);
    v5 = 0x2000;
    v6 = 0;
    v7 = 0;
    v8 = v13;
    v9 = v15;
    v0 = 0;
    v1 = 1;
    v3 = 0;
    v11 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(<std::io::buffered::bufreader::BufReader<R> as std::io::Read>::read_to_end(&v4, &v0), v18, a1, a2);
    v19 = v11;
    if !v19 {
        a0[2] = v3;
        *(&a0 as &i128) = *(&v0 as &i128);
        if *(v9) {
            v21();
        }
    } else {
        v20 = *((&v11 as &char + 8) as &i64);
        a0[1] = v19;
        a0[2] = v20;
        *(a0) = 0x8000000000000000;
        if *(v9) {
            v22();
        }
    }
    return a0;
}
