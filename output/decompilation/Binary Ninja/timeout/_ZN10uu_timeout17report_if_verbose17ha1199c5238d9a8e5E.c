
  void uu_timeout::report_if_verbose::ha1199c5238d9a8e5(int64_t arg1, int64_t arg2, int64_t arg3, int32_t arg4)

{
    if (arg4)
    {
        if (arg1 >= 0x20)
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        int128_t var_40 =
            *(&uucore::features::signals::ALL_SIGNALS::hb6c41a286543a4a8 + (arg1 << 4));
        int64_t rax_1;
        int64_t rdx;
        rax_1 = uucore::util_name::h074417a1e6395129();
        int64_t var_60 = rax_1;
        int64_t var_58_1 = rdx;
        int64_t* var_80 = &var_60;
        int64_t (* var_78_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hfb845f87f4f905f7;
        void* const var_b0 = &data_5127c8;
        int64_t var_a8_1 = 2;
        int64_t var_90_1 = 0;
        int64_t** var_a0_1 = &var_80;
        int64_t var_98_1 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_b0);
        var_60 = 0;
        int64_t var_58_2 = arg2;
        int64_t var_50_1 = arg3;
        char var_48_1 = 1;
        var_80 = &var_40;
        int64_t (* var_78_2)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hfb845f87f4f905f7;
        int64_t* var_70_1 = &var_60;
        int64_t (* var_68_1)(int32_t* arg1, int64_t* arg2) =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
        var_b0 = &data_5127e8;
        int64_t var_a8_2 = 3;
        int64_t var_90_2 = 0;
        int64_t** var_a0_2 = &var_80;
        int64_t var_98_2 = 2;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_b0);
    }
}
