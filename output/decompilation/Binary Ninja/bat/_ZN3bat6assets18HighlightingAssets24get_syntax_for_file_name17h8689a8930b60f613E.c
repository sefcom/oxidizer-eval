
  char* bat::assets::HighlightingAssets::get_syntax_for_file_name::h8689a8930b60f613(char* arg1, int64_t* arg2, char* arg3, int64_t arg4, void* arg5)

{
    char var_78;
    bat::assets::HighlightingAssets::find_syntax_by_extension::hb9f350a5a7f0e1a8(&var_78, arg2, 
        arg3, arg4);
    char rax = var_78;
    int128_t var_70;
    
    if (rax != 0xd)
    {
        label_836489:
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
        *arg1 = rax;
        *(arg1 + 8) = var_70;
    }
    else if (var_70)
    {
        *(arg1 + 8) = var_70;
        *arg1 = 0xd;
    }
    else
    {
        bat::syntax_mapping::ignored_suffixes::IgnoredSuffixes::try_with_stripped_suffix::h9cfb1c3da0d07350(&var_78, arg5, arg3, arg4, arg2);
        rax = var_78;
        
        if (rax != 0xd)
            goto label_836489;
        
        *(arg1 + 8) = var_70;
        *arg1 = 0xd;
    }
    return arg1;
}
