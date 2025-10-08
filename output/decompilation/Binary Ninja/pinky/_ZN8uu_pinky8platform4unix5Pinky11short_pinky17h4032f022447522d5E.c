
  int64_t uu_pinky::platform::unix::Pinky::short_pinky::h4032f022447522d5(void* arg1)

{
    if (*(arg1 + 0x19))
        uu_pinky::platform::unix::Pinky::print_heading::h9e43dbe96a7248f7(arg1);
    
    int64_t rax;
    char rdx;
    rax = uucore::features::utmpx::Utmpx::iter_all_records::hde307d126e33fb30();
    int64_t var_368 = rax;
    char var_360 = rdx & 1;
    int64_t rax_1 = *(arg1 + 0x10);
    int64_t result_1;
    int64_t result;
    int32_t var_334;
    void var_330;
    void var_1b0;
    
    if (!rax_1)
    {
        while (true)
        {
            _$LT$uucore..features..utmpx..UtmpxIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0874e3c7200a2ada(&var_334);
            
            if (var_334 != 1)
            {
                label_46393f:
                result = 0;
                goto label_463944;
            }
            
            memcpy(&var_1b0, &var_330, 0x180);
            
            if (uucore::features::utmpx::Utmpx::is_user_process::h30a2442fae430ce7(&var_1b0))
            {
                result_1 =
                    uu_pinky::platform::unix::Pinky::print_entry::h41deaa8dc6a9a73e(arg1, &var_1b0);
                
                if (result_1)
                    break;
            }
        }
    }
    else
    {
        int64_t r14_1 = *(arg1 + 8);
        
        while (true)
        {
            _$LT$uucore..features..utmpx..UtmpxIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0874e3c7200a2ada(&var_334);
            
            if (var_334 != 1)
                goto label_46393f;
            
            memcpy(&var_1b0, &var_330, 0x180);
            
            if (uucore::features::utmpx::Utmpx::is_user_process::h30a2442fae430ce7(&var_1b0))
            {
                int64_t var_348 = r14_1;
                int64_t var_340_1 = r14_1 + rax_1 * 0x18;
                
                if (_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h87c328f0d4d945fc(&var_348, &var_1b0))
                {
                    result_1 = uu_pinky::platform::unix::Pinky::print_entry::h41deaa8dc6a9a73e(
                        arg1, &var_1b0);
                    
                    if (result_1)
                        break;
                }
            }
        }
    }
    result = result_1;
    label_463944:
    core::ptr::drop_in_place$LT$uucore..features..utmpx..UtmpxIter$GT$::hcbbad6d0fc2eb594(&var_368);
    return result;
}
