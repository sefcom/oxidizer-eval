
  int64_t* uu_env::apply_specified_env_vars::ha326473558d292da(void* arg1)

{
    int64_t rax = *(arg1 + 0x38);
    int64_t rcx = *(arg1 + 0x40);
    int64_t var_90 = rax;
    int64_t var_88 = rcx * 0x30 + rax;
    int64_t* i;
    
    for (i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5a91fe410bc96a89(&var_90); i; i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5a91fe410bc96a89(&var_90))
    {
        if (!i[2])
        {
            int64_t rax_1;
            int64_t rdx_1;
            rax_1 = uucore::util_name::h60d842bf27b05e82();
            int64_t var_50 = rax_1;
            int64_t var_48_1 = rdx_1;
            int64_t* var_a0 = &var_50;
            int64_t (* var_98_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h402b3702303fb18e;
            void* const var_80 = &data_548c18;
            int64_t var_78_1 = 2;
            int64_t var_60_1 = 0;
            int64_t** var_70_1 = &var_a0;
            int64_t var_68_1 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_80);
            int128_t zmm0_1 = *(i + 0x20);
            var_50 = 1;
            var_48_1 = zmm0_1;
            char var_38_1 = 1;
            var_a0 = &var_50;
            int64_t (* var_98_2)(void* arg1, void* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            var_80 = &data_548c38;
            int64_t var_78_2 = 2;
            int64_t var_60_2 = 0;
            int64_t** var_70_2 = &var_a0;
            int64_t var_68_2 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_80);
        }
        else
            std::env::set_var::h6a4f0c86b7bc3f19(i, &i[3]);
    }
    
    return i;
}
