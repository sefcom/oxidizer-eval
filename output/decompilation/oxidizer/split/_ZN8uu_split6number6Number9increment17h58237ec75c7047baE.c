fn uu_split::number::Number::increment(a0: i64) -> long long {
    if !((((0 ^ *(a0 as &i64)) & (0 ^ -(*(a0 as &i64)))) >> 63) as char) {
        return uu_split::number::FixedWidthNumber::increment(a0);
    }
    *((a0 + 8) as &i64) = *((a0 + 8) as &i64) + 1;
    return 0;
}
