fn uu_fmt::FmtOptions::from_matches(a0: void*, a1: void*) -> u64 {
    let v0: i8;  // [sp-0x18e]
    let v1: i8;  // [sp-0x18d]
    let v2: i8;  // [sp-0x18c]
    let v3: i8;  // [sp-0x18b]
    let v4: i8;  // [sp-0x18a]
    let v5: i8;  // [sp-0x189]
    let v26: i32;  // [sp-0xd0]
    let v27: i32;  // [sp-0xcc]
    let v40: i64;  // rbp
    let v41: i64;  // r13
    let v42: i64;  // rax
    let v43: i64;  // rcx
    let v44: i64;  // rsi
    let v46: i64;  // rdi

    v5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &g_410dc0, 16) as i8;
    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &g_4195ef, 12) as i8;
    v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &g_410e40, 16) as i8;
    v3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &g_4195fb, 15) as i8;
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &g_41960a, 5) as i8;
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &g_41960f, 10) as i8;
    v40 = *((a1 + 8) as &i64);
    v41 = *((a1 + 16) as &i64);
    if !v41 {
        v27 = 0;
    }
    v42 = v41 * 16;
    v43 = 0;
    do {
        if *((v40 + v43 + 8) as &i64) == 12 && !(*((v44 + 8) as &i32) ^ 2020173413) && !(*(v44 as &i64) ^ 8246140895622166629) {
            v27 = v43 | -0x100 | 1;
            goto LABEL_482ef1;
        }
    } while ((v43 += 16, v42 != v43));
    v27 = 0;
LABEL_482ef1:
    do {
        if *((v40 + 0 + 8) as &i64) == 11 && !(*((v46 + 3) as &i64) ^ 8676578743003655536) && !(*(v46 as &i64) ^ 7310028485637532531) {
            v26 = v42 | -0x100 | 1;
        }
    } while ((v43 += 16, v42 != v43));
}
