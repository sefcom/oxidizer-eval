
  int64_t rg::flags::parse::find_similar_names::hae5f1ed6e0368f47(int128_t* arg1)

{
    int64_t var_a8 = 0;
    int64_t var_a0 = 8;
    int64_t var_98 = 0;
    void var_78;
    int64_t rdx;
    int16_t* rsi;
    rg::flags::parse::ngrams::hd8afd45d5ce1348e(&var_78, rsi, rdx);
    
    for (int64_t i = 0; i != 0x680; i += 0x10)
    {
        int64_t rbx_1 = *(i + &data_7e9308);
        int64_t rax = *(i + &data_7e9310);
        int16_t* rax_1;
        int64_t rdx_1;
        rax_1 = (*(rax + 0x30))(rbx_1);
        void var_60;
        rg::flags::parse::ngrams::hd8afd45d5ce1348e(&var_60, rax_1, rdx_1);
        
        if (!(rg::flags::parse::jaccard_index::hd9a913bae41cbb90(&var_78, &var_60)
                < 0.40000000000000002))
            alloc::vec::Vec$LT$T$C$A$GT$::push::h047e906916f0227d(&var_a8, rax_1, rdx_1);
        
        int16_t* rax_3;
        int64_t rdx_3;
        rax_3 = (*(rax + 0x40))(rbx_1);
        void var_48;
        
        if (rax_3)
        {
            rg::flags::parse::ngrams::hd8afd45d5ce1348e(&var_48, rax_3, rdx_3);
            
            if (!(rg::flags::parse::jaccard_index::hd9a913bae41cbb90(&var_78, &var_48)
                    < 0.40000000000000002))
                alloc::vec::Vec$LT$T$C$A$GT$::push::h047e906916f0227d(&var_a8, rax_3, rdx_3);
            
            core::ptr::drop_in_place$LT$alloc..collections..btree..set..BTreeSet$LT$alloc..borrow..Cow$LT$$u5b$u8$u5d$$GT$$GT$$GT$::h30608e6e4cd4aa96(&var_48);
        }
        
        int64_t* rax_5;
        int64_t rdx_5;
        rax_5 = (*(rax + 0x38))(rbx_1);
        
        if (rdx_5)
        {
            int64_t j = 0;
            
            do
            {
                rg::flags::parse::ngrams::hd8afd45d5ce1348e(&var_48, *(rax_5 + j), 
                    *(rax_5 + j + 8));
                
                if (!(rg::flags::parse::jaccard_index::hd9a913bae41cbb90(&var_78, &var_48)
                        < 0.40000000000000002))
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h047e906916f0227d(&var_a8, *(rax_5 + j), 
                        *(rax_5 + j + 8));
                
                core::ptr::drop_in_place$LT$alloc..collections..btree..set..BTreeSet$LT$alloc..borrow..Cow$LT$$u5b$u8$u5d$$GT$$GT$$GT$::h30608e6e4cd4aa96(&var_48);
                j += 0x10;
            } while (rdx_5 << 4 != j);
        }
        
        core::ptr::drop_in_place$LT$alloc..collections..btree..set..BTreeSet$LT$alloc..borrow..Cow$LT$$u5b$u8$u5d$$GT$$GT$$GT$::h30608e6e4cd4aa96(&var_60);
    }
    
    arg1[1] = var_98;
    *arg1 = var_a8;
    return core::ptr::drop_in_place$LT$alloc..collections..btree..set..BTreeSet$LT$alloc..borrow..Cow$LT$$u5b$u8$u5d$$GT$$GT$$GT$::h30608e6e4cd4aa96(&var_78);
}
