fn uu_sort::Output::new(a0: void*, a1: u32, a2: u32) -> u64 {
    let v0: void*;  // [sp-0x90], Other Possible Types: u64
    let v1: struct8;  // [bp-0x88]
    let v2: u32;  // [bp-0x80]
    let v3: u8;  // [sp-0x7f]
    let v4: u8;  // [bp-0x7c]
    let v5: u64;  // [sp-0x78]
    let v6: u8;  // [sp-0x70], Other Possible Types: Enum
    let v7: u64;  // [sp-0x68]
    let v8: u64;  // [sp-0x60]
    let v9: u64;  // [sp-0x58]
    let v10: u64;  // [sp-0x50]
    let v11: i8;  // [bp-0x40]
    let v14: u64;  // r13
    let v15: u32;  // ebp
    let v17: u64;  // r12
    let v19: u64;  // r12
    let v22: &u64;  // rax
    let v23: u128;  // xmm0
    let v24: u128;  // xmm1
    let v25: u128;  // xmm2

    if a1 {
        v1 = struct8 {
            field_0: 0x1b600000000
        };
        v2 = 0;
        v4 = 0;
        v3 = 1;
        v4 = 1;
        v6 = std::fs::OpenOptions::_open(&v1, a1, a2);
        if !v6 as i32 {
            v15 = *((&v6 as &char + 4) as &i32);
            memcpy(v19, a1, a2);
        } else {
            v5 = v7;
            if a2 {
                if a2 < 0 {
                    v0 = 0;
                }
                v0 = 1;
            }
            memcpy(v9, a1, a2);
            v6 = 1;
            v7 = v5;
            v8 = a2;
            v9 = v17;
            v10 = a2;
            v22 = __rust_alloc(64, 8);
            v23 = *(&v6 as &i128);
            v24 = *(&v8 as &i128);
            v25 = *(&v10 as &i128);
            *(&v22[6] as &i8) = v11;
            v22[4] = v25;
            v22[2] = v24;
            *(v22) = v23;
            a0->field_8 = v22;
            a0->field_10 = &anon.d7f70ae2e91d4deb3ee5c65537f9ec21.36.llvm.14646808445695166917;
            a0->field_0 = 9223372036854775809;
            return a0;
        }
    }
    a0->field_0 = v14;
    a0->field_8 = v19;
    a0->field_10 = a2;
    a0->field_18 = v15;
    return a0;
}
