
  int128_t* uu_truncate::truncate_reference_and_size::h4e3270fcd25f5342(int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, char const (** arg5)[0x11], int64_t arg6, char arg7)

{
    int32_t var_158;
    uu_truncate::parse_mode_and_size::hbf18cbb89603c372(&var_158, arg3, arg4);
    int128_t var_148;
    char const (** const var_e8)[0x11];
    
    if (var_158 != 3)
    {
        int128_t var_118_1 = var_148;
        int128_t var_128 = var_158;
        int128_t* var_138 = &var_128;
        int64_t (* var_130_1)(int64_t arg1, void* arg2) = _$LT$uucore..parser..parse_size..ParseSizeError$u20$as$u20$core..fmt..Display$GT$::fmt::h1bebe12c07ded6a0;
        var_e8 = &data_516668;
        int64_t var_e0_1 = 1;
        int64_t var_c8_1 = 0;
        int128_t** var_d8_1 = &var_138;
        int64_t var_d0_1 = 1;
        int128_t var_100;
        core::option::Option$LT$T$GT$::map_or_else::ha526a84f6413e2dc(&var_100, &var_e8);
        var_d0_1 = 1;
        var_e8 = var_100;
        int64_t var_f0;
        int64_t var_d8_2 = var_f0;
        int128_t* rax_1 = alloc::boxed::Box$LT$T$GT$::new::h2e09ae21cbeee3ec(&var_e8);
        core::ptr::drop_in_place$LT$uucore..parser..parse_size..ParseSizeError$GT$::hd9babfdf21675581(&var_128);
        return rax_1;
    }
    
    int64_t var_150;
    int128_t* i;
    uint64_t rdx_4;
    char const* const rsi_4;
    
    if (!var_150)
    {
        rsi_4 = "you must specify a relative '--s…";
        rdx_4 = 0x37;
        label_4adc2a:
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h40f585cb9c895814(&var_e8, 
            rsi_4, rdx_4);
        int64_t var_d0;
        var_d0 = 1;
        i = alloc::boxed::Box$LT$T$GT$::new::h2e09ae21cbeee3ec(&var_e8);
    }
    else
    {
        int64_t rbp_1 = var_148;
        
        if ((var_150 == 5 || var_150 == 6) && !rbp_1)
        {
            rsi_4 = &data_413ba0[0x10];
            rdx_4 = 0x10;
            goto label_4adc2a;
        }
        
        std::fs::metadata::h6368ec5e748c38e4(&var_e8, arg1);
        int64_t var_e0;
        
        if (var_e8 == 2)
            return uu_truncate::truncate_reference_and_size::_$u7b$$u7b$closure$u7d$$u7d$::h76112823d9285587(arg1, arg2, var_e0);
        int64_t var_98;
        int64_t rax_2 =
            uu_truncate::TruncateMode::to_size::h56da67cab21ebb4e(var_150, rbp_1, var_98);
        var_e8 = arg5;
        void* var_e0_2 = &arg5[arg6 * 3];
        
        do
        {
            void* rax_5 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0f1a2111712b44af(&var_e8);
            
            if (!rax_5)
                return nullptr;
            
            i = uu_truncate::file_truncate::h8689dfa8e5b80143(*(rax_5 + 8), *(rax_5 + 0x10), arg7, 
                rax_2);
        } while (!i);
    }
    return i;
}
