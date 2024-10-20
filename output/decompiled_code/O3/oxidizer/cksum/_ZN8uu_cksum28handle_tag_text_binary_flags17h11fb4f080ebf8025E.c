fn uu_cksum::handle_tag_text_binary_flags(a0: void*, a1: u32) -> u64 {
    let v0: i192;  // [sp-0x68], Other Possible Types: struct24
    let v1: i8;  // [bp-0x50]
    let v4: i8;  // bpl
    let v5: i8;  // al
    let v6: i64;  // r14
    let v7: i64;  // r12
    let v8: i64;  // rdx
    let v9: i64;  // rcx
    let v10: i64;  // rdi
    let v11: i64;  // rax
    let v12: i64;  // rdi
    let v13: i64;  // rsi
    let v14: i64;  // r8
    let v15: i64;  // r8
    let v16: i64;  // r9
    let v18: i64;  // r10
    let v20: i64;  // r11
    let v21: i8;  // dl

    v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &g_460a78, 8) as i32 ^ 1 | clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &g_471903, 3) as i8;
    v5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &g_471906, 6) as i32;
    std::env::args_os(&v1);
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v1);
    v6 = *((&v0 as &char + 8) as &i64);
    v7 = *((&v0 as &char + 16) as &i64);
    if !v7 {
        v12 = 0;
        v13 = 0;
        v11 = 0;
        v9 = 0;
        v14 = 0;
    }
    v8 = v7 * 24;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    do {
        v15 = *((v6 + v10 + 8) as &i64);
        v16 = *((v6 + v10 + 16) as &i64);
        if v16 == 2 {
            if !(*(v15 as &i16) == 25133) {
                continue;
            }
            goto LABEL_560484;
        } else if v16 == 8 && *(v15 as &i64) == 8751164152776633645 {
LABEL_560484:
            v9 = 1;
            break;
        }
    } while ((v11 += 1, v10 += 24, v8 != v10));
    v12 = 0;
    v13 = 0;
    do {
        if *((v6 + 0 + 16) as &i64) == 5 && !(*((v18 + 4) as &i8) ^ 103) && !(*(v18 as &i32) ^ 1635003693) {
            v12 = 1;
            break;
        }
    } while ((v11 += 1, v10 += 24, v8 != v10));
    v14 = 0;
    do {
        if *((v6 + 0 + 16) as &i64) == 10 && !(*((v20 + 8) as &i16) ^ 25701) && !(*(v20 as &i64) ^ 7451031261205048621) {
            v21 = v8 | -0x100 | 1;
        }
    } while ((v11 += 1, v10 += 24, v8 != v10));
}
