
  fn uu_date::set_system_datetime::h8387ae79f6ea6bb0(arg1: *mut i32) -> u64

{
    let rax: i32 = chrono::naive::date::NaiveDate::num_days_from_ce::h3a63bbbadb6054a1(*arg1);
    let rdx: u64 = arg1[2];
    let mut tp: i64 = (rax - 0xaf93b) * 0x15180 + arg1[1];
    let var_10: u64 = rdx;
    
    if clock_settime(0, &tp) == 0
    {
        return 0;
    }
    
    *__errno_location();
    _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h57f4dbe9b6845bcc()
}
