
  int64_t uu_dd::Input::fill_blocks::h45cc08a13ee607a5(int64_t* arg1, void* arg2, void* arg3, char arg4)

{
    int64_t r13 = *(arg3 + 0x10);
    int64_t s;
    int64_t var_d0_1;
    int64_t result;
    int64_t* rcx_2;
    int64_t rbx_1;
    int64_t r12;
    
    if (!r13)
    {
        rbx_1 = 0;
        r12 = 0;
        s = 0;
        var_d0_1 = 0;
    }
    else
    {
        int64_t rdi = *(*(arg2 + 8) + 0x70);
        __builtin_memset(&s, 0, 0x18);
        r12 = 0;
        
        do
        {
            int64_t rax_4 = core::cmp::min_by::hf29fead33a8278ec(rdi + r12, r13);
            int64_t rax_5;
            int64_t rdx_2;
            rax_5 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index_mut::h56fc8485fa379185(r12, rax_4, *(arg3 + 8), r13);
            int64_t rax_6;
            int64_t rdx_3;
            rax_6 = _$LT$uu_dd..Input$u20$as$u20$std..io..Read$GT$::read::h91bb47559be41a26(arg2, 
                rax_5, rdx_2);
            
            if (rax_6)
            {
                rcx_2 = arg1;
                rcx_2[1] = rdx_3;
                result = 1;
                goto label_4d7300;
            }
            
            int64_t var_c8;
            
            if (!rdx_3)
            {
                rbx_1 = var_c8;
                break;
            }
            
            int64_t rdx_5 = rax_4 - r12;
            
            if (rdx_5 > rdx_3)
            {
                s += 1;
                void var_b0;
                _$LT$u8$u20$as$u20$alloc..vec..spec_from_elem..SpecFromElem$GT$::from_elem::h1a0e457649d60ac2(&var_b0, arg4, rdx_5 - rdx_3);
                void var_98;
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h9f073f067a0e9b2e(&var_98, &var_b0);
                void var_78;
                alloc::vec::Vec$LT$T$C$A$GT$::splice::h0fd839b9d32da106(&var_78, arg3, r12 + rdx_3, 
                    rax_4, &var_98);
                core::ptr::drop_in_place$LT$alloc..vec..splice..Splice$LT$alloc..vec..into_iter..IntoIter$LT$u8$GT$$GT$$GT$::hfe92d49d1adc9d71(&var_78);
            }
            else
                var_d0_1 += 1;
            
            rbx_1 = var_c8 + rdx_3;
            rdi = *(*(arg2 + 8) + 0x70);
            r12 += rdi;
            r13 = *(arg3 + 0x10);
        } while (r12 < r13);
    }
    
    alloc::vec::Vec$LT$T$C$A$GT$::truncate::h705e1c902b347a7b(arg3, r12);
    rcx_2 = arg1;
    rcx_2[1] = var_d0_1;
    rcx_2[2] = s;
    rcx_2[3] = rbx_1;
    rcx_2[4] = 0;
    result = 0;
    label_4d7300:
    *rcx_2 = result;
    return result;
}
