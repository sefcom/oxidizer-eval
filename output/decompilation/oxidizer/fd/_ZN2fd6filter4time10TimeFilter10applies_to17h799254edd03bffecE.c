fn fd::filter::time::TimeFilter::applies_to(a0: i64, a1: u64, a2: u32) -> long long {
    if *(a0 as &i32) != 1 {
        return (a1 == *((a0 + 8) as &i64) ? a2 < *((a0 + 16) as &i32) : a1 < *((a0 + 8) as &i64));
    }
    return (a1 == *((a0 + 8) as &i64) ? *((a0 + 16) as &i32) < a2 : *((a0 + 8) as &i64) < a1);
}
