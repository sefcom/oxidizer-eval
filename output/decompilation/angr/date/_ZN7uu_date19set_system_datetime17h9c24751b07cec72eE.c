long long uu_date::set_system_datetime::h9c24751b07cec72e(unsigned int a0[3])
{
    unsigned long v0;  // [sp-0x18]
    unsigned long long v1;  // [sp-0x10]
    unsigned long long v4;  // r8

    v0 = ((int)::0x5c6800::chrono::naive::date::NaiveDate::num_days_from_ce::h3a5ee0596b8da218(a0[0]) - 719163) * 86400 + a0[1];
    v1 = a0[2];
    if (clock_settime(0, &v0, v1, a0[1], v4))
        return _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::hb6176365fe96ba27(std::sys::pal::unix::os::errno::hddfd8da9c36b1a59() * 0x100000000 + 2);
    return 0;
}
