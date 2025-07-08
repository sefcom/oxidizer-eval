
  uint64_t uu_dd::try_get_len_of_block_device::hf00af9fe29cc4b56(int64_t* arg1, int32_t* arg2)

{
    int32_t var_c8;
    std::fs::File::metadata::he899a18112e6f19e(&var_c8, arg2);
    uint64_t result;
    
    if (var_c8 != 2)
    {
        int32_t var_90;
        result = 0xf000 & var_90;
        
        if (result != 0x6000)
            *arg1 = 0;
        else
        {
            int64_t rdx_1;
            result = _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(arg2, 
                1, 0);
            
            if (!result)
            {
                result = std::io::Seek::rewind::h775fcf7d5bbb9e4d(arg2);
                
                if (result)
                {
                    arg1[1] = result;
                    *arg1 = 2;
                }
                else
                {
                    *arg1 = 1;
                    arg1[1] = rdx_1;
                }
            }
            else
            {
                arg1[1] = rdx_1;
                *arg1 = 2;
            }
        }
    }
    else
    {
        uint64_t result_1;
        result = result_1;
        arg1[1] = result;
        *arg1 = 2;
    }
    
    return result;
}
