
  fn uu_dd::try_get_len_of_block_device::hb29413a8db7bcc7d(arg1: *mut i64, arg2: *mut i32) -> u64

{
    let mut var_c8: i32;
    std::fs::File::metadata::h5e84e533705f8c98(&var_c8, arg2);
    let mut result: u64;
    
    if var_c8 != 2
    {
        let var_90: i32;
        result = 0xf000 & var_90;
        
        if result != 0x6000
        {
            *arg1 = 0;
        }
        else
        {
            let mut rdx_1: i64;
            result = _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::h04cf64217ea00d1d(arg2, 
                1, 0);
            
            if (result & 1) == 0
            {
                result = std::io::Seek::rewind::h4f5eb59316fec924(arg2);
                
                if result != 0
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
        let result_1: u64;
        result = result_1;
        arg1[1] = result;
        *arg1 = 2;
    }
    
    result
}
