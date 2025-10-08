
  int128_t* uu_df::table::Table::new::h1ab1638dbdc475f0(int128_t* arg1, void* arg2, int64_t* arg3)

{
    int128_t var_3e0;
    uu_df::table::Header::get_headers::h2b6e3eeea1b48b3e(&var_3e0, arg2);
    void* i_3 = *(arg2 + 8);
    int64_t rbp = *(arg2 + 0x10);
    void* i = i_3;
    void* var_388 = i_3 + rbp;
    int64_t var_380 = 0;
    int128_t* var_378 = &var_3e0;
    int64_t var_438;
    core::iter::traits::iterator::Iterator::collect::h6fc38ef75d149566(&var_438, &i);
    uint64_t rax_1 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x18);
    
    if (!rax_1)
    {
        alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
        /* no return */
    }
    
    int128_t zmm0 = var_3e0;
    int64_t var_3d0;
    *(rax_1 + 0x10) = var_3d0;
    *rax_1 = zmm0;
    int64_t var_450 = 1;
    int64_t var_440 = 1;
    void var_2a8;
    uu_df::table::Row::new::h9186d85196a04d3b(&var_2a8);
    int64_t* var_408 = arg3;
    void var_3c8;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h21e6825ac7f6927e(&var_3c8, arg3);
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0f20750b6c1dd1d2(&i, &var_3c8);
    void* var_1d8;
    
    if (!(0 + -(i)))
    {
        void* var_420;
        void var_3a8;
        void var_108;
        
        if (*(arg2 + 0x51) != 1)
        {
            do
            {
                int64_t var_2d8;
                
                if (!var_2d8)
                    core::ptr::drop_in_place$LT$uu_df..filesystem..Filesystem$GT$::h59dcd820d6503e9b(&i);
                else
                {
                    _$LT$uu_df..table..Row$u20$as$u20$core..convert..From$LT$uu_df..filesystem..Filesystem$GT$$GT$::from::h5bb8f604f83ef093(&var_108, &i);
                    var_420 = &var_108;
                    void* var_418_2 = arg2;
                    char var_410_2 = 0;
                    uu_df::table::RowFormatter::get_values::hdf51f7a80eb4184b(&var_3a8, &var_420);
                    memcpy(&var_1d8, &var_108, 0xd0);
                    _$LT$uu_df..table..Row$u20$as$u20$core..ops..arith..AddAssign$GT$::add_assign::hc07f7a0b7d63dbc9(&var_2a8, &var_1d8);
                    alloc::vec::Vec$LT$T$C$A$GT$::push::hce097b6b3d6d1bdf(&var_450, &var_3a8);
                }
                
                _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0f20750b6c1dd1d2(&i, &var_3c8);
            } while (i != -0x8000000000000000);
        }
        else
        {
            do
            {
                _$LT$uu_df..table..Row$u20$as$u20$core..convert..From$LT$uu_df..filesystem..Filesystem$GT$$GT$::from::h5bb8f604f83ef093(&var_108, &i);
                var_420 = &var_108;
                void* var_418_1 = arg2;
                char var_410_1 = 0;
                uu_df::table::RowFormatter::get_values::hdf51f7a80eb4184b(&var_3a8, &var_420);
                memcpy(&var_1d8, &var_108, 0xd0);
                _$LT$uu_df..table..Row$u20$as$u20$core..ops..arith..AddAssign$GT$::add_assign::hc07f7a0b7d63dbc9(&var_2a8, &var_1d8);
                alloc::vec::Vec$LT$T$C$A$GT$::push::hce097b6b3d6d1bdf(&var_450, &var_3a8);
                _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0f20750b6c1dd1d2(&i, &var_3c8);
            } while (i != -0x8000000000000000);
        }
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$uu_df..filesystem..Filesystem$GT$$GT$::hd711030a980c8f88(&var_3c8);
    
    if (*(arg2 + 0x53))
    {
        var_1d8 = &var_2a8;
        void* var_1d0_1 = arg2;
        char var_1c8_1 = 1;
        uu_df::table::RowFormatter::get_values::hdf51f7a80eb4184b(&i, &var_1d8);
        alloc::vec::Vec$LT$T$C$A$GT$::push::hce097b6b3d6d1bdf(&var_450, &i);
    }
    
    int64_t rbp_1;
    int64_t r13_1;
    int64_t var_430;
    int64_t var_428;
    
    if (!var_440)
    {
        r13_1 = var_430;
        rbp_1 = var_428;
    }
    else
    {
        uint64_t r12 = rax_1;
        int64_t rax_4 = r12 + var_440 * 0x18;
        uint64_t rax_5 = r12 + 0x18;
        r13_1 = var_430;
        rbp_1 = var_428;
        
        do
        {
            void* i_2 = *(r12 + 8);
            int64_t rdx_2 = *(r12 + 0x10);
            r12 = rax_5;
            i = i_2;
            void* var_388_1 = i_2 + rdx_2 * 0x18;
            var_380 = 0;
            int64_t rax_8;
            void* i_5;
            rax_8 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9f2ee3703a036410(&i);
            
            if (i_5)
            {
                int64_t r14_1 = rax_8;
                void* i_4 = i_5;
                void* i_1;
                
                do
                {
                    *(i_4 + 0x10);
                    int64_t rax_10 = core::iter::traits::double_ended::DoubleEndedIterator::rfold::h29668c6b9213f166(*(i_4 + 8));
                    
                    if (r14_1 >= rbp_1)
                    {
                        core::panicking::panic_bounds_check::h025cadc56a971af7(r14_1, rbp_1);
                        /* no return */
                    }
                    
                    if (rax_10 > *(r13_1 + (r14_1 << 3)))
                    {
                        *(i_4 + 0x10);
                        *(r13_1 + (r14_1 << 3)) = core::iter::traits::double_ended::DoubleEndedIterator::rfold::h29668c6b9213f166(*(i_4 + 8));
                    }
                    
                    int64_t rax_9;
                    rax_9 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9f2ee3703a036410(&i);
                    r14_1 = rax_9;
                    i_4 = i_1;
                } while (i_1);
            }
            
            rax_5 = r12 + 0x18;
            
            if (r12 == rax_4)
                rax_5 = r12;
        } while (r12 != rax_4);
    }
    int64_t rbx = var_438;
    uu_df::table::Table::get_alignments::h30bf81e1dc4abfc2(&i, i_3, rbp);
    arg1[1] = var_380;
    *arg1 = i;
    *(arg1 + 0x18) = var_450;
    *(arg1 + 0x28) = var_440;
    arg1[3] = rbx;
    *(arg1 + 0x38) = r13_1;
    arg1[4] = rbp_1;
    core::ptr::drop_in_place$LT$uu_df..table..Row$GT$::hd2993f597084129f(&var_2a8);
    return arg1;
}
