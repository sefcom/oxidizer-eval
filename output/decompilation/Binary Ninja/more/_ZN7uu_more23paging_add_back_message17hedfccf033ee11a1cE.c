
  uint64_t uu_more::paging_add_back_message::hedfccf033ee11a1c(void* arg1, int64_t arg2)

{
    if (!*(arg1 + 0x20))
        return 0;
    
    if (!crossterm::command::write_command_ansi::hc311d26e5a2b15cb(arg2) && !
            _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::hfb2969f84e2164f2(
            arg2) && !
            _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::hda8b04bbc47966cd(
            arg2, "\n\r...back 1 pag", 0x11))
        return 0;
    
    return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
}
