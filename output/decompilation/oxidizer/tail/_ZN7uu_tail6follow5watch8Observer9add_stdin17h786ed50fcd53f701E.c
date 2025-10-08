fn uu_tail::follow::watch::Observer::add_stdin(a0: i64, a1: u64, a2: u32, a3: u64) -> long long {
    let v0: struct24;  // [bp-0x48]
    let v1: u64;  // [bp-0x40]

    if !(!(*((a0 + 142) as &i8) & 1) & *((a0 + 142) as &i8) != 2) {
        return 0;
    }
    v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("/dev/stdin");
    return uu_tail::follow::watch::Observer::add_path(a0, v1, v0.field_16, a1, a2, a3, &g_573ad0, 1);
}
