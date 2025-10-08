
  fn uu_df::table::Table::new::h1ab1638dbdc475f0(arg1: *mut i128, arg2: *mut c_void, arg3: *mut i64) -> *mut i128

{
    let mut var_3e0: i128;
    uu_df::table::Header::get_headers::h2b6e3eeea1b48b3e(&var_3e0, arg2);
    let i_3: *mut c_void = *arg2.byte_offset(8);
    let rbp: i64 = *arg2.byte_offset(0x10);
    let mut i: *mut c_void = i_3;
    let var_388: *mut c_void = i_3.byte_offset(rbp);
    let mut var_380: i64 = 0;
    let var_378: *mut i128 = &var_3e0;
    let mut var_438: i64;
    core::iter::traits::iterator::Iterator::collect::h6fc38ef75d149566(&var_438, &i);
    let rax_1: u64 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x18);
    
    if rax_1 == 0
    {
        alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
        /* no return */
    }
    
    let zmm0: i128 = var_3e0;
    let var_3d0: i64;
    *(rax_1 + 0x10) = var_3d0;
    *rax_1 = zmm0;
    let mut var_450: i64 = 1;
    let var_440: i64 = 1;
    let mut var_2a8: ();
    uu_df::table::Row::new::h9186d85196a04d3b(&var_2a8);
    let var_408: *mut i64 = arg3;
    let mut var_3c8: ();
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h21e6825ac7f6927e(&var_3c8, arg3);
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0f20750b6c1dd1d2(&i, &var_3c8);
    let mut var_1d8: *mut c_void;
    
    if !(0 + -(i))
    {
        let mut var_420: *mut c_void;
        let mut var_3a8: ();
        let mut var_108: ();
        
        if *arg2.byte_offset(0x51) != 1
        {
            do
            {
                let var_2d8: i64;
                
                if var_2d8 == 0
                {
                    core::ptr::drop_in_place$LT$uu_df..filesystem..Filesystem$GT$::h59dcd820d6503e9b(&i);
                }
                else
                {
                    _$LT$uu_df..table..Row$u20$as$u20$core..convert..From$LT$uu_df..filesystem..Filesystem$GT$$GT$::from::h5bb8f604f83ef093(&var_108, &i);
                    var_420 = &var_108;
                    let var_418_2: *mut c_void = arg2;
                    let var_410_2: i8 = 0;
                    uu_df::table::RowFormatter::get_values::hdf51f7a80eb4184b(&var_3a8, &var_420);
                    memcpy(&var_1d8, &var_108, 0xd0);
                    _$LT$uu_df..table..Row$u20$as$u20$core..ops..arith..AddAssign$GT$::add_assign::hc07f7a0b7d63dbc9(&var_2a8, &var_1d8);
                    alloc::vec::Vec$LT$T$C$A$GT$::push::hce097b6b3d6d1bdf(&var_450, &var_3a8);
                }
                
                _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0f20750b6c1dd1d2(&i, &var_3c8);
            } while i != -0x8000000000000000;
        }
        else
        {
            do
            {
                _$LT$uu_df..table..Row$u20$as$u20$core..convert..From$LT$uu_df..filesystem..Filesystem$GT$$GT$::from::h5bb8f604f83ef093(&var_108, &i);
                var_420 = &var_108;
                let var_418_1: *mut c_void = arg2;
                let var_410_1: i8 = 0;
                uu_df::table::RowFormatter::get_values::hdf51f7a80eb4184b(&var_3a8, &var_420);
                memcpy(&var_1d8, &var_108, 0xd0);
                _$LT$uu_df..table..Row$u20$as$u20$core..ops..arith..AddAssign$GT$::add_assign::hc07f7a0b7d63dbc9(&var_2a8, &var_1d8);
                alloc::vec::Vec$LT$T$C$A$GT$::push::hce097b6b3d6d1bdf(&var_450, &var_3a8);
                _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0f20750b6c1dd1d2(&i, &var_3c8);
            } while i != -0x8000000000000000;
        }
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$uu_df..filesystem..Filesystem$GT$$GT$::hd711030a980c8f88(&var_3c8);
    
    if *arg2.byte_offset(0x53) != 0
    {
        var_1d8 = &var_2a8;
        let var_1d0_1: *mut c_void = arg2;
        let var_1c8_1: i8 = 1;
        uu_df::table::RowFormatter::get_values::hdf51f7a80eb4184b(&i, &var_1d8);
        alloc::vec::Vec$LT$T$C$A$GT$::push::hce097b6b3d6d1bdf(&var_450, &i);
    }
    
    let mut rbp_1: i64;
    let mut r13_1: i64;
    let var_430: i64;
    let var_428: i64;
    
    if var_440 == 0
    {
        r13_1 = var_430;
        rbp_1 = var_428;
    }
    else
    {
        let mut r12: u64 = rax_1;
        let rax_4: i64 = r12 + var_440 * 0x18;
        let mut rax_5: u64 = r12 + 0x18;
        r13_1 = var_430;
        rbp_1 = var_428;
        
        do
        {
            let i_2: *mut c_void = *(r12 + 8);
            let rdx_2: i64 = *(r12 + 0x10);
            r12 = rax_5;
            i = i_2;
            let var_388_1: *mut c_void = i_2.byte_offset(rdx_2 * 0x18);
            var_380 = 0;
            let mut rax_8: i64;
            let mut i_5: *mut c_void;
            rax_8 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9f2ee3703a036410(&i);
            
            if i_5 != 0
            {
                let mut r14_1: i64 = rax_8;
                let mut i_4: *mut c_void = i_5;
                let mut i_1: *mut c_void;
                
                do
                {
                    *i_4.byte_offset(0x10);
                    let rax_10: i64 = core::iter::traits::double_ended::DoubleEndedIterator::rfold::h29668c6b9213f166(*i_4.byte_offset(8));
                    
                    if r14_1 >= rbp_1
                    {
                        core::panicking::panic_bounds_check::h025cadc56a971af7(r14_1, rbp_1);
                        /* no return */
                    }
                    
                    if rax_10 > *(r13_1 + (r14_1 << 3))
                    {
                        *i_4.byte_offset(0x10);
                        *(r13_1 + (r14_1 << 3)) = core::iter::traits::double_ended::DoubleEndedIterator::rfold::h29668c6b9213f166(*i_4.byte_offset(8));
                    }
                    
                    let mut rax_9: i64;
                    rax_9 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9f2ee3703a036410(&i);
                    r14_1 = rax_9;
                    i_4 = i_1;
                } while i_1 != 0;
            }
            
            rax_5 = r12 + 0x18;
            
            if r12 == rax_4
            {
                rax_5 = r12;
            }
        } while r12 != rax_4;
    }
    let rbx: i64 = var_438;
    uu_df::table::Table::get_alignments::h30bf81e1dc4abfc2(&i, i_3, rbp);
    arg1[1] = var_380;
    *arg1 = i;
    *arg1.byte_offset(0x18) = var_450;
    *arg1.byte_offset(0x28) = var_440;
    arg1[3] = rbx;
    *arg1.byte_offset(0x38) = r13_1;
    arg1[4] = rbp_1;
    core::ptr::drop_in_place$LT$uu_df..table..Row$GT$::hd2993f597084129f(&var_2a8);
    arg1
}
