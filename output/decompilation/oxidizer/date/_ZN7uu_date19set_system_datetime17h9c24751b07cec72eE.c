fn uu_date::set_system_datetime(a0: &u64) -> u64 {
    let v0: u64;  // [sp-0x18]
    let v1: u64;  // [sp-0x10]
    let v4: u64;  // r8

    v0 = (chrono::naive::date::NaiveDate::num_days_from_ce(*(a0 as &i32)) as i32 - 719163) * 86400 + *((a0 as &char + 4) as &i32);
    v1 = a0[1];
    if clock_settime(0, &v0, v1, *((a0 as &char + 4) as &i32), v4) {
        return <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(std::sys::pal::unix::os::errno() * 0x100000000 + 2);
    }
    return 0;
}
