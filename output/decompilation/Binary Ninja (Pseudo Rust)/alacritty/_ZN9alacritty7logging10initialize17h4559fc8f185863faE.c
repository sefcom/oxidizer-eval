
  fn alacritty::logging::initialize::h4559fc8f185863fa(arg1: *mut i64, arg2: *mut c_void, arg3: *mut i128) -> i64

{
    let rcx: i8 = *arg2.byte_offset(0x1e3);
    let rdx: u32 = *arg2.byte_offset(0x1e4);
    let mut rsi: i64 = 3;
    let mut rax_1: i64;
    let mut cond:0_1: bool;
    
    if rdx == 0
    {
        if *arg2.byte_offset(0x1e0) == 0
        {
            rax_1 = rcx == 1;
            cond:0_1 = rcx != 0;
            rsi = 2;
            'label_85cf54:
            
            if cond:0_1
            {
                rsi = rax_1;
            }
        }
    }
    else if rdx != 1
    {
        if rdx != 2
        {
            rax_1 = rcx == 1;
            cond:0_1 = rcx != 0;
            rsi = 5;
            goto 'label_85cf54;
        }
        
        rsi = 4;
    }
    core::sync::atomic::atomic_store::h01a750bd23f9b0c6(
        &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, rsi);
    let var_168: i128 = arg3[1];
    let mut var_178: i128 = *arg3;
    let mut var_c0: ();
    alacritty::logging::Logger::new::h12092a1bc3938b41(&var_c0, &var_178);
    let mut var_190: i128;
    alacritty::logging::Logger::file_path::he8b6db1c93e0851d(&var_190, &var_c0);
    memcpy(&var_178, &var_c0, 0xb0);
    
    if log::set_boxed_logger::h2b195a68dd82a5ea(
        alloc::boxed::Box$LT$T$GT$::new::h7463630cd21e0489(&var_178), &data_c83030) != 0
    {
        *arg1 = -0x7fffffffffffffff;
        return core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::hce944beccab591c0(&var_190);
    }
    
    let result: i64;
    arg1[2] = result;
    *arg1 = var_190;
    result
}
