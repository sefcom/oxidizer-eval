
  uint64_t alacritty::renderer::rects::RenderLines::update_flag::h62af8ecea741a94a(int64_t* arg1, int64_t* arg2, int32_t arg3)

{
    int16_t var_92 = arg3;
    uint64_t result = arg2[4];
    
    if (!(arg3 & ~result))
    {
        void* rcx_2 = arg2 + 0x24;
        void* r9_1 = arg2 + 0x29;
        int32_t temp0_1 = arg3 & 0x200;
        
        if (!temp0_1)
            rcx_2 = arg2 + 0x2a;
        
        if (temp0_1)
            r9_1 = arg2 + 0x23;
        
        void* rdx = &arg2[5];
        
        if (temp0_1)
            rdx = arg2 + 0x22;
        
        char rbx_1 = *rdx;
        char rbp_1 = *r9_1;
        char r14_1 = *rcx_2;
        int64_t r12_1 = *arg2;
        int64_t r15_1 = arg2[1];
        int64_t r13_2 = r15_1 + 0;
        void* rax = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner_mut::h63a5f0020c355a4d(
            arg1, &var_92);
        
        if (!rax)
        {
            label_862616:
            int64_t var_88 = r12_1;
            int64_t var_80_1 = r15_1;
            int64_t var_70_1 = r13_2;
            char var_67_1 = rbp_1;
            char var_66_1 = r14_1;
            void* rax_2 =
                hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner_mut::h63a5f0020c355a4d(
                arg1, &var_92);
            
            if (rax_2)
                return alloc::vec::Vec$LT$T$C$A$GT$::push::heb08c3e06618e7bc(rax_2 + 8, &var_88);
            
            uint64_t rax_4 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x28, 0);
            
            if (!rax_4)
            {
                alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
                /* no return */
            }
            
            *(rax_4 + 0x20) = rbx_1;
            int128_t zmm0_1 = var_88;
            *(rax_4 + 0x10) = r12_1;
            *rax_4 = zmm0_1;
            int64_t var_60 = 1;
            uint64_t var_58_1 = rax_4;
            int64_t var_50_1 = 1;
            int64_t var_48;
            hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h05a4b789ce394c61(&var_48, arg1, 
                var_92, &var_60);
            int64_t var_40;
            return core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..vec..Vec$LT$alacritty..renderer..rects..RenderLine$GT$$GT$$GT$::h4e7e786c116508c1(var_48, var_40);
        }
        
        int64_t rcx_3 = *(rax + 0x18);
        
        if (!rcx_3)
            goto label_862616;
        
        void* rcx_6 = rcx_3 * 0x28 + *(rax + 0x10);
        
        if (rcx_6 == 0x28 || rbx_1 != *(rcx_6 - 8) || rbp_1 != *(rcx_6 - 7)
                || r14_1 != *(rcx_6 - 6))
            goto label_862616;
        
        result = *(rcx_6 - 0x10) + 1;
        
        if (r15_1 != result || r12_1 != *(rcx_6 - 0x18))
            goto label_862616;
        
        *(rcx_6 - 0x10) = r13_2;
    }
    
    return result;
}
