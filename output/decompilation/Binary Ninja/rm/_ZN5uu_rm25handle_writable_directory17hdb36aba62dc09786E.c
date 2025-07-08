
  uint64_t uu_rm::handle_writable_directory::hdb36aba62dc09786(int64_t arg1, int64_t arg2, char arg3, char arg4)

{
    void* const var_a0;
    int64_t* var_70;
    int64_t* var_58;
    void* var_38;
    
    if (arg4 < 0)
    {
        uint64_t result;
        result = 1;
        
        if (arg3 != 2)
            return result;
        
        int64_t* rax_2;
        int64_t rdx_2;
        rax_2 = uucore::util_name::h60d842bf27b05e82();
        var_58 = rax_2;
        int64_t var_50_5 = rdx_2;
        var_70 = &var_58;
        int64_t (* var_68_4)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
        var_a0 = &data_527970;
        int64_t var_98_6 = 2;
        int64_t var_80_5 = 0;
        int64_t** var_90_6 = &var_70;
        int64_t var_88_5 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_a0);
        var_58 = 1;
        int64_t var_50_6 = arg1;
        int64_t var_48_2 = arg2;
        char var_40_2 = 1;
        var_70 = &var_58;
        int64_t (* var_68_5)(void* arg1, void* arg2) =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        var_a0 = &data_527bd8;
        int64_t var_98_7 = 2;
        int64_t var_80_6 = 0;
        int64_t** var_90_7 = &var_70;
        int64_t var_88_6 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_a0);
        var_a0 = &data_527b08;
        int64_t var_98_8 = 1;
        int64_t var_90_8 = 8;
        var_88_6 = {0};
        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_a0);
        var_38 = &std::io::stdio::stderr::INSTANCE::ha28648ccba9ff424;
        _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::hf7b2528795edb6d7(
            &var_38);
    }
    else
    {
        int64_t* rax;
        int64_t rdx;
        rax = uucore::util_name::h60d842bf27b05e82();
        var_58 = rax;
        int64_t var_50_1 = rdx;
        var_70 = &var_58;
        int64_t (* var_68_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
        var_a0 = &data_527970;
        int64_t var_98_1 = 2;
        int64_t var_80_1 = 0;
        int64_t** var_90_1 = &var_70;
        int64_t var_88_1 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_a0);
        var_58 = 1;
        int64_t var_50_2 = arg1;
        int64_t var_48_1 = arg2;
        char var_40_1 = 1;
        var_70 = &var_58;
        int64_t (* var_68_2)(void* arg1, void* arg2) =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        var_a0 = &data_527bb8;
        int64_t var_98_2 = 2;
        int64_t var_80_2 = 0;
        int64_t** var_90_2 = &var_70;
        int64_t var_88_2 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_a0);
        var_a0 = &data_527b08;
        int64_t var_98_3 = 1;
        int64_t var_90_3 = 8;
        var_88_2 = {0};
        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_a0);
        var_38 = &std::io::stdio::stderr::INSTANCE::ha28648ccba9ff424;
        _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::hf7b2528795edb6d7(
            &var_38);
    }
    return uucore::read_yes::hc350e858ab85cf03();
}
