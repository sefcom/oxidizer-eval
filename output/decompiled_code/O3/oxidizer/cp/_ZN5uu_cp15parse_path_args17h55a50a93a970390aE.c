fn uu_cp::parse_path_args(a0: &struct64, a1: &struct24, a2: u32) -> u64 {
    let v0: i64;  // [sp-0xf8], Other Possible Types: struct24, struct20, struct8
    let v1: i64;  // [bp-0xe8]
    let v2: i64;  // [bp-0xe0]
    let v3: i64;  // [bp-0xd8]
    let v4: i64;  // [sp-0xd0]
    let v5: i8;  // [bp-0xc8]
    let v6: struct24;  // [sp-0xb0], Other Possible Types: i192
    let v7: i64;  // [sp-0x98]
    let v8: i128;  // [bp-0x90]
    let v9: i64;  // [sp-0x88]
    let v10: i64;  // [sp-0x70]
    let v11: i64;  // [sp-0x68]
    let v12: i192;  // [sp-0x60]
    let v13: i192;  // [sp-0x48]
    let v15: i64;  // rax
    let v16: i64;  // rsi
    let v17: i128;  // xmm0
    let v18: i128;  // xmm1
    let v19: i128;  // xmm2
    let v20: i128;  // xmm0
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
    if v15 == 1 {
        if !(*((a2 + 24) as &i64) == 0x8000000000000000) {
            goto LABEL_502f7a;
        }
        v12 = format!("missing destination file operand after {:?}", *((a1 + 8) as &i64));
        *((a0 + 24) as &i64) = *((&v12 as &char + 16) as &i64);
        v20 = v12;
    } else {
        if !v15 {
            v0 = <uu_cp::Error as core::convert::From<&str>>::from("missing file operand");
            v17 = v0;
            v18 = v1;
            v19 = v3;
            *((a0 + 48) as &i8) = v5;
            *((a0 + 32) as &i128) = v19;
            *((a0 + 16) as &i128) = v18;
            *(a0 as &i128) = v17;
            return a0;
        }
        v16 = *((a2 + 24) as &i64);
        if v15 >= 3 && *((a2 + 66) as &i8) && v16 == 0x8000000000000000 {
            v13 = format!("extra operand {:?}", *((a1 + 8) as &i64) + 48);
            *((a0 + 24) as &i64) = *((&v13 as &char + 16) as &i64);
        } else {
            if v16 != 0x8000000000000000 {
LABEL_502f7a:
                v0 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(a2 + 24);
                v9 = v1;
                v29 = v0;
                v28 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v29;
                v7 = v29;
                if !(*((a2 + 24) as &i64) == 0x8000000000000000) {
                    goto LABEL_502faf;
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
LABEL_502faf:
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
            v1 = *((a1 + 16) as &i64);
            v34 = *(a1 as &i128);
            v0 = v34;
            v4 = v9;
            v2 = v7;
            *((a0 + 8) as &i128) = v34;
            *((a0 + 24) as &i64) = v1;
            *((a0 + 32) as &i64) = v2;
            *((a0 + 40) as &i64) = v3;
            *((a0 + 48) as &i64) = v4;
            *(a0 as &i64) = 13;
            return a0;
        }
    }
    return struct24 {
        field_0: 4
        field_8: v20
    };
}
