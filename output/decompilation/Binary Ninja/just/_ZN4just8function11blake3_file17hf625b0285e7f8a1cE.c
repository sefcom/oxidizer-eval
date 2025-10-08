
  int64_t* just::function::blake3_file::hf625b0285e7f8a1c(int64_t* arg1, int64_t* arg2, int64_t arg3)

{
    void* rax = *arg2;
    void var_7a8;
    just::execution_context::ExecutionContext::working_directory::hcc9cc51d43cb6ad6(&var_7a8, 
        *(rax + 0x10), *(rax + 0x18));
    void var_7f8;
    int64_t var_7a0;
    uint64_t var_798;
    std::path::Path::join::h1eac0ae5e7efa361(&var_7f8, var_7a0, var_798, arg3);
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_7a8);
    blake3::Hasher::new::hbcd0a691c6ef1979(&var_7a8);
    char rax_1;
    int64_t rdx_2;
    rax_1 = blake3::Hasher::update_mmap_rayon::h78bb7ce06a0011c0(&var_7a8, &var_7f8);
    int128_t var_7e0;
    
    if (!(rax_1 & 1))
    {
        blake3::Hasher::finalize::hacf7df9bac138be6(&var_7e0, &var_7a8);
        int128_t var_7c0;
        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h2ede3b6c558812d5(
            &var_7c0, &var_7e0);
        int64_t var_7b0;
        arg1[3] = var_7b0;
        *(arg1 + 8) = var_7c0;
        *arg1 = 0;
    }
    else
    {
        int64_t var_7f0;
        uint64_t var_7e8;
        just::function::blake3_file::_$u7b$$u7b$closure$u7d$$u7d$::h1ac425ac0e95b01a(&var_7e0, 
            var_7f0, var_7e8, rdx_2);
        *(arg1 + 8) = var_7e0;
        int64_t var_7d0;
        arg1[3] = var_7d0;
        *arg1 = 1;
    }
    core::ptr::drop_in_place$LT$blake3..Hasher$GT$::hdd4ba21756554abf(&var_7a8);
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_7f8);
    return arg1;
}
