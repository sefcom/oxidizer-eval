fn uu_dd::flush_caches_full_length(a0: void*, a1: u32) -> u64 {
    let v1: &u64;  // r15
    let v2: u64;  // rdx
    let v3: void*;  // rcx

    v1 = a0->field_8;
    if *((&v1[8] as &char + 5) as &i8) {
        v3 = v2;
        if uu_dd::Source::len(a0) {
            return v3;
        }
        uu_dd::Input::discard_cache(a0->field_0, a0->field_4, 0, v2);
    }
    if *((&v1[19] as &char + 4) as &i8) {
        v3 = v2;
        if uu_dd::Dest::len(a1) {
            return v3;
        }
        uu_dd::Output::discard_cache(a1, 0, v2);
    }
    return 0;
}
