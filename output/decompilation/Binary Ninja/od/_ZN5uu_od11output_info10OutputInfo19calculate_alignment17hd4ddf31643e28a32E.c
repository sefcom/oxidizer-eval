
  uint64_t uu_od::output_info::OutputInfo::calculate_alignment::hd4ddf31643e28a32(int128_t* arg1, void* arg2, int64_t arg3, int64_t arg4)

{
    void* const s;
    
    if (arg3 >= 9)
    {
        int64_t var_90 = arg3 << 3;
        int64_t* var_48 = &var_90;
        uint64_t (* var_40)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
        char const* const var_38 = "@";
        uint64_t (* var_30)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
        s = &data_502560;
        int64_t var_80 = 3;
        int64_t var_68 = 0;
        int64_t** var_78 = &var_48;
        int64_t var_70 = 2;
        core::panicking::panic_fmt::h96f341d36638c225(&s);
        /* no return */
    }
    
    __builtin_memset(&s, 0, 0x40);
    uint64_t result = _$LT$uu_od..parse_formats..ParsedFormatterItemInfo$u20$as$u20$uu_od..output_info..TypeSizeInfo$GT$::byte_size::hae6e2cf52c2547bf(arg2);
    
    if (!result)
    {
        core::panicking::panic_const::panic_const_div_by_zero::hc7d962fcb87948a3();
        /* no return */
    }
    
    uint64_t result_2 = result;
    
    if (result <= arg3)
    {
        uint16_t rax_1 = arg3;
        char temp2_1 = result_2;
        uint8_t temp1_1 = rax_1 % temp2_1;
        rax_1 = rax_1 / temp2_1;
        *rax_1[1] = temp1_1;
        uint64_t result_1 = rax_1;
        int64_t r14_1 = arg4 - _$LT$uu_od..parse_formats..ParsedFormatterItemInfo$u20$as$u20$uu_od..output_info..TypeSizeInfo$GT$::print_width::h4208d9448b3500d1(arg2) * result_1;
        bool cond:0_1;
        
        do
        {
            uint64_t rax_5;
            
            if (!(r14_1 >> 0x20))
                rax_5 = COMBINE(0, r14_1) / result_1;
            else
                rax_5 = COMBINE(0, r14_1) / result_1;
            
            int64_t i_1 = result_1 + 0;
            int64_t rdi_2 = 0;
            int64_t i;
            
            do
            {
                if (rdi_2 > 7)
                {
                    core::panicking::panic_bounds_check::h025cadc56a971af7(rdi_2, 8);
                    /* no return */
                }
                
                (&s)[rdi_2] += rax_5;
                r14_1 -= rax_5;
                rdi_2 += result_2;
                i = i_1;
                i_1 -= 1;
            } while (i != 1);
            result = result_1 >> 1;
            result_2 *= 2;
            cond:0_1 = result_1 >= 2;
            result_1 = result;
        } while (cond:0_1);
    }
    
    int128_t zmm0 = s;
    __builtin_memset(&arg1[1], 0, 0x30);
    *arg1 = zmm0;
    return result;
}
