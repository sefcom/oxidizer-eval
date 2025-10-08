
  int64_t uu_env::debug_print_args::h9262afd3814fa2d4(int64_t arg1, int64_t arg2)

{
    void** const var_b8 = &data_5109a8;
    int64_t var_b0 = 1;
    int64_t var_a8 = 8;
    int128_t var_a0 = {0};
    std::io::stdio::_eprint::h57899770eacec2ad(&var_b8);
    int64_t var_88 = arg1;
    int64_t var_80 = arg1 + arg2 * 0x18;
    int64_t var_78 = 0;
    int64_t result;
    void* i;
    result = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he7ef2d91b577ff9a(&var_88);
    
    while (i)
    {
        int64_t result_1 = result;
        int64_t rax_2 = *(i + 8);
        int64_t rcx_1 = *(i + 0x10);
        int64_t var_50 = 1;
        int64_t var_48_1 = rax_2;
        int64_t var_40_1 = rcx_1;
        char var_38_1 = 1;
        int64_t* var_70 = &result_1;
        uint64_t (* var_68_1)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
        int64_t* var_60_1 = &var_50;
        int64_t (* var_58_1)(int32_t* arg1, int64_t* arg2) =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
        var_b8 = &data_5109b8;
        int64_t var_b0_1 = 3;
        *var_a0[8] = 0;
        int64_t** var_a8_1 = &var_70;
        var_a0 = 2;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_b8);
        result = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he7ef2d91b577ff9a(&var_88);
    }
    
    return result;
}
