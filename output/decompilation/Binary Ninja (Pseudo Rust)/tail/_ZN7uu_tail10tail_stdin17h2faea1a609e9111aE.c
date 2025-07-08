
  fn uu_tail::tail_stdin::h2faea1a609e9111a(arg1: *mut i64, arg2: *mut i8, arg3: *mut *mut i64, arg4: *mut c_void) -> *mut i128

{
    let mut var_40: i64;
    uu_tail::paths::Input::resolve::h81e1f38162942b9d(&var_40, arg3);
    let mut rbx_1: *mut i128;
    let mut var_b8: i128;
    let var_a8: i64;
    let mut var_88: i128;
    
    if var_40 != -0x8000000000000000
    {
        let mut var_d8: i128 = var_40;
        same_file::Handle::stdin::hcbeef53980d87d0e(&var_b8);
        let var_a4: i8;
        let mut r13_1: i64;
        
        if var_a4 != 2
        {
            let var_78_1: i64 = var_a8;
            var_88 = var_b8;
            let mut rax_4: i64;
            let mut rdx_1: i64;
            rax_4 = _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(
                same_file::Handle::as_file_mut::h942b877c8aa1743b(&var_88), 2, 0);
            let mut var_50: i64 = rax_4;
            let var_48_1: i64 = rdx_1;
            r13_1 = 0;
            
            if rax_4 == 0
            {
                r13_1 = rdx_1;
            }
            
            core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::h93858c9ebe12dc82(&var_50);
            core::ptr::drop_in_place$LT$same_file..Handle$GT$::h3c7dcb0c2c6f5816(&var_88);
            
            if var_a4 == 2
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$same_file..Handle$C$std..io..error..Error$GT$$GT$::h499404730bbf963d(&var_b8);
            }
        }
        else
        {
            r13_1 = 0;
            core::ptr::drop_in_place$LT$core..result..Result$LT$same_file..Handle$C$std..io..error..Error$GT$$GT$::h499404730bbf963d(&var_b8);
        }
        
        let var_30: size_t;
        let mut rax_5: *mut i128;
        let mut rdx_3: i64;
        rax_5 = uu_tail::tail_file::he6a88cf1ecd2d2b4(arg1, arg2, arg3, *var_d8[8], var_30, arg4, 
            r13_1);
        let rdi_12: *mut i128 = &var_d8;
        
        if rax_5 == 0
        {
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b(rdi_12);
            return nullptr;
        }
        
        rbx_1 = rax_5;
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b(rdi_12);
    }
    else
    {
        uu_tail::paths::HeaderPrinter::print_input::hd83f77d6875adb59(arg2, arg3);
        std::io::stdio::stdin::h7215cc131abb55d8();
        std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h4e7e0dc8796ce058(&var_b8, 
            0x2000, &std::io::stdio::stdin::INSTANCE::hd3a98c261e3f14b5);
        let mut rax: *mut i128;
        let mut rdx: i64;
        rax = uu_tail::unbounded_tail::h0ff524f5b27707ea(&var_b8, arg1);
        
        if rax == 0
        {
            let r15_1: i64 = arg3[1];
            let r14_2: u64 = arg3[2];
            let var_98: i128;
            let var_68_1: i128 = var_98;
            let mut var_78: i64;
            var_78 = var_a8;
            var_88 = var_b8;
            let rax_6: *mut i128 = uu_tail::follow::watch::Observer::add_stdin::h52ffe74598bd409c(
                arg4, r15_1, r14_2, alloc::boxed::Box$LT$T$GT$::new::hc4e768c36fc58529(&var_88), 
                &data_5bb9d0, 1);
            
            if rax_6 != 0
            {
                return rax_6;
            }
            
            return nullptr;
        }
        
        rbx_1 = rax;
        core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$std..io..stdio..Stdin$GT$$GT$::hf4f586446f1cde67(&var_b8);
    }
    rbx_1
}
