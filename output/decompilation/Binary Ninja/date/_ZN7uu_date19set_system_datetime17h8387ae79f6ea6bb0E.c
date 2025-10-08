
  uint64_t uu_date::set_system_datetime::h8387ae79f6ea6bb0(int32_t* arg1)

{
    int32_t rax = chrono::naive::date::NaiveDate::num_days_from_ce::h3a63bbbadb6054a1(*arg1);
    uint64_t rdx = arg1[2];
    int64_t tp = (rax - 0xaf93b) * 0x15180 + arg1[1];
    uint64_t var_10 = rdx;
    
    if (!clock_settime(0, &tp))
        return 0;
    
    *__errno_location();
    return _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h57f4dbe9b6845bcc();
}
