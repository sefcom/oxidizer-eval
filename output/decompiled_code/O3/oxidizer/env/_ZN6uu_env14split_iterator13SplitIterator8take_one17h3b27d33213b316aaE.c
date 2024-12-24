fn uu_env::split_iterator::SplitIterator::take_one(a0: &struct_0, a1: &u64, a2: i64) -> u64 {
    let v1: u64;  // rax
    let v2: u32;  // ecx
    let v3: u8;  // dl

    v1 = uu_env::string_expander::StringExpander::take_one(a1);
    v2 = 8;
    if v3 != 2 {
        a0->field_8 = v1;
        a0->field_10 = v1;
        a0->field_18 = v3 & 1;
        v2 = 5;
    }
    return struct4 {
        field_0: v2
    };
}
