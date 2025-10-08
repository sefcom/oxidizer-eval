
  int64_t just::search::Search::global_justfile_paths::hd43d3a4a486b84b5(int128_t* arg1)

{
    int64_t var_c0 = 0;
    int64_t var_b8 = 8;
    int64_t result = 0;
    int64_t var_d8;
    dirs::config_dir::h4d6c94d6b0a70841(&var_d8);
    uint64_t var_c8;
    int128_t var_a8;
    int128_t var_78;
    uint64_t var_68;
    
    if (!(0 + -(var_d8)))
    {
        int64_t var_d0;
        std::path::Path::join::h1eac0ae5e7efa361(&var_78, var_d0, var_c8, "just\x1b[1mCYAN'{{'[");
        uint64_t var_98_1 = var_68;
        var_a8 = var_78;
        char const* const var_90_1 = "justfileBG_BLACKBG_WHITEImplicit…";
        int64_t var_88_1 = 8;
        alloc::vec::Vec$LT$T$C$A$GT$::push::hf9976eaa6275e613(&var_c0, &var_a8);
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_d8);
    }
    
    int64_t var_48;
    dirs::home_dir::h56798f98581d6ac2(&var_48);
    
    if (var_48 != -0x8000000000000000)
    {
        int64_t var_40;
        uint64_t var_38;
        std::path::Path::join::h1eac0ae5e7efa361(&var_78, var_40, var_38, ".config");
        std::path::Path::join::h1eac0ae5e7efa361(&var_d8, *var_78[8], var_68, 
            "just\x1b[1mCYAN'{{'[");
        uint64_t var_98_2 = var_c8;
        var_a8 = var_d8;
        char const* const var_90_2 = "justfileBG_BLACKBG_WHITEImplicit…";
        int64_t var_88_2 = 8;
        alloc::vec::Vec$LT$T$C$A$GT$::push::hf9976eaa6275e613(&var_c0, &var_a8);
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_78);
        var_a8 = 0;
        *var_a8[8] = 2;
        var_98_2 = *data_82e5b0;
        var_88_2 = *data_82e5c0;
        int64_t i_3;
        int64_t rdx_6;
        i_3 = core::array::iter::iter_inner::PolymorphicIter$LT$$u5b$core..mem..maybe_uninit..MaybeUninit$LT$T$GT$$u5d$$GT$::next::he3a8d094ac8fb9ab(&var_a8);
        
        if (i_3)
        {
            int64_t i_1 = i_3;
            int64_t r13_1 = rdx_6;
            int64_t i;
            
            do
            {
                _$LT$just..module_path..ModulePath$u20$as$u20$core..convert..TryFrom$LT$$RF$$u5b$$RF$str$u5d$$GT$$GT$::try_from::_$u7b$$u7b$closure$u7d$$u7d$::ha7dde365619bc2c0(&var_d8, var_40, var_38);
                uint64_t var_68_1 = var_c8;
                var_78 = var_d8;
                int64_t i_2 = i_1;
                int64_t var_58_1 = r13_1;
                alloc::vec::Vec$LT$T$C$A$GT$::push::hf9976eaa6275e613(&var_c0, &var_78);
                int64_t rdx_9;
                i = core::array::iter::iter_inner::PolymorphicIter$LT$$u5b$core..mem..maybe_uninit..MaybeUninit$LT$T$GT$$u5d$$GT$::next::he3a8d094ac8fb9ab(&var_a8);
                i_1 = i;
                r13_1 = rdx_9;
            } while (i);
        }
        
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_48);
    }
    
    arg1[1] = result;
    *arg1 = var_c0;
    return result;
}
