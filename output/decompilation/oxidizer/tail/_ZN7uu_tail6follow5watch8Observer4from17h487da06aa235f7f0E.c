fn uu_tail::follow::watch::Observer::from(a1: i64) -> : struct119 {
    let a0: i64;  // rsi
    let v0: u8;  // [bp-0x88]
    let v1: struct10;  // [bp-0x80]

    v1 = uu_tail::follow::files::FileHandling::from(a0);
    uu_tail::follow::watch::Observer::new(*((a0 + 72) as &i8), *((a0 + 76) as &i32), *((a0 + 73) as &i8), &v1 as u8, *((a0 + 68) as &i32), *(&v0 as &i32));
    return;
}
