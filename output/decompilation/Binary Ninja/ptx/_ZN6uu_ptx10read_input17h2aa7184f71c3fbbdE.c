
  int64_t* uu_ptx::read_input::h2aa7184f71c3fbbd(int64_t* arg1, void* arg2, int64_t arg3)

{
    void* r14 = arg2;
    int64_t rax;
    int64_t rdx;
    rax = std::thread::local::LocalKey$LT$T$GT$::with::hdc2be79178508d50();
    int128_t var_108 = *data_650de8;
    int128_t var_f8 = data_650df8;
    int64_t* result;
    
    if (!arg3)
    {
        label_52bacd:
        int128_t zmm0 = var_108;
        result = arg1;
        result[4] = rax;
        result[5] = rdx;
        *(result + 0x10) = var_f8;
        *result = zmm0;
    }
    else
    {
        int64_t r15_1 = arg3 * 0x18;
        int64_t rbx_2 = 0;
        
        while (true)
        {
            int32_t var_148;
            int64_t var_140;
            uint64_t rax_2;
            void* const rdx_1;
            
            if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hc639eb17d6278023(*(r14 + 8), *(r14 + 0x10), "-[^]+[^ \t\n]+", 1))
            {
                std::fs::File::open::h695eaf09d3a17d8c(&var_148, r14);
                
                if (var_148 != 1)
                {
                    int32_t var_144;
                    rax_2 = alloc::boxed::Box$LT$T$GT$::new::h78f68dd9e7792e5e(var_144);
                    rdx_1 = &data_651680;
                    goto label_52b9ee;
                }
                
                result = arg1;
                result[1] = var_140;
            }
            else
            {
                std::io::stdio::stdin::h9a05a2c3e7544b2a();
                rax_2 = alloc::boxed::Box$LT$T$GT$::new::h16f26c34398979df(
                    &std::io::stdio::stdin::INSTANCE::heccb3522b341563b);
                rdx_1 = &data_6516d8;
                label_52b9ee:
                void var_a0;
                std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h3d0c7b14f6b3f130(
                    &var_a0, rax_2, rdx_1);
                core::iter::traits::iterator::Iterator::collect::he2fa0028cb9148a2(&var_148, 
                    &var_a0);
                int64_t rax_3 = var_148;
                
                if (-(rax_3) == -0x8000000000000000)
                {
                    result = arg1;
                    result[1] = var_140;
                }
                else
                {
                    int64_t var_138;
                    int64_t rbp_1 = var_138;
                    int64_t var_158_1 = var_140;
                    int128_t var_d0;
                    core::iter::traits::iterator::Iterator::collect::h75228c1ae200d50c(&var_d0, 
                        var_140);
                    void var_b8;
                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_b8, r14);
                    var_138 = rbp_1;
                    var_148 = rax_3;
                    int64_t var_c0;
                    int64_t var_120_1 = var_c0;
                    int128_t var_130_1 = var_d0;
                    int64_t var_118_1 = rbx_2;
                    void var_68;
                    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h4f58e0fefa489ec5(
                        &var_68, &var_108, &var_b8, &var_148);
                    r14 += 0x18;
                    core::ptr::drop_in_place$LT$core..option..Option$LT$uu_ptx..FileContent$GT$$GT$::hbb7b2e41fca10735(&var_68);
                    rbx_2 += rbp_1;
                    int64_t temp1_1 = r15_1;
                    r15_1 -= 0x18;
                    
                    if (temp1_1 == 0x18)
                        goto label_52bacd;
                    
                    continue;
                }
            }
            *result = 0;
            core::ptr::drop_in_place$LT$std..collections..hash..map..HashMap$LT$alloc..string..String$C$uu_ptx..FileContent$GT$$GT$::h033d5e534b5f9d40(&var_108);
            break;
        }
    }
    
    return result;
}
