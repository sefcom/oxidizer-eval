
  void** uu_ls::get_time::h8b131fbbcfeb99cc(int32_t* arg1, int64_t* arg2, void* arg3)

{
    void** result;
    int32_t rdx;
    result = uu_ls::get_system_time::hcb9369b24593e222(arg2, arg3);
    
    if (rdx != 0x3b9aca00)
        /* tailcall */
        return _$LT$chrono..datetime..DateTime$LT$chrono..offset..local..Local$GT$$u20$as$u20$core..convert..From$LT$std..time..SystemTime$GT$$GT$::from::h8f61e1a3c0275b73(arg1, result);
    
    *arg1 = 0;
    return result;
}
