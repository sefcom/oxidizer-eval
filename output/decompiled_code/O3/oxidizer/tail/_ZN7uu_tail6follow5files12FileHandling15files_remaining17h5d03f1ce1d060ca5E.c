fn uu_tail::follow::files::FileHandling::files_remaining(a0: &struct_0, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: u64;  // [sp-0x38]
    let v2: u64;  // rax
    let v3: &u128;  // r15
    let v4: u64;  // r12
    let v5: u128;  // xmm0
    let v6: u256;  // ymm0
    let v7: u256;  // ymm0
    let v8: u64;  // rcx
    let v9: &u128;  // r13
    let v10: u64;  // rax
    let v11: u32;  // ebp
    let v12: u128;  // xmm0
    let v13: u32;  // ecx
    let v14: u64;  // rax
    let v15: u64;  // rax
    let v16: u64;  // rbx
    let v17: u64;  // r14
    let v18: u64;  // rdx
    let v19: u64;  // rcx
    let v20: u64;  // r8
    let v21: u64;  // r9

    v0 = v2;
    v3 = a0->field_18;
    v4 = a0->field_30;
    v5 = *(v3);
    vvar_18{reg 224} = ((vvar_85{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_84{reg 224}))
    v8 = ~(UnaryOp GetMSBs);
    v9 = v3 + 1;
    loop {
        v0 = v4;
        v4 = v0 - 1;
        if !(__CFADD__(v0, -1) as char) {
            break;
        }
        if v8 {
            v11 = v8 - 1 & v8;
        } else {
            do {
                v12 = *(v9);
                vvar_18{reg 224} = ((vvar_27{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_102{reg 224}))
                v13 = UnaryOp GetMSBs;
                v3 += 240;
                v9 += 1;
            } while (v13 == 65535);
            v8 = ~(v13);
            v11 = v8 & 4294967294 - v13;
        }
        v14 = (!(v8 & 4294967295) ? 32 : UnaryOp Ctz & 4294967295);
        v15 = -(v14) * 240;
        v16 = *((-232 + v3 + v15) as &i64);
        v17 = *((-224 + v3 + v15) as &i64);
        v10 = uu_tail::paths::path_is_tailable(v16, v17);
        if !(!v10) || !(!v10) {
            break;
        }
        v10 = <std::path::Path as uu_tail::paths::PathExtTail>::is_stdin(v16, v17, v18, v19, v20, v21);
        v8 = v11;
        if v10 {
            break;
        }
    }
    return v10 | -0x100 | v0;
}
