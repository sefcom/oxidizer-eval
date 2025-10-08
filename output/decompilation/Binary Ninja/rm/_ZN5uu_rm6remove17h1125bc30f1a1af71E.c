
  uint64_t uu_rm::remove::h1125bc30f1a1af71(int64_t* arg1, int64_t arg2, char* arg3)

{
    int32_t rbp;
    
    if (!arg2)
        rbp = 0;
    else
    {
        int64_t* r15_1 = arg1;
        void* r14_3 = &arg1[arg2 * 2];
        char rax_1 = *arg3;
        char rcx_1 = rax_1 ^ 1;
        rbp = 0;
        int32_t var_e0;
        int64_t var_d8;
        int32_t var_a8;
        
        if (!(rax_1 & 1))
        {
            do
            {
                int64_t rbx_2 = *r15_1;
                int64_t r12_1 = r15_1[1];
                std::fs::symlink_metadata::h2654b7702b6620cd(&var_e0, rbx_2);
                char rax_6;
                
                if (var_e0 == 2)
                {
                    int64_t rax_8;
                    int64_t rdx_5;
                    rax_8 = uucore::util_name::h074417a1e6395129();
                    int64_t var_100 = rax_8;
                    int64_t var_f8_1 = rdx_5;
                    int64_t* var_140 = &var_100;
                    int64_t (* var_138_1)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5f6f103f460297c8;
                    void* const var_130 = &data_4ea4a0;
                    int64_t var_128_1 = 2;
                    int64_t var_110_1 = 0;
                    int64_t** var_120_1 = &var_140;
                    int64_t var_118_1 = 1;
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_130);
                    var_100 = 1;
                    int64_t var_f8_2 = rbx_2;
                    int64_t var_f0_1 = r12_1;
                    char var_e8_1 = 1;
                    var_140 = &var_100;
                    int64_t (* var_138_2)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                    var_130 = &data_4ea4c0;
                    int64_t var_128_2 = 2;
                    int64_t var_110_2 = 0;
                    int64_t** var_120_2 = &var_140;
                    int64_t var_118_2 = 1;
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_130);
                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::haf081cf9ad72b71d(
                        var_d8);
                    rax_6 = rcx_1;
                }
                else if ((var_a8 & 0xf000) != 0x4000)
                    rax_6 = uu_rm::remove_file::h42f0a78696bb1093(rbx_2, r12_1, arg3);
                else
                    rax_6 = uu_rm::handle_dir::hb9074543311991f9(rbx_2, r12_1, arg3);
                
                rbp |= rax_6;
                r15_1 = &r15_1[2];
            } while (r15_1 != r14_3);
        }
        else
        {
            do
            {
                int64_t r13_1 = *r15_1;
                int64_t rbx_1 = r15_1[1];
                std::fs::symlink_metadata::h2654b7702b6620cd(&var_e0, r13_1);
                char rax_2;
                
                if (var_e0 == 2)
                {
                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::haf081cf9ad72b71d(
                        var_d8);
                    rax_2 = rcx_1;
                }
                else if ((var_a8 & 0xf000) != 0x4000)
                    rax_2 = uu_rm::remove_file::h42f0a78696bb1093(r13_1, rbx_1, arg3);
                else
                    rax_2 = uu_rm::handle_dir::hb9074543311991f9(r13_1, rbx_1, arg3);
                
                rbp |= rax_2;
                r15_1 = &r15_1[2];
            } while (r15_1 != r14_3);
        }
    }
    
    rbp &= 1;
    return rbp;
}
