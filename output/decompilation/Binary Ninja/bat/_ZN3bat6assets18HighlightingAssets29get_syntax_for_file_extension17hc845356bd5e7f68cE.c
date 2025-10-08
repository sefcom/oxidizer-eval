
  char* bat::assets::HighlightingAssets::get_syntax_for_file_extension::hc845356bd5e7f68c(char* arg1, int64_t* arg2, char* arg3, int64_t arg4, void* arg5)

{
    void* rax;
    int64_t rdx;
    rax = std::path::Path::extension::h0018158968ea260f(arg3, arg4);
    char var_78;
    bat::assets::HighlightingAssets::find_syntax_by_extension::hb9f350a5a7f0e1a8(&var_78, arg2, 
        rax, rdx);
    char rax_1 = var_78;
    int128_t var_70;
    
    if (rax_1 != 0xd)
    {
        label_83655e:
        int32_t var_77;
        *(arg1 + 4) = var_77;
        *(arg1 + 1) = var_77;
        int128_t var_60;
        *(arg1 + 0x18) = var_60;
        int128_t var_50;
        *(arg1 + 0x28) = var_50;
        int128_t var_40;
        *(arg1 + 0x38) = var_40;
        int64_t var_30;
        *(arg1 + 0x48) = var_30;
        *arg1 = rax_1;
        *(arg1 + 8) = var_70;
    }
    else if (var_70)
    {
        *(arg1 + 8) = var_70;
        *arg1 = 0xd;
    }
    else
    {
        bat::syntax_mapping::ignored_suffixes::IgnoredSuffixes::try_with_stripped_suffix::h37767f9b3f101424(&var_78, arg5, arg3, arg4, arg2);
        rax_1 = var_78;
        
        if (rax_1 != 0xd)
            goto label_83655e;
        
        *(arg1 + 8) = var_70;
        *arg1 = 0xd;
    }
    return arg1;
}
