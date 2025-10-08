fn uu_cp::parse_path_args(a1: &struct24, a2: i64) -> : struct56 {
    let a0: i64;  // rdi
    let v0: Result<struct4, struct8>;  // [bp-0xe0]
    let v1: struct24;  // [bp-0xd8], Other Possible Types: struct8, u128
    let v2: struct20;  // [bp-0xd8]
    let v3: i8;  // [bp-0xc8], Other Possible Types: u64
    let v4: u128;  // [bp-0xc0]
    let v5: i8;  // [bp-0xb8], Other Possible Types: u64
    let v6: u64;  // [bp-0xb0]
    let v7: i8;  // [bp-0xa8]
    let v8: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0x98]
    let v9: struct4;  // [bp-0x80]
    let v10: struct16;  // [bp-0x78], Other Possible Types: u128
    let v11: u128;  // [bp-0x70]
    let v12: u64;  // [bp-0x68]
    let v13: iNone;  // [bp-0x60]
    let v14: u64;  // [bp-0x50]
    let v15: i64;  // [bp-0x48]
    let v16: i8;  // [bp-0x38]
    let v18: i64;  // r12
    let v19: iNone;  // xmm0
    let v20: iNone;  // xmm1
    let v21: i64;  // xmm0
    let v22: u128;  // xmm0
    let v23: i64;  // rax
    let v24: u64;  // rsi
    let v25: iNone;  // xmm0
    let v26: u64;  // r15
    let v27: u64;  // rbx
    let v28: u64;  // rbx
    let v30: u64;  // rbx
    let v31: i64;  // rcx
    let v32: u128;  // xmm0
    let v33: std::path::PathBuf;  // [bp-0x90]

    v18 = *((a1 + 16) as &i64);
    if v18 != 1 {
        if !v18 {
            v1 = <uu_cp::Error as core::convert::From<&str>>::from("missing file operand");
            v19 = *(&v1 as &i128);
            v20 = *(&v3 as &i128);
            return struct56 {
                field_0: v19
                field_16: v20
                field_32: *(&v5 as &i128)
                field_48: *(&v7 as &i64)
            };
        }
        if (*((a2 + 24) as &i64) == 0x8000000000000000 & *((a2 + 90) as &i8)) {
            if v18 > 2 {
                format!("extra operand {}", *((a1 + 8) as &i64) + 48);
                v21 = v15;
                return struct32 {
                    field_0: 9223372036854775811
                    field_8: v22
                    field_24: *(&v16 as &i64)
                };
            }
        } else {
            if *((a2 + 24) as &i64) != 0x8000000000000000 {
                goto LABEL_49fe0f;
            }
        }
        v8 = a0;
        v18 -= 1;
        *((a1 + 16) as &unsigned long) = v18;
        v23 = *((a1 + 8) as &i64);
        v24 = v18 * 3;
        if *((v23 + v24 * 8) as &i64) == 0x8000000000000000 {
            core::option::unwrap_failed(); /* do not return */
        }
        v0 = a1;
        v10 = *((v23 + v24 * 8) as &i64);
        v11 = *((v23 + v24 * 8 + 8) as &i128);
        if *((a2 + 93) as &i8) {
            goto LABEL_49fe80;
        }
    } else {
        if *((a2 + 24) as &i64) == 0x8000000000000000 {
            format!("missing destination file operand after {}", *((a1 + 8) as &i64));
            *((a0 + 24) as &u64) = v14;
            v25 = v13;
        }
LABEL_49fe0f:
        v1 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(*((a2 + 32) as &i64), *((a2 + 40) as &i64));
        v8 = a0;
        v0 = a1;
        v12 = v3;
        v10 = *(&v1.field_0 as &i128);
        if *((a2 + 93) as &i8) {
            do {
LABEL_49fe80:
                v28 = v27;
                v2 = std::path::Path::components(*((v26 + 8) as &i64), *((v26 + 16) as &i64));
                v33 = std::sys::pal::unix::os::split_paths::bytes_to_path(std::path::Components::as_path(&v2), a2);
                *((v26 + 16) as &struct4) = v9;
                *(v26 as &i128) = *(&v33.inner.inner.inner.buf.inner.cap as &i128);
                v26 += 24;
                v30 = v28 - 24;
                v27 = v30;
            } while (v28 != 24);
        }
    }
    v31 = v0;
    v3 = *((v31 + 16) as &i64);
    v32 = *(v31 as &i128);
    v1 = v32;
    v6 = v12;
    v4 = v10;
    *((v8 + 8) as &u128) = v32;
    *((v8 + 24) as &u64) = v3;
    *((v8 + 32) as &u64) = v4;
    *((v8 + 40) as &u64) = v5;
    *((v8 + 48) as &u64) = v6;
    *(v8 as &i64) = 9223372036854775820;
    return;
}
