
  int128_t* just::parser::Parser::advance::ha6fdbb87ccd3a5f7(int128_t* arg1, void* arg2)

{
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::clear::hb16502b534c65091(arg2
        + 0x38);
    int64_t rsi = *(arg2 + 0x20);
    int64_t rdi_1 = *(arg2 + 0x58);
    
    if (rdi_1 > rsi)
    {
        core::slice::index::slice_start_index_len_fail::h5fe115fcacae7da6(rdi_1, rsi);
        /* no return */
    }
    
    if (rdi_1 != rsi)
    {
        int128_t* rax_1 = *(arg2 + 0x18);
        int64_t i = rdi_1 * 0x48;
        int64_t rdx_1 = 0;
        
        do
        {
            if (*(rax_1 + i + 0x40) != 0x24)
            {
                *(arg2 + 0x58) = rdi_1 - rdx_1 + 1;
                arg1[4] = *(rax_1 + i + 0x40);
                int128_t zmm0 = *(rax_1 + i);
                int128_t zmm1 = *(rax_1 + i + 0x10);
                int128_t zmm2 = *(rax_1 + i + 0x20);
                arg1[3] = *(rax_1 + i + 0x30);
                arg1[2] = zmm2;
                arg1[1] = zmm1;
                *arg1 = zmm0;
                *(arg1 + 0x48) = 0x25;
                return rax_1;
            }
            
            i += 0x48;
            rdx_1 -= 1;
        } while (rsi * 0x48 != i);
        
        *(arg2 + 0x58) = rdi_1 - rdx_1;
    }
    
    void var_d0;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_d0, "`Parser::advance()` advanced pas…", 0x35);
    int64_t var_d8 = -0x7fffffffffffffd8;
    void var_68;
    int64_t rax_2 = just::parser::Parser::error::hcfcee5ba02637174(&var_68, arg2, &var_d8);
    int128_t var_20;
    int128_t var_98 = var_20;
    int128_t var_30;
    int128_t var_a8 = var_30;
    int128_t var_40;
    int128_t var_b8 = var_40;
    int128_t var_50;
    int128_t var_c8 = var_50;
    int128_t var_60;
    var_d8 = var_60;
    arg1[4] = var_20;
    arg1[3] = var_30;
    arg1[2] = var_40;
    arg1[1] = var_50;
    *arg1 = var_60;
    return rax_2;
}
