
  int64_t just::subcommand::Subcommand::compile::hd4ddb48c754af338(int64_t* arg1, void* arg2, int64_t* arg3, int64_t arg4, uint64_t arg5)

{
    void* const var_6f0;
    just::compiler::Compiler::compile::h029c05ce59997e38(&var_6f0, arg3, arg4, arg5);
    void* const r12 = var_6f0;
    int128_t var_6e8;
    int128_t var_768 = var_6e8;
    int128_t var_6d8;
    int128_t var_6c8;
    int128_t var_6b8;
    int128_t var_6a8;
    int128_t var_698;
    int64_t result;
    
    if (-(r12) == -0x8000000000000000)
    {
        arg1[0xd] = result;
        *(arg1 + 0x58) = var_698;
        *(arg1 + 0x48) = var_6a8;
        int128_t zmm0 = var_768;
        *(arg1 + 0x38) = var_6b8;
        *(arg1 + 0x28) = var_6c8;
        *(arg1 + 0x18) = var_6d8;
        *(arg1 + 8) = zmm0;
        *arg1 = -0x8000000000000000;
        return result;
    }
    
    void var_680;
    int64_t i_2;
    memcpy(&i_2, &var_680, 0x2f0);
    int128_t var_388_1 = var_768;
    int128_t var_378_1 = var_6d8;
    int128_t var_368_1 = var_6c8;
    int128_t var_358_1 = var_6b8;
    int128_t var_348_1 = var_6a8;
    int128_t var_338_1 = var_698;
    void* const var_390 = r12;
    just::justfile::Justfile::check_unstable::he04de0852efda7ff(&var_6f0, &var_390, 
        *(arg2 + 0x1a4));
    
    if (var_6f0 != 0x38)
    {
        arg1[0xd] = *var_698[8];
        *(arg1 + 0x58) = var_6a8;
        *(arg1 + 0x48) = var_6b8;
        int128_t zmm0_2 = var_6f0;
        *(arg1 + 0x38) = var_6c8;
        *(arg1 + 0x28) = var_6d8;
        *(arg1 + 0x18) = var_6e8;
        *(arg1 + 8) = zmm0_2;
        *arg1 = -0x8000000000000000;
        return core::ptr::drop_in_place$LT$just..compilation..Compilation$GT$::hcea2292c76e0cd86(
            &var_390);
    }
    
    if (*(arg2 + 0x1a7))
    {
        int64_t i_1 = i_2;
        
        if (i_1)
        {
            int64_t i;
            
            do
            {
                just::color::Color::stderr::h04afff4548ac818e(&var_6f0, arg2 + 0x184);
                var_768 = result;
                *var_768[8] = &data_831110;
                int128_t var_748;
                var_748 = *var_6e8[8];
                int128_t var_758_1 = var_6f0;
                int128_t* var_700 = &var_768;
                int64_t (* var_6f8_1)(int64_t* arg1, int64_t arg2) = _$LT$just..color_display..Wrapper$u20$as$u20$core..fmt..Display$GT$::fmt::hc72f260d5107bced;
                var_6f0 = &data_82dbd8;
                var_6e8 = 2;
                *var_6d8[8] = 0;
                *var_6e8[8] = &var_700;
                var_6d8 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_6f0);
                i = i_1;
                i_1 -= 1;
            } while (i != 1);
        }
    }
    
    return memcpy(arg1, &var_390, 0x360);
}
