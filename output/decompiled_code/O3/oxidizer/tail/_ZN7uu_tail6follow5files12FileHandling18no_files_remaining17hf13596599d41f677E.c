fn uu_tail::follow::files::FileHandling::no_files_remaining(a0: &struct_1, a1: &struct_0, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: &struct_0;  // [sp-0x38]
    let v2: &struct_0;  // rax
    let v3: u64;  // r12
    let v4: &u128;  // r13
    let v5: u128;  // xmm0
    let v6: u256;  // ymm0
    let v7: u256;  // ymm0
    let v8: u64;  // rcx
    let v9: &u128;  // rbp
    let v10: &struct_0;  // rax
    let v12: u32;  // ebx
    let v13: u128;  // xmm0
    let v14: u32;  // ecx
    let v15: u64;  // rax
    let v16: u64;  // rax
    let v17: u64;  // r14
    let v18: u64;  // r15
    let v19: u64;  // rdx
    let v20: u64;  // rcx
    let v21: u64;  // r8
    let v22: u64;  // r9

    v0 = v2;
    v3 = a0->field_30;
    if !v3 {
        v10 = v2 | -0x100 | 1;
        return v10;
    }
    v0 = a1;
    v4 = a0->field_18;
    v5 = *(v4);
    vvar_21{reg 224} = ((vvar_97{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_96{reg 224}))
    v8 = ~(UnaryOp GetMSBs);
    v9 = v4 + 1;
    do {
        if v3 < 1 {
            v10 = v0 | -0x100 | !v0->field_48;
            return v10;
        }
        if v8 {
            v12 = v8 - 1 & v8;
        } else {
            do {
                v13 = *(v9);
                vvar_21{reg 224} = ((vvar_30{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_116{reg 224}))
                v14 = UnaryOp GetMSBs;
                v4 += 240;
                v9 += 1;
            } while (v14 == 65535);
            v8 = ~(v14);
            v12 = v8 & 4294967294 - v14;
        }
        v15 = (!(v8 & 4294967295) ? 32 : UnaryOp Ctz & 4294967295);
        v16 = -(v15) * 240;
        v17 = *((-232 + v4 + v16) as &i64);
        v18 = *((-224 + v4 + v16) as &i64);
    } while (!uu_tail::paths::path_is_tailable(v17, v18) as i8 && (v8 = v12 as u64, !<std::path::Path as uu_tail::paths::PathExtTail>::is_stdin(v17, v18, v19, v20, v21, v22) as i8));
    return 0;
}
