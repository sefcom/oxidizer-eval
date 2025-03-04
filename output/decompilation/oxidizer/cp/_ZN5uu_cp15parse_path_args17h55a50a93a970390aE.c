fn uu_cp::parse_path_args(a0: &struct64, a1: &struct24, a2: u32) -> u64 {
    let v0: iNone;  // [sp-0xf8], Other Possible Types: struct24, struct8, struct20
    let v1: i64;  // [sp-0xe8]
    let v2: iNone;  // [bp-0xe0]
    let v4: i64;  // [sp-0xd0]
    let v6: struct24;  // [sp-0xb0]
    let v7: iNone;  // [bp-0x90], Other Possible Types: unsigned long
    let v8: i64;  // [sp-0x88]
    let v9: i64;  // [sp-0x78]
    let v10: i64;  // [sp-0x70]
    let v11: i64;  // [sp-0x68]
    let v12: String;  // [sp-0x60]
    let v13: String;  // [sp-0x48]
    let v16: i64;  // rax
    let v17: i64;  // rsi
    let v22: i64;  // rax
    let v23: i64;  // rsi
    let v24: i64;  // rdi
    let v25: i64;  // rax
    let v26: iNone;  // xmm0
    let v27: iNone;  // xmm0
    let v28: iNone;  // ymm0
    let v29: iNone;  // ymm0
    let v30: iNone;  // xmm0
    let v31: iNone;  // ymm0
    let v32: i64;  // rdx
    let v33: i64;  // rax
    let v34: i64;  // r15
    let v35: iNone;  // xmm0

    v16 = *((a1 + 16) as &i64);
    if v16 != 1 {
        if !v16 {
            v0 = <uu_cp::Error as core::convert::From<&str>>::from("missing file operand");
            return struct64 {
                field_0: v18
                field_16: v19
                field_32: v20
                field_48: *(&v5 as &i128)
            };
        }
        v17 = *((a2 + 24) as &i64);
        if v16 >= 3 && *((a2 + 66) as &i8) && v17 == 0x8000000000000000 {
            v13 = format!("extra operand {:?}", *((a1 + 8) as &i64) + 48);
            return struct32 {
                field_0: 4
                field_8: v21
                field_24: v13.len
            };
        }
        if v17 == 0x8000000000000000 {
            v22 = v16 - 1;
            *((a1 + 16) as &unsigned long) = v22;
            v23 = *((a1 + 8) as &i64);
            v24 = v22 * 3;
            v25 = *((v23 + v24 * 8) as &i64);
            v26 = *((v23 + v24 * 8 + 8) as &i128);
            v0 = v26;
            if v7 == 0x8000000000000000 {
                core::option::unwrap_failed("src/uu/cp/src/cp.rs"); /* do not return */
            }
            v7 = v25;
            v27 = v0 as i128;
            v29 = (v28 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v26 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v27 as u256;
            v7 = v27;
            if !*((a2 + 69) as &i8) {
                v1 = *((a1 + 16) as &i64);
                *(&v0 as &i128) = *(a1 as &i128);
                v4 = v8;
                *(&v2 as &i128) = v7 as i128;
                return struct56 {
                    field_0: 13
                    field_8: v36
                    field_24: v1
                    field_32: v2
                    field_40: v3
                    field_48: v4
                };
            }
LABEL_502faf:
            v9 = a0;
            v10 = <&mut alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a1);
            v11 = v32;
            v33 = <core::slice::iter::IterMut<T> as core::iter::traits::iterator::Iterator>::next(&v10);
            if !v33 {
                vvar_406{stack -232} = *((a1 + 16) as &i64);
                *(&v0 as &i128) = *(a1 as &i128);
                vvar_407{stack -208} = v8;
                *(&v2 as &i128) = v7 as i128;
                return struct56 {
                    field_0: 13
                    field_8: v36
                    field_24: v1
                    field_32: v2
                    field_40: v3
                    field_48: v4
                };
            }
            v34 = v33;
            do {
                v0 = std::path::Path::components(*((v34 + 8) as &i64), *((v34 + 16) as &i64));
                v6 = std::sys::pal::unix::os::split_paths::bytes_to_path(std::path::Components::as_path(&v0), a2);
            } while ((*((v34 + 16) as &u64) = v6.field_16, v35 = *(&v6.field_0 as &i128), v29 = v29 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v35 as u256, *(v34 as void*) = v35, v34 = <core::slice::iter::IterMut<T> as core::iter::traits::iterator::Iterator>::next(&v10), v34));
        }
    } else if *((a2 + 24) as &i64) == 0x8000000000000000 {
        v12 = format!("missing destination file operand after {:?}", *((a1 + 8) as &i64));
        *((a0 + 24) as &u64) = v12.len;
    }
    v0 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(a2 + 24);
    v8 = v1;
    v30 = *(&v0.field_0 as &i128);
    v29 = v31 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v30 as u256;
    v7 = v30;
    if !*((a2 + 69) as &i8) {
        vvar_401{stack -232} = *((a1 + 16) as &i64);
        *(&v0 as &i128) = *(a1 as &i128);
        vvar_402{stack -208} = v8;
        *(&v2 as &i128) = v7 as i128;
        return struct56 {
            field_0: 13
            field_8: v36
            field_24: v1
            field_32: v2
            field_40: v3
            field_48: v4
        };
    }
    goto LABEL_502faf;
}
