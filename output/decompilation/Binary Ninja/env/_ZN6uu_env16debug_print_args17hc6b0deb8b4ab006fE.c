
  int64_t uu_env::debug_print_args::hc6b0deb8b4ab006f(int64_t arg1, int64_t arg2)

{
    char const (** const var_b8)[0xaa] = &data_5489e8;
    int64_t var_b0 = 1;
    int64_t var_a8 = 8;
    int128_t var_a0 = {0};
    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_b8);
    int64_t var_88 = arg1;
    int64_t var_80 = arg1 + arg2 * 0x18;
    int64_t var_78 = 0;
    int64_t result;
    void* i;
    result = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb9a3611afc387125(&var_88);
    
    while (i)
    {
        int64_t result_1 = result;
        int128_t zmm0_1 = *(i + 8);
        int64_t var_50 = 1;
        int128_t var_48_1 = zmm0_1;
        char var_38_1 = 1;
        int64_t* var_70 = &result_1;
        uint64_t (* var_68_1)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
        int64_t* var_60_1 = &var_50;
        int64_t (* var_58_1)(void* arg1, void* arg2) =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        var_b8 = &data_5489f8;
        int64_t var_b0_1 = 3;
        *var_a0[8] = 0;
        int64_t** var_a8_1 = &var_70;
        var_a0 = 2;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_b8);
        result = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb9a3611afc387125(&var_88);
    }
    
    return result;
}
