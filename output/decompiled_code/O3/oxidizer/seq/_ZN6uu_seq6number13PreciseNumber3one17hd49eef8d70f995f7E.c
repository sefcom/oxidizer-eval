fn uu_seq::number::PreciseNumber::one(a0: &u64) -> u64 {
    uu_seq::extendedbigdecimal::ExtendedBigDecimal::one(a0);
    *((a0 + 40) as &i64) = 1;
    *((a0 + 48) as &i64) = 0;
    return a0;
}
