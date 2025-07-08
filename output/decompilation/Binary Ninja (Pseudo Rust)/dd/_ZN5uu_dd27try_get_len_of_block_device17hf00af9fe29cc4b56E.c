
  fn uu_dd::try_get_len_of_block_device::hf00af9fe29cc4b56(arg1: *mut i64, arg2: *mut i32) -> u64

{
    let mut var_c8: i32;
    std::fs::File::metadata::he899a18112e6f19e(&var_c8, arg2);
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
            result = _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(arg2, 
                1, 0);
            
            if result == 0
            {
                result = std::io::Seek::rewind::h775fcf7d5bbb9e4d(arg2);
                
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
