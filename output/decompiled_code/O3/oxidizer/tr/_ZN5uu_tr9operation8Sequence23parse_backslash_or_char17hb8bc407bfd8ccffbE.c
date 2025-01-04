fn uu_tr::operation::Sequence::parse_backslash_or_char(a0: u64, a1: u32, a2: u32) -> u64 {
    return <(A,B,C) as nom::branch::Alt<Input,Output,Error>>::choice(a0, a1, a2);
}
