
  fn uu_more::paging_add_back_message::hedfccf033ee11a1c(arg1: *mut c_void, arg2: i64) -> u64

{
    if *arg1.byte_offset(0x20) == 0
    {
        return 0;
    }
    
    if crossterm::command::write_command_ansi::hc311d26e5a2b15cb(arg2) == 0 &&
        _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::hfb2969f84e2164f2(arg2) == 0
        && _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::hda8b04bbc47966cd(
        arg2, "\n\r...back 1 pag", 0x11) == 0
    {
        return 0;
    }
    
    uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2()
}
