
  void* bat::assets::HighlightingAssets::find_syntax_by_name::h9f91e66c04b2ba0b(char* arg1, int64_t* arg2)

{
    char var_70;
    bat::assets::HighlightingAssets::get_syntax_set::h9a5acb7c2790c837(&var_70, arg2);
    char rbp = var_70;
    void* result;
    void* result_1;
    
    if (rbp != 0xd)
    {
        int32_t var_6f;
        *(arg1 + 4) = var_6f;
        *(arg1 + 1) = var_6f;
        result = result_1;
        int128_t var_50;
        *(arg1 + 0x20) = var_50;
        int128_t var_40;
        *(arg1 + 0x30) = var_40;
        int128_t var_30;
        *(arg1 + 0x40) = var_30;
        int128_t var_60;
        *(arg1 + 0x10) = var_60;
    }
    else
    {
        result = syntect::parsing::syntax_set::SyntaxSet::find_syntax_by_name::h8df32158a8fa1b23(
            result_1, "Plain Te");
        *(arg1 + 0x10) = result_1;
    }
    *(arg1 + 8) = result;
    *arg1 = rbp;
    return result;
}
