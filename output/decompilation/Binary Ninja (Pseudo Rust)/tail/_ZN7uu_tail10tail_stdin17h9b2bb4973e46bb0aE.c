
  fn uu_tail::tail_stdin::h9b2bb4973e46bb0a(arg1: *mut i64, arg2: *mut i8, arg3: *mut *mut i64, arg4: *mut c_void) -> u64

{
    let mut var_48: i64;
    uu_tail::paths::Input::resolve::h84f3e048eaef79fb(&var_48, arg3);
    let rbx: i64 = var_48;
    let mut rbx_2: u64;
    let mut var_c0: i128;
    let var_b0: i64;
    let mut var_88: i128;
    
    if -(rbx) != -0x8000000000000000
    {
        same_file::Handle::stdin::h12b97f800844609d(&var_c0);
        let var_ac: i8;
        let mut r14_2: i64;
        
        if var_ac != 2
        {
            let var_78_1: i64 = var_b0;
            var_88 = var_c0;
            let mut rax_7: i64;
            let mut rdx_2: i64;
            rax_7 =
                _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::stream_position::hea3f1471eccd6c38(
                same_file::Handle::as_file_mut::hcd780b03a6979da7(&var_88));
            let mut var_58: i64 = rax_7;
            let var_50_1: i64 = rdx_2;
            r14_2 = 0;
            
            if (rax_7 & 1) == 0
            {
                r14_2 = rdx_2;
            }
            
            core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::hdbd92671f07abc68(&var_58);
            core::ptr::drop_in_place$LT$same_file..Handle$GT$::hfc3648d48d8d9f0a(&var_88);
            
            if var_ac == 2
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$same_file..Handle$C$std..io..error..Error$GT$$GT$::h399f1d3fde9c021a(&var_c0);
            }
        }
        else
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$same_file..Handle$C$std..io..error..Error$GT$$GT$::h399f1d3fde9c021a(&var_c0);
            r14_2 = 0;
        }
        
        let var_40: *mut i8;
        let var_38: u64;
        let mut rax_8: u64;
        let mut rdx_4: i64;
        rax_8 =
            uu_tail::tail_file::h810e2a2864f554f6(arg1, arg2, arg3, var_40, var_38, arg4, r14_2);
        
        if rax_8 == 0
        {
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h23581330bde049a4(rbx, var_40);
            return 0;
        }
        
        rbx_2 = rax_8;
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h23581330bde049a4(rbx, var_40);
    }
    else
    {
        let rbx_1: i64 = arg3[1];
        let r14: u64 = arg3[2];
        uu_tail::paths::HeaderPrinter::print_input::hb7a0117faf5241cb(arg2, rbx_1);
        std::io::stdio::stdin::h9a05a2c3e7544b2a();
        std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hdcf64a34c78d9fac(&var_c0, 
            &std::io::stdio::stdin::INSTANCE::heccb3522b341563b);
        let mut rax_2: u64;
        let mut rdx_1: i64;
        rax_2 = uu_tail::unbounded_tail::hcfcdcf7b136f8669(&var_c0, arg1);
        
        if rax_2 == 0
        {
            let var_a0: i128;
            let var_68_1: i128 = var_a0;
            let mut var_78: i64;
            var_78 = var_b0;
            var_88 = var_c0;
            let rax_9: u64 = uu_tail::follow::watch::Observer::add_stdin::h786ed50fcd53f701(arg4, 
                rbx_1, r14, alloc::boxed::Box$LT$T$GT$::new::h45ee24b486da6bbe(&var_88));
            
            if rax_9 != 0
            {
                return rax_9;
            }
            
            return 0;
        }
        
        rbx_2 = rax_2;
        core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$std..io..stdio..Stdin$GT$$GT$::h8c3263317abf16b8(&var_c0);
    }
    rbx_2
}
