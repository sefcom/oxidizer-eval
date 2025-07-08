
  fn uu_df::table::Table::new::h150da2e8fce38b34(arg1: *mut u128, arg2: *mut c_void, arg3: *mut i64) -> *mut u128

{
    let mut var_500: i128;
    uu_df::table::Header::get_headers::h9deb63aa1bbc7ffc(&var_500, arg2);
    let r14: i64 = *arg2.byte_offset(8);
    let r15: i64 = *arg2.byte_offset(0x10);
    let mut var_4e8: i64 = r14;
    let var_4e0: i64 = r14 + r15;
    let var_4d8: i64 = 0;
    let var_4d0: *mut i128 = &var_500;
    let mut var_518: i128;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hdd0d63c294815eaf(&var_518, &var_4e8);
    let rax_1: *mut i128 = alloc::alloc::Global::alloc_impl::hf61749d460433fff();
    let mut rbp: i64;
    rbp = rax_1 != 0;
    
    if rax_1 == 0
    {
        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1();
        /* no return */
    }
    
    let var_4f0: i64;
    rax_1[1] = var_4f0;
    *rax_1 = var_500;
    let mut var_570: i128;
    alloc::slice::hack::into_vec::h66565a3942fda66c(&var_570, rax_1, 1);
    rbp = 1;
    let mut var_1d8: ();
    uu_df::table::Row::new::h8c73bfba9893cde9(&var_1d8);
    let mut var_4c8: ();
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h3c80df5ce5ec3924(&var_4c8, arg3);
    let mut i: i64;
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h79c16945b7fd0f56(&i, &var_4c8);
    let mut var_4a8: *mut c_void;
    let mut var_3b8: u128;
    let mut var_3a8: i64;
    
    if i != -0x8000000000000000
    {
        let mut var_558: *mut c_void;
        let mut var_540: u128;
        let var_530: i64;
        let mut var_108: ();
        
        if *arg2.byte_offset(0x51) == 0
        {
            do
            {
                memcpy(&var_4a8, &i, 0xe8);
                let var_3f0: i64;
                
                if var_3f0 == 0
                {
                    core::ptr::drop_in_place$LT$uu_df..filesystem..Filesystem$GT$::heb85b8cb09ae29f1(&var_4a8);
                }
                else
                {
                    memcpy(&var_3b8, &i, 0xe8);
                    _$LT$uu_df..table..Row$u20$as$u20$core..convert..From$LT$uu_df..filesystem..Filesystem$GT$$GT$::from::h3abce5fbf3fc5b59(&var_108, &var_3b8);
                    var_558 = &var_108;
                    let var_550_2: *mut c_void = arg2;
                    let var_548_2: i8 = 0;
                    uu_df::table::RowFormatter::get_values::h6dce5b584cdc4209(&var_540, &var_558);
                    memcpy(&var_3b8, &var_108, 0xd0);
                    _$LT$uu_df..table..Row$u20$as$u20$core..ops..arith..AddAssign$GT$::add_assign::h1c84c760c7ffbf98(&var_1d8, &var_3b8);
                    var_3a8 = var_530;
                    var_3b8 = var_540;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::hf89663a6b69570e9(&var_570, &var_3b8);
                }
                
                _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h79c16945b7fd0f56(&i, &var_4c8);
            } while i != -0x8000000000000000;
        }
        else
        {
            do
            {
                memcpy(&var_4a8, &i, 0xe8);
                memcpy(&var_3b8, &i, 0xe8);
                _$LT$uu_df..table..Row$u20$as$u20$core..convert..From$LT$uu_df..filesystem..Filesystem$GT$$GT$::from::h3abce5fbf3fc5b59(&var_108, &var_3b8);
                var_558 = &var_108;
                let var_550_1: *mut c_void = arg2;
                let var_548_1: i8 = 0;
                uu_df::table::RowFormatter::get_values::h6dce5b584cdc4209(&var_540, &var_558);
                memcpy(&var_3b8, &var_108, 0xd0);
                _$LT$uu_df..table..Row$u20$as$u20$core..ops..arith..AddAssign$GT$::add_assign::h1c84c760c7ffbf98(&var_1d8, &var_3b8);
                var_3a8 = var_530;
                var_3b8 = var_540;
                alloc::vec::Vec$LT$T$C$A$GT$::push::hf89663a6b69570e9(&var_570, &var_3b8);
                _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h79c16945b7fd0f56(&i, &var_4c8);
            } while i != -0x8000000000000000;
        }
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$uu_df..filesystem..Filesystem$GT$$GT$::h34738f1f8620436d(&var_4c8);
    let mut var_498: i8;
    
    if *arg2.byte_offset(0x53) != 0
    {
        var_4a8 = &var_1d8;
        let var_4a0_1: *mut c_void = arg2;
        var_498 = 1;
        uu_df::table::RowFormatter::get_values::h6dce5b584cdc4209(&var_3b8, &var_4a8);
        alloc::vec::Vec$LT$T$C$A$GT$::push::hf89663a6b69570e9(&var_570, &var_3b8);
    }
    
    let var_568: *mut c_void;
    var_4a8 = var_568;
    let var_560: i64;
    let var_4a0_2: *mut c_void = var_568.byte_offset(var_560 * 0x18);
    let var_508: i64;
    
    for let mut i_1: *mut c_void = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9feb0d036dbb7b0d(&var_4a8); i_1 != 0; i_1 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9feb0d036dbb7b0d(&var_4a8)
    {
        let rcx_4: i64 = *i_1.byte_offset(8);
        var_3b8 = rcx_4;
        *var_3b8[8] = rcx_4 + *i_1.byte_offset(0x10) * 0x18;
        var_3a8 = 0;
        let mut rax_7: i64;
        let mut j: *mut c_void;
        rax_7 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h168fcdda2a16741a(&var_3b8);
        
        if j != 0
        {
            let mut r15_1: i64 = rax_7;
            
            do
            {
                let r12_1: i64 = *j.byte_offset(8);
                let r13_1: i64 = *j.byte_offset(0x10);
                let rax_9: i64 = unicode_width::str_width::hf245007b39258182(r12_1, r13_1, 0);
                
                if r15_1 >= var_508
                {
                    core::panicking::panic_bounds_check::h25a5330941572dd1(r15_1, var_508);
                    /* no return */
                }
                
                let r14_1: i64 = *var_518[8];
                
                if rax_9 > *(r14_1 + (r15_1 << 3))
                {
                    *(r14_1 + (r15_1 << 3)) =
                        unicode_width::str_width::hf245007b39258182(r12_1, r13_1, 0);
                }
                
                let mut rax_8: i64;
                rax_8 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h168fcdda2a16741a(&var_3b8);
                r15_1 = rax_8;
            } while j != 0;
        }
    }
    
    i = var_570;
    var_498 = var_508;
    var_4a8 = var_518;
    uu_df::table::Table::get_alignments::hd7c942e203dd63ed(&var_3b8, r14, r15);
    arg1[1] = var_3a8;
    *arg1 = var_3b8;
    *arg1.byte_offset(0x18) = i;
    *arg1.byte_offset(0x28) = var_560;
    arg1[3] = var_4a8;
    arg1[4] = var_498;
    core::ptr::drop_in_place$LT$uu_df..table..Row$GT$::h54411b51149585a8(&var_1d8);
    arg1
}
