fn uu_cp::parse_path_args(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i128;  // [sp-0xe8], Other Possible Types: struct20, struct24, struct8
    let v1: i8;  // [bp-0xd8]
    let v2: i128;  // [bp-0xd0]
    let v3: i8;  // [bp-0xc8]
    let v4: i64;  // [sp-0xc0]
    let v5: i8;  // [bp-0xb8]
    let v6: i192;  // [sp-0xa0], Other Possible Types: struct24
    let v7: i128;  // [sp-0x88]
    let v8: i128;  // [bp-0x80]
    let v9: i64;  // [sp-0x78]
    let v10: i64;  // [sp-0x70]
    let v11: i64;  // [sp-0x68]
    let v12: i192;  // [sp-0x60]
    let v13: i192;  // [sp-0x48]
    let v15: i64;  // rax
    let v16: i64;  // rsi
    let v17: i128;  // xmm0
    let v18: i128;  // xmm1
    let v19: i128;  // xmm2
    let v21: i64;  // rax
    let v22: i64;  // rsi
    let v23: i64;  // rdi
    let v24: i64;  // rax
    let v25: i128;  // xmm0
    let v26: i128;  // xmm0
    let v27: i256;  // ymm0
    let v28: i256;  // ymm0
    let v29: i128;  // xmm0
    let v30: i256;  // ymm0
    let v31: i64;  // rdx
    let v32: struct8;  // rax
    let v33: i128;  // xmm0
    let v34: i128;  // xmm0

    v15 = *((a1 + 16) as &i64);
    if !v15 {
        v0 = <uu_cp::Error as core::convert::From<&str>>::from("missing file operand");
        v17 = v0;
        v18 = v1;
        v19 = v3;
        *((a0 + 48) as &i8) = v5;
        *((a0 + 32) as &i128) = v19;
        *((a0 + 16) as &i128) = v18;
        *(a0 as &i128) = v17;
    } else {
        v16 = *((a2 + 24) as &i64);
        if v15 != 1 || v16 != 0x8000000000000000 {
            if !(v15 >= 3) || !(*((a2 + 66) as &i8)) || !(v16 == 0x8000000000000000) {
                if v16 != 0x8000000000000000 {
                    v0 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(a2 + 24);
                    v9 = v0.field_16;
                    v29 = v0;
                    v28 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v29;
                    v7 = v29;
                    if !(!*((a2 + 69) as &i8)) {
                        goto LABEL_502677;
                    }
                } else {
                    v21 = v15 - 1;
                    *((a1 + 16) as &i64) = v21;
                    v22 = *((a1 + 8) as &i64);
                    v23 = v21 * 3;
                    v24 = *((v22 + v23 * 8) as &i64);
                    v25 = *((v22 + v23 * 8 + 8) as &i128);
                    v0 = v25;
                    if v7 == 0x8000000000000000 {
                        core::option::unwrap_failed(); /* do not return */
                    }
                    v7 = v24;
                    v26 = v0;
                    v28 = v27 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v25 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v26;
                    v8 = v26;
                    if *((a2 + 69) as &i8) {
LABEL_502677:
                        v10 = <&mut alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a1);
                        v11 = v31;
                        v32 = <core::slice::iter::IterMut<T> as core::iter::traits::iterator::Iterator>::next();
                        if v32 {
                            do {
                                v0 = std::path::Path::components(*((v32 + 8) as &i64), *((v32 + 16) as &i64));
                                v6 = std::sys::pal::unix::os::split_paths::bytes_to_path(std::path::Components::as_path(), v31);
                                *((v32 + 16) as &i64) = *((&v6 as &char + 16) as &i64);
                                v33 = v6;
                                v28 = v28 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v33;
                                *(v32 as &i128) = v33;
                                v32 = <core::slice::iter::IterMut<T> as core::iter::traits::iterator::Iterator>::next();
                            } while (v32);
                        }
                    }
                }
                v0.field_16 = *((vvar_1 + 16) as &i64);
                v34 = *(a1 as &i128);
                v0 = v34;
                v4 = v9;
                v2 = v7;
                return struct56 {
                    field_0: 13
                    field_8: v34
                    field_24: v0.field_16
                    field_32: v2
                    field_40: v3
                    field_48: v4
                };
            }
            v13 = format!("extra operand {:?}", *((a1 + 8) as &i64) + 48);
            *((a0 + 24) as &i64) = *((&v13 as &char + 16) as &i64);
        } else {
            v12 = format!("missing destination file operand after {:?}", *((a1 + 8) as &i64));
            *((a0 + 24) as &i64) = *((&v12 as &char + 16) as &i64);
        }
        *((a0 + 8) as &i192) = v12;
        *(a0 as &i64) = 4;
    }
    return struct56 {
        field_0: 13
        field_8: v34
        field_24: v0.field_16
        field_32: v2
        field_40: v3
        field_48: v4
    };
}
