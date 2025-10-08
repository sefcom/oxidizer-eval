
  int64_t just::argument_parser::ArgumentParser::parse_arguments::hcf80b6b83f04fab6(char* arg1, int64_t arg2, int64_t arg3, int64_t arg4)

{
    int64_t var_140 = 0;
    int64_t var_138 = 8;
    int64_t result = 0;
    int64_t var_128 = arg3;
    int64_t var_120 = arg4;
    int64_t var_110 = 0;
    int64_t var_118 = arg2;
    
    do
    {
        char var_d0;
        just::argument_parser::ArgumentParser::parse_group::he9047b36eb965085(&var_d0, &var_128);
        char rax_1 = var_d0;
        int128_t var_bf;
        int128_t var_af;
        
        if (rax_1 != 0x38)
        {
            int128_t var_78;
            *(arg1 + 0x58) = var_78;
            int128_t var_88;
            *(arg1 + 0x48) = var_88;
            int128_t var_98;
            *(arg1 + 0x38) = var_98;
            int64_t var_a0;
            *(arg1 + 0x30) = var_a0;
            *(arg1 + 0x21) = var_af;
            *(arg1 + 0x11) = var_bf;
            int128_t var_cf;
            *(arg1 + 1) = var_cf;
            *arg1 = rax_1;
            return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$just..argument_parser..ArgumentGroup$GT$$GT$::h723770c4ad86c3c3(&var_140);
        }
        
        int128_t var_c8;
        int128_t var_68 = var_c8;
        int128_t var_58_1 = var_bf;
        int128_t var_48_1 = var_af;
        alloc::vec::Vec$LT$T$C$A$GT$::push::hfe40c2a3257e7a9f(&var_140, &var_68);
    } while (var_110 != arg4);
    
    *(arg1 + 0x18) = result;
    *(arg1 + 8) = var_140;
    *arg1 = 0x38;
    return result;
}
