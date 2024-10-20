fn uu_sum::bsd_sum(a0: i64, a1: &u64) -> u64 {
    let v0: u64;  // [sp-0x1038]
    let v1: void*;  // [sp-0x1030]
    let v3: u64;  // rax
    let v4: void*;  // r15
    let v5: &&struct_0;  // rbp
    let v6: void*;  // r12
    let v7: u64;  // rdx
    let v8: u64;  // rax
    let v9: u64;  // rcx
    let v11: u64;  // r15
    let v12: u64;  // r15
    let v13: u64;  // r15
    let v14: u64;  // r15
    let v15: u64;  // r15
    let v16: u64;  // r15
    let v17: u64;  // rax
    let v18: &&struct_0;  // rax

    v1 = 0;
    v0 = v3;
    v4 = 0;
    memset(&v1, 0, 0x1000);
    v5 = a1[3];
    v6 = 0;
    loop {
        if v5() {
            break;
        } else {
            if !v7 {
                break;
            }
            if v7 >= 4097 {
                core::slice::index::slice_end_index_len_fail(); /* do not return */
            }
            v8 = &v1;
            v9 = v7 & 7;
            if (v7 & 7) {
                do {
                    v8 += 1;
                    v4 = (v4 | -0x10000 | __ROR__(v4 as u16, 1)) + *(v8 as &i8) & 4294967295;
                } while (v9 != 1);
            }
            v6 += v7;
            if v7 >= 8 {
                do {
                    v11 = (v4 | -0x10000 | __ROR__(v4 as u16, 1)) + *(v8 as &i8) & 4294967295;
                    v12 = (v11 | -0x10000 | __ROR__(v11, 1)) + *((v8 + 1) as &i8) & 4294967295;
                    v13 = (v12 | -0x10000 | __ROR__(v12, 1)) + *((v8 + 2) as &i8) & 4294967295;
                    v14 = (v13 | -0x10000 | __ROR__(v13, 1)) + *((v8 + 3) as &i8) & 4294967295;
                    v15 = (v14 | -0x10000 | __ROR__(v14, 1)) + *((v8 + 4) as &i8) & 4294967295;
                    v16 = ((v15 | -0x10000 | __ROR__(v15, 1)) + *((v8 + 5) as &i8) & 4294967295 | -0x10000 | __ROR__((v15 | -0x10000 | __ROR__(v15, 1)) + *((v8 + 5) as &i8) & 4294967295, 1)) + *((v8 + 6) as &i8) & 4294967295;
                    v17 = v8 + 8;
                    v4 = (v16 | -0x10000 | __ROR__(v16, 1)) + *((v8 + 7) as &i8) & 4294967295;
                } while (v17 != (&v1 as &u8 + v7) as &void*);
            }
        }
    }
    if *(a1) {
        v18();
    }
    return v6 + 1023 >> 10;
}
