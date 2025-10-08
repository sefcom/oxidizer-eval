
  uint64_t fd::ensure_search_pattern_is_not_a_path::ha1d173ccdd2458ae(void* arg1)

{
    if (*(arg1 + 0x1ee))
        return 0;
    
    char* rbx = *(arg1 + 0x90);
    void* r14 = *(arg1 + 0x98);
    
    if (_$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h822e1c3c690e59b6(
        rbx, r14))
    {
        char rax_2;
        uint64_t rdx_1;
        rax_2 = std::path::Path::is_dir::h02edbc48c38d7d9e(rbx, r14);
        
        if (rax_2)
        {
            void* var_88 = arg1 + 0x88;
            void** var_80 = &var_88;
            int64_t (* var_78_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9d7524885660455a;
            char const* const var_70_1 = "/";
            int64_t (* var_68_1)(int32_t* arg1, int64_t* arg2) =
                _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h0215b7857ad55b0c;
            char const (** const var_60)[0xc6] = &data_802868;
            int64_t var_58_1 = 6;
            void* const var_40_1 = &data_47b7e0;
            int64_t var_38_1 = 5;
            void*** var_50_1 = &var_80;
            int64_t var_48_1 = 2;
            void var_30;
            core::option::Option$LT$T$GT$::map_or_else::h1f7ab50fdd345844(&var_30, 0, rdx_1, 
                &var_60);
            return anyhow::error::_$LT$impl$u20$anyhow..Error$GT$::msg::h06348eb8850c741d(&var_30);
        }
    }
    
    return 0;
}
