
  int64_t zoxide::util::resolve_path::h8aa7abc34508b0d7(int128_t* arg1, void* arg2)

{
    int64_t rax;
    int64_t rdx;
    rax = _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h08b3da5308d0badb(arg2);
    int128_t var_1d8;
    std::path::Path::components::hd0346d362206f2e9(&var_1d8, rax, rdx);
    int128_t var_1a8;
    int128_t zmm3 = var_1a8;
    int128_t var_120 = var_1d8;
    char var_158 = 0xb;
    int64_t var_208 = 0;
    int64_t var_200 = 8;
    int64_t var_1f8 = 0;
    core::option::Option$LT$T$GT$::get_or_insert_with::h3a44b47bf2ecd131(&var_158, &var_120);
    char rbx = var_158;
    char rax_1;
    
    if (rbx != 0xa)
        rax_1 =
            _$LT$std..path..Component$u20$as$u20$core..cmp..PartialEq$GT$::eq::hfa2fa96020c6cc4b(
            rbx);
    
    int64_t var_1f0;
    int64_t var_1e8;
    int128_t var_1c8;
    int128_t var_157;
    int128_t var_147;
    int64_t var_128;
    int32_t rbp_1;
    
    if (rbx == 0xa || !rax_1)
    {
        zoxide::util::current_dir::hc8c2386c7ca5eb95(&var_1d8);
        int64_t rcx_1 = var_1d8;
        int64_t rsi_3 = *var_1d8[8];
        
        if (-(rcx_1) == -0x8000000000000000)
        {
            *(arg1 + 8) = rsi_3;
            *arg1 = -0x8000000000000000;
            return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..Component$GT$$GT$::hc69b35f51677355d(var_208, var_200);
        }
        
        var_1f0 = rcx_1;
        rbp_1 = 1;
        var_1e8 = rsi_3;
        void var_70;
        std::path::Path::components::hd0346d362206f2e9(&var_70, rsi_3, var_1c8);
        rbp_1 = 1;
        alloc::vec::Vec$LT$T$C$A$GT$::extend_desugared::h8ae28a35e9d737e7(&var_208, &var_70);
    }
    else
    {
        int64_t var_b0_1 = var_128;
        int128_t var_137;
        int128_t var_bf_1 = var_137;
        int128_t var_cf_1 = var_147;
        int128_t var_df_1 = var_157;
        var_158 = 0xb;
        char var_e0 = rbx;
        rbp_1 = 0;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h00ddbab168b7c69e(&var_208, &var_e0);
    }
    
    int64_t var_168_1 = *zmm3[8];
    int128_t var_1b8;
    int128_t var_178_1 = var_1b8;
    int128_t var_188_1 = var_1c8;
    int128_t var_198_1 = var_120;
    int128_t zmm0_2 = var_158;
    var_1a8 = var_128;
    var_1d8 = zmm0_2;
    char rax_5 = var_1d8;
    var_1d8 = 0xb;
    char var_a8;
    
    if (rax_5 != 0xb)
    {
        int64_t var_78_1 = var_1a8;
        int128_t var_87_1 = var_147;
        int128_t var_97_1 = var_157;
        int128_t var_a7_1 = var_1d8;
        var_a8 = rax_5;
        
        if (rax_5 != 0xa)
            goto label_49393a;
        
        goto label_4939af;
    }
    
    _$LT$std..path..Components$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h73ed8dd6f02f5cb4(&var_a8, &*var_1a8[8]);
    
    if (var_a8 != 0xa)
    {
        label_49393a:
        uint64_t rax_7 = var_a8;
        int64_t rax_8 = rax_7 - 5;
        
        if (rax_7 - 6 >= 4)
            rax_8 = 0;
        
        /* jump -> *(&data_419324 + (rax_8 << 2)) + &data_419324 */
    }
    
    label_4939af:
    core::iter::traits::iterator::Iterator::collect::h3b8a6bb661afc5df(&var_1d8, var_200);
    arg1[1] = var_157;
    *arg1 = var_1d8;
    int64_t result = core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..Component$GT$$GT$::hc69b35f51677355d(var_208, var_200);
    
    if (!rbp_1)
        return result;
    
    return core::mem::drop::h8efcdb4578edbe7f(var_1f0, var_1e8);
}
