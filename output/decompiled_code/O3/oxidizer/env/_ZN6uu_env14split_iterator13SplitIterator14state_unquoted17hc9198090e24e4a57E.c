fn uu_env::split_iterator::SplitIterator::state_unquoted() -> u32 {
    let v0: i64;  // [sp-0x78], Other Possible Types: struct40
    let v1: i64;  // [sp-0x70]
    let v2: i64;  // [sp-0x68]
    let v3: i128;  // [sp-0x60]
    let v5: i64;  // rsi
    let v6: i64;  // rcx
    let v7: i64;  // rax
    let v8: i32;  // eax
    let v9: i64;  // rax
    let v10: i64;  // rcx
    let v11: i64;  // rdx
    let v12: i64;  // r8
    let v13: i64;  // r9
    let v14: i64;  // rax
    let v15: i64;  // r15
    let v16: i64;  // r12
    let v17: i64;  // rbx
    let v18: i64;  // r13
    let v19: i64;  // rdi
    let v20: i64;  // rax
    let v21: i64;  // rcx
    let v22: i64;  // rdi

    v6 = *((v5 + 32) as &i64);
    v7 = *((v5 + 56) as &i64);
    if v6 < v7 {
        v0 = "mid > len";
        v1 = 1;
        v2 = 8;
        v3 = 0;
        v0 = core::panicking::panic_fmt();
    }
    do {
        if v6 == v7 {
LABEL_4a4d64:
            v15 = *(v5 as &i64);
            v16 = *((v5 + 8) as &i64);
            v17 = *((v5 + 16) as &i64);
            *(v5 as &i64) = 0;
            *((v5 + 8) as &i64) = 1;
            *((v5 + 16) as &i64) = 0;
            v18 = *((v5 + 80) as &i64);
            if v18 == *((v5 + 64) as &i64) {
                alloc::raw_vec::RawVec<T,A>::grow_one(v5 + 64);
            }
            v20 = *((v5 + 72) as &i64);
            v21 = 3 * v18;
            *((v20 + v21 * 8) as &i64) = v15;
            *((v20 + v21 * 8 + 8) as &i64) = v16;
            *((v20 + v21 * 8 + 16) as &i64) = v17;
            *((v5 + 80) as &i64) = v18 + 1;
            *(v22 as &i32) = 6;
            return;
        } else {
            v8 = uu_env::native_int_str::get_char_from_native_int(*((*((v5 + 24) as &i64) + v7) as &i8)) as i32;
            v9 = (v8 == 0x110000 ? 65533 : v8);
            v10 = v9 - 9 & 4294967295;
            if v10 <= 83 {
                goto *((4328364 + vvar_93{reg 24} * 4) as &i32) + 4328364;
            }
            if v9 == 0x110000 {
                goto LABEL_4a4d64;
            }
        }
        v14 = uu_env::string_expander::StringExpander::take_one(v5, v5, v11, v10, v12, v13);
        if v11 as u8 != 2 {
            *(v19 as &i32) = 5;
            *((v19 + 8) as &i64) = v14;
            *((v19 + 16) as &i64) = v14;
            *((v19 + 24) as &u8) = v11 as u8 & 1;
            return;
        }
        v6 = *((v5 + 32) as &i64);
        v7 = *((v5 + 56) as &i64);
    } while (v6 >= v7);
}
