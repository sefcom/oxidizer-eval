
  char const (**)[0xec] uu_env::apply_specified_env_vars::h6f7952585ac93a45(void* arg1)

{
    char const (** result)[0xec] = *(arg1 + 0x40);
    
    if (result)
    {
        int64_t* rbx_2 = *(arg1 + 0x38) + 0x18;
        int64_t r15_1 = result * 0x30;
        
        while (true)
        {
            if (!rbx_2[-1])
            {
                int64_t rax_1;
                int64_t rdx_1;
                rax_1 = uucore::util_name::h074417a1e6395129();
                int64_t var_50 = rax_1;
                int64_t var_48_1 = rdx_1;
                int64_t* var_90 = &var_50;
                int64_t (* var_88_1)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0c2ec06aa0838e92;
                void* const var_80 = &data_510ca8;
                int64_t var_78_1 = 2;
                int64_t var_60_1 = 0;
                int64_t** var_70_1 = &var_90;
                int64_t var_68_1 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_80);
                int64_t rax_2 = rbx_2[1];
                int64_t rcx_1 = rbx_2[2];
                var_50 = 1;
                int64_t var_48_2 = rax_2;
                int64_t var_40_1 = rcx_1;
                char var_38_1 = 1;
                var_90 = &var_50;
                int64_t (* var_88_2)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                var_80 = &data_510cc8;
                int64_t var_78_2 = 2;
                int64_t var_60_2 = 0;
                int64_t** var_70_2 = &var_90;
                int64_t var_68_2 = 1;
                result = std::io::stdio::_eprint::h57899770eacec2ad(&var_80);
                rbx_2 = &rbx_2[6];
                int64_t temp0_1 = r15_1;
                r15_1 -= 0x30;
                
                if (temp0_1 == 0x30)
                    break;
            }
            else
            {
                result = std::env::set_var::ha04e04b7519b1e81(&rbx_2[-3], rbx_2);
                rbx_2 = &rbx_2[6];
                int64_t temp1_1 = r15_1;
                r15_1 -= 0x30;
                
                if (temp1_1 == 0x30)
                    break;
            }
        }
    }
    
    return result;
}
