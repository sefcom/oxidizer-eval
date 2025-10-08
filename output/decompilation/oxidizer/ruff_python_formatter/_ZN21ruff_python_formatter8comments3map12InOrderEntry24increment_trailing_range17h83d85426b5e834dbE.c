fn ruff_python_formatter::comments::map::InOrderEntry::increment_trailing_range(a0: i64) -> u64 {
    let v1: u64;  // rax
    let v2: u32;  // eax
    let v3: u64;  // rax

    if *((a0 + 8) as &i32) {
        if !*((a0 + 12) as &i32) {
            v1 = ruff_python_formatter::comments::map::PartIndex::incremented(*((a0 + 8) as &i32));
            *((a0 + 12) as &u32) = v1;
            return v1;
        }
        return ruff_python_formatter::comments::map::PartIndex::increment(a0 + 12);
    } else {
        if !*((a0 + 12) as &i32) {
            v2 = *((a0 + 4) as &i32);
            *((a0 + 8) as &u32) = v2;
            v3 = ruff_python_formatter::comments::map::PartIndex::incremented(v2);
            *((a0 + 12) as &u32) = v3;
            return v3;
        }
        core::panicking::panic("internal error: entered unreachable code"); /* do not return */
    }
}
