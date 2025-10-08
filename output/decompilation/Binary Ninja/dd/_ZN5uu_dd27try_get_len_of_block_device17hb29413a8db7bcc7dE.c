
  uint64_t uu_dd::try_get_len_of_block_device::hb29413a8db7bcc7d(int64_t* arg1, int32_t* arg2)

{
    int32_t var_c8;
    std::fs::File::metadata::h5e84e533705f8c98(&var_c8, arg2);
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
            result = _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::h04cf64217ea00d1d(arg2, 
                1, 0);
            
            if (!(result & 1))
            {
                result = std::io::Seek::rewind::h4f5eb59316fec924(arg2);
                
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
