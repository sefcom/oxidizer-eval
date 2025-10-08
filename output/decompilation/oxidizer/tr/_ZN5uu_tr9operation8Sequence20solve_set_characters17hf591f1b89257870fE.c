fn uu_tr::operation::Sequence::solve_set_characters(a1: i64, a2: i64, a3: i64, a4: i64, a5: i8, a6: i8, a7: i8) -> : struct48 {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0x190]
    let v1: struct16;  // [bp-0x188], Other Possible Types: struct24, u128
    let v2: u64;  // [bp-0x188]
    let v3: u32;  // [bp-0x184]
    let v4: u64;  // [bp-0x180]
    let v5: void*;  // [bp-0x178], Other Possible Types: u64
    let v6: i8;  // [bp-0x170], Other Possible Types: u128
    let v7: void*;  // [bp-0x168]
    let v8: void*;  // [bp-0x160]
    let v9: u8;  // [bp-0x151]
    let v10: struct11;  // [bp-0x150], Other Possible Types: struct8, u64
    let v11: u64;  // [bp-0x150]
    let v12: struct24;  // [bp-0x150]
    let v13: void*;  // [bp-0x140], Other Possible Types: u64
    let v14: u64;  // [bp-0x138]
    let v15: void*;  // [bp-0x130]
    let v16: iNone;  // [bp-0x128], Other Possible Types: u8
    let v17: void*;  // [bp-0x118]
    let v18: u64;  // [bp-0x110]
    let v19: u64;  // [bp-0x108]
    let v20: void*;  // [bp-0x100]
    let v21: u8;  // [bp-0xf8]
    let v22: u64;  // [bp-0xf0]
    let v23: void*;  // [bp-0xe8]
    let v24: u64;  // [bp-0xe0]
    let v25: i64;  // [bp-0xd8]
    let v26: u64;  // [bp-0xd0]
    let v27: u64;  // [bp-0xd0]
    let v28: struct56;  // [bp-0x98]
    let v29: struct24;  // [bp-0x60]
    let v30: void*;  // [bp-0x40]
    let v31: u64;  // rbx
    let v32: u64;  // r13
    let v33: u64;  // r12
    let v34: u64;  // rax
    let v35: u64;  // rax
    let v36: u64;  // rax
    let v37: i64;  // rdx
    let v38: i64;  // r14
    let v39: i64;  // rdx
    let v40: void*;  // r14
    let v41: u64;  // rax
    let v42: void*;  // rax
    let v43: u32;  // edx
    let v44: u32;  // esi
    let v45: iNone;  // xmm0
    let v50: void*;  // [bp-0x148]

    uu_tr::operation::Sequence::from_str(&v1, a1, a2);
    if *(&v1 as &i32) != 12 {
        return struct40 {
            field_0: 0x8000000000000000
            field_8: *(&v1 as &i32)
            field_12: v3
            field_16: *(&v1.field_0 as &i128)
            field_32: v6 as i64
        };
    }
    v19 = v4;
    v31 = v5;
    v32 = *(&v6 as &i64) * 16 + v31;
    if <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(v31, v32) {
        *((a0 + 8) as &i32) = 3;
    }
    uu_tr::operation::Sequence::from_str(&v1, a3, a4);
    if *(&v1 as &i32) != 12 {
        return struct40 {
            field_0: 0x8000000000000000
            field_8: *(&v1 as &i32)
            field_12: v3
            field_16: *(&v1.field_0 as &i128)
            field_32: *(&v6 as &i64)
        };
    }
    v14 = v4;
    v33 = *(&v6 as &i64) * 16 + v5;
    v0 = v5;
    if <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(v5, v33) > 1 {
        *((a0 + 8) as &i32) = 2;
    }
    if a7 {
        v1 = struct16 {
            field_0: v0
            field_8: v33
        };
        if <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v1) {
            return struct16 {
                field_0: 0x8000000000000000
                field_8: 6
            };
        }
    }
    v1 = struct24 {
        field_0: v31
        field_8: v32
        field_16: 0
    };
    v7 = 0;
    core::iter::traits::iterator::Iterator::collect(&v16, &v1);
    if a5 {
        v10 = struct11 {
            field_0: &v16
            field_8: 0
            field_10: 255
        };
        core::iter::traits::iterator::Iterator::collect(&v1, &v10);
        v17 = 0;
        *(&v16 as &i128) = *(&v1.field_0 as &i128);
    }
    v20 = v17;
    v29 = struct24 {
        field_0: v0
        field_8: v33
        field_16: 0
    };
    v30 = 0;
    v34 = core::iter::adapters::flatten::FlattenCompat<I,U>::iter_fold(&v29);
    v25 = (v34 <= v20 ? v20 - v34 : 0);
    v1 = struct24 {
        field_0: v0
        field_8: v33
        field_16: &v25
    };
    core::iter::traits::iterator::Iterator::collect(&v11, &v1);
    v14 = v11;
    v35 = *(&v10.field_8 as &i64);
    v24 = v13;
    v0 = v35;
    v10 = v35;
    v15 = v24 * 16 + v35;
    v50 = v15;
    v13 = 0;
    <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v10);
    if v37 {
        do {
            if *(v37 as &i8) == 4 {
                if v36 {
                    core::iter::adapters::flatten::FlattenCompat<I,U>::iter_fold(v38);
                    v26 = v27;
                }
                v2 = v31;
                v4 = v32;
                v5 = 0;
                do {
                    do {
                        v41 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v1);
                        if !v37 {
                            return struct16 {
                                field_0: 0x8000000000000000
                                field_8: 7
                            };
                        }
                    } while (*(v37 as &i8) != 4);
                    if v41 {
                        v28 = struct56 {
                            field_0: 0
                            padding_8: <UNKNOWN>
                            field_16: 0
                            padding_24: <UNKNOWN>
                            field_32: v31
                            field_40: v32
                            field_48: v41
                        };
                        core::iter::adapters::flatten::FlattenCompat<I,U>::iter_fold(&v28);
                    }
                } while (v42 != v40);
            }
            <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v10);
        } while (v39);
    }
    v1 = struct24 {
        field_0: v0
        field_8: v15
        field_16: 0
    };
    v7 = 0;
    core::iter::traits::iterator::Iterator::collect(&v21, &v1);
    v12 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v22, v23);
    if v13 >= 2 {
        v18 = v12.field_8;
        if v13 < 21 {
            core::slice::sort::shared::smallsort::insertion_sort_shift_left(v18, v13, 1);
        } else {
            core::slice::sort::unstable::ipnsort(v18, v13, &v9);
        }
    }
    v10 = alloc::vec::Vec<T,A>::dedup_by();
    v1 = struct16 {
        field_0: v31
        field_8: v32
    };
    if (a5 & a7 & <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v1)) {
        if v13 > 1 {
            return struct16 {
                field_0: 0x8000000000000000
                field_8: v43
            };
        } else if v23 > v20 {
            return struct16 {
                field_0: 0x8000000000000000
                field_8: v43
            };
        }
    }
    if !v17 <= v23 && !a6 && !!v15 - 16 && !!v24 && v15[16] as i8 == 4 {
        v44 = v15[15] as i8;
        if v44 == 10 {
            return struct16 {
                field_0: 0x8000000000000000
                field_8: v43
            };
        } else if v44 == 6 {
            return struct16 {
                field_0: 0x8000000000000000
                field_8: v43
            };
        }
    }
    if (v23 <= v17 & a6) {
        v17 = v23;
    }
    v5 = v17;
    v45 = v16 as i128;
    *(&v1 as void*) = v45;
    v8 = v23;
    v6 = *(&v21 as &i128);
    return struct48 {
        field_0: v45
        field_16: v5
        field_24: v6 as i64
        field_32: 0
        field_40: v8
    };
}
