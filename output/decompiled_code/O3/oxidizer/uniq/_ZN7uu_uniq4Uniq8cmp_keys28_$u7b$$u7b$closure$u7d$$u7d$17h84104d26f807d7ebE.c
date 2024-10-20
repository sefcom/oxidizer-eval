fn uu_uniq::Uniq::cmp_keys::{{closure}}(a0: void*, a1: u32, a2: void*, a3: u32, a4: u32, a5: u64) -> u64 {
    let v0: struct8;  // [bp-0x80]
    let v1: u64;  // [sp-0x78]
    let v2: u64;  // [sp-0x70]
    let v3: u64;  // [sp-0x68]
    let v4: u64;  // [sp-0x60]
    let v5: &u8;  // [sp-0x58]
    let v6: u8;  // [bp-0x50]
    let v7: i8;  // [bp-0x48], Other Possible Types: u8
    let v8: i8;  // [bp-0x40]
    let v9: u64;  // [sp-0x38]
    let v11: &struct_1;  // rbx
    let v12: u64;  // r12
    let v13: u64;  // rax
    let v14: u64;  // r12
    let v16: u64;  // rbp
    let v17: void*;  // r13
    let v18: u64;  // rbp
    let v19: u64;  // rbx
    let v20: &&struct_0;  // r13
    let v21: u64;  // rbp
    let v22: u8;  // dl
    let v23: &u8;  // rbx
    let v24: u32;  // eax
    let v25: u64;  // rbx
    let v26: &&struct_0;  // r13
    let v27: &&struct_0;  // r13
    let v28: &u8;  // r15
    let v29: &&struct_0;  // r15
    let v30: u8;  // dl
    let v31: u64;  // rbp
    let v32: u64;  // rbx
    let v33: &&struct_0;  // r13
    let v34: u64;  // rbp
    let v35: u64;  // rax
    let v36: u8;  // dl
    let v37: u8;  // dl
    let v38: &u8;  // rbx
    let v39: &u8;  // rbx
    let v40: &u8;  // rax
    let v41: u64;  // rax
    let v42: u8;  // dl
    let v43: &u8;  // r13
    let v44: u64;  // rax
    let v45: &u8;  // rax

    v11 = a0->field_0;
    uu_uniq::Uniq::skip_fields(&v6, v11->field_0, v11->field_8, a0->field_8, a0->field_10, a5);
    v12 = v8;
    v13 = v11->field_20;
    if v11->field_10 {
        v16 = v14;
        if !v12 {
LABEL_488d8e:
            v19 = *(&v7 as &i64);
            v0 = struct8 {
                field_0: v19
            };
            v1 = v12 + v19;
            v20 = a2->field_18;
            v21 = 0;
            do {
                if !(v20() & 1) {
                    v24 = <core::iter::adapters::copied::Copied<I> as core::iter::traits::iterator::Iterator>::next(&v0) as i32;
                }
            } while ((<core::iter::adapters::copied::Copied<I> as core::iter::traits::iterator::Iterator>::next(&v0) as i8 & 1) && v22 == v22);
        }
        v17 = v11->field_18;
        if !(!v11->field_34) {
            goto LABEL_488d23;
        }
        if v17 {
LABEL_488f35:
            v32 = v7;
            v0 = struct8 {
                field_0: v32
            };
            v1 = v12 + v32;
            v2 = v17;
            v3 = v31;
            v33 = a2->field_18;
            v21 = 0;
            do {
                if !(v33() & 1) {
                    v24 = <core::iter::adapters::copied::Copied<I> as core::iter::traits::iterator::Iterator>::next(&v0) as i32;
                }
            } while ((<core::iter::adapters::copied::Copied<I> as core::iter::traits::iterator::Iterator>::next(&v0) as i8 & 1) && v37 == v37);
        }
        if v16 == v12 {
            goto LABEL_488ea4;
        }
        v17 = 0;
        goto LABEL_488f35;
    } else if !v13 {
        if !v12 {
            goto LABEL_488d8e;
        }
        if !v11->field_34 {
LABEL_488ea4:
            v25 = v7;
            v0 = struct8 {
                field_0: v25
            };
            v1 = v12 + v25;
            v26 = a2->field_18;
            v21 = 0;
            do {
                if !(v26() & 1) {
                    v24 = <core::iter::adapters::copied::Copied<I> as core::iter::traits::iterator::Iterator>::next(&v0) as i32;
                }
            } while ((<core::iter::adapters::copied::Copied<I> as core::iter::traits::iterator::Iterator>::next(&v0) as i8 & 1) && v30 == v30);
        } else {
            v17 = 0;
LABEL_488d23:
            v21 = v18;
            v23 = v7;
            if !v17 && v21 == v12 {
                v27 = a2->field_18;
                v28 = 0;
                do {
                    v34 = v27() & 4294967295 & 4294967295;
                    if ((v34 ^ 1) & 1) || v12 == v28 {
                        v21 = v34 | -0x100 | v34 ^ 1 | -0x100 | (v34 ^ 1) & v12 == v28;
                        goto LABEL_488fba;
                    }
                } while ((v35 = *((v23 + v28) as &i8) as u8 as u64, v28 += 1, ((((v35 - 65 & 4294967295 & 255 & 255) < 26) as u8 as u64 << 5) as u8 | v35 as u8) == v36));
            } else {
                v29 = a2->field_18;
                if !(v29() & 1) {
                    v21 = v21 | -0x100 | 1;
                    if !v21 {
                        goto LABEL_488fba;
                    }
                    if !v17 {
LABEL_488fb0:
                        if !(v39 == &v23[v12]) {
                            goto LABEL_488fb8;
                        }
                        v21 = v21 | -0x100 | 1;
                    } else if !(v12 <= v17) {
                        goto LABEL_488fb8;
                    }
                } else {
                    if !v21 {
                        goto LABEL_488fb8;
                    }
                    if v17 {
                        if v12 <= v17 {
                            goto LABEL_488fb8;
                        }
                        v40 = v23 + v17;
                    }
                    v5 = v38;
                    v41 = *(v5);
                    if (((v41 - 65 & 4294967295 & 255 & 255) < 26) << 5 | v41) == v42 {
                        v4 = v21;
                        v9 = v12 - v17;
                        v43 = 1;
                        while ((v29() & 1)) {
                            v21 = 0;
                            if !(v4 != v43) || !(v9 != v43) || !((v44 = *((v5 + v43) as &i8) as u8 as u64, v43 += 1, v21 = 0, ((((v44 - 65 & 4294967295 & 255 & 255) < 26) as u8 as u64 << 5) as u8 | v44 as u8) == v42)) {
                                goto LABEL_488fba;
                            }
                        }
                        v21 = v21 | -0x100 | 1;
                        if v4 == v43 {
                            goto LABEL_488fba;
                        }
                        v45 = v5 + v43;
                        goto LABEL_488fb0;
                    }
LABEL_488fb8:
                    v21 = 0;
                }
            }
        }
    } else {
        if !v12 {
            goto LABEL_488d8e;
        }
        v16 = v11->field_28;
        if v11->field_34 {
            v17 = 0;
            goto LABEL_488d23;
        }
    }
LABEL_488fba:
    return (v21 | -0x100 | ~(v21) & 1) & 4294967295 & 4294967295;
}
