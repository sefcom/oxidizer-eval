fn uu_cp::parse_path_args(a1: &struct24, a2: i64) -> : struct64 {
    let a0: i64;  // rsi
    let v0: i64;  // [bp-0x100]
    let v1: alloc::raw_vec::Cap;  // [bp-0xf8], Other Possible Types: struct24, u64
    let v2: std::path::Components;  // [bp-0xf8]
    let v3: u64;  // [bp-0xf0]
    let v4: i64;  // [bp-0xe8], Other Possible Types: u64
    let v5: u64;  // [bp-0xe0]
    let v6: void*;  // [bp-0xd8], Other Possible Types: u64
    let v7: u64;  // [bp-0xd0]
    let v8: i8;  // [bp-0xc8]
    let v9: std::path::PathBuf;  // [bp-0xb0], Other Possible Types: u64
    let v10: u64;  // [bp-0xa8]
    let v11: u64;  // [bp-0xa0]
    let v12: u128;  // [bp-0x98]
    let v13: u128;  // [bp-0x90]
    let v14: u64;  // [bp-0x88]
    let v15: i64;  // [bp-0x78]
    let v16: struct16;  // [bp-0x70]
    let v18: u64;  // [bp-0x50]
    let v19: u128;  // [bp-0x48]
    let v20: i8;  // [bp-0x38]
    let v22: u64;  // rax
    let v23: u128;  // xmm0
    let v24: u128;  // xmm1
    let v25: u128;  // xmm2
    let v26: i64;  // rdi
    let v28: u64;  // rax
    let v29: u64;  // rdi
    let v30: u64;  // rax
    let v31: i64;  // rdi
    let v32: i64;  // 4096
    let v34: u64;  // rdx
    let v35: i64;  // rax
    let v36: i64;  // r15
    let v38: u128;  // xmm0
    let v39: &std::path::Path;  // rax:rdx

    v22 = *((a0 + 16) as &i64);
    if v22 != 1 {
        if !v22 {
            v1 = <uu_cp::Error as core::convert::From<&str>>::from("missing file operand");
            v23 = v1.field_0;
            v24 = *(&v4 as &i128);
            v25 = *(&v6 as &i128);
            *((v26 + 48) as &i128) = *(&v8 as &i128);
            *((v26 + 32) as &u128) = v25;
            *((v26 + 16) as &u128) = v24;
            *(v26 as &u128) = v23;
            return;
        }
        if v22 >= 3 && *((a1 + 66) as &i8) && *((a1 + 24) as &i64) == 0x8000000000000000 {
            v9 = *((a0 + 8) as &i64) + 48;
            v10 = <std::sys::os_str::bytes::Buf as core::fmt::Debug>::fmt;
            v1 = "extra operand ";
            v3 = 1;
            v6 = 0;
            v4 = &v9;
            v5 = 1;
            v1 = core::option::Option<T>::map_or_else(a1);
            *((v31 + 24) as &i64) = *(&v20 as &i64);
        } else {
            if *((a1 + 24) as &i64) == 0x8000000000000000 {
                v28 = v22 - 1;
                *((a0 + 16) as &u64) = v28;
                v29 = v28 * 3;
                v30 = *((*((a0 + 8) as &i64) + v29 * 8) as &i64);
                v1 = *((*((a0 + 8) as &i64) + v29 * 8 + 8) as &i128);
                if v30 == 0x8000000000000000 {
                    core::option::unwrap_failed(); /* do not return */
                }
                v12 = v30;
                v13 = v1;
                v32 = a0;
                if !(!*((a1 + 69) as &i8)) {
                    goto LABEL_502fc4;
                }
            } else {
LABEL_502f7a:
                <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(a1 + 24, a1);
                v14 = v4;
                v12 = v1;
                v32 = a0;
                if *((a1 + 69) as &i8) {
LABEL_502fc4:
                    v16 = struct16 {
                        field_0: <&mut alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a0)
                        field_8: v34
                    };
                    v16 = struct16 {
                        field_0: <&mut alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a0)
                        field_8: v34
                    };
                    v35 = <core::slice::iter::IterMut<T> as core::iter::traits::iterator::Iterator>::next(&v16);
                    if v35 {
                        do {
                            v2 = std::path::Path::components(*((v36 + 8) as &i64), *((v36 + 16) as &i64));
                            v39 = std::path::Components::as_path(&v2);
                            v9 = std::sys::pal::unix::os::split_paths::bytes_to_path(v39.data_ptr, a1);
                            *((v36 + 16) as &u64) = v11;
                            *(v36 as &i128) = *(&v9.inner.inner.inner.buf.cap as &i128);
                            <core::slice::iter::IterMut<T> as core::iter::traits::iterator::Iterator>::next(&v16);
                        } while (v35);
                    }
                    v32 = v0;
                }
            }
            v4 = *((v32 + 16) as &i64);
            v38 = *(v32 as &i128);
            v1 = v38;
            v7 = v14;
            v5 = *(&v12 as &i128);
            *((v15 + 8) as &u128) = v38;
            *((v15 + 24) as &u64) = v4;
            *((v15 + 32) as &u64) = v5;
            *((v15 + 40) as &u64) = v6;
            *((v15 + 48) as &u64) = v7;
            *(v15 as &i64) = 13;
            return;
        }
    } else {
        if !(*((a1 + 24) as &i64) == 0x8000000000000000) {
            goto LABEL_502f7a;
        }
        v9 = *((a0 + 8) as &i64);
        v10 = <std::sys::os_str::bytes::Buf as core::fmt::Debug>::fmt;
        v1 = "missing destination file operand after ";
        v3 = 1;
        v6 = 0;
        v4 = &v9;
        v5 = 1;
        v1 = core::option::Option<T>::map_or_else(a1);
        *((v31 + 24) as &u64) = v18;
    }
    *((v31 + 8) as &u128) = v19;
    *(v31 as &i64) = 4;
    return;
}
