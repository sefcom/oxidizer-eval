
  int64_t rg::flags::parse::FlagMap::new::h57afd0ad02f8204a(int128_t* arg1, int64_t arg2, int64_t arg3)

{
    int64_t rax;
    int64_t rdx;
    rax = std::thread::local::LocalKey$LT$T$GT$::with::h3cee8e0035d6d40e();
    int128_t var_90;
    hashbrown::map::HashMap$LT$K$C$V$C$S$GT$::with_capacity_and_hasher::h9613a7b1f59842a2(&var_90, 
        arg3, rax, rdx);
    int64_t var_c8 = arg2;
    int64_t var_c0 = arg2 + arg3 * 0x28;
    int64_t var_b8 = 0;
    int64_t result;
    void* i;
    result = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf1da52e6881dbc92(&var_c8);
    
    if (i)
    {
        int64_t result_1 = result;
        
        do
        {
            int64_t rsi_1 = *(i + 0x10);
            int64_t var_60;
            int64_t* rdx_7;
            
            if (!rsi_1)
            {
                char rbp_1 = *(i + 0x18);
                uint64_t rax_4 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(1, 1, 0);
                
                if (!rax_4)
                {
                    alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
                    /* no return */
                }
                
                *rax_4 = rbp_1;
                var_60 = 1;
                uint64_t var_58_1 = rax_4;
                int64_t var_50_1 = 1;
                int64_t rax_5;
                int64_t rdx_6;
                rax_5 = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h285a29dab23554b5(
                    &var_90, &var_60, result_1);
                int64_t var_a0 = rax_5;
                int64_t var_98_1 = rdx_6;
                
                if (rax_5)
                {
                    rdx_7 = &var_a0;
                    label_65544f:
                    var_60 = 0;
                    core::panicking::assert_failed::h2eb0a2f9b5b29742(0, &data_462620, rdx_7, 
                        &var_60);
                    /* no return */
                }
            }
            else
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1dbf6ec1d593e24c(&var_60, rsi_1, *(i + 0x18));
                int64_t rax_3;
                int64_t rdx_4;
                rax_3 = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h285a29dab23554b5(
                    &var_90, &var_60, result_1);
                int64_t var_b0 = rax_3;
                int64_t var_a8_1 = rdx_4;
                
                if (rax_3)
                {
                    rdx_7 = &var_b0;
                    goto label_65544f;
                }
            }
            result = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf1da52e6881dbc92(&var_c8);
            result_1 = result;
        } while (i);
    }
    
    int128_t zmm0 = var_90;
    int128_t var_70;
    arg1[2] = var_70;
    int128_t var_80;
    arg1[1] = var_80;
    *arg1 = zmm0;
    return result;
}
