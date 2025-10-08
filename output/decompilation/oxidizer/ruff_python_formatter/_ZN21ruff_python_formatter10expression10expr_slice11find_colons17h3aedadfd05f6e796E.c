fn ruff_python_formatter::expression::expr_slice::find_colons(a0: i64, a1: u64, a2: u32, a3: u32, a4: u32, a5: u64, a6: u64) -> long long {
    let v10: u64;  // [bp-0xa8]
    let v11: u8;  // [bp-0xa0]
    let v16: struct21;  // [bp-0x68]
    let v17: u8;  // [bp-0x38]
    let v18: struct80;  // rdi
    let v19: struct16;  // eax

    v10 = a5;
    v18 = &v10;
    v19 = core::option::Option<T>::map_or(v18, a3);
    if v19 > a4 {
        core::panicking::panic("assertion failed: start.raw <= end.raw"); /* do not return */
    }
    v16 = ruff_python_trivia::tokenizer::SimpleTokenizer::new(a1, a2, v19, a4);
    v17 = 0;
    core::iter::traits::iterator::Iterator::try_fold(&v11, &v16, &v17);
    switch (vvar_260{stack -152}): 3 cases
}
