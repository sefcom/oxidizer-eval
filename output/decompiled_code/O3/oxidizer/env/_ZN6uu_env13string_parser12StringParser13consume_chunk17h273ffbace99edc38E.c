fn uu_env::string_parser::StringParser::consume_chunk(a0: void*, a1: &u64, a2: u32) -> u64 {
    let v0: i64;  // [sp-0x70]
    let v1: i64;  // [sp-0x68]
    let v2: i64;  // [sp-0x60], Other Possible Types: struct40
    let v3: i64;  // [sp-0x58]
    let v4: i64;  // [sp-0x50]
    let v5: i128;  // [sp-0x48]
    let v8: i64;  // rbp
    let v9: i64;  // r12
    let v10: i64;  // r12
    let v11: i64;  // r12
    let v13: i32;  // eax
    let v14: i64;  // r15
    let v15: i32;  // edx
    let v16: i64;  // rax
    let v18: i64;  // r15

    v8 = *((a1 + 32) as &i64);
    if v9 < v8 {
        v2 = "mid > len";
        v3 = 1;
        v4 = 8;
        v5 = 0;
        v2 = core::panicking::panic_fmt();
    }
    v10 = *((a1 + 8) as &i64);
    v11 = v10 - v8;
    if v10 == v8 {
        *((a0 + 8) as &i64) = v8;
        *((a0 + 16) as &i8) = 0;
        *(a0 as &i64) = 1;
        return a0;
    }
    v1 = *(a1 as &i64);
    v0 = v1 + v8;
    v13 = uu_env::native_int_str::get_char_from_native_int(*(v0 as &i8)) as i32;
    if v13 != 0x110000 {
        v16 = v15 * 0x100000000 | v13;
        v0 = 0;
        goto LABEL_4a35fe;
    }
    v14 = 1;
    if v11 < 2 {
LABEL_4a35f2:
        if v14 > v11 {
            core::slice::index::slice_end_index_len_fail(); /* do not return */
        }
    } else {
        do {
            if !(uu_env::native_int_str::get_char_from_native_int(*((v0 + v14) as &i8)) as i32 == 0x110000) {
                goto LABEL_4a35f2;
            }
        } while ((v14 += 1, v11 != v14));
    }
LABEL_4a35fe:
    v18 = 1 + v8;
    *((a1 + 32) as &i64) = v18;
    if v10 >= v18 {
        *((a1 + 16) as &i64) = v1 + v18;
        *((a1 + 24) as &i64) = v10 - v18;
        *((a0 + 8) as &i64) = v0;
        *((a0 + 16) as &i8) = v16;
        *((a0 + 23) as &i8) = v16 >> 56;
        *((a0 + 21) as &i16) = v16 >> 40;
        *((a0 + 17) as &i32) = v16 >> 8;
        *(a0 as &i64) = 0;
        return a0;
    }
    v2 = "mid > len";
    v3 = 1;
    v4 = 8;
    v5 = 0;
    v2 = core::panicking::panic_fmt();
}
