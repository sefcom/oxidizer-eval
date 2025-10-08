
  int64_t uu_od::multifilereader::MultifileReader::next_file::h88105f385025e3a3(void* arg1)

{
    int64_t result;
    
    if (*(arg1 + 0x10))
    {
        while (true)
        {
            int64_t var_60;
            alloc::vec::Vec$LT$T$C$A$GT$::remove::h89a38a1f2036b4c0(&var_60, arg1);
            int64_t rax_1 = var_60;
            uint64_t r15_1;
            int64_t var_58;
            
            if (rax_1)
            {
                if (rax_1 != 1)
                {
                    result = core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::h4e787533bd43325d(*(arg1 + 0x18), *(arg1 + 0x20));
                    *(arg1 + 0x18) = var_58;
                    return result;
                }
                
                std::io::stdio::stdin::h9a05a2c3e7544b2a();
                r15_1 = alloc::boxed::Box$LT$T$GT$::new::h6356c2b75d86a9fc(0);
                result = core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::h4e787533bd43325d(*(arg1 + 0x18), *(arg1 + 0x20));
            }
            else
            {
                char var_e0;
                std::fs::File::open::hdb0c190bcf23afb8(&var_e0, var_58);
                
                if (!(var_e0 & 1))
                {
                    int32_t var_dc;
                    r15_1 = alloc::boxed::Box$LT$T$GT$::new::h6356c2b75d86a9fc(var_dc);
                    result = core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::h4e787533bd43325d(*(arg1 + 0x18), *(arg1 + 0x20));
                }
                else
                {
                    int64_t var_d8;
                    int64_t var_e8 = var_d8;
                    int64_t rax_3;
                    int64_t rdx_2;
                    rax_3 = uucore::util_name::h074417a1e6395129();
                    int64_t var_d0 = rax_3;
                    int64_t var_c8_1 = rdx_2;
                    int64_t* var_80 = &var_d0;
                    int64_t (* var_78_1)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::haf6b42bb4c53f309;
                    void* const var_b0 = &data_502438;
                    int64_t var_a8_1 = 2;
                    int64_t var_90_1 = 0;
                    int64_t** var_a0_1 = &var_80;
                    int64_t var_98_1 = 1;
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_b0);
                    var_d0 = 0;
                    int64_t var_c8_2 = var_58;
                    int64_t var_50;
                    int64_t var_c0_1 = var_50;
                    char var_b8_1 = 0;
                    var_80 = &var_d0;
                    int64_t (* var_78_2)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                    int64_t* var_70_1 = &var_e8;
                    int64_t (* var_68_1)(int64_t* arg1, int64_t* arg2) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
                    var_b0 = &data_502458;
                    int64_t var_a8_2 = 3;
                    int64_t var_90_2 = 0;
                    int64_t** var_a0_2 = &var_80;
                    int64_t var_98_2 = 2;
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_b0);
                    *(arg1 + 0x28) = 1;
                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h719d6e145fb1b245(
                        var_e8);
                    
                    if (!*(arg1 + 0x10))
                        break;
                    
                    continue;
                }
            }
            *(arg1 + 0x18) = r15_1;
            *(arg1 + 0x20) = &data_5024a0;
            return result;
        }
    }
    
    result = core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::h4e787533bd43325d(*(arg1 + 0x18), *(arg1 + 0x20));
    *(arg1 + 0x18) = 0;
    return result;
}
