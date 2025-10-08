
  int64_t alacritty::cli::parse_class::h820840b182640881(int64_t* arg1, char* arg2, void* arg3)

{
    void* r14 = arg3;
    char* r15 = arg2;
    char* var_40;
    core::str::_$LT$impl$u20$str$GT$::split_once::ha4263c82d6adeb01(&var_40, arg2, arg3);
    char* r12 = var_40;
    uint64_t rdx = r14;
    char* rsi = r15;
    
    if (r12)
    {
        char* var_30;
        r15 = var_30;
        void* var_28;
        r14 = var_28;
        
        if (_$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h822e1c3c690e59b6(0x2c, r15, r14))
        {
            int64_t result = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h4cfefc754dbf8fee(&arg1[1], "Too many parametersInvalid worki…", 0x13);
            *arg1 = -0x8000000000000000;
            return result;
        }
        
        uint64_t var_38;
        rdx = var_38;
        rsi = r12;
    }
    
    /* tailcall */
    return alacritty::config::window::Class::new::h2eae1c576e64848a(arg1, rsi, rdx, r15, r14);
}
