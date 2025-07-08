
  int128_t* uu_join::State::finalize::h3e9313ec919a4c47(int64_t* arg1, int64_t* arg2, char* arg3, void* arg4)

{
    if (arg1[2])
    {
        if (*(arg1 + 0x59) && uu_join::State::print_first_line::h7613f1add6e5ed81(arg1, arg2, arg4))
            return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
        
        int64_t i_1;
        uu_join::State::next_line::hdcd6fa155f18f200(&i_1, arg1, arg3);
        int64_t i_3 = i_1;
        int128_t var_a0;
        int128_t var_c8_1 = var_a0;
        int64_t var_90;
        int64_t var_b8_1 = var_90;
        
        if (i_3 == -0x7fffffffffffffff)
        {
            label_47354f:
            *var_a0[8] = var_b8_1;
            i_1 = var_c8_1;
            return alloc::boxed::Box$LT$T$GT$::new::h06a7bb4fb867f987(&i_1);
        }
        
        int128_t var_88;
        int128_t var_50_1 = var_88;
        int128_t var_68_1 = var_c8_1;
        int64_t var_58_1 = var_b8_1;
        int64_t i_2 = i_3;
        
        if (i_3 != -0x8000000000000000)
        {
            int64_t var_38_1 = -0x7fffffffffffffff;
            int64_t i;
            
            do
            {
                if (*(arg1 + 0x59)
                    && uu_join::State::print_line::h1d197a6baae46696(arg1, arg2, &i_2, arg4))
                {
                    int128_t* result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                    core::ptr::drop_in_place$LT$core..option..Option$LT$uu_join..Line$GT$$GT$::h8c0a51ffd9df4838(&i_2);
                    return result;
                }
                
                i_1 = i_2;
                uu_join::State::reset::h80c820df90bbe344(arg1, &i_1);
                uu_join::State::next_line::hdcd6fa155f18f200(&i_1, arg1, arg3);
                i = i_1;
                var_c8_1 = var_68_1;
                var_b8_1 = var_90;
                
                if (i == var_38_1)
                    goto label_47354f;
                
                int64_t var_58_2 = var_b8_1;
                var_68_1 = var_c8_1;
                i_2 = i;
            } while (i != -0x8000000000000000);
        }
        
        core::ptr::drop_in_place$LT$core..option..Option$LT$uu_join..Line$GT$$GT$::h8c0a51ffd9df4838(&i_2);
    }
    
    return nullptr;
}
