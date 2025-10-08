
  char const (**)[0xa5] uu_ls::get_time::h9a507b9721b0487b(int32_t* arg1, int32_t* arg2, char arg3)

{
    char const (** result)[0xa5];
    int32_t rdx;
    result = uu_ls::get_system_time::haabab7985650bb67(arg2, arg3);
    
    if (rdx != 0x3b9aca00)
        /* tailcall */
        return _$LT$chrono..datetime..DateTime$LT$chrono..offset..local..Local$GT$$u20$as$u20$core..convert..From$LT$std..time..SystemTime$GT$$GT$::from::h7e660df65a8958b4(arg1, result);
    
    *arg1 = 0;
    return result;
}
