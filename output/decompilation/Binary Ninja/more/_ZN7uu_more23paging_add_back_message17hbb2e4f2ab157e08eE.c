
  int128_t* uu_more::paging_add_back_message::hbb2e4f2ab157e08e(int16_t arg1, int64_t* arg2)

{
    if (!arg1)
        return 0;
    
    if (!crossterm::command::write_command_ansi::h02c6c5b7e95a9c8a(arg2, 1) && !
            _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::h392d0be644ab70e9(
            arg2) && !
            _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::he47e3670e90f933e(
            arg2, "\n\r...back 1 page\n..... is not…", 0x11))
        return 0;
    
    return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
}
