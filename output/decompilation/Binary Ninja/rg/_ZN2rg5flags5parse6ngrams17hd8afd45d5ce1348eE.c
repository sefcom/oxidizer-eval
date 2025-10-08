
  int64_t rg::flags::parse::ngrams::hd8afd45d5ce1348e(int128_t* arg1, int16_t* arg2, int64_t arg3)

{
    int64_t var_68;
    int128_t var_50;
    uint64_t r14_1;
    
    if (!arg3)
    {
        uint64_t rax_4 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x18, 0);
        
        if (rax_4)
        {
            r14_1 = rax_4;
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1dbf6ec1d593e24c(&var_50, "!!!internal error: entered unrea…", 3);
            int64_t var_40;
            int64_t var_28_1 = var_40;
            int128_t zmm0_1 = var_50;
            int128_t var_38_1 = zmm0_1;
            *(r14_1 + 0x10) = var_40;
            *r14_1 = zmm0_1;
            label_655aa3:
            var_68 = 1;
            uint64_t var_60_1 = r14_1;
            int64_t var_58_1 = 1;
            return _$LT$alloc..collections..btree..set..BTreeSet$LT$T$GT$$u20$as$u20$core..iter..traits..collect..FromIterator$LT$T$GT$$GT$::from_iter::h58e1dc8f6c845226(arg1, &var_68);
        }
    }
    else
    {
        uint64_t rax_2;
        
        if (arg3 == 1)
        {
            uint64_t rax_3 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x18, 0);
            
            if (rax_3)
            {
                r14_1 = rax_3;
                rax_2 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(1, 3, 0);
                
                if (!rax_2)
                {
                    alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
                    /* no return */
                }
                
                *rax_2 = *arg2;
                *(rax_2 + 1) = 0x2121;
                label_655a3f:
                *r14_1 = 3;
                *(r14_1 + 8) = rax_2;
                *(r14_1 + 0x10) = 3;
                goto label_655aa3;
            }
        }
        else
        {
            if (arg3 != 2)
            {
                var_50 = arg2;
                *var_50[8] = arg3;
                int64_t var_40_1 = 3;
                core::iter::traits::iterator::Iterator::collect::hb279056447b3b5b5(&var_68, 
                    &var_50);
                return _$LT$alloc..collections..btree..set..BTreeSet$LT$T$GT$$u20$as$u20$core..iter..traits..collect..FromIterator$LT$T$GT$$GT$::from_iter::h58e1dc8f6c845226(arg1, &var_68);
            }
            
            uint64_t rax_1 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x18, 0);
            
            if (rax_1)
            {
                r14_1 = rax_1;
                rax_2 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(1, 3, 0);
                
                if (!rax_2)
                {
                    alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
                    /* no return */
                }
                
                *rax_2 = *arg2;
                *(rax_2 + 2) = 0x21;
                goto label_655a3f;
            }
        }
    }
    alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
    /* no return */
}
