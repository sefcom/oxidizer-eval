fn uu_tail::follow::files::FileHandling::update_reader(a0: u64, a1: u64, a2: u64, a3: u64, a4: u64, a5: u64) -> u64 {
    let v0: u64;  // [bp-0x80], Other Possible Types: struct8
    let v1: u32;  // [bp-0x78]
    let v2: u16;  // [sp-0x74]
    let v3: i8;  // [bp-0x70]
    let v4: u64;  // [sp-0x68]
    let v5: u64;  // [sp-0x60], Other Possible Types: Enum
    let v6: i8;  // [bp-0x58]
    let v7: u64;  // [sp-0x50]
    let v8: u64;  // [sp-0x48]
    let v9: u128;  // [sp-0x40]
    let v10: void*;  // [sp-0x30]
    let v11: u32;  // [sp-0x28]
    let v13: &struct_1;  // rbx
    let v14: &u64;  // rax
    let v16: u128;  // xmm0
    let v17: &u64;  // rax
    let v18: u128;  // xmm0
    let v19: u64;  // r14
    let v20: &&struct_0;  // r15
    let v21: &&struct_0;  // rax

    v13 = uu_tail::follow::files::FileHandling::get_mut(a0, a1, a2, a3, a4, a5);
    v0 = struct8 {
        field_0: 0x1b600000000
    };
    v1 = 0;
    v2 = 0;
    v1 = 1;
    v5 = std::fs::OpenOptions::_open(&v0, a1, a2);
    if v5 as i32 {
        v0 = 0x8000000000000000;
        v4 = v6;
        v14 = __rust_alloc(32, 8);
        v16 = *(&v0 as &i128);
        *(&v14[2] as &i8) = v3;
        *(v14) = v16;
        return v14;
    }
    v7 = __rust_alloc(0x2000, 1);
    v8 = 0x2000;
    v9 = 0;
    v10 = 0;
    v11 = *((&v5 as &char + 4) as &i32);
    v17 = __rust_alloc(48, 8);
    v18 = *(&v7 as &i128);
    *(&v17[4] as &i128) = *(&v10 as &i128);
    v17[2] = v9;
    *(v17) = v18;
    v19 = v13->field_c8;
    v20 = v13->field_d0;
    v13->field_c8 = v17;
    v13->field_d0 = &anon.c568fa996e9b1afffbd2fe86e67742f4.14.llvm.893476530518564186;
    if !(v19 && *(v20)) {
        return 0;
    }
    v21();
}
