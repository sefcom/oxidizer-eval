
  int64_t uu_df::table::Table::get_alignments::h30bf81e1dc4abfc2(int128_t* arg1, void* arg2, int64_t arg3)

{
    int64_t var_48 = 0;
    int64_t var_40 = 1;
    int64_t result = 0;
    int64_t r13 = 0;
    
    while (arg3 != r13)
    {
        uint32_t rax_1 = *(arg2 + r13);
        r13 += 1;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h5276f4d6a06e1d30(&var_48, TEST_BITD(0x3de, rax_1));
    }
    
    arg1[1] = result;
    *arg1 = var_48;
    return result;
}
