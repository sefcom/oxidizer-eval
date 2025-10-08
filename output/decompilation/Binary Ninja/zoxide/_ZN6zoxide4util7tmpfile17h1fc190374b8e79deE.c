
  int64_t zoxide::util::tmpfile::h1fc190374b8e79de(int128_t* arg1, int64_t arg2)

{
    int64_t rax;
    uint64_t rdx_1;
    rax = _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h4cd980ea14f59bb6(arg2);
    int64_t rbp = 0;
    int128_t var_b0;
    uint64_t var_a0;
    int128_t var_90;
    
    while (true)
    {
        int64_t rax_1;
        int64_t rdx_2;
        rax_1 =
            alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::ha54110e1dc3a9d5b(0x10, 1, 1);
        int64_t var_58 = rax_1;
        int64_t var_50_1 = rdx_2;
        int64_t i = 0;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h2f2041815b897805(&var_58, &data_418e88[0x14], &data_418ea0);
        
        while (i < 0x10)
            alloc::string::String::push::h0ede46164189e411(&var_58, 
                std::thread::local::LocalKey$LT$T$GT$::with::hae14fb10f9f72051());
        
        std::path::Path::join::h33426bc926a36134(&var_b0, rax, rdx_1, &var_58);
        int64_t var_70 = 0x1b600000000;
        int16_t var_64_1 = 0;
        int32_t var_68_1 = 0;
        *var_68_1[1] = 1;
        *var_64_1[1] = 1;
        int32_t var_40;
        std::fs::OpenOptions::open::h797baef3413a069b(&var_40, &var_70, &var_b0);
        
        if (var_40 != 1)
            break;
        
        int64_t var_38;
        
        if (std::io::error::Error::kind::h135fe00c4e7365f3(var_38) != 0xc || rbp >= 4)
        {
            var_90 = var_38;
            int128_t var_8c;
            *var_8c[4] = -0x8000000000000000;
            anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$E$GT$$u20$for$u20$core..result..Result$LT$T$C$E$GT$$GT$::with_context::hd248ee6c6b10aefe(arg1, &var_90, *var_b0[8], var_a0);
            return core::mem::drop::h8efcdb4578edbe7f(var_b0, *var_b0[8]);
        }
        
        var_90 = var_38;
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hc0a90eb9fb31b0c2(&var_90);
        core::mem::drop::h8efcdb4578edbe7f(var_b0, *var_b0[8]);
        rbp += 1;
    }
    
    int128_t var_8c_1 = var_b0;
    int32_t var_3c;
    *arg1 = var_3c;
    int64_t result = *var_8c_1[8];
    *(arg1 + 4) = var_90;
    arg1[1] = result;
    *(arg1 + 0x18) = var_a0;
    return result;
}
