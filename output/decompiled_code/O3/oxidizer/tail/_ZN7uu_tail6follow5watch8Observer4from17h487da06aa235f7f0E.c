fn uu_tail::follow::watch::Observer::from(a0: &struct119, a1: void*, a2: u32) -> u64 {
    let v0: i80;  // [sp-0x80], Other Possible Types: struct10

    v0 = uu_tail::follow::files::FileHandling::from(a1, a2);
    uu_tail::follow::watch::Observer::new(a0, *((a1 + 72) as &i8), *((a1 + 76) as &i32), *((a1 + 73) as &i8), &v0, *((a1 + 68) as &i32));
    return a0;
}
