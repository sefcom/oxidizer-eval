fn uu_tr::operation::Sequence::parse_backslash_or_char(a0: void*, a1: u64, a2: u64) -> u64 {
    return <(A,B,C) as nom::branch::Alt<Input,Output,Error>>::choice(a0, a1, a2);
}
