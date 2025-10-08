
  fn alacritty::event::Processor::run::had5b49b6a9979afd(arg1: *mut c_void, arg2: i64) -> u64

{
    let mut var_8b8: ();
    memcpy(&var_8b8, arg2, 0x8a0);
    let mut var_928: i64;
    winit::platform_impl::linux::EventLoop$LT$T$GT$::run::h2ae877a8c6bee90a(&var_928, &var_8b8);
    let mut result: u64 = *arg1.byte_offset(0x370);
    *arg1.byte_offset(0x378);
    *arg1.byte_offset(0x370) = 0;
    
    if result == 0
    {
        let rax_1: i64 = var_928;
        
        if rax_1 == -0x7ffffffffffffff6
        {
            return 0;
        }
        
        let mut var_8f0: i64 = rax_1;
        let var_920: i128;
        let var_8e8_1: i128 = var_920;
        let var_910: i128;
        let var_8d8_1: i128 = var_910;
        let var_900: i128;
        let var_8c8_1: i128 = var_900;
        result = alloc::boxed::Box$LT$T$GT$::new::h89897c1e19fc2d41(&var_8f0);
    }
    else
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$winit..error..EventLoopError$GT$$GT$::h46f3d5d91273f93a(&var_928);
    }
    
    result
}
