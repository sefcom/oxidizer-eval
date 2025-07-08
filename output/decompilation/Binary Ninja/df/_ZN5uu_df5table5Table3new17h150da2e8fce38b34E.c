
  uint128_t* uu_df::table::Table::new::h150da2e8fce38b34(uint128_t* arg1, void* arg2, int64_t* arg3)

{
    int128_t var_500;
    uu_df::table::Header::get_headers::h9deb63aa1bbc7ffc(&var_500, arg2);
    int64_t r14 = *(arg2 + 8);
    int64_t r15 = *(arg2 + 0x10);
    int64_t var_4e8 = r14;
    int64_t var_4e0 = r14 + r15;
    int64_t var_4d8 = 0;
    int128_t* var_4d0 = &var_500;
    int128_t var_518;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hdd0d63c294815eaf(&var_518, &var_4e8);
    int128_t* rax_1 = alloc::alloc::Global::alloc_impl::hf61749d460433fff();
    int64_t rbp;
    rbp = rax_1;
    
    if (!rax_1)
    {
        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1();
        /* no return */
    }
    
    int64_t var_4f0;
    rax_1[1] = var_4f0;
    *rax_1 = var_500;
    int128_t var_570;
    alloc::slice::hack::into_vec::h66565a3942fda66c(&var_570, rax_1, 1);
    rbp = 1;
    void var_1d8;
    uu_df::table::Row::new::h8c73bfba9893cde9(&var_1d8);
    void var_4c8;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h3c80df5ce5ec3924(&var_4c8, arg3);
    int64_t i;
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h79c16945b7fd0f56(&i, &var_4c8);
    void* var_4a8;
    uint128_t var_3b8;
    int64_t var_3a8;
    
    if (i != -0x8000000000000000)
    {
        void* var_558;
        uint128_t var_540;
        int64_t var_530;
        void var_108;
        
        if (!*(arg2 + 0x51))
        {
            do
            {
                memcpy(&var_4a8, &i, 0xe8);
                int64_t var_3f0;
                
                if (!var_3f0)
                    core::ptr::drop_in_place$LT$uu_df..filesystem..Filesystem$GT$::heb85b8cb09ae29f1(&var_4a8);
                else
                {
                    memcpy(&var_3b8, &i, 0xe8);
                    _$LT$uu_df..table..Row$u20$as$u20$core..convert..From$LT$uu_df..filesystem..Filesystem$GT$$GT$::from::h3abce5fbf3fc5b59(&var_108, &var_3b8);
                    var_558 = &var_108;
                    void* var_550_2 = arg2;
                    char var_548_2 = 0;
                    uu_df::table::RowFormatter::get_values::h6dce5b584cdc4209(&var_540, &var_558);
                    memcpy(&var_3b8, &var_108, 0xd0);
                    _$LT$uu_df..table..Row$u20$as$u20$core..ops..arith..AddAssign$GT$::add_assign::h1c84c760c7ffbf98(&var_1d8, &var_3b8);
                    var_3a8 = var_530;
                    var_3b8 = var_540;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::hf89663a6b69570e9(&var_570, &var_3b8);
                }
                
                _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h79c16945b7fd0f56(&i, &var_4c8);
            } while (i != -0x8000000000000000);
        }
        else
        {
            do
            {
                memcpy(&var_4a8, &i, 0xe8);
                memcpy(&var_3b8, &i, 0xe8);
                _$LT$uu_df..table..Row$u20$as$u20$core..convert..From$LT$uu_df..filesystem..Filesystem$GT$$GT$::from::h3abce5fbf3fc5b59(&var_108, &var_3b8);
                var_558 = &var_108;
                void* var_550_1 = arg2;
                char var_548_1 = 0;
                uu_df::table::RowFormatter::get_values::h6dce5b584cdc4209(&var_540, &var_558);
                memcpy(&var_3b8, &var_108, 0xd0);
                _$LT$uu_df..table..Row$u20$as$u20$core..ops..arith..AddAssign$GT$::add_assign::h1c84c760c7ffbf98(&var_1d8, &var_3b8);
                var_3a8 = var_530;
                var_3b8 = var_540;
                alloc::vec::Vec$LT$T$C$A$GT$::push::hf89663a6b69570e9(&var_570, &var_3b8);
                _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h79c16945b7fd0f56(&i, &var_4c8);
            } while (i != -0x8000000000000000);
        }
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$uu_df..filesystem..Filesystem$GT$$GT$::h34738f1f8620436d(&var_4c8);
    char var_498;
    
    if (*(arg2 + 0x53))
    {
        var_4a8 = &var_1d8;
        void* var_4a0_1 = arg2;
        var_498 = 1;
        uu_df::table::RowFormatter::get_values::h6dce5b584cdc4209(&var_3b8, &var_4a8);
        alloc::vec::Vec$LT$T$C$A$GT$::push::hf89663a6b69570e9(&var_570, &var_3b8);
    }
    
    void* var_568;
    var_4a8 = var_568;
    int64_t var_560;
    void* var_4a0_2 = var_568 + var_560 * 0x18;
    int64_t var_508;
    
    for (void* i_1 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9feb0d036dbb7b0d(&var_4a8); i_1; i_1 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9feb0d036dbb7b0d(&var_4a8))
    {
        int64_t rcx_4 = *(i_1 + 8);
        var_3b8 = rcx_4;
        *var_3b8[8] = rcx_4 + *(i_1 + 0x10) * 0x18;
        var_3a8 = 0;
        int64_t rax_7;
        void* j;
        rax_7 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h168fcdda2a16741a(&var_3b8);
        
        if (j)
        {
            int64_t r15_1 = rax_7;
            
            do
            {
                int64_t r12_1 = *(j + 8);
                int64_t r13_1 = *(j + 0x10);
                int64_t rax_9 = unicode_width::str_width::hf245007b39258182(r12_1, r13_1, 0);
                
                if (r15_1 >= var_508)
                {
                    core::panicking::panic_bounds_check::h25a5330941572dd1(r15_1, var_508);
                    /* no return */
                }
                
                int64_t r14_1 = *var_518[8];
                
                if (rax_9 > *(r14_1 + (r15_1 << 3)))
                    *(r14_1 + (r15_1 << 3)) =
                        unicode_width::str_width::hf245007b39258182(r12_1, r13_1, 0);
                
                int64_t rax_8;
                rax_8 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h168fcdda2a16741a(&var_3b8);
                r15_1 = rax_8;
            } while (j);
        }
    }
    
    i = var_570;
    var_498 = var_508;
    var_4a8 = var_518;
    uu_df::table::Table::get_alignments::hd7c942e203dd63ed(&var_3b8, r14, r15);
    arg1[1] = var_3a8;
    *arg1 = var_3b8;
    *(arg1 + 0x18) = i;
    *(arg1 + 0x28) = var_560;
    arg1[3] = var_4a8;
    arg1[4] = var_498;
    core::ptr::drop_in_place$LT$uu_df..table..Row$GT$::h54411b51149585a8(&var_1d8);
    return arg1;
}
