fn uu_cat::LineNumber::increment(a0: i64) -> long long {
    let v1: u64;  // rax

    uucore::features::fast_inc::fast_inc_one(a0, a0 + 40, *((a0 + 48) as &i64));
    v1 = core::cmp::Ord::min(*((a0 + 32) as &i64), *((a0 + 40) as &i64));
    *((a0 + 32) as &u64) = v1;
    return v1;
}
