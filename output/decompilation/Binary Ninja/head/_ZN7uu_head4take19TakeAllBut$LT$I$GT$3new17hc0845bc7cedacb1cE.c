
  int64_t* uu_head::take::TakeAllBut$LT$I$GT$::new::hc0845bc7cedacb1c(int64_t* arg1, int64_t arg2, char arg3, int64_t arg4)

{
    int64_t var_98 = arg2;
    int64_t var_88 = 0;
    int64_t var_80 = 8;
    int128_t var_78 = {0};
    
    if (arg4)
    {
        int64_t r13_1 = 0;
        
        do
        {
            r13_1 = _$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(r13_1);
            int64_t var_60;
            _$LT$uucore..features..lines..Lines$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he245392b5a345364(&var_60, &var_98);
            
            if (var_60 == -0x7fffffffffffffff)
                break;
            
            int64_t var_50;
            int64_t var_38_1 = var_50;
            int128_t var_48 = var_60;
            uucore::features::ringbuffer::RingBuffer$LT$T$GT$::push_back::hae07e5fa5289e66a(
                &var_60, &var_88, &var_48);
            core::ptr::drop_in_place$LT$core..option..Option$LT$core..result..Result$LT$alloc..vec..Vec$LT$u8$GT$$C$std..io..error..Error$GT$$GT$$GT$::h665ed2cb8fd55ceb(&var_60);
        } while (r13_1 < arg4);
    }
    
    int64_t rax_3 = var_98;
    arg1[4] = arg4;
    int64_t rdx_2 = var_88;
    *(arg1 + 0x10) = var_78;
    *arg1 = rdx_2;
    arg1[1] = var_80;
    arg1[5] = rax_3;
    arg1[6] = arg3;
    return arg1;
}
