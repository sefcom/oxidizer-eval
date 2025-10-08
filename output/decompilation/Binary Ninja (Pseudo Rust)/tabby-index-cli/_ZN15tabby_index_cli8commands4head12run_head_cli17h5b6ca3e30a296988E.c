
  fn tabby_index_cli::commands::head::run_head_cli::h5b6ca3e30a296988(arg1: i64, arg2: i64, arg3: *mut c_void) -> u64

{
    let mut var_778: *mut c_void;
    tantivy::index::index::Index::open_in_dir::h5f3e90e10edff988(&var_778, arg1);
    let rax: *mut c_void = var_778;
    let mut var_770: i128;
    let mut var_ec8: i128 = var_770;
    let mut var_750: i128;
    let var_ea8: i128 = var_750;
    let mut var_760: i128;
    let var_740: i64;
    
    if rax == -0x7fffffffffffffff
    {
        *var_750[8] = var_740;
        let zmm1: i128 = var_760;
        var_760 = var_ea8;
        var_770 = zmm1;
        var_778 = var_ec8;
        return anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::hdc065b01342578bc(&var_778);
    }
    
    let var_718: i128;
    let var_f08_1: i128 = var_718;
    let var_728: i128;
    let var_f18_1: i128 = var_728;
    let var_738: i128;
    let var_f28_1: i128 = var_738;
    let var_f60_1: i128 = var_ec8;
    let var_f50_1: i128 = var_760;
    let var_f40_1: i128 = var_ea8;
    let var_f30_1: i64 = var_740;
    let mut var_f68: *mut c_void = rax;
    tantivy::index::index::Index::reader::h7031a20a933df984(&var_ec8, &var_f68);
    let rdx_1: *mut c_void = var_ec8;
    let rax_1: i64 = *var_ec8[8];
    let rcx_2: i64 = var_760;
    
    if rdx_1 != 0x12
    {
        let var_750_1: i128 = var_ea8;
        let var_760_1: i128 = var_760;
        var_778 = rdx_1;
        var_770 = rax_1;
        *var_770[8] = rcx_2;
        let result: u64 = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::hdc065b01342578bc(&var_778);
        core::ptr::drop_in_place$LT$tantivy..index..index..Index$GT$::hc2911d178059c5dc(&var_f68);
        return result;
    }
    
    let mut var_fe0: i64 = rax_1;
    let var_fd8_1: i64 = rcx_2;
    let mut var_fe8: *mut c_void =
        tantivy::reader::IndexReader::searcher::h4b3b284570bbf106(&var_fe0);
    core::ptr::drop_in_place$LT$tantivy..reader..IndexReader$GT$::hd5b87e325d8c0232(&var_fe0);
    tabby_common::index::IndexSchema::instance::hc55d378badadeb83();
    let rax_3: *mut c_void = var_fe8;
    let rcx_3: i64 = *rax_3.byte_offset(0x18);
    let rax_5: i64 = *rax_3.byte_offset(0x20) * 0x190 + rcx_3;
    let mut var_fa8: i64 = rcx_3;
    let var_fa0_1: i64 = rax_5;
    let var_f98_1: i64 = 0;
    let mut rax_6: i32;
    let mut i_2: *mut c_void;
    rax_6 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h6a37c4f4fdf0bace(&var_fa8);
    
    if i_2 != 0
    {
        let mut r15_1: i32 = rax_6;
        let mut i_1: *mut c_void = i_2;
        let rax_7: i64 = *arg3.byte_offset(8);
        let rcx_4: i64 = *arg3.byte_offset(0x10);
        let rcx_5: i64 = *arg3.byte_offset(0x18);
        let mut rbp_1: i64 = 0;
        let mut i: *mut c_void;
        
        do
        {
            tantivy::index::segment_reader::SegmentReader::inverted_index::h0c044d78f5c09b5c(
                &var_778, i_1, data_9e4b90);
            
            if var_778 != 0x12
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..sync..Arc$LT$tantivy..index..inverted_index_reader..InvertedIndexReader$GT$$C$tantivy..error..TantivyError$GT$$GT$::ha36ee488d87740e0(&var_778);
            }
            else
            {
                let mut var_ff0: *mut c_void = var_770;
                let mut var_f90: ();
                tantivy::schema::term::Term::from_field_text::h01256f67d3b61ca0(&var_f90, 
                    data_9e4b90, rax_7, rcx_4);
                tantivy::index::inverted_index_reader::InvertedIndexReader::read_postings::he06b5ad3f0f237a7(&var_778, var_ff0.byte_offset(0x10), &var_f90, false);
                
                if var_778 < 2
                {
                    memcpy(&var_ec8, &var_778, 0x748);
                    let mut var_788: i64;
                    let mut rdi_14: i64 = var_788;
                    
                    if rdi_14 >= 0x80
                    {
                        'label_673b1f:
                        core::panicking::panic_bounds_check::h025cadc56a971af7(rdi_14, 0x80);
                        /* no return */
                    }
                    
                    loop
                    {
                        let rbx_1: i32 = *(&*var_ec8[8]).byte_offset(rdi_14 << 2);
                        
                        if rbx_1 == 0x7fffffff
                        {
                            core::ptr::drop_in_place$LT$tantivy..postings..segment_postings..SegmentPostings$GT$::hdb3f0afdc95277c9(&var_ec8);
                            core::ptr::drop_in_place$LT$tantivy..schema..term..Term$GT$::hafc456a1fde40a23(&var_f90);
                            core::ptr::drop_in_place$LT$alloc..sync..Arc$LT$tantivy..index..inverted_index_reader..InvertedIndexReader$GT$$GT$::h684f0de23264f2ee(&var_ff0);
                            break;
                        }
                        
                        if tantivy::index::segment_reader::SegmentReader::is_deleted::he6125c66332d6310(i_1, rbx_1) == 0
                        {
                            tantivy::core::searcher::Searcher::doc::h2010adbd4d783d11(&var_778, 
                                var_fe8, r15_1, rbx_1);
                            let mut var_ef8: ();
                            core::result::Result$LT$T$C$E$GT$::expect::h340c27d67c9c86c1(&var_ef8, 
                                &var_778);
                            tabby_index_cli::commands::head::to_json_value::he64216c08a45f54d(
                                &var_fe0, &var_ef8);
                            let mut var_f78: *mut i64 = &var_fe0;
                            let var_f70_1: fn(arg1: *mut i8, arg2: i64) -> i64 = _$LT$serde_json..value..Value$u20$as$u20$core..fmt..Display$GT$::fmt::h7ec19c7dcd844146;
                            var_778 = &data_984bb8;
                            var_770 = 2;
                            *var_760[8] = 0;
                            *var_770[8] = &var_f78;
                            var_760 = 1;
                            std::io::stdio::_print::h5e446ff973c02de6(&var_778);
                            rbp_1 += 1;
                            
                            if rbp_1 >= rcx_5
                            {
                                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hacddd69444a21384(&var_fe0);
                                core::ptr::drop_in_place$LT$tantivy..postings..segment_postings..SegmentPostings$GT$::hdb3f0afdc95277c9(&var_ec8);
                                core::ptr::drop_in_place$LT$tantivy..schema..term..Term$GT$::hafc456a1fde40a23(&var_f90);
                                core::ptr::drop_in_place$LT$alloc..sync..Arc$LT$tantivy..index..inverted_index_reader..InvertedIndexReader$GT$$GT$::h684f0de23264f2ee(&var_ff0);
                                goto 'label_673aed;
                            }
                            
                            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hacddd69444a21384(&var_fe0);
                        }
                        
                        if var_788 == 0x7f
                        {
                            var_788 = 0;
                            tantivy::postings::block_segment_postings::BlockSegmentPostings::advance::hb27f5203ad9bda99(&var_ec8);
                            rdi_14 = var_788;
                            
                            if rdi_14 >= 0x80
                            {
                                goto 'label_673b1f;
                            }
                        }
                        else
                        {
                            rdi_14 = var_788 + 1;
                            var_788 = rdi_14;
                            
                            if rdi_14 >= 0x80
                            {
                                goto 'label_673b1f;
                            }
                        }
                    }
                }
                else
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$core..option..Option$LT$tantivy..postings..segment_postings..SegmentPostings$GT$$C$std..io..error..Error$GT$$GT$::h176caf0103183d89(&var_778);
                    core::ptr::drop_in_place$LT$tantivy..schema..term..Term$GT$::hafc456a1fde40a23(
                        &var_f90);
                    core::ptr::drop_in_place$LT$alloc..sync..Arc$LT$tantivy..index..inverted_index_reader..InvertedIndexReader$GT$$GT$::h684f0de23264f2ee(&var_ff0);
                }
            }
            
            let mut rax_8: i32;
            rax_8 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h6a37c4f4fdf0bace(&var_fa8);
            r15_1 = rax_8;
            i_1 = i;
        } while i != 0;
    }
    
    'label_673aed:
    core::ptr::drop_in_place$LT$tantivy..core..searcher..Searcher$GT$::hfcc0968019ce3a8e(&var_fe8);
    core::ptr::drop_in_place$LT$tantivy..index..index..Index$GT$::hc2911d178059c5dc(&var_f68);
    0
}
