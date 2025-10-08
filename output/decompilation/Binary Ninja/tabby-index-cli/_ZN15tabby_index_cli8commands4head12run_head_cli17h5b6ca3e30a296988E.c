
  uint64_t tabby_index_cli::commands::head::run_head_cli::h5b6ca3e30a296988(int64_t arg1, int64_t arg2, void* arg3)

{
    void* const var_778;
    tantivy::index::index::Index::open_in_dir::h5f3e90e10edff988(&var_778, arg1);
    void* const rax = var_778;
    int128_t var_770;
    int128_t var_ec8 = var_770;
    int128_t var_750;
    int128_t var_ea8 = var_750;
    int128_t var_760;
    int64_t var_740;
    
    if (rax == -0x7fffffffffffffff)
    {
        *var_750[8] = var_740;
        int128_t zmm1 = var_760;
        var_760 = var_ea8;
        var_770 = zmm1;
        var_778 = var_ec8;
        return anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::hdc065b01342578bc(&var_778);
    }
    
    int128_t var_718;
    int128_t var_f08_1 = var_718;
    int128_t var_728;
    int128_t var_f18_1 = var_728;
    int128_t var_738;
    int128_t var_f28_1 = var_738;
    int128_t var_f60_1 = var_ec8;
    int128_t var_f50_1 = var_760;
    int128_t var_f40_1 = var_ea8;
    int64_t var_f30_1 = var_740;
    void* const var_f68 = rax;
    tantivy::index::index::Index::reader::h7031a20a933df984(&var_ec8, &var_f68);
    void* rdx_1 = var_ec8;
    int64_t rax_1 = *var_ec8[8];
    int64_t rcx_2 = var_760;
    
    if (rdx_1 != 0x12)
    {
        int128_t var_750_1 = var_ea8;
        int128_t var_760_1 = var_760;
        var_778 = rdx_1;
        var_770 = rax_1;
        *var_770[8] = rcx_2;
        uint64_t result = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::hdc065b01342578bc(&var_778);
        core::ptr::drop_in_place$LT$tantivy..index..index..Index$GT$::hc2911d178059c5dc(&var_f68);
        return result;
    }
    
    int64_t var_fe0 = rax_1;
    int64_t var_fd8_1 = rcx_2;
    void* var_fe8 = tantivy::reader::IndexReader::searcher::h4b3b284570bbf106(&var_fe0);
    core::ptr::drop_in_place$LT$tantivy..reader..IndexReader$GT$::hd5b87e325d8c0232(&var_fe0);
    tabby_common::index::IndexSchema::instance::hc55d378badadeb83();
    void* rax_3 = var_fe8;
    int64_t rcx_3 = *(rax_3 + 0x18);
    int64_t rax_5 = *(rax_3 + 0x20) * 0x190 + rcx_3;
    int64_t var_fa8 = rcx_3;
    int64_t var_fa0_1 = rax_5;
    int64_t var_f98_1 = 0;
    int32_t rax_6;
    void* i_2;
    rax_6 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h6a37c4f4fdf0bace(&var_fa8);
    
    if (i_2)
    {
        int32_t r15_1 = rax_6;
        void* i_1 = i_2;
        int64_t rax_7 = *(arg3 + 8);
        int64_t rcx_4 = *(arg3 + 0x10);
        int64_t rcx_5 = *(arg3 + 0x18);
        int64_t rbp_1 = 0;
        void* i;
        
        do
        {
            tantivy::index::segment_reader::SegmentReader::inverted_index::h0c044d78f5c09b5c(
                &var_778, i_1, data_9e4b90);
            
            if (var_778 != 0x12)
                core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..sync..Arc$LT$tantivy..index..inverted_index_reader..InvertedIndexReader$GT$$C$tantivy..error..TantivyError$GT$$GT$::ha36ee488d87740e0(&var_778);
            else
            {
                void* var_ff0 = var_770;
                void var_f90;
                tantivy::schema::term::Term::from_field_text::h01256f67d3b61ca0(&var_f90, 
                    data_9e4b90, rax_7, rcx_4);
                tantivy::index::inverted_index_reader::InvertedIndexReader::read_postings::he06b5ad3f0f237a7(&var_778, var_ff0 + 0x10, &var_f90, false);
                
                if (var_778 < 2)
                {
                    memcpy(&var_ec8, &var_778, 0x748);
                    int64_t var_788;
                    int64_t rdi_14 = var_788;
                    
                    if (rdi_14 >= 0x80)
                    {
                        label_673b1f:
                        core::panicking::panic_bounds_check::h025cadc56a971af7(rdi_14, 0x80);
                        /* no return */
                    }
                    
                    while (true)
                    {
                        int32_t rbx_1 = *(&*var_ec8[8] + (rdi_14 << 2));
                        
                        if (rbx_1 == 0x7fffffff)
                        {
                            core::ptr::drop_in_place$LT$tantivy..postings..segment_postings..SegmentPostings$GT$::hdb3f0afdc95277c9(&var_ec8);
                            core::ptr::drop_in_place$LT$tantivy..schema..term..Term$GT$::hafc456a1fde40a23(&var_f90);
                            core::ptr::drop_in_place$LT$alloc..sync..Arc$LT$tantivy..index..inverted_index_reader..InvertedIndexReader$GT$$GT$::h684f0de23264f2ee(&var_ff0);
                            break;
                        }
                        
                        if (!tantivy::index::segment_reader::SegmentReader::is_deleted::he6125c66332d6310(i_1, rbx_1))
                        {
                            tantivy::core::searcher::Searcher::doc::h2010adbd4d783d11(&var_778, 
                                var_fe8, r15_1, rbx_1);
                            void var_ef8;
                            core::result::Result$LT$T$C$E$GT$::expect::h340c27d67c9c86c1(&var_ef8, 
                                &var_778);
                            tabby_index_cli::commands::head::to_json_value::he64216c08a45f54d(
                                &var_fe0, &var_ef8);
                            int64_t* var_f78 = &var_fe0;
                            int64_t (* var_f70_1)(char* arg1, int64_t arg2) = _$LT$serde_json..value..Value$u20$as$u20$core..fmt..Display$GT$::fmt::h7ec19c7dcd844146;
                            var_778 = &data_984bb8;
                            var_770 = 2;
                            *var_760[8] = 0;
                            *var_770[8] = &var_f78;
                            var_760 = 1;
                            std::io::stdio::_print::h5e446ff973c02de6(&var_778);
                            rbp_1 += 1;
                            
                            if (rbp_1 >= rcx_5)
                            {
                                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hacddd69444a21384(&var_fe0);
                                core::ptr::drop_in_place$LT$tantivy..postings..segment_postings..SegmentPostings$GT$::hdb3f0afdc95277c9(&var_ec8);
                                core::ptr::drop_in_place$LT$tantivy..schema..term..Term$GT$::hafc456a1fde40a23(&var_f90);
                                core::ptr::drop_in_place$LT$alloc..sync..Arc$LT$tantivy..index..inverted_index_reader..InvertedIndexReader$GT$$GT$::h684f0de23264f2ee(&var_ff0);
                                goto label_673aed;
                            }
                            
                            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hacddd69444a21384(&var_fe0);
                        }
                        
                        if (var_788 == 0x7f)
                        {
                            var_788 = 0;
                            tantivy::postings::block_segment_postings::BlockSegmentPostings::advance::hb27f5203ad9bda99(&var_ec8);
                            rdi_14 = var_788;
                            
                            if (rdi_14 >= 0x80)
                                goto label_673b1f;
                        }
                        else
                        {
                            rdi_14 = var_788 + 1;
                            var_788 = rdi_14;
                            
                            if (rdi_14 >= 0x80)
                                goto label_673b1f;
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
            
            int32_t rax_8;
            rax_8 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h6a37c4f4fdf0bace(&var_fa8);
            r15_1 = rax_8;
            i_1 = i;
        } while (i);
    }
    
    label_673aed:
    core::ptr::drop_in_place$LT$tantivy..core..searcher..Searcher$GT$::hfcc0968019ce3a8e(&var_fe8);
    core::ptr::drop_in_place$LT$tantivy..index..index..Index$GT$::hc2911d178059c5dc(&var_f68);
    return 0;
}
