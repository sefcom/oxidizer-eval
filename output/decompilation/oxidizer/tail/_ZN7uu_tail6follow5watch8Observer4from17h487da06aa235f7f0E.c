fn uu_tail::follow::watch::Observer::from(a0: &struct119, a1: void*) -> u64 {
    let v0: struct10;  // [sp-0x80]

    v0 = uu_tail::follow::files::FileHandling::from(a1);
    uu_tail::follow::watch::Observer::new(a0, *((a1 + 72) as &i8), *((a1 + 76) as &i32), *((a1 + 73) as &i8), &v0, *((a1 + 68) as &i32));
    return a0;
}
