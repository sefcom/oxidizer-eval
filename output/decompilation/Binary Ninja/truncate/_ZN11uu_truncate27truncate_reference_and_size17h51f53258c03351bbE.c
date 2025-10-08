
  uint64_t uu_truncate::truncate_reference_and_size::h51f53258c03351bb(int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, void* arg5, int64_t arg6, char arg7)

{
    void* rbx = arg5;
    int32_t var_158;
    uu_truncate::parse_mode_and_size::h9caa4c91beef10d4(&var_158, arg3, arg4);
    uint64_t r14_1;
    int64_t var_150;
    int128_t var_148;
    char const (** const var_e8)[0x11];
    
    if (var_158 != 4)
    {
        int128_t var_118_1 = var_148;
        int128_t var_128 = var_158;
        int128_t* var_138 = &var_128;
        int64_t (* var_130_1)(int64_t arg1, int64_t* arg2) = _$LT$uucore..features..parser..parse_size..ParseSizeError$u20$as$u20$core..fmt..Display$GT$::fmt::he618d31d336be9c1;
        var_e8 = &data_4e40e8;
        int64_t var_e0_1 = 1;
        int64_t var_c8_1 = 0;
        int128_t** var_d8_1 = &var_138;
        int64_t var_d0_1 = 1;
        int128_t var_100;
        core::option::Option$LT$T$GT$::map_or_else::hccc437e8064ad343(&var_100, &var_e8);
        var_d0_1 = 1;
        var_e8 = var_100;
        int64_t var_f0;
        int64_t var_d8_2 = var_f0;
        r14_1 = alloc::boxed::Box$LT$T$GT$::new::h0fcae278b0f73f4a(&var_e8);
        core::ptr::drop_in_place$LT$uucore..features..parser..parse_size..ParseSizeError$GT$::hdafbfd975804eb50(&var_128);
    }
    else
    {
        uint64_t rdx_3;
        char const* const rsi_4;
        
        if (!var_150)
        {
            rsi_4 = "you must specify a relative '--s…";
            rdx_3 = 0x37;
            label_4592a0:
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hc324d0392f7be5de(&var_e8, rsi_4, rdx_3);
            int64_t var_d0;
            var_d0 = 1;
            r14_1 = alloc::boxed::Box$LT$T$GT$::new::h0fcae278b0f73f4a(&var_e8);
        }
        else
        {
            int64_t rbp_1 = var_148;
            
            if ((var_150 == 5 || var_150 == 6) && !rbp_1)
            {
                rsi_4 = &data_416e60;
                rdx_3 = 0x10;
                goto label_4592a0;
            }
            
            std::fs::metadata::h460bc532d18d3302(&var_e8, arg1);
            int64_t var_e0;
            
            if (var_e8 == 2)
                return uu_truncate::truncate_reference_and_size::_$u7b$$u7b$closure$u7d$$u7d$::h6c1eb193d24fc6ab(arg1, arg2, var_e0);
            int64_t var_98;
            int64_t rax_3 =
                uu_truncate::TruncateMode::to_size::he28c50c65dad202d(var_150, rbp_1, var_98);
            int64_t i = arg6 * 0x18;
            r14_1 = 0;
            
            while (i)
            {
                uint64_t rax = uu_truncate::file_truncate::ha430ef778d6571e6(*(rbx + 8), 
                    *(rbx + 0x10), arg7, rax_3);
                i -= 0x18;
                rbx += 0x18;
                
                if (rax)
                    return rax;
            }
        }
    }
    return r14_1;
}
