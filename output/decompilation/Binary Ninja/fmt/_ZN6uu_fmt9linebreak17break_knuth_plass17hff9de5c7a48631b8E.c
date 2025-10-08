
  ssize_t uu_fmt::linebreak::break_knuth_plass::hff9de5c7a48631b8(int64_t arg1, int64_t arg2, int64_t* arg3)

{
    int64_t var_58 = arg1;
    int64_t var_50 = arg2;
    int64_t rax;
    int64_t rdx;
    rax = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::he39c15aea62ebab7(arg1);
    int64_t var_48;
    uu_fmt::linebreak::find_kp_breakpoints::h8e1b34bce65123f0(&var_48, rax, rdx, arg3);
    int64_t var_40;
    int64_t var_a8 = var_40;
    int64_t var_38;
    int64_t var_a0 = (var_38 << 4) + var_40;
    int64_t rax_4 = arg3[3];
    int128_t var_90 = *(arg3 + 8);
    int64_t var_78 = rax_4;
    int64_t* var_70 = &var_58;
    char var_68;
    core::iter::traits::double_ended::DoubleEndedIterator::try_rfold::h6f354a9d532b4781(&var_68, 
        &var_a8, &var_90);
    ssize_t result;
    ssize_t result_1;
    
    if (var_68 != 1)
    {
        var_a8 = var_58;
        void* rax_5 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h686fc6b9d9a31eab(&var_a8);
        char var_66;
        
        if (!rax_5)
        {
            label_4618ce:
            int64_t* rdi_9 = arg3[3];
            int64_t rax_9 = rdi_9[2];
            
            if (*rdi_9 - rax_9 <= 1)
                result = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::hc701a8cfe4ea9e1e(rdi_9, "\n   Found NoFormatLine when exp…", 1);
            else
            {
                rdi_9[1][rax_9] = 0xa;
                rdi_9[2] = rax_9 + 1;
                result = 0;
            }
        }
        else if (!var_66)
        {
            label_461822:
            char var_67;
            uu_fmt::linebreak::slice_if_fresh::h1732064ecc95b219(&var_90, var_66, *(rax_5 + 0x10), 
                *(rax_5 + 0x18), *(rax_5 + 0x20), arg3[6], *(rax_5 + 0x3a), *(rax_5 + 0x38), 
                var_67);
            char r12_2 = *(rax_5 + 0x39);
            ssize_t result_3 = uu_fmt::linebreak::write_with_spaces::h61239a97c7a24215(*var_90[8], 
                &arg3[6], var_90, arg3[3]);
            result = result_3;
            
            if (!result_3)
            {
                while (true)
                {
                    void* rax_7 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h686fc6b9d9a31eab(&var_a8);
                    
                    if (!rax_7)
                        break;
                    
                    uu_fmt::linebreak::slice_if_fresh::h1732064ecc95b219(&var_90, 0, 
                        *(rax_7 + 0x10), *(rax_7 + 0x18), *(rax_7 + 0x20), arg3[6], 
                        *(rax_7 + 0x3a), *(rax_7 + 0x38), r12_2);
                    r12_2 = *(rax_7 + 0x39);
                    ssize_t result_4 = uu_fmt::linebreak::write_with_spaces::h61239a97c7a24215(
                        *var_90[8], &arg3[6], var_90, arg3[3]);
                    result = result_4;
                    
                    if (result_4)
                        goto label_4618fc;
                }
                
                goto label_4618ce;
            }
        }
        else
        {
            ssize_t result_2 =
                uu_fmt::linebreak::write_newline::h38b91d3d5ac133d3(arg3[1], arg3[2], arg3[3]);
            result = result_2;
            
            if (!result_2)
                goto label_461822;
        }
    }
    else
        result = result_1;
    label_4618fc:
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$clap_builder..util..id..Id$GT$$GT$::hcfec7ca4ac6b63a6(var_48, var_40);
    return result;
}
