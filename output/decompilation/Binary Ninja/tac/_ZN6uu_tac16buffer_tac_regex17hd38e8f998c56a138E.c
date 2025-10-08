
  ssize_t uu_tac::buffer_tac_regex::hd38e8f998c56a138(int64_t arg1, int64_t arg2, void* arg3, void* arg4, char arg5)

{
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    int64_t* var_58 = &std::io::stdio::STDOUT::h411b213c5c9add46;
    int64_t var_90;
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::hb5da74aabfacf130(&var_90, 
        std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_58));
    int64_t var_88;
    int64_t var_80;
    int64_t i_5;
    ssize_t result;
    
    if (!arg2)
        i_5 = 0;
    else
    {
        int64_t i_2 = arg2 - 1;
        int64_t var_50;
        
        if (!arg5)
        {
            int64_t i_4 = arg2;
            int64_t i_6 = arg2;
            int64_t i;
            
            do
            {
                int64_t rax_8;
                int64_t rdx_11;
                rax_8 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h71ada529aa718b3e(0, i_4, arg1, arg2);
                regex::regex::bytes::Regex::find_at::ha500615bd3b0433b(&var_50, arg3, arg4, rax_8, 
                    rdx_11, i_2);
                
                if (!var_50)
                    i_5 = i_6;
                else
                {
                    int64_t var_40;
                    int64_t var_38;
                    i_5 = var_38 - var_40 + i_2;
                    int64_t rax_9;
                    uint64_t rdx_14;
                    rax_9 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h71ada529aa718b3e(i_5, i_6, arg1, arg2);
                    
                    if (rdx_14 >= var_90 - var_80)
                    {
                        ssize_t result_2 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h8000122166762ae1(&var_90, rax_9, rdx_14);
                        result = result_2;
                        i_4 = i_2;
                        
                        if (result_2)
                            goto label_5125c0;
                    }
                    else
                    {
                        memcpy(var_88 + var_80, rax_9, rdx_14);
                        var_80 += rdx_14;
                        i_4 = i_2;
                    }
                }
                
                i_6 = i_5;
                i = i_2;
                i_2 -= 1;
            } while (i >= 1);
        }
        else
        {
            int64_t i_3 = arg2;
            i_5 = arg2;
            int64_t i_1;
            
            do
            {
                int64_t rax_2;
                int64_t rdx_2;
                rax_2 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h71ada529aa718b3e(0, i_3, arg1, arg2);
                regex::regex::bytes::Regex::find_at::ha500615bd3b0433b(&var_50, arg3, arg4, rax_2, 
                    rdx_2, i_2);
                
                if (var_50)
                {
                    int64_t rax_3;
                    uint64_t rdx_5;
                    rax_3 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h71ada529aa718b3e(i_2, i_5, arg1, arg2);
                    
                    if (rdx_5 < var_90 - var_80)
                    {
                        memcpy(var_88 + var_80, rax_3, rdx_5);
                        var_80 += rdx_5;
                        i_5 = i_2;
                        i_3 = i_2;
                    }
                    else
                    {
                        ssize_t result_1 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h8000122166762ae1(&var_90, rax_3, rdx_5);
                        result = result_1;
                        i_5 = i_2;
                        i_3 = i_2;
                        
                        if (result_1)
                            goto label_5125c0;
                    }
                }
                
                i_1 = i_2;
                i_2 -= 1;
            } while (i_1 >= 1);
        }
    }
    
    int64_t rax_4;
    uint64_t rdx_8;
    rax_4 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h71ada529aa718b3e(0, i_5, arg1, arg2);
    
    if (rdx_8 >= var_90 - var_80)
    {
        ssize_t result_3 =
            std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h8000122166762ae1(
            &var_90, rax_4, rdx_8);
        result = result_3;
        
        if (!result_3)
            result = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::he7ea2e76e39453c0(&var_90);
    }
    else
    {
        memcpy(var_88 + var_80, rax_4, rdx_8);
        int64_t var_80_1 = rdx_8 + var_80;
        result = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::he7ea2e76e39453c0(&var_90);
    }
    
    label_5125c0:
    core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::h906e82980bfe4b9c(&var_90);
    return result;
}
