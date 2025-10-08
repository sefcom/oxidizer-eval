
  int64_t uu_more::Pager::new::h47a9bf468cd5af2f(int64_t* arg1, int64_t* arg2, int16_t arg3, int64_t* arg4)

{
    int64_t* r15 = arg4;
    int64_t var_80;
    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hf77cf67876c263be(&var_80, 
        arg2);
    uint64_t r13 = alloc::boxed::Box$LT$T$GT$::new::h3b1064158fd98561(&var_80);
    uint64_t rax_1 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 8);
    
    if (!rax_1)
    {
        alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
        /* no return */
    }
    
    *rax_1 = 0;
    int64_t var_a8 = 1;
    int64_t var_98 = 1;
    var_80 = 0;
    uint64_t var_78 = 1;
    int64_t* var_38 = r15;
    int64_t rbx;
    int64_t* rbp_1;
    int64_t rdx;
    
    if (!(0 + -(*r15)))
    {
        uint64_t r13_1 = r15[2];
        
        if (!r13_1)
        {
            rbx = 0;
            r15 = &var_a8;
            int64_t r12_2 = 0;
            rbp_1 = nullptr;
            
            while (true)
            {
                int64_t var_70_3 = 0;
                char rax_5;
                rax_5 = std::io::append_to_string::heca66a3d4abc446c(&var_80, r13);
                
                if (rax_5 & 1)
                    goto label_472193;
                
                if (!rdx)
                    break;
                
                r12_2 += rdx;
                alloc::vec::Vec$LT$T$C$A$GT$::push::h757588eaf91d0364(&var_a8, r12_2);
                rbp_1 += 1;
            }
        }
        else
        {
            char* r14_1 = r15[1];
            rbx = 0;
            int64_t r12_1 = 0;
            rbp_1 = nullptr;
            
            while (true)
            {
                void* var_70_2 = nullptr;
                char rax_3;
                rax_3 = std::io::append_to_string::heca66a3d4abc446c(&var_80, r13);
                
                if (rax_3 & 1)
                    goto label_472193;
                
                if (!rdx)
                    break;
                
                r12_1 += rdx;
                alloc::vec::Vec$LT$T$C$A$GT$::push::h757588eaf91d0364(&var_a8, r12_1);
                
                if (rbx)
                {
                    rbp_1 += 1;
                    
                    while (true)
                    {
                        int64_t var_70_4 = 0;
                        char rax_6;
                        rax_6 = std::io::append_to_string::heca66a3d4abc446c(&var_80, r13);
                        
                        if (rax_6 & 1)
                            goto label_472193;
                        
                        if (!rdx)
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
                
                char rax_4 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::hff4183d19d767429(r14_1, r13_1, var_78, var_70_2);
                
                if (rax_4)
                    r15 = rbp_1;
                
                if (rax_4)
                    rbx = 1;
                
                rbp_1 += 1;
            }
        }
    }
    else
    {
        rbx = 0;
        r15 = &var_a8;
        int64_t r12 = 0;
        rbp_1 = nullptr;
        
        while (true)
        {
            int64_t var_70_1 = 0;
            char rax_2;
            rax_2 = std::io::append_to_string::heca66a3d4abc446c(&var_80, r13);
            
            if (rax_2 & 1)
                goto label_472193;
            
            if (!rdx)
                break;
            
            rbp_1 += 1;
            r12 += rdx;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h757588eaf91d0364(&var_a8, r12);
        }
    }
    
    if (std::io::Seek::rewind::h94046bf5fb21e5d5(r13))
    {
        label_472193:
        arg1[1] = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
        arg1[2] = &data_526ba8;
        *arg1 = 2;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h252ce3d2b34612c7(var_80, var_78);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u64$GT$$GT$::h4c16795df9b5d41d(var_a8, 
            rax_1);
        return core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$std..io..buffered..bufreader..BufReader$LT$std..io..cursor..Cursor$LT$alloc..string..String$GT$$GT$$GT$$GT$::ha655b3afb2736741(r13);
    }
    
    int16_t rcx_2 = arg3 - 1;
    
    if (arg3 < 1)
        rcx_2 = 0;
    
    uint64_t r14_2 = rcx_2;
    int64_t rax_10 = var_38[3];
    int64_t rax_11;
    int64_t rdx_2;
    rax_11 =
        alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h8d8ba4d4acd59853(r14_2, 8, 0x18);
    arg1[7] = var_98;
    *(arg1 + 0x28) = var_a8;
    int16_t rcx_5 = *(var_38 + 0x26);
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
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h252ce3d2b34612c7(var_80, var_78);
}
