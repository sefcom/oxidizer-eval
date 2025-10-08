fn starship::segment::Segment::width_graphemes(a0: i64) -> u64 {
    if *(a0 as &i32) <= 1 {
        return <T as starship::print::UnicodeWidthGraphemes>::width_graphemes(*((a0 + 16) as &i64), *((a0 + 24) as &i64));
    }
    return 0;
}
