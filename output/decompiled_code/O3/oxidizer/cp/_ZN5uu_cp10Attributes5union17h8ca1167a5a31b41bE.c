fn uu_cp::Attributes::union(a0: &u64, a1: &u64, a2: &u64) -> u64 {
    let v0: u8;  // [sp-0x6e]
    let v1: u8;  // [sp-0x6d]
    let v2: u8;  // [sp-0x6c]
    let v3: u8;  // [sp-0x6b]
    let v4: u8;  // [sp-0x6a]
    let v5: u8;  // [sp-0x69]
    let v6: u8;  // [sp-0x68]
    let v7: u8;  // [sp-0x67]
    let v8: u8;  // [sp-0x66]
    let v9: u8;  // [sp-0x65]
    let v10: u8;  // [sp-0x64]
    let v11: u8;  // [sp-0x63]
    let v12: u8;  // [sp-0x62]
    let v13: u8;  // [sp-0x61]
    let v14: u64;  // [sp-0x60]
    let v15: u64;  // [sp-0x58]
    let v16: u64;  // [sp-0x50]
    let v17: u64;  // [sp-0x48]
    let v18: u64;  // [sp-0x40]
    let v19: u64;  // [sp-0x38]
    let v20: u64;  // [sp-0x30]
    let v21: u64;  // [sp-0x28]
    let v22: u64;  // [sp-0x20]
    let v23: u64;  // [sp-0x18]
    let v24: u64;  // [sp-0x10]
    let v26: u64;  // r15
    let v27: u64;  // r14
    let v28: u64;  // r13
    let v29: u64;  // r12
    let v30: u64;  // rbx
    let v35: u8;  // r9b
    let v39: u8;  // cl
    let v43: u8;  // bl
    let v46: u8;  // r14b
    let v47: u8;  // dil
    let v50: u8;  // r15b
    let v51: u8;  // dil
    let v52: u8;  // bl
    let v54: u8;  // sil
    let v55: u8;  // cl
    let v57: u8;  // dl
    let v60: u8;  // sil
    let v62: u8;  // bpl
    let v64: u8;  // sil
    let v65: u8;  // r10b

    v24 = v26;
    v23 = v27;
    v22 = v28;
    v21 = v29;
    v20 = v30;
    v9 = *(a1 as &i8);
    v8 = *(a2 as &i8);
    v6 = *((a1 as &char + 6) as &i8);
    v12 = v9;
    v4 = *((a2 as &char + 6) as &i8);
    v10 = v6;
    v18 = *((a1 as &char + 7) as &i8);
    v35 = *((a1 as &char + 4) as &i8);
    v5 = v35;
    v39 = *((a1 as &char + 2) as &i8);
    v19 = *((a1 as &char + 1) as &i8);
    v13 = *((a2 as &char + 1) as &i8);
    v17 = *((a1 as &char + 5) as &i8);
    v7 = *((a2 as &char + 5) as &i8);
    v16 = *((a1 as &char + 3) as &i8);
    v43 = a1[1];
    v14 = *((&a1[1] as &char + 1) as &i8);
    v46 = v43;
    v2 = v39;
    v47 = *((&a1[1] as &char + 2) as &i8);
    v0 = *((&a2[1] as &char + 3) as &i8);
    v11 = *((a2 as &char + 7) as &i8);
    v3 = *((a2 as &char + 3) as &i8);
    v1 = v47;
    v15 = *((&a1[1] as &char + 3) as &i8);
    if v46 {
        v50 = (-0x100 | v43) & 4294967295 & 4294967295;
    } else {
        v50 = (-0x100 | a2[1] as i8) & 4294967295 & 4294967295;
    }
    v51 = (v46 ? v14 as i8 : *((&a2[1] as &char + 1) as &i8));
    v52 = (v2 ? (-0x100 | v39) & 4294967295 & 4294967295 : (-0x100 | *((a2 as &char + 2) as &i8)) & 4294967295 & 4294967295);
    if !v2 {
        v54 = v3;
    }
    v55 = (v5 ? (-0x100 | v35) & 4294967295 & 4294967295 : (-0x100 | *((a2 as &char + 4) as &i8)) & 4294967295 & 4294967295);
    if !v5 {
        v57 = v7;
    }
    if !v10 {
        v60 = v11;
    }
    v62 = (v12 ? v19 as i8 : v13);
    if !v1 {
        v64 = v0;
    }
    v65 = (v1 ? (-0x100 | v47) & 4294967295 & 4294967295 : (-0x100 | *((&a2[1] as &char + 2) as &i8)) & 4294967295 & 4294967295);
    *(a0 as &i32) = (v12 ? (-0x100 | v9) & 4294967295 & 4294967295 : (-0x100 | v8) & 4294967295 & 4294967295);
    *((a0 as &char + 1) as &u8) = v62;
    *((a0 as &char + 2) as &u8) = v52;
    *((a0 as &char + 3) as &u8) = v54;
    *((a0 as &char + 4) as &u8) = v55;
    *((a0 as &char + 5) as &u8) = v57;
    *((a0 as &char + 6) as &i32) = (v10 ? (-0x100 | v6) & 4294967295 & 4294967295 : (-0x100 | v4) & 4294967295 & 4294967295);
    *((a0 as &char + 7) as &u8) = v60;
    a0[1] = v50;
    *((&a0[1] as &char + 1) as &u8) = v51;
    *((&a0[1] as &char + 2) as &u8) = v65;
    *((&a0[1] as &char + 3) as &u8) = v64;
    return a0;
}
