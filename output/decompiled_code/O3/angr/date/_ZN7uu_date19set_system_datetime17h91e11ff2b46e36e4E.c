long long uu_date::set_system_datetime::h91e11ff2b46e36e4(unsigned int a0[3], unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4)
{
    unsigned long v0;  // [sp-0x18], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x10]
    unsigned long long v4;  // r8

    v0 = ((int)::0x5c6440::chrono::naive::date::NaiveDate::num_days_from_ce::h5c90bef67c86960c(a0[0]) - 719163) * 86400 + a0[1];
    v1 = a0[2];
    if (clock_settime(0, &v0, v1, a0[1], v4))
        return _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h675ce19d12adaace(std::sys::pal::unix::os::errno::hddfd8da9c36b1a59() * 0x100000000 + 2);
    return 0;
}
