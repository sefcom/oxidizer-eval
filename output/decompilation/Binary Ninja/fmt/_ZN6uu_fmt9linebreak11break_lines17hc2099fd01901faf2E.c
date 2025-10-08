
  ssize_t uu_fmt::linebreak::break_lines::hc2099fd01901faf2(void* arg1, void* arg2, int64_t* arg3)

{
    int64_t rbp = *(arg1 + 0x58);
    int64_t var_90;
    uu_fmt::parasplit::ParaWords::new::h604c573007ec43f4(&var_90, arg2, arg1);
    void* var_88;
    int64_t var_80;
    ssize_t result;
    
    if (!var_80)
    {
        int64_t rax_6 = arg3[2];
        
        if (*arg3 - rax_6 <= 1)
            result =
                std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::hc701a8cfe4ea9e1e(
                arg3, "\n   Found NoFormatLine when exp…", 1);
        else
        {
            arg3[1][rax_6] = 0xa;
            arg3[2] = rax_6 + 1;
            result = 0;
        }
    }
    else
    {
        int64_t rax = *(var_88 + 0x28);
        int64_t rbx_3;
        
        if (*(arg2 + 0x48) || *(arg2 + 0x49) == 1)
        {
            int64_t rsi = *(arg1 + 0x20);
            uint64_t rbp_1 = *(arg1 + 0x28);
            int64_t rbx_1 = arg3[2];
            
            if (rbp_1 < *arg3 - rbx_1)
            {
                memcpy(arg3[1] + rbx_1, rsi, rbp_1);
                arg3[2] = rbx_1 + rbp_1;
                label_461344:
                rbx_3 = *(arg1 + 0x48);
                goto label_461348;
            }
            
            ssize_t result_3 =
                std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::hc701a8cfe4ea9e1e(
                arg3, rsi, rbp_1);
            result = result_3;
            
            if (!result_3)
                goto label_461344;
        }
        else if (!*(arg1 + 0x68))
        {
            int64_t rsi_6 = *(arg1 + 0x38);
            uint64_t rbp_3 = *(arg1 + 0x40);
            int64_t rbx_5 = arg3[2];
            
            if (rbp_3 < *arg3 - rbx_5)
            {
                memcpy(arg3[1] + rbx_5, rsi_6, rbp_3);
                arg3[2] = rbx_5 + rbp_3;
                rbx_3 = rbp;
                goto label_461348;
            }
            
            ssize_t result_4 =
                std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::hc701a8cfe4ea9e1e(
                arg3, rsi_6, rbp_3);
            result = result_4;
            rbx_3 = rbp;
            
            if (!result_4)
                goto label_461348;
        }
        else
        {
            rbx_3 = 0;
            label_461348:
            int64_t rsi_1 = *(var_88 + 0x10);
            uint64_t rbp_2 = *(var_88 + 0x18);
            int64_t r12_1 = arg3[2];
            
            if (rbp_2 >= *arg3 - r12_1)
            {
                ssize_t result_2 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::hc701a8cfe4ea9e1e(arg3, rsi_1, rbp_2);
                result = result_2;
                
                if (!result_2)
                    goto label_46138a;
            }
            else
            {
                memcpy(arg3[1] + r12_1, rsi_1, rbp_2);
                arg3[2] = r12_1 + rbp_2;
                label_46138a:
                void* r15_2 = (var_80 << 6) + var_88;
                char rax_5 = *(arg1 + 0x68);
                char rdx_3 = 1;
                
                if (!rax_5)
                    rdx_3 = *(arg2 + 0x4e);
                
                int128_t zmm0_1 = *(arg1 + 0x38);
                void* var_68 = arg2;
                int64_t var_48_1 = rbx_3 + rax;
                int128_t var_60_1 = zmm0_1;
                int64_t var_40_1 = rbp;
                char var_38_1 = rdx_3;
                int64_t* var_50_1 = arg3;
                ssize_t result_1;
                
                if (!((*(arg2 + 0x4f) | rax_5) & 1))
                    result_1 = uu_fmt::linebreak::break_knuth_plass::hff9de5c7a48631b8(
                        var_88 + 0x40, r15_2, &var_68);
                else
                    result_1 = uu_fmt::linebreak::break_simple::h385151684df30ef9(var_88 + 0x40, 
                        r15_2, &var_68);
                
                result = result_1;
            }
        }
    }
    
    core::ptr::drop_in_place$LT$uu_fmt..parasplit..ParaWords$GT$::hed976bcb652c3a4a(var_90, var_88);
    return result;
}
