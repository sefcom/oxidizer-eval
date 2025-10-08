
  fn rg::flags::parse::find_similar_names::hae5f1ed6e0368f47(arg1: *mut i128) -> i64

{
    let mut var_a8: i64 = 0;
    let var_a0: i64 = 8;
    let var_98: i64 = 0;
    let mut var_78: ();
    let rdx: i64;
    let rsi: *mut i16;
    rg::flags::parse::ngrams::hd8afd45d5ce1348e(&var_78, rsi, rdx);
    
    for let mut i: i64 = 0; i != 0x680; i += 0x10
    {
        let rbx_1: i64 = *(i + &data_7e9308);
        let rax: i64 = *(i + &data_7e9310);
        let mut rax_1: *mut i16;
        let mut rdx_1: i64;
        rax_1 = (*(rax + 0x30))(rbx_1);
        let mut var_60: ();
        rg::flags::parse::ngrams::hd8afd45d5ce1348e(&var_60, rax_1, rdx_1);
        
        if !(rg::flags::parse::jaccard_index::hd9a913bae41cbb90(&var_78, &var_60)
            < 0.40000000000000002)
        {
            alloc::vec::Vec$LT$T$C$A$GT$::push::h047e906916f0227d(&var_a8, rax_1, rdx_1);
        }
        
        let mut rax_3: *mut i16;
        let mut rdx_3: i64;
        rax_3 = (*(rax + 0x40))(rbx_1);
        let mut var_48: ();
        
        if rax_3 != 0
        {
            rg::flags::parse::ngrams::hd8afd45d5ce1348e(&var_48, rax_3, rdx_3);
            
            if !(rg::flags::parse::jaccard_index::hd9a913bae41cbb90(&var_78, &var_48)
                < 0.40000000000000002)
            {
                alloc::vec::Vec$LT$T$C$A$GT$::push::h047e906916f0227d(&var_a8, rax_3, rdx_3);
            }
            
            core::ptr::drop_in_place$LT$alloc..collections..btree..set..BTreeSet$LT$alloc..borrow..Cow$LT$$u5b$u8$u5d$$GT$$GT$$GT$::h30608e6e4cd4aa96(&var_48);
        }
        
        let mut rax_5: *mut i64;
        let mut rdx_5: i64;
        rax_5 = (*(rax + 0x38))(rbx_1);
        
        if rdx_5 != 0
        {
            let mut j: i64 = 0;
            
            do
            {
                rg::flags::parse::ngrams::hd8afd45d5ce1348e(&var_48, *rax_5.byte_offset(j), 
                    *rax_5.byte_offset(j).byte_offset(8));
                
                if !(rg::flags::parse::jaccard_index::hd9a913bae41cbb90(&var_78, &var_48)
                    < 0.40000000000000002)
                {
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h047e906916f0227d(&var_a8, 
                        *rax_5.byte_offset(j), *rax_5.byte_offset(j).byte_offset(8));
                }
                
                core::ptr::drop_in_place$LT$alloc..collections..btree..set..BTreeSet$LT$alloc..borrow..Cow$LT$$u5b$u8$u5d$$GT$$GT$$GT$::h30608e6e4cd4aa96(&var_48);
                j += 0x10;
            } while rdx_5 << 4 != j;
        }
        
        core::ptr::drop_in_place$LT$alloc..collections..btree..set..BTreeSet$LT$alloc..borrow..Cow$LT$$u5b$u8$u5d$$GT$$GT$$GT$::h30608e6e4cd4aa96(&var_60);
    }
    
    arg1[1] = var_98;
    *arg1 = var_a8;
    core::ptr::drop_in_place$LT$alloc..collections..btree..set..BTreeSet$LT$alloc..borrow..Cow$LT$$u5b$u8$u5d$$GT$$GT$$GT$::h30608e6e4cd4aa96(&var_78)
}
