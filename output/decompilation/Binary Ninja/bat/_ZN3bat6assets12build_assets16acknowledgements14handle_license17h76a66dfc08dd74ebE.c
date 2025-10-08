
  void** const bat::assets::build_assets::acknowledgements::handle_license::h76a66dfc08dd74eb(char* arg1, int64_t arg2)

{
    int64_t var_50 = arg2;
    int64_t rdx;
    int64_t var_48 = rdx;
    void** const result_1;
    std::fs::read_to_string::h512db2d9218e57c1(&result_1, arg2);
    void** const result = result_1;
    char* var_90;
    
    if (-(result) != -0x8000000000000000)
    {
        void** const result_3 = result;
        char* var_60_1 = var_90;
        void** result_2;
        
        if (!bat::assets::build_assets::acknowledgements::include_license_in_acknowledgments::h502a9fe06636a5ab(var_90, result_2))
        {
            char rax_1;
            uint64_t rdx_1;
            rax_1 = bat::assets::build_assets::acknowledgements::license_not_needed_in_acknowledgements::h305a91287eb31f3e(var_90, result_2);
            
            if (!rax_1)
            {
                int64_t* var_40 = &var_50;
                int64_t (* var_38_1)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::h658aa54aded8ca97;
                result_1 = &data_acdfa8;
                int64_t var_90_1 = 1;
                int64_t var_78_1 = 0;
                int64_t** var_88 = &var_40;
                int64_t var_80_1 = 1;
                int128_t var_30;
                core::option::Option$LT$T$GT$::map_or_else::hec96efa742f30dcc(&var_30, 0, rdx_1, 
                    &result_1);
                *result_1[7] = var_30;
                int64_t var_20;
                var_88 = var_20;
                *arg1 = 0xb;
                *(arg1 + 1) = result_1;
                *(arg1 + 0x10) = var_90_1;
                *(arg1 + 0x18) = var_88;
            }
            else
            {
                *(arg1 + 8) = -0x8000000000000000;
                *arg1 = 0xd;
            }
            
            return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(
                &result_3);
        }
        
        result = result_2;
        *(arg1 + 0x18) = result;
        *(arg1 + 8) = result_3;
        *arg1 = 0xd;
    }
    else
    {
        *arg1 = 0;
        *(arg1 + 8) = var_90;
    }
    return result;
}
