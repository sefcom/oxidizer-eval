fn uu_pr::lines_to_read_for_page(a0: i64) -> long long {
    let v1: u64;  // rdx

    v1 = 1;
    return v1 * (*((a0 + 312) as &i64) >> (*((a0 + 320) as &i8) & 63));
}
