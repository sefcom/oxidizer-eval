
  fn rg::flags::parse::ngrams::hd8afd45d5ce1348e(arg1: *mut i128, arg2: *mut i16, arg3: i64) -> i64

{
    let mut var_68: i64;
    let mut var_50: i128;
    let mut r14_1: u64;
    
    if arg3 == 0
    {
        let rax_4: u64 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x18, 0);
        
        if rax_4 != 0
        {
            r14_1 = rax_4;
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1dbf6ec1d593e24c(&var_50, "!!!internal error: entered unrea…", 3);
            let var_40: i64;
            let var_28_1: i64 = var_40;
            let zmm0_1: i128 = var_50;
            let var_38_1: i128 = zmm0_1;
            *(r14_1 + 0x10) = var_40;
            *r14_1 = zmm0_1;
            'label_655aa3:
            var_68 = 1;
            let var_60_1: u64 = r14_1;
            let var_58_1: i64 = 1;
            return _$LT$alloc..collections..btree..set..BTreeSet$LT$T$GT$$u20$as$u20$core..iter..traits..collect..FromIterator$LT$T$GT$$GT$::from_iter::h58e1dc8f6c845226(arg1, &var_68);
        }
    }
    else
    {
        let mut rax_2: u64;
        
        if arg3 == 1
        {
            let rax_3: u64 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x18, 0);
            
            if rax_3 != 0
            {
                r14_1 = rax_3;
                rax_2 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(1, 3, 0);
                
                if rax_2 == 0
                {
                    alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
                    /* no return */
                }
                
                *rax_2 = *arg2;
                *(rax_2 + 1) = 0x2121;
                'label_655a3f:
                *r14_1 = 3;
                *(r14_1 + 8) = rax_2;
                *(r14_1 + 0x10) = 3;
                goto 'label_655aa3;
            }
        }
        else
        {
            if arg3 != 2
            {
                var_50 = arg2;
                *var_50[8] = arg3;
                let var_40_1: i64 = 3;
                core::iter::traits::iterator::Iterator::collect::hb279056447b3b5b5(&var_68, 
                    &var_50);
                return _$LT$alloc..collections..btree..set..BTreeSet$LT$T$GT$$u20$as$u20$core..iter..traits..collect..FromIterator$LT$T$GT$$GT$::from_iter::h58e1dc8f6c845226(arg1, &var_68);
            }
            
            let rax_1: u64 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x18, 0);
            
            if rax_1 != 0
            {
                r14_1 = rax_1;
                rax_2 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(1, 3, 0);
                
                if rax_2 == 0
                {
                    alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
                    /* no return */
                }
                
                *rax_2 = *arg2;
                *(rax_2 + 2) = 0x21;
                goto 'label_655a3f;
            }
        }
    }
    alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
    /* no return */
}
