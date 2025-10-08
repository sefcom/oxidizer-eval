
  int64_t just::argument_parser::ArgumentParser::resolve_recipe::h7bff01a000980bc2(char* arg1, void* arg2, int64_t arg3, int64_t arg4)

{
    void* rax = arg2;
    int64_t var_110 = 0;
    int64_t var_108 = 8;
    int64_t var_100 = 0;
    int64_t var_48 = arg3;
    int64_t var_40 = (arg4 << 4) + arg3;
    int64_t var_38 = 0;
    int64_t result;
    char* rdx_5;
    
    while (true)
    {
        void* r14_1 = rax;
        int64_t rax_1;
        int64_t* rdx;
        rax_1 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1433946cae7ad1f0(&var_48);
        int128_t var_f8;
        int128_t var_d0;
        int64_t var_c0;
        
        if (!rdx)
        {
            void* rsi_5 = *(r14_1 + 0x298);
            
            if (!rsi_5)
            {
                rax_1 = !*(r14_1 + 0x2c8);
                rax_1 |= 0x24;
                *arg1 = rax_1;
            }
            else
            {
                just::recipe::Recipe$LT$D$GT$::check_can_be_default_recipe::hbdbea57edf4aea7b(
                    &var_d0, rsi_5 + 0x10);
                char rax_4 = var_d0;
                
                if (rax_4 == 0x38)
                {
                    void* rax_5;
                    uint64_t rdx_6;
                    rax_5 = just::token::Token::lexeme::h66587cdf67f63270(0xa0 + *(r14_1 + 0x298));
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_d0, rax_5, rdx_6);
                    int64_t var_e8_2 = var_c0;
                    var_f8 = var_d0;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h2be7ee32b7c9f397(&var_110, &var_f8);
                    int64_t rax_8 = *(r14_1 + 0x298) + 0x10;
                    rdx_5 = arg1;
                    *(rdx_5 + 0x18) = var_100;
                    *(rdx_5 + 8) = var_110;
                    *(rdx_5 + 0x20) = rax_8;
                    result = arg4;
                    *(rdx_5 + 0x28) = result;
                    break;
                }
                
                int64_t var_70;
                *(arg1 + 0x60) = var_70;
                int128_t var_7f;
                *(arg1 + 0x51) = var_7f;
                int128_t var_8f;
                *(arg1 + 0x41) = var_8f;
                int128_t zmm0_3 = var_d0;
                int128_t var_9f;
                *(arg1 + 0x31) = var_9f;
                int128_t var_af;
                *(arg1 + 0x21) = var_af;
                *(arg1 + 0x11) = *var_c0[1];
                *(arg1 + 1) = zmm0_3;
                *arg1 = rax_4;
            }
        }
        else
        {
            rdx[1];
            int64_t rax_2;
            uint64_t rdx_1;
            rax_2 =
                _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h108b88534797670a(
                *rdx);
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_d0, rax_2, rdx_1);
            var_f8 = var_d0;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h2be7ee32b7c9f397(&var_110, &var_f8);
            rax = alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::he9fea18cadddca02(
                *(r14_1 + 0x2a0), *(r14_1 + 0x2a8), rax_2, rdx_1);
            
            if (rax)
                continue;
            else
            {
                result =
                    just::justfile::Justfile::get_recipe::h2487a07572812fbd(r14_1, rax_2, rdx_1);
                
                if (result)
                {
                    rdx_5 = arg1;
                    *(rdx_5 + 0x18) = var_100;
                    *(rdx_5 + 8) = var_110;
                    *(rdx_5 + 0x20) = result;
                    *(rdx_5 + 0x28) = rax_1 + 1;
                    break;
                }
                
                alloc::str::join_generic_copy::haa9e8db24d47c2b5(&var_d0, var_108, var_100, 
                    " [private]\nexport no entry foun…", 1);
                int128_t zmm0_6 = var_d0;
                just::justfile::Justfile::suggest_recipe::hb59653753af09818(&var_f8, r14_1, rax_2, 
                    rdx_1);
                *(arg1 + 0x38) = var_c0;
                *(arg1 + 0x28) = zmm0_6;
                var_d0 = var_f8;
                *var_c0[7] = var_c0;
                *arg1 = 0x34;
                *(arg1 + 1) = var_d0;
                *(arg1 + 0x11) = var_c0;
                int64_t var_b1;
                *(arg1 + 0x20) = var_b1;
            }
        }
        return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h766f1f48926327ac(&var_110);
    }
    
    *rdx_5 = 0x38;
    return result;
}
