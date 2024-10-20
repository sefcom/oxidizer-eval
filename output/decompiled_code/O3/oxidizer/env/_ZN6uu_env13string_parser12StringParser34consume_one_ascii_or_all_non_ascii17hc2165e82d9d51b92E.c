fn uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: i64;  // [sp-0x80], Other Possible Types: struct16
    let v1: i64;  // [sp-0x78]
    let v2: i64;  // [sp-0x70]
    let v3: i64;  // [sp-0x60], Other Possible Types: Enum, struct40
    let v4: i64;  // [sp-0x58]
    let v5: i64;  // [sp-0x50]
    let v6: i8;  // [bp-0x4d]
    let v7: i8;  // [bp-0x4c]
    let v8: i128;  // [sp-0x48]
    let v10: i64;  // r13
    let v11: i64;  // rax
    let v12: i32;  // r12d
    let v13: i32;  // ebp
    let v14: i32;  // r15d
    let v15: i64;  // rbx
    let v16: i64;  // rbx
    let v17: i64;  // rax
    let v18: i64;  // rcx
    let v19: i32;  // ebp
    let v20: i64;  // rax
    let v21: i64;  // rcx
    let v22: i64;  // r12
    let v23: i64;  // r15
    let v24: i64;  // r12
    let v25: i64;  // r15
    let v26: i32;  // eax
    let v28: i64;  // r13
    let v29: i64;  // r13
    let v30: i64;  // r13
    let v31: i64;  // rbx

    v0 = 0;
    v1 = 8;
    v2 = 0;
    loop {
        v3 = uu_env::string_parser::StringParser::consume_chunk(a1, a2);
        v10 = v4;
        v11 = *((&v3 as &char + 16) as &i8);
        if v3 {
            v31 = a0;
            *((v31 + 8) as &i64) = v10;
            *((v31 + 16) as &i8) = v11;
            *(v31 as &i64) = 0x8000000000000000;
            return v31;
        }
        v12 = v11;
        v13 = *((&v3 as &char + 17) as &i16) | v6 * 0x10000;
        v14 = v7;
        if v10 {
            v15 = v2;
            if v15 == v0 {
                v0 = alloc::raw_vec::RawVec<T,A>::grow_one();
            }
            v17 = v1;
            v18 = v15 * 16;
            *((v17 + v18) as &i64) = v10;
            *((v17 + v18 + 8) as &i32) = v13 * 0x100 | v12;
            *((v17 + v18 + 12) as &i32) = v14;
            v2 = v15 + 1;
        } else {
            v16 = v2;
            if v16 == v0 {
                v0 = alloc::raw_vec::RawVec<T,A>::grow_one();
            }
            v19 = v13 * 0x100 | v12;
            v20 = v1;
            v21 = v16 * 16;
            *((v20 + v21) as &i64) = 0;
            *((v20 + v21 + 8) as &i32) = v19;
            *((v20 + v21 + 12) as &i32) = v14;
            v2 = v16 + 1;
            if v19 < 128 {
                break;
            }
        }
        v22 = *((a1 + 8) as &i64);
        v23 = *((a1 + 32) as &i64);
        if v22 < v23 {
            v3 = "mid > len";
            v4 = 1;
            v5 = 8;
            v8 = 0;
            v3 = core::panicking::panic_fmt();
        }
        v24 = v22 - v23;
        if v22 == v23 {
            break;
        }
        v25 = v23 + *(a1 as &i64);
        v26 = uu_env::native_int_str::get_char_from_native_int(*(v25 as &i8)) as i32;
        if !(v26 == 0x110000) {
            continue;
        }
        v29 = 1;
        if !(v24 >= 2) || !(uu_env::native_int_str::get_char_from_native_int(*((v25 + v29) as &i8)) as i32 == 0x110000) {
            if v30 > v24 {
                core::slice::index::slice_end_index_len_fail(); /* do not return */
            }
        } else {
            v29 += 1;
            if !(v24 == v29) {
                continue;
            }
        }
        if v26 != 0x110000 && v28 <= 127 {
            break;
        }
    }
    v31 = a0;
    *((v31 + 16) as &i64) = v2;
    *(v31 as &i128) = v0;
    return v31;
}
