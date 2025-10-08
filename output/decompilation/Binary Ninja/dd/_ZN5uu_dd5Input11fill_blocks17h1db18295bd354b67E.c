
  int64_t uu_dd::Input::fill_blocks::h1db18295bd354b67(int64_t* arg1, void* arg2, void* arg3, char arg4)

{
    int64_t r13 = *(arg3 + 0x10);
    int64_t var_d8;
    int64_t rax_6;
    int64_t result;
    int64_t rdx;
    
    if (!r13)
    {
        var_d8 = 0;
        rax_6 = 0;
        rdx = 0;
        *(arg3 + 0x10) = 0;
    }
    else
    {
        void* rbp_1 = arg2;
        int64_t rdi = *(*(arg2 + 8) + 0x70);
        var_d8 = 0;
        int64_t var_c0_1 = 0;
        int64_t r15 = 0;
        rdx = 0;
        
        do
        {
            int64_t rax_3 = core::cmp::Ord::min::h1162548a3a8ea989(rdi + r15, r13);
            int64_t rax_4;
            int64_t rdx_4;
            rax_4 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index_mut::haf08713dd75fcb35(r15, rax_3, *(arg3 + 8), r13);
            void* r12_1 = rbp_1;
            char rax_5;
            int64_t rdx_5;
            rax_5 = _$LT$uu_dd..Input$u20$as$u20$std..io..Read$GT$::read::h4a29ff4f57f9a098(rbp_1, 
                rax_4, rdx_4);
            
            if (rax_5 & 1)
            {
                arg1[1] = rdx_5;
                result = 1;
                goto label_4902ea;
            }
            
            if (!rdx_5)
            {
                r13 = *(arg3 + 0x10);
                break;
            }
            
            int64_t rdx_7 = rax_3 - r15;
            
            if (rdx_7 > rdx_5)
            {
                var_c0_1 += 1;
                void var_b0;
                _$LT$u8$u20$as$u20$alloc..vec..spec_from_elem..SpecFromElem$GT$::from_elem::h06af5c098bf34970(&var_b0, arg4, rdx_7 - rdx_5);
                void var_98;
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h205179070021ab91(&var_98, &var_b0);
                void var_78;
                alloc::vec::Vec$LT$T$C$A$GT$::splice::h643d28211cf1428b(&var_78, arg3, r15 + rdx_5, 
                    rax_3, &var_98);
                core::ptr::drop_in_place$LT$alloc..vec..splice..Splice$LT$alloc..vec..into_iter..IntoIter$LT$u8$GT$$GT$$GT$::h9d1a40dd01e986fb(&var_78);
            }
            else
                var_d8 += 1;
            
            rbp_1 = r12_1;
            rdx += rdx_5;
            rdi = *(*(r12_1 + 8) + 0x70);
            r15 += rdi;
            r13 = *(arg3 + 0x10);
        } while (r15 < r13);
        
        rax_6 = var_c0_1;
        
        if (r15 <= r13)
            *(arg3 + 0x10) = r15;
    }
    
    arg1[1] = var_d8;
    arg1[2] = rax_6;
    arg1[3] = rdx;
    arg1[4] = 0;
    result = 0;
    label_4902ea:
    *arg1 = result;
    return result;
}
