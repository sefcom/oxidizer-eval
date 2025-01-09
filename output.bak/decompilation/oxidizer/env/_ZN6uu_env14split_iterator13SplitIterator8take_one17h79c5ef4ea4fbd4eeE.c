fn uu_env::split_iterator::SplitIterator::take_one(a0: &Option<struct17>, a1: &u64) -> u64 {
    let v1: u64;  // rax
    let v3: u8;  // dl

    v1 = uu_env::string_expander::StringExpander::take_one(a1);
    if v3 != 2 {
        a0->field_8 = v1;
        a0->field_10 = v1;
        a0->field_18 = v3 & 1;
    }
    return struct4 {
        field_0: v2
    };
}
