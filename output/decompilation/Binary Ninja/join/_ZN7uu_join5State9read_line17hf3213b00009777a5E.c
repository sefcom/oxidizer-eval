
  int64_t uu_join::State::read_line::hf3213b00009777a5(int64_t* arg1, void* arg2, void* arg3)

{
    int64_t result_1;
    _$LT$std..io..Split$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0d9dc488658bb76c(&result_1, arg2 + 0x28);
    int64_t result = result_1;
    
    if (result != -0x7fffffffffffffff)
    {
        *(arg2 + 0x50) += 1;
        int64_t var_78;
        
        if (result != -0x8000000000000000)
        {
            int64_t result_2 = result;
            int64_t var_60_1 = var_78;
            int64_t var_70;
            int64_t var_58_1 = var_70;
            int128_t var_50;
            uu_join::Line::new::hf82a54a2b0e9a927(&var_50, &result_2, arg3, *(arg2 + 0x48));
            int64_t result_3;
            result = result_3;
            
            if (result > *(arg2 + 0x48))
                *(arg2 + 0x48) = result;
            
            int128_t zmm0_1 = var_50;
            int128_t var_30;
            *(arg1 + 0x20) = var_30;
            *(arg1 + 0x10) = result_3;
            *arg1 = zmm0_1;
        }
        else
        {
            arg1[1] = var_78;
            *arg1 = -0x7fffffffffffffff;
        }
    }
    else
        *arg1 = -0x8000000000000000;
    
    return result;
}
