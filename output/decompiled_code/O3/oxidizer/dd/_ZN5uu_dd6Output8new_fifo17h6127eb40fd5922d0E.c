fn uu_dd::Output::new_fifo(a0: void*, a1: u32, a2: u32, a3: void*) -> u64 {
    let v0: u64;  // [sp-0x68], Other Possible Types: Enum
    let v1: u32;  // [bp-0x60]
    let v2: u16;  // [sp-0x5c]
    let v3: u8;  // [bp-0x58]
    let v4: u64;  // [sp-0x50]
    let v5: u32;  // [sp-0x48], Other Possible Types: Enum
    let v6: u64;  // [bp-0x44]
    let v7: u8;  // [bp-0x40]
    let v8: u8;  // [sp-0x3e]
    let v9: u8;  // [sp-0x3c]
    let v10: u8;  // [sp-0x3b]
    let v11: u8;  // [sp-0x38]
    let v12: u32;  // [sp-0x34]
    let v14: u64;  // r13
    let v15: &u64;  // rax
    let v16: u64;  // rdx
    let v17: &u64;  // rax
    let v19: u128;  // xmm0
    let v20: u32;  // eax
    let v21: u32;  // eax
    let v22: u128;  // xmm0

    v14 = a3->field_88;
    if v14 {
        v0 = 0x1b600000000;
        v1 = 0;
        v2 = 0;
        v1 = 1;
        v5 = std::fs::OpenOptions::_open(&v0, a1, a2);
        if v5 {
            v0 = 0x8000000000000000;
            v4 = *(&v7 as &i64);
            v15 = __rust_alloc(32, 8);
            vvar_389{reg 224} = *(&v0 as &i128);
            *(&v15[2] as &i128) = *(&v3 as &i128);
            *(v15) = v22;
            a0->field_8 = v15;
            a0->field_10 = &anon.9b9ba72dabd212696498d24b7f543cb0.73.llvm.3928628070634382108;
            a0->field_0 = 4;
            return a0;
        }
        v12 = *((&v5 as &char + 4) as &i32);
        v11 = 2;
        if uu_dd::Dest::seek(&v11, v14) {
            v0 = 0x8000000000000000;
            v4 = v16;
            v17 = __rust_alloc(32, 8);
            v19 = *(&v0 as &i128);
            *(&v17[2] as &i128) = *(&v3 as &i128);
            *(v17) = v19;
            a0->field_8 = v17;
            a0->field_10 = &anon.9b9ba72dabd212696498d24b7f543cb0.73.llvm.3928628070634382108;
            a0->field_0 = 4;
            if v11 - 1 <= 1 {
                return a0;
            }
            return a0;
        }
    }
    if a3->field_0 && a3->field_0 != 1 || a3->field_8 {
        v6 = 1099511628214;
        v9 = a3->field_92 ^ 1;
        v10 = a3->field_91;
        v8 = a3->field_96;
        v20 = v8 * 0x400;
        if a3->field_98 {
            v20 |= 0x4000;
        }
        if a3->field_99 {
            v20 |= 0x10000;
        }
        if a3->field_9a {
            v20 |= 0x1000;
        }
        if a3->field_9e {
            v20 |= 0x40000;
        }
        if a3->field_9f {
            v20 |= 0x100;
        }
        if a3->field_a0 {
            v20 |= 0x20000;
        }
        if a3->field_9d {
            v20 |= 0x800;
        }
        if a3->field_9b {
            v20 |= 0x101000;
        }
        v5 = v20;
        v0 = std::fs::OpenOptions::_open(&v5, a1, a2);
        if v0 as i32 {
            v0 = 0x8000000000000000;
            v4 = *(&v1 as &i64);
            v15 = __rust_alloc(32, 8);
            v22 = *(&v0 as &i128);
            *(&v15[2] as &i128) = *(&v3 as &i128);
            *(v15) = v22;
            a0->field_8 = v15;
            a0->field_10 = &anon.9b9ba72dabd212696498d24b7f543cb0.73.llvm.3928628070634382108;
            a0->field_0 = 4;
            return a0;
        }
        v21 = *((&v0 as &char + 4) as &i32);
        a0->field_0 = 2;
        a0->field_4 = v21;
    } else {
        a0->field_0 = 3;
    }
    a0->field_10 = a3;
    return a0;
}
