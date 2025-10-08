fn uu_sort::numeric_str_cmp::NumInfo::parse(a0: i256, a1: u64, a2: i64) -> long long {
    let v1: struct144;  // [bp-0x85]
    let v2: Result<struct16, struct9>;  // [bp-0x84]
    let v3: struct24;  // [bp-0x70]
    let v4: i64;  // [bp-0x68]
    let v5: core::str::iter::CharIndices;  // [bp-0x50]
    let v7: i64;  // rbx, Other Possible Types: struct_1 *
    let v8: core::option::Option<(usize, char)>;  // rax, Other Possible Types: unsigned long
    let v9: u32;  // edx
    let v10: i64;  // rcx
    let v11: u32;  // ebp
    let v13: u8;  // r12b
    let v14: u32;  // r13d
    let v15: u32;  // r13d
    let v16: u32;  // r13d
    let v17: u32;  // r13d
    let v18: u32;  // r13d
    let v19: u32;  // r13d
    let v20: u64;  // rbx
    let v22: u32;  // r13d
    let v23: i64;  // rax
    let v26: u8;  // cl
    let v27: void*;  // rax, Other Possible Types: struct16
    let v28: u8;  // r14b
    let v30: void*;  // r12

    v7 = a0;
    v1 = 0;
    v5 = core::str::iter::CharIndices {
        iter: core::str::iter::Chars {
            iter: core::slice::iter::Iter<u8> {
                ptr: core::ptr::non_null::NonNull<u8> {
                    pointer: a1
                }
                end_or_len: a1 + a2
                _marker: core::marker::PhantomData<&u8> { }
            }
        }
        front_offset: 0
    };
    <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(&v5);
    if v9 != 0x110000 {
        v2 = *(v10 as &i32);
        v11 = *((v10 + 4) as &i32);
        v27 = -1;
        v3 = 0;
        do {
            v15 = v9;
            v16 = v15;
            if !v30 {
                loop {
                    v22 = v16;
                    if (v13 & 1) {
                        if v22 - 9 < 5 || v22 == 32 {
                            goto LABEL_4cf453;
                        }
                        if v22 >= 128 {
                            if core::unicode::unicode_data::white_space::lookup(v22) {
                                goto LABEL_4cf453;
                            }
                        } else {
                            if v22 == 45 {
                                goto LABEL_4cf453;
                            }
                        }
                    }
                    if v2 == 0x110000 || v2 != v22 {
                        uu_sort::numeric_str_cmp::NumInfo::is_invalid_char(v22, &v1, v11);
                        if v23 as u8 {
                            *(v7 as &i64) = 0;
                            *((v7 + 8) as &i8) = 1;
                            *((v7 + 16) as &core::option::Option<(usize, char)>) = v8;
                            *((v7 + 24) as &core::option::Option<(usize, char)>) = v8;
                            return v23;
                        }
                        goto LABEL_4cf52a;
                    }
LABEL_4cf453:
                    <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(&v5);
                    v16 = v9;
                    if v16 == 0x110000 {
                        goto LABEL_4cf28f;
                    }
                }
            }
            v17 = v15;
            v18 = v15;
            if let Ok(_) = v2 {
                loop {
                    v19 = v18;
                    if (v13 & 1) {
                        if v19 - 9 < 5 || v19 == 32 {
                            goto LABEL_4cf389;
                        }
                        if v19 > 127 {
                            if core::unicode::unicode_data::white_space::lookup(v19 as u8) as u8 {
                                goto LABEL_4cf389;
                            }
                        } else {
                            if v19 == 45 {
                                goto LABEL_4cf389;
                            }
                        }
                    }
                    if v2 != v19 {
                        if uu_sort::numeric_str_cmp::NumInfo::is_invalid_char(v19 as u64, &v1, v11 as u64) as u8 {
                            goto LABEL_4cf5c2;
                        }
                        goto LABEL_4cf52a;
                    }
LABEL_4cf389:
                    <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(&v5);
                    v18 = v9;
                    if v18 == 0x110000 {
                        goto LABEL_4cf5a1;
                    }
                }
            }
            loop {
                v19 = v17;
                if (v13 & 1) {
                    if v19 - 9 < 5 || v19 == 32 {
                        goto LABEL_4cf422;
                    }
                    if v19 > 127 {
                        if core::unicode::unicode_data::white_space::lookup(v19) {
                            goto LABEL_4cf422;
                        }
                    } else {
                        if v19 == 45 {
                            goto LABEL_4cf422;
                        }
                    }
                }
                if uu_sort::numeric_str_cmp::NumInfo::is_invalid_char(v19, &v1, v11) {
LABEL_4cf5c2:
                    v8 = v4;
                    v23 = v7;
                    *(v23 as &struct16) = v27;
                    *((v23 + 8) as &u8) = v20 & 1;
                    v7 = v23;
                    goto LABEL_0x4cf620;
                }
                if v11 == 0x110000 || v19 != v11 {
                    break;
                }
LABEL_4cf422:
                <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(&v5);
                v17 = v9;
                if v17 == 0x110000 {
                    goto LABEL_4cf5a1;
                }
            }
LABEL_4cf52a:
            v27 += 1;
            v4 = v8;
            v3 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(&v5) as u64 & -0x100 | 1;
        } while (v14 != 0x110000);
LABEL_4cf5a1:
        if (v26 & 1) {
            goto LABEL_4cf295;
        }
    }
LABEL_4cf28f:
    v4 = a2;
LABEL_4cf295:
    *(v7 as &void*) = v27;
    *((v7 + 8) as &u8) = v28;
    *((v7 + 16) as &unsigned long) = v4;
    *((v7 + 24) as &unsigned long) = a2;
    return v27;
}
