
  int64_t* uu_tsort::Graph::run_tsort::h2621dd5cdb4faf5a(int64_t* arg1, int64_t* arg2)

{
    int64_t var_d8;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h22ab93a426132a55(&var_d8, arg2[3], 0);
    int64_t var_d0;
    
    if (var_d8)
    {
        alloc::raw_vec::handle_error::h2372476369f9b8ac(var_d0);
        /* no return */
    }
    
    int64_t var_b0 = var_d0;
    int64_t var_c8;
    int64_t var_a8 = var_c8;
    int64_t var_a0 = 0;
    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::iter::hc8089db10f6b491b(&var_d8, arg2);
    int64_t var_b8;
    int64_t var_58 = var_b8;
    int128_t var_68 = var_c8;
    int128_t var_78 = var_d8;
    void var_98;
    _$LT$alloc..collections..vec_deque..VecDeque$LT$T$GT$$u20$as$u20$alloc..collections..vec_deque..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::spec_from_iter::hf462620b0ae1bf0a(&var_98, &var_78);
    void* rax_2;
    int64_t rdx;
    rax_2 =
        alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::make_contiguous::hade1d2ed3a63ca34(
        &var_98);
    
    if (rdx >= 2)
    {
        void var_e1;
        
        if (rdx >= 0x15)
            core::slice::sort::unstable::ipnsort::hf51f3faef85c7917(rax_2, rdx, &var_e1);
        else
            core::slice::sort::shared::smallsort::insertion_sort_shift_left::hb4368774700ae4a6(
                rax_2, rdx, 1);
    }
    
    while (true)
    {
        int64_t* rax_3;
        int64_t rdx_2;
        rax_3 = alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::pop_front::h21c96a6c4f6a5b39(
            &var_98);
        
        if (!rax_3)
            break;
        
        alloc::vec::Vec$LT$T$C$A$GT$::push::hbbd106ac298c97ce(&var_b0, rax_3, rdx_2);
        int64_t var_50;
        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::remove::h7f917ab83a911431(&var_50, arg2, 
            rax_3, rdx_2);
        
        if (var_50 != -0x8000000000000000)
        {
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::ha34f728323d6f0c1(&var_d8, &var_50);
            int64_t* i_2;
            int64_t rdx_4;
            i_2 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9f648d1fd42f1db6(&var_d8);
            
            if (i_2)
            {
                int64_t* i_1 = i_2;
                int64_t r12_2 = rdx_4;
                int64_t* i;
                
                do
                {
                    void* rax_4 = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner_mut::h03536305409d1b4d(arg2, i_1, r12_2);
                    
                    if (!rax_4)
                    {
                        core::option::unwrap_failed::h0e11329e76906eaa();
                        /* no return */
                    }
                    
                    int64_t temp0_1 = *(rax_4 + 0x28);
                    *(rax_4 + 0x28) -= 1;
                    
                    if (temp0_1 == 1)
                        alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_back::hadb7dbb4bc596622(&var_98, i_1, r12_2);
                    
                    int64_t rdx_5;
                    i = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9f648d1fd42f1db6(&var_d8);
                    i_1 = i;
                    r12_2 = rdx_5;
                } while (i);
            }
            
            core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$str$GT$$GT$::hf9489df68880ab9d(&var_d8);
        }
    }
    
    if (!arg2[3])
    {
        arg1[3] = var_a0;
        *(arg1 + 8) = var_b0;
        *arg1 = 0;
        core::ptr::drop_in_place$LT$alloc..collections..vec_deque..VecDeque$LT$$RF$str$GT$$GT$::h1190539f0e1ad7fe(&var_98);
        return arg1;
    }
    
    uu_tsort::Graph::detect_cycle::h0c5291f558dc399a(&var_d8, arg2);
    arg1[3] = var_c8;
    *(arg1 + 8) = var_d8;
    *arg1 = 1;
    core::ptr::drop_in_place$LT$alloc..collections..vec_deque..VecDeque$LT$$RF$str$GT$$GT$::h1190539f0e1ad7fe(&var_98);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h5f70d679a77a97ed(&var_b0);
    return arg1;
}
