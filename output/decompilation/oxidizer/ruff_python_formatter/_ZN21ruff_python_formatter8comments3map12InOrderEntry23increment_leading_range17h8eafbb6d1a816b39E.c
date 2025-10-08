fn ruff_python_formatter::comments::map::InOrderEntry::increment_leading_range(a0: i64) -> u64 {
    if !*((a0 + 8) as &i32) {
        return ruff_python_formatter::comments::map::PartIndex::increment(a0 + 4);
    }
    panic!("Can't extend the leading range for an in order entry with dangling comments.");
}
