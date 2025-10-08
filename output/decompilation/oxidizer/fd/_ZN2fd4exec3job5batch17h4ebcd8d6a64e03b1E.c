fn fd::exec::job::batch(a0: u64, a1: u64, a2: u32, a3: i64) -> long long {
    let v0: struct80;  // [bp-0xd0]
    let v1: struct88;  // [bp-0x80]
    let v3: void*;  // r8

    v0 = <I as core::iter::traits::collect::IntoIterator>::into_iter(a0);
    v1 = core::iter::traits::iterator::Iterator::filter_map(&v0, a3);
    return fd::exec::CommandSet::execute_batch(a1, a2, &v1, *((a3 + 464) as &i64), v3, *((a3 + 376) as &i64));
}
