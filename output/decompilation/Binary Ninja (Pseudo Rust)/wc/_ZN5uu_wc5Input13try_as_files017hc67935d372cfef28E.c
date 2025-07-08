
  fn uu_wc::Input::try_as_files0::hc67935d372cfef28(arg1: *mut i64, arg2: *mut i64) -> u64

{
    let mut var_128: i64;
    let result_1: u64;
    
    if *arg2 == -0x7fffffffffffffff
    {
        let mut result: u64 = uu_wc::is_stdin_small_file::hda862548f32829d1();
        
        if result == 0
        {
            *arg1 = -0x8000000000000000;
        }
        else
        {
            let mut var_78: ();
            uu_wc::files0_iter_stdin::h027d8be6f7e7f770(&var_78);
            core::iter::adapters::try_process::h9f74a5405c84d529(&var_128, &var_78);
            let rdx_1: i64 = var_128;
            result = result_1;
            let var_118: i64;
            
            if rdx_1 != -0x8000000000000000
            {
                *arg1 = rdx_1;
                arg1[1] = result;
                arg1[2] = var_118;
            }
            else
            {
                arg1[1] = result;
                arg1[2] = var_118;
                *arg1 = -0x7fffffffffffffff;
            }
        }
        
        return result;
    }
    
    std::fs::metadata::ha24470e461e4d7b2(&var_128, arg2);
    let rdi_3: i64 = var_128;
    let var_f0: i32;
    let var_d8: i64;
    let mut result_2: u64;
    
    if rdi_3 != 2 && (0xf000 & var_f0) == 0x8000 && var_d8 < 0xa00001
    {
        let mut var_1c8: i64;
        uu_wc::files0_iter_file::h4e3b8ab8e030dfca(&var_1c8, arg2[1], arg2[2]);
        let rdx_3: i64 = var_1c8;
        let var_1c0: i64;
        let mut rax_2: i64 = var_1c0;
        let var_1b8: i64;
        let mut rcx_2: i64 = var_1b8;
        let mut rdx_4: i64;
        
        if rdx_3 != -0x7fffffffffffffff
        {
            let var_180: i64;
            let var_130_1: i64 = var_180;
            let var_190: i128;
            let var_140_1: i128 = var_190;
            let var_1a0: i128;
            let var_150_1: i128 = var_1a0;
            let var_1b0: i128;
            let var_160_1: i128 = var_1b0;
            let mut var_178: i64 = rdx_3;
            let var_170_1: i64 = rax_2;
            let var_168_1: i64 = rcx_2;
            let mut var_1e0: i64;
            core::iter::adapters::try_process::h5f1b943b2c05a233(&var_1e0, &var_178);
            rdx_4 = var_1e0;
            let var_1d8: i64;
            rax_2 = var_1d8;
            let var_1d0: i64;
            rcx_2 = var_1d0;
        }
        
        if rdx_3 != -0x7fffffffffffffff && rdx_4 != -0x8000000000000000
        {
            *arg1 = rdx_4;
            arg1[1] = rax_2;
            arg1[2] = rcx_2;
            result_2 = result_1;
        }
        else
        {
            arg1[1] = rax_2;
            arg1[2] = rcx_2;
            *arg1 = -0x7fffffffffffffff;
            result_2 = result_1;
        }
    }
    else
    {
        *arg1 = -0x8000000000000000;
        result_2 = result_1;
    }
    
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hc7378430642e479d(rdi_3, result_2)
}
