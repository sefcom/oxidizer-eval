
  int128_t* uu_join::State::skip_line::hfa4c3ec8a4d122ec(int64_t* arg1, int64_t* arg2, char* arg3, void* arg4)

{
    if (*(arg1 + 0x59) && uu_join::State::print_first_line::h5910ce581bed7f0a(arg1, arg2, arg4))
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
    
    int64_t var_40;
    uu_join::State::reset_next_line::h05bf92bdc2a868ec(&var_40, arg1, arg3);
    
    if (var_40 == -0x7fffffffffffffff)
        return 0;
    
    int64_t var_30;
    int64_t var_18 = var_30;
    int128_t var_28 = var_40;
    return alloc::boxed::Box$LT$T$GT$::new::h06a7bb4fb867f987(&var_28);
}
