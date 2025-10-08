
  fn uu_wc::Input::try_as_files0::h87a8bdb6df7fa337(arg1: *mut i64, arg2: *mut i64) -> u64

{
    let mut var_170: i64;
    let result_1: u64;
    let var_160: i64;
    let mut var_d0: i64;
    
    if *arg2 == -0x7fffffffffffffff
    {
        let mut result: u64 = uu_wc::is_stdin_small_file::h8e95ce074e5d12c9();
        
        if result == 0
        {
            *arg1 = -0x8000000000000000;
        }
        else
        {
            uu_wc::files0_iter_stdin::hd59bc0c5728ca01b(&var_d0);
            core::iter::traits::iterator::Iterator::collect::h9b6196a4a3d64ef8(&var_170, &var_d0);
            let rdx_1: i64 = var_170;
            result = result_1;
            
            if rdx_1 != -0x8000000000000000
            {
                *arg1 = rdx_1;
                arg1[1] = result;
                arg1[2] = var_160;
            }
            else
            {
                arg1[1] = result;
                arg1[2] = var_160;
                *arg1 = -0x7fffffffffffffff;
            }
        }
        
        return result;
    }
    
    std::fs::metadata::hbb43a01f12775689(&var_d0, arg2);
    let rdi_3: i64 = var_d0;
    let var_98: i32;
    let var_80: i64;
    let mut rsi_4: i64;
    let var_c8: i64;
    
    if rdi_3 != 2 && (0xf000 & var_98) == 0x8000 && var_80 <= 0xa00000
    {
        uu_wc::files0_iter_file::hc5b7d8d6cb685047(&var_170, arg2[1], arg2[2]);
        let rdx_3: i64 = var_170;
        let mut result_2: u64 = result_1;
        let mut rcx_2: i64 = var_160;
        let mut rdx_4: i64;
        
        if rdx_3 != -0x7fffffffffffffff
        {
            let var_128: i64;
            let var_d8_1: i64 = var_128;
            let var_138: i128;
            let var_e8_1: i128 = var_138;
            let var_148: i128;
            let var_f8_1: i128 = var_148;
            let var_158: i128;
            let var_108_1: i128 = var_158;
            let mut var_120: i64 = rdx_3;
            let result_4: u64 = result_2;
            let var_110_1: i64 = rcx_2;
            let mut var_188: i64;
            core::iter::traits::iterator::Iterator::collect::h55491619144f5cb3(&var_188, &var_120);
            rdx_4 = var_188;
            let result_3: u64;
            result_2 = result_3;
            let var_178: i64;
            rcx_2 = var_178;
        }
        
        if rdx_3 != -0x7fffffffffffffff && rdx_4 != -0x8000000000000000
        {
            *arg1 = rdx_4;
            arg1[1] = result_2;
            arg1[2] = rcx_2;
            rsi_4 = var_c8;
        }
        else
        {
            arg1[1] = result_2;
            arg1[2] = rcx_2;
            *arg1 = -0x7fffffffffffffff;
            rsi_4 = var_c8;
        }
    }
    else
    {
        *arg1 = -0x8000000000000000;
        rsi_4 = var_c8;
    }
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h92f497ce60e154e1(rdi_3, rsi_4)
}
