
  int64_t uu_df::table::Table::get_alignments::hd7c942e203dd63ed(int128_t* arg1, int64_t arg2, int64_t arg3)

{
    int64_t var_48 = 0;
    int64_t var_40 = 1;
    int64_t result = 0;
    int64_t var_30 = arg2;
    int64_t var_28 = arg3 + arg2;
    
    while (true)
    {
        char* rax_1 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd80283963ca975b5(&var_30);
        
        if (!rax_1)
            break;
        
        alloc::vec::Vec$LT$T$C$A$GT$::push::hd36bc5d027d87a0e(&var_48, TEST_BITD(0x3de, *rax_1));
    }
    
    arg1[1] = result;
    *arg1 = var_48;
    return result;
}
