
  fn alacritty::renderer::rects::RenderLines::update_flag::h62af8ecea741a94a(arg1: *mut i64, arg2: *mut i64, arg3: i32) -> u64

{
    let mut var_92: i16 = arg3;
    let mut result: u64 = arg2[4];
    
    if (arg3 & !result) == 0
    {
        let mut rcx_2: *mut c_void = arg2.byte_offset(0x24);
        let mut r9_1: *mut c_void = arg2.byte_offset(0x29);
        let temp0_1: i32 = arg3 & 0x200;
        
        if temp0_1 == 0
        {
            rcx_2 = arg2.byte_offset(0x2a);
        }
        
        if temp0_1 != 0
        {
            r9_1 = arg2.byte_offset(0x23);
        }
        
        let mut rdx: *mut c_void = &arg2[5];
        
        if temp0_1 != 0
        {
            rdx = arg2.byte_offset(0x22);
        }
        
        let rbx_1: i8 = *rdx;
        let rbp_1: i8 = *r9_1;
        let r14_1: i8 = *rcx_2;
        let r12_1: i64 = *arg2;
        let r15_1: i64 = arg2[1];
        let r13_2: i64 = r15_1 + 0;
        let rax: *mut c_void =
            hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner_mut::h63a5f0020c355a4d(arg1, 
            &var_92);
        
        if rax == 0
        {
            'label_862616:
            let mut var_88: i64 = r12_1;
            let var_80_1: i64 = r15_1;
            let var_70_1: i64 = r13_2;
            let var_67_1: i8 = rbp_1;
            let var_66_1: i8 = r14_1;
            let rax_2: *mut c_void =
                hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner_mut::h63a5f0020c355a4d(
                arg1, &var_92);
            
            if rax_2 != 0
            {
                return alloc::vec::Vec$LT$T$C$A$GT$::push::heb08c3e06618e7bc(rax_2.byte_offset(8), 
                    &var_88);
            }
            
            let rax_4: u64 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x28, 0);
            
            if rax_4 == 0
            {
                alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
                /* no return */
            }
            
            *(rax_4 + 0x20) = rbx_1;
            let zmm0_1: i128 = var_88;
            *(rax_4 + 0x10) = r12_1;
            *rax_4 = zmm0_1;
            let mut var_60: i64 = 1;
            let var_58_1: u64 = rax_4;
            let var_50_1: i64 = 1;
            let mut var_48: i64;
            hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h05a4b789ce394c61(&var_48, arg1, 
                var_92, &var_60);
            let var_40: i64;
            return core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..vec..Vec$LT$alacritty..renderer..rects..RenderLine$GT$$GT$$GT$::h4e7e786c116508c1(var_48, var_40);
        }
        
        let rcx_3: i64 = *rax.byte_offset(0x18);
        
        if rcx_3 == 0
        {
            goto 'label_862616;
        }
        
        let rcx_6: *mut c_void = rcx_3 * 0x28 + *rax.byte_offset(0x10);
        
        if rcx_6 == 0x28 || rbx_1 != *rcx_6.byte_offset(-8) || rbp_1 != *rcx_6.byte_offset(-7)
            || r14_1 != *rcx_6.byte_offset(-6)
        {
            goto 'label_862616;
        }
        
        result = *rcx_6.byte_offset(-0x10) + 1;
        
        if r15_1 != result || r12_1 != *rcx_6.byte_offset(-0x18)
        {
            goto 'label_862616;
        }
        
        *rcx_6.byte_offset(-0x10) = r13_2;
    }
    
    result
}
