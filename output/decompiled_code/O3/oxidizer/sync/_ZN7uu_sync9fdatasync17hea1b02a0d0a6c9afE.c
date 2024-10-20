fn uu_sync::fdatasync(a0: void*, a1: u32) -> u64 {
    let v0: struct8;  // [bp-0x80], Other Possible Types: u64
    let v1: u32;  // [bp-0x78]
    let v2: u16;  // [sp-0x74]
    let v3: &struct_0;  // [sp-0x70]
    let v4: u64;  // [sp-0x68]
    let v5: Enum;  // [sp-0x60], Other Possible Types: u64
    let v6: i8;  // [bp-0x58]
    let v7: &struct_0;  // [sp-0x50]
    let v8: &struct_0;  // [sp-0x48]
    let v9: u64;  // [sp-0x40]
    let v10: u64;  // [sp-0x38]
    let v11: u64;  // [sp-0x30]
    let v12: u64;  // [sp-0x10]
    let v14: u64;  // r15
    let v15: u64;  // rbx
    let v16: &struct_0;  // rbx
    let v17: u64;  // rax
    let v18: &u64;  // r14
    let v19: u64;  // r13
    let v20: u64;  // rcx

    v12 = v14;
    v11 = v15;
    v16 = a0->field_8;
    v17 = a0->field_10;
    v7 = v16;
    v4 = a0->field_0;
    v9 = v4;
    v10 = &v16[3 * v17];
    v3 = v16;
    if v17 {
        v16 = v3 + 3;
        while (v16[3].field_-18 != 0x8000000000000000) {
            v18 = v16 + 3;
            v19 = v18[1];
            v20 = v18[2];
            v0 = struct8 {
                field_0: 0x1b600000000
            };
            v2 = 0;
            v1 = 0;
            v1 = 1;
            v5 = std::fs::OpenOptions::_open(&v0, v19, v20);
            if v5 as i32 {
                v8 = v16;
                v0 = v6;
                core::result::unwrap_failed(); /* do not return */
            }
            syscall(75);
            v16 += 3;
            if v18 + 3 == v10 {
                return 0;
            }
        }
    }
    v8 = v16;
    return 0;
}
