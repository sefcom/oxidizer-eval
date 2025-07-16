fn uu_dd::flush_caches_full_length(a0: i64, a1: i64) -> long long {
    let v1: u64;  // rdx
    let v2: u64;  // rdx

    if *((*((a0 + 8) as &i64) + 69) as &i8) {
        if !uu_dd::Source::len(a0) {
            uu_dd::Input::discard_cache(*(a0 as &i32), *((a0 + 4) as &i32), 0, v1);
        } else {
            return v2;
        }
    }
    if *((*((a0 + 8) as &i64) + 156) as &i8) {
        if !uu_dd::Dest::len(a1) {
            uu_dd::Output::discard_cache(a1, 0, v1);
        } else {
            return v1;
        }
    }
    return 0;
}
