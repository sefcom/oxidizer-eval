
  uint64_t uu_rm::remove::ha4133918b1aa389d(int64_t arg1, int64_t arg2, char* arg3)

{
    int64_t var_140 = arg1;
    int64_t var_138 = (arg2 << 4) + arg1;
    int64_t* i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0300d8f33fee60f7(&var_140);
    int32_t rbp;
    
    if (!i)
        rbp = 0;
    else
    {
        char rdx = arg3[5];
        char rcx_1 = arg3[6];
        int64_t var_168;
        int32_t var_e0;
        int64_t var_d8;
        int32_t var_a8;
        
        if (!*arg3)
        {
            rbp = 0;
            
            do
            {
                int64_t r12_1 = *i;
                uint64_t rbx_2 = i[1];
                std::fs::symlink_metadata::h9e12b59fb6df20f8(&var_e0, r12_1);
                char rax_5;
                
                if (var_e0 == 2)
                {
                    var_168 = var_d8;
                    int64_t rax_7;
                    int64_t rdx_8;
                    rax_7 = uucore::util_name::h60d842bf27b05e82();
                    int64_t var_130 = rax_7;
                    int64_t var_128_1 = rdx_8;
                    int64_t* var_150 = &var_130;
                    int64_t (* var_148_1)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
                    void* const var_110 = &data_527970;
                    int64_t var_108_1 = 2;
                    int64_t var_f0_1 = 0;
                    int64_t** var_100_1 = &var_150;
                    int64_t var_f8_1 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_110);
                    var_130 = 1;
                    int64_t var_128_2 = r12_1;
                    uint64_t var_120_1 = rbx_2;
                    char var_118_1 = 1;
                    var_150 = &var_130;
                    int64_t (* var_148_2)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    var_110 = &data_527990;
                    int64_t var_108_2 = 2;
                    int64_t var_f0_2 = 0;
                    int64_t** var_100_2 = &var_150;
                    int64_t var_f8_2 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_110);
                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h333f14ee3ed91a78(
                        &var_168);
                    rax_5 = 1;
                }
                else if ((var_a8 & 0xf000) != 0x4000)
                    rax_5 = uu_rm::remove_file::hfb41d07f759de271(r12_1, rbx_2, rdx, rcx_1);
                else
                    rax_5 = uu_rm::handle_dir::h040a6908c8ea150b(r12_1, rbx_2, arg3);
                
                rbp |= rax_5;
                i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0300d8f33fee60f7(&var_140);
            } while (i);
        }
        else
        {
            rbp = 0;
            
            do
            {
                int64_t r13_1 = *i;
                uint64_t r15_1 = i[1];
                std::fs::symlink_metadata::h9e12b59fb6df20f8(&var_e0, r13_1);
                char rax_1;
                
                if (var_e0 == 2)
                {
                    var_168 = var_d8;
                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h333f14ee3ed91a78(
                        &var_168);
                    rax_1 = 0;
                }
                else if ((var_a8 & 0xf000) != 0x4000)
                    rax_1 = uu_rm::remove_file::hfb41d07f759de271(r13_1, r15_1, rdx, rcx_1);
                else
                    rax_1 = uu_rm::handle_dir::h040a6908c8ea150b(r13_1, r15_1, arg3);
                
                rbp |= rax_1;
                i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0300d8f33fee60f7(&var_140);
            } while (i);
        }
    }
    
    rbp &= 1;
    return rbp;
}
