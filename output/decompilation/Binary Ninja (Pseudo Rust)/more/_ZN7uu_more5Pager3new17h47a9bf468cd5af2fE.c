
  fn uu_more::Pager::new::h47a9bf468cd5af2f(arg1: *mut i64, arg2: *mut i64, arg3: i16, arg4: *mut i64) -> i64

{
    let mut r15: *mut i64 = arg4;
    let mut var_80: i64;
    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hf77cf67876c263be(&var_80, 
        arg2);
    let r13: u64 = alloc::boxed::Box$LT$T$GT$::new::h3b1064158fd98561(&var_80);
    let rax_1: u64 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 8);
    
    if rax_1 == 0
    {
        alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
        /* no return */
    }
    
    *rax_1 = 0;
    let mut var_a8: i64 = 1;
    let var_98: i64 = 1;
    var_80 = 0;
    let var_78: u64 = 1;
    let var_38: *mut i64 = r15;
    let mut rbx: i64;
    let mut rbp_1: *mut i64;
    let mut rdx: i64;
    
    if !(0 + -(*r15))
    {
        let r13_1: u64 = r15[2];
        
        if r13_1 == 0
        {
            rbx = 0;
            r15 = &var_a8;
            let mut r12_2: i64 = 0;
            rbp_1 = nullptr;
            
            loop
            {
                let var_70_3: i64 = 0;
                let mut rax_5: i8;
                rax_5 = std::io::append_to_string::heca66a3d4abc446c(&var_80, r13);
                
                if (rax_5 & 1) != 0
                {
                    goto 'label_472193;
                }
                
                if rdx == 0
                {
                    break;
                }
                
                r12_2 += rdx;
                alloc::vec::Vec$LT$T$C$A$GT$::push::h757588eaf91d0364(&var_a8, r12_2);
                rbp_1 += 1;
            }
        }
        else
        {
            let r14_1: *mut i8 = r15[1];
            rbx = 0;
            let mut r12_1: i64 = 0;
            rbp_1 = nullptr;
            
            loop
            {
                let var_70_2: *mut c_void = nullptr;
                let mut rax_3: i8;
                rax_3 = std::io::append_to_string::heca66a3d4abc446c(&var_80, r13);
                
                if (rax_3 & 1) != 0
                {
                    goto 'label_472193;
                }
                
                if rdx == 0
                {
                    break;
                }
                
                r12_1 += rdx;
                alloc::vec::Vec$LT$T$C$A$GT$::push::h757588eaf91d0364(&var_a8, r12_1);
                
                if rbx != 0
                {
                    rbp_1 += 1;
                    
                    loop
                    {
                        let var_70_4: i64 = 0;
                        let mut rax_6: i8;
                        rax_6 = std::io::append_to_string::heca66a3d4abc446c(&var_80, r13);
                        
                        if (rax_6 & 1) != 0
                        {
                            goto 'label_472193;
                        }
                        
                        if rdx == 0
                        {
                            rbx = 1;
                            break;
                        }
                        
                        r12_1 += rdx;
                        alloc::vec::Vec$LT$T$C$A$GT$::push::h757588eaf91d0364(&var_a8, r12_1);
                        rbp_1 += 1;
                    }
                    
                    break;
                }
                
                let rax_4: i8 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::hff4183d19d767429(r14_1, r13_1, var_78, var_70_2);
                
                if rax_4 != 0
                {
                    r15 = rbp_1;
                }
                
                if rax_4 != 0
                {
                    rbx = 1;
                }
                
                rbp_1 += 1;
            }
        }
    }
    else
    {
        rbx = 0;
        r15 = &var_a8;
        let mut r12: i64 = 0;
        rbp_1 = nullptr;
        
        loop
        {
            let var_70_1: i64 = 0;
            let mut rax_2: i8;
            rax_2 = std::io::append_to_string::heca66a3d4abc446c(&var_80, r13);
            
            if (rax_2 & 1) != 0
            {
                goto 'label_472193;
            }
            
            if rdx == 0
            {
                break;
            }
            
            rbp_1 += 1;
            r12 += rdx;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h757588eaf91d0364(&var_a8, r12);
        }
    }
    
    if std::io::Seek::rewind::h94046bf5fb21e5d5(r13) != 0
    {
        'label_472193:
        arg1[1] = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
        arg1[2] = &data_526ba8;
        *arg1 = 2;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h252ce3d2b34612c7(var_80, var_78);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u64$GT$$GT$::h4c16795df9b5d41d(var_a8, 
            rax_1);
        return core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$std..io..buffered..bufreader..BufReader$LT$std..io..cursor..Cursor$LT$alloc..string..String$GT$$GT$$GT$$GT$::ha655b3afb2736741(r13);
    }
    
    let mut rcx_2: i16 = arg3 - 1;
    
    if arg3 < 1
    {
        rcx_2 = 0;
    }
    
    let r14_2: u64 = rcx_2;
    let rax_10: i64 = var_38[3];
    let mut rax_11: i64;
    let mut rdx_2: i64;
    rax_11 =
        alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h8d8ba4d4acd59853(r14_2, 8, 0x18);
    arg1[7] = var_98;
    *arg1.byte_offset(0x28) = var_a8;
    let rcx_5: i16 = *var_38.byte_offset(0x26);
    *arg1 = rbx;
    arg1[1] = r15;
    arg1[2] = rax_11;
    arg1[3] = rdx_2;
    arg1[4] = 0;
    arg1[8] = r13;
    arg1[9] = &data_5240e0;
    arg1[0xa] = rax_10;
    arg1[0xb] = r14_2;
    arg1[0xc] = 0;
    arg1[0xe] = rbp_1;
    arg1[0xf] = 0;
    arg1[0x10] = rcx_5;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h252ce3d2b34612c7(var_80, var_78)
}
