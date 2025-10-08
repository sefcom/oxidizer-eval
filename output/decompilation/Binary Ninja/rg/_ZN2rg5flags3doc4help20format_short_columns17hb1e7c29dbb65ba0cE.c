
  int64_t rg::flags::doc::help::format_short_columns::hb1e7c29dbb65ba0c(int128_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6)

{
    int64_t var_b0 = arg3;
    int64_t var_a8 = arg5;
    char const (** const var_70)[0xd2];
    
    if (arg3 != arg5)
    {
        var_70 = &data_7ea348;
        int64_t var_68 = 1;
        int64_t var_60 = 8;
        int128_t var_58 = {0};
        core::panicking::assert_failed::h449f2a7fe5426575(0, &var_b0, &var_a8, &var_70);
        /* no return */
    }
    
    int64_t var_d0 = 0;
    int64_t var_c8 = 1;
    int64_t result = 0;
    core::iter::traits::iterator::Iterator::zip::h0d560c715792bf7d(&var_70, arg2, 
        arg2 + arg3 * 0x18, arg4);
    int64_t var_38 = 0;
    int64_t var_a0;
    _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hdad994c612ce0c4a(&var_a0, &var_70);
    void* i_2;
    void* i = i_2;
    
    if (i)
    {
        int64_t var_f8_1 = arg6 + 2;
        
        do
        {
            void* i_1 = i;
            bool cond:0_1 = !var_a0;
            void* var_90;
            void* var_88 = var_90;
            void** const var_128;
            
            if (!cond:0_1)
            {
                var_128 = &data_7ea358;
                int64_t var_120_1 = 1;
                int64_t var_118_1 = 8;
                int128_t var_110_1 = {0};
                core::result::Result$LT$T$C$E$GT$::unwrap::hd18702de8132f064(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::hcf32c70c0eda1434(&var_d0, &var_128));
                i = i_1;
            }
            
            uint64_t rbx_2 = var_f8_1 - *(i + 0x10);
            var_128 = &data_7ea368;
            int64_t var_120_2 = 1;
            int64_t var_118_2 = 8;
            int128_t var_110_2 = {0};
            core::result::Result$LT$T$C$E$GT$::unwrap::hd18702de8132f064(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::hcf32c70c0eda1434(&var_d0, &var_128));
            void** var_e8 = &i_1;
            int64_t (* var_e0_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hfd6c34d9aa7433ce;
            var_128 = &data_462330;
            int64_t var_120_3 = 1;
            *var_110_2[8] = 0;
            void*** var_118_3 = &var_e8;
            var_110_2 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::hd18702de8132f064(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::hcf32c70c0eda1434(&var_d0, &var_128));
            alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::repeat::h6004d655c3feac73(&var_128, 
                " \n        !FLAG!)\n          CO…", rbx_2);
            void*** var_d8_1 = var_118_3;
            var_e8 = var_128;
            void*** var_80 = &var_e8;
            int64_t (* var_78_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            var_128 = &data_462330;
            int64_t var_120_4 = 1;
            *var_110_2[8] = 0;
            void**** var_118_4 = &var_80;
            var_110_2 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::hd18702de8132f064(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::hcf32c70c0eda1434(&var_d0, &var_128));
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_e8);
            var_e8 = &var_88;
            int64_t (* var_e0_2)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hfd6c34d9aa7433ce;
            var_128 = &data_462330;
            int64_t var_120_5 = 1;
            *var_110_2[8] = 0;
            void*** var_118_5 = &var_e8;
            var_110_2 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::hd18702de8132f064(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::hcf32c70c0eda1434(&var_d0, &var_128));
            _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hdad994c612ce0c4a(&var_a0, &var_70);
            i = i_2;
        } while (i);
    }
    
    arg1[1] = result;
    *arg1 = var_d0;
    return result;
}
