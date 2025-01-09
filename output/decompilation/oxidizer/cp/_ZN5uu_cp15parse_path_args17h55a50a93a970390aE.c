fn uu_cp::parse_path_args(a0: &struct64, a1: &struct24, a2: u32) -> u64 {
    let v0: i128;  // [sp-0xf8], Other Possible Types: struct8, struct24, struct20
    let v1: i64;  // [sp-0xf0]
    let v2: i64;  // [sp-0xe8]
    let v3: i64;  // [sp-0xe0]
    let v4: i64;  // [sp-0xd8]
    let v7: i64;  // [sp-0xb0], Other Possible Types: struct24
    let v8: i64;  // [sp-0xa8]
    let v9: i64;  // [sp-0x98]
    let v10: i128;  // [bp-0x90]
    let v11: i64;  // [sp-0x88]
    let v12: i64;  // [sp-0x70]
    let v13: i64;  // [sp-0x68]
    let v15: i8;  // [bp-0x50]
    let v18: i64;  // rax
    let v19: i64;  // rsi
    let v24: i64;  // rax
    let v25: i64;  // rsi
    let v26: i64;  // rdi
    let v27: i64;  // rax
    let v28: i128;  // xmm0
    let v29: i128;  // xmm0
    let v30: i256;  // ymm0
    let v31: i256;  // ymm0
    let v32: i128;  // xmm0
    let v33: i64;  // rdx
    let v34: struct8;  // rax
    let v35: i128;  // xmm0

    v18 = *((a1 + 16) as &i64);
    if v18 != 1 {
        if !v18 {
            v0 = <uu_cp::Error as core::convert::From<&str>>::from("missing file operand");
            return struct64 {
                field_0: v20
                field_16: v21
                field_32: v22
                field_48: v6
            };
        }
        v19 = *((a2 + 24) as &i64);
        if v18 >= 3 && *((a2 + 66) as &i8) && v19 == 0x8000000000000000 {
            v7 = *((a1 + 8) as &i64) + 48;
            v8 = <std::sys::os_str::bytes::Buf as core::fmt::Debug>::fmt;
            v0 = "extra operand ";
            v1 = 1;
            v4 = 0;
            v2 = &v7;
            v3 = 1;
            core::option::Option<T>::map_or_else();
            return struct32 {
                field_0: 4
                field_8: v23
                field_24: v16
            };
        }
        if v19 == 0x8000000000000000 {
            v24 = v18 - 1;
            *((a1 + 16) as &i64) = v24;
            v25 = *((a1 + 8) as &i64);
            v26 = v24 * 3;
            v27 = *((v25 + v26 * 8) as &i64);
            v28 = *((v25 + v26 * 8 + 8) as &i128);
            v0 = v28;
            if v9 == 0x8000000000000000 {
                core::option::unwrap_failed("src/uu/cp/src/cp.rs"); /* do not return */
            }
            v9 = v27;
            v29 = v0;
            v31 = (v30 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v28) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v29;
            v10 = v29;
LABEL_502faf:
            v12 = <&mut alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a1);
            v13 = v33;
            v34 = <core::slice::iter::IterMut<T> as core::iter::traits::iterator::Iterator>::next();
            if !v34 {
                return struct56 {
                    field_0: 13
                    field_8: v30 as u128
                    field_24: v2
                    field_32: v3
                    field_40: v4
                    field_48: v5
                };
            }
            do {
                v0 = std::path::Path::components(*((v34 + 8) as &i64), *((v34 + 16) as &i64));
                v7 = std::sys::pal::unix::os::split_paths::bytes_to_path(std::path::Components::as_path(&v0), v33);
            } while ((*((v34 + 16) as &i64) = *((&v7 as &char + 16) as &i64), v35 = v7, v31 = v31 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v35 as u128 as u256, *(v34 as &i128) = v35, v34 = <core::slice::iter::IterMut<T> as core::iter::traits::iterator::Iterator>::next(), v34));
        }
    } else if *((a2 + 24) as &i64) == 0x8000000000000000 {
        v7 = *((a1 + 8) as &i64);
        v8 = <std::sys::os_str::bytes::Buf as core::fmt::Debug>::fmt;
        v0 = "missing destination file operand after ";
        v1 = 1;
        v4 = 0;
        v2 = &v7;
        v3 = 1;
        core::option::Option<T>::map_or_else();
        *((a0 + 24) as &i8) = v15;
    }
    v0 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(a2 + 24);
    v11 = v2;
    v32 = v0;
    v31 = v30 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v32;
    v9 = v32;
    goto LABEL_502faf;
}
