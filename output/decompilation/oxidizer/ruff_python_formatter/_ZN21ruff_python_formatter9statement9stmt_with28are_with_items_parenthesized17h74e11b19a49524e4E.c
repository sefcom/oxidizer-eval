fn ruff_python_formatter::statement::stmt_with::are_with_items_parenthesized(a1: i64, a2: &str) -> Result<struct16, struct1> {
    let a0: i64;  // rdi
    let v0: struct12;  // [bp-0x5c]
    let v1: struct12;  // [bp-0x5c]
    let v2: struct21;  // [bp-0x50]
    let v3: struct32;  // [bp-0x20]
    let v5: u32;  // rcx

    if *((a1 + 16) as &i64) <= 1 {
        return struct8 {
            field_0: 4
            field_4: 0
        };
    } else if *((a1 + 48) as &i32) <= *((*((a1 + 8) as &i64) + 80) as &i32) {
        v2 = ruff_python_trivia::tokenizer::SimpleTokenizer::new(a2, v5, *((a1 + 48) as &i32));
        v3 = 0;
        v0 = core::iter::traits::iterator::Iterator::try_fold(&v2, &v3);
        if &v0 as u8 != "Z" {
            v1 = core::iter::traits::iterator::Iterator::try_fold(&v2, &v3);
            *((a0 + 4) as &u8) = v1.field_8 as i8 != 90;
        }
        return Ok(struct16 {
            field_0: &g_48b59c
            field_8: 46
        });
    } else {
        core::panicking::panic("assertion failed: start.raw <= end.raw"); /* do not return */
    }
}
