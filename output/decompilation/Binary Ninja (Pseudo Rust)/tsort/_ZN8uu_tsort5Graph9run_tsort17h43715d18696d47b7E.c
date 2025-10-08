
  fn uu_tsort::Graph::run_tsort::h43715d18696d47b7(arg1: *mut c_void) -> i64

{
    let mut var_80: *mut c_void;
    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::iter::h2e9a564f7dfa53c1(&var_80, 
        arg1.byte_offset(0x18));
    let mut var_50: ();
    core::iter::traits::iterator::Iterator::collect::h9ae749e509b3424e(&var_50, &var_80);
    let mut rax: *mut c_void;
    let mut rdx: i64;
    rax = alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::make_contiguous::h9ad4ec71a91aebad(
        &var_50);
    let mut var_b9: ();
    
    if rdx >= 2
    {
        if rdx >= 0x15
        {
            core::slice::sort::unstable::ipnsort::hc2dcb20d7cb0ee0f(rax, rdx, &var_b9);
        }
        else
        {
            core::slice::sort::shared::smallsort::insertion_sort_shift_left::h78ed74d5313b9014(rax, 
                rdx);
        }
    }
    
    let mut rax_1: *mut c_void;
    let mut rdx_1: i64;
    rax_1 =
        alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::make_contiguous::h9ad4ec71a91aebad(
        &var_50);
    
    if rdx_1 >= 2
    {
        if rdx_1 >= 0x15
        {
            core::slice::sort::unstable::ipnsort::hc2dcb20d7cb0ee0f(rax_1, rdx_1, &var_b9);
        }
        else
        {
            core::slice::sort::shared::smallsort::insertion_sort_shift_left::h78ed74d5313b9014(
                rax_1, rdx_1);
        }
    }
    
    let mut rdi_4: *mut c_void = arg1;
    
    while *rdi_4.byte_offset(0x30) != 0
    {
        let mut rax_2: *mut i64;
        let mut rdx_2: i64;
        rax_2 = uu_tsort::Graph::find_next_node::hbfa4e9bfcfa20386(rdi_4, &var_50);
        let mut var_b0: *mut i64 = rax_2;
        let mut var_a0: *mut *mut i64 = &var_b0;
        let var_98_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hdba2249fdd736854;
        var_80 = &data_4eb328;
        let var_78_1: i64 = 2;
        let var_60_1: i64 = 0;
        let var_70_1: *mut *mut *mut i64 = &var_a0;
        let var_68_1: i64 = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_80);
        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::remove::hd917ffa485446d7f(&var_a0, 
            arg1.byte_offset(0x18), var_b0, rdx_2);
        
        if var_a0 == -0x8000000000000000
        {
            core::ptr::drop_in_place$LT$core..option..Option$LT$uu_tsort..Node$GT$$GT$::h50c07e5077228638(-0x8000000000000000, var_98_1);
        }
        else
        {
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hd96c388e51fdbafe(&var_80, &var_a0);
            let mut i_2: *mut i64;
            let mut rdx_4: i64;
            i_2 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::had4bf394b9d9334b(&var_80);
            
            if i_2 != 0
            {
                let mut i_1: *mut i64 = i_2;
                let mut rbx_1: i64 = rdx_4;
                let mut i: *mut i64;
                
                do
                {
                    let rax_3: *mut c_void = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner_mut::h9c29cb3229f656ca(arg1.byte_offset(0x18), i_1, rbx_1);
                    
                    if rax_3 == 0
                    {
                        core::option::unwrap_failed::h893f57cb7db71cb7();
                        /* no return */
                    }
                    
                    let temp0_1: i64 = *rax_3.byte_offset(0x28);
                    *rax_3.byte_offset(0x28) -= 1;
                    
                    if temp0_1 == 1
                    {
                        alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_back::hbf92dcd24a88f4eb(&var_50, i_1, rbx_1);
                    }
                    
                    let mut rdx_5: i64;
                    i = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::had4bf394b9d9334b(&var_80);
                    i_1 = i;
                    rbx_1 = rdx_5;
                } while i != 0;
            }
            
            core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$str$GT$$GT$::h7e29c45486167c57(&var_80);
        }
        
        rdi_4 = arg1;
    }
    
    core::ptr::drop_in_place$LT$alloc..collections..vec_deque..VecDeque$LT$$RF$str$GT$$GT$::h6126f693902a4b74(&var_50)
}
