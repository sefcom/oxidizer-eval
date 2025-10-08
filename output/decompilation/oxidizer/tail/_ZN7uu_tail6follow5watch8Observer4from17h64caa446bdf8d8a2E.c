fn uu_tail::follow::watch::Observer::from(a0: u64, a1: i64) -> long long {
    let v0: struct10;  // [bp-0x80]

    v0 = uu_tail::follow::files::FileHandling::from(*((a1 + 40) as &i64), *((a1 + 74) as &i8));
    return uu_tail::follow::watch::Observer::new(a0, *((a1 + 72) as &i8), *((a1 + 76) as &i32), *((a1 + 73) as &i8), &v0, *((a1 + 68) as &i32)) as u64;
}
