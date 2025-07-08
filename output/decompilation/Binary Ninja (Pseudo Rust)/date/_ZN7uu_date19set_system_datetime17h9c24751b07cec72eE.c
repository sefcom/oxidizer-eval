
  fn uu_date::set_system_datetime::h9c24751b07cec72e(arg1: *mut i32) -> *mut i128

{
    let rax: i32 = chrono::naive::date::NaiveDate::num_days_from_ce::h3a5ee0596b8da218(*arg1);
    let rdx: u64 = arg1[2];
    let mut tp: i64 = (rax - 0xaf93b) * 0x15180 + arg1[1];
    let var_10: u64 = rdx;
    
    if clock_settime(0, &tp) == 0
    {
        return nullptr;
    }
    
    std::sys::pal::unix::os::errno::hddfd8da9c36b1a59();
    _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::hb6176365fe96ba27()
}
