fn uu_tail::follow::watch::WatcherRx::unwatch(a0: i64, a1: i64) -> long long {
    let v0: struct56;  // [bp-0x70], Other Possible Types: u8
    let v1: struct56;  // [bp-0x38]

    *((a1 + 32) as &i64)(&v0, a0);
    if *(&v0 as &i32) != 6 {
        v1 = v0;
        return uu_tail::follow::watch::WatcherRx::unwatch::{{closure}}(&v1);
    }
    return 0;
}
