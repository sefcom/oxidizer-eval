fn ruff_python_formatter::comments::map::InOrderEntry::trailing_range(a0: i64) -> u64 {
    if *((a0 + 8) as &i32) {
        return *((a0 + 8) as &i32) - 1;
    } else if !*((a0 + 12) as &i32) {
        return *((a0 + 4) as &i32) - 1;
    } else {
        panic!("Trailing end shouldn't be set if trailing start is none");
    }
}
