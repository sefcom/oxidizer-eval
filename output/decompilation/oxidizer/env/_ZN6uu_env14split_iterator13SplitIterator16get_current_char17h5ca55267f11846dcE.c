fn uu_env::split_iterator::SplitIterator::get_current_char(a0: u32) -> u64 {
    let v0: i72;  // [sp-0x10], Other Possible Types: struct9

    v0 = uu_env::string_expander::StringExpander::peek(a0);
    if *((&v0 as &char + 8) as &i8) == 2 {
        return v0;
    }
    return 0x110000;
}
