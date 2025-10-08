fn ruff_python_formatter::comments::map::InOrderEntry::increment_dangling_range(a0: i64) -> u64 {
    let v1: core::result::Result<usize, std::io::error::Error>;  // rax

    if *((a0 + 12) as &i32) {
        panic!("Can't extend the dangling range for an in order entry with trailing comments.");
    } else if !*((a0 + 8) as &i32) {
        v1 = ruff_python_formatter::comments::map::PartIndex::incremented(*((a0 + 4) as &i32));
        *((a0 + 8) as &u32) = v1 as u32;
        return v1;
    } else {
        return ruff_python_formatter::comments::map::PartIndex::increment(a0 + 8);
    }
}
