
  char* bat::assets::HighlightingAssets::get_syntaxes::hb13e605a35b83eb8(char* arg1, int64_t* arg2)

{
    char var_58;
    bat::assets::HighlightingAssets::get_syntax_set::h9a5acb7c2790c837(&var_58, arg2);
    char rax = var_58;
    void* rcx;
    void* var_50;
    
    if (rax != 0xd)
    {
        int32_t var_57;
        *(arg1 + 4) = var_57;
        *(arg1 + 1) = var_57;
        rcx = var_50;
        int128_t var_38;
        *(arg1 + 0x20) = var_38;
        int128_t var_28;
        *(arg1 + 0x30) = var_28;
        int128_t var_18;
        *(arg1 + 0x40) = var_18;
        int128_t var_48;
        *(arg1 + 0x10) = var_48;
    }
    else
    {
        rcx = *(var_50 + 8);
        *(arg1 + 0x10) = *(var_50 + 0x10);
    }
    *(arg1 + 8) = rcx;
    *arg1 = rax;
    return arg1;
}
