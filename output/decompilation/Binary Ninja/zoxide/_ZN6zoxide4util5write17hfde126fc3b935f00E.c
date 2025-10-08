
  uint64_t zoxide::util::write::hfde126fc3b935f00(void* arg1, int64_t* arg2)

{
    int64_t rax;
    int64_t rdx;
    rax = _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h08b3da5308d0badb(arg1);
    int64_t var_40 = rax;
    int64_t var_38 = rdx;
    int64_t r14 = arg2[1];
    arg2[2];
    uint64_t result_4;
    int64_t rdx_1;
    result_4 = _$LT$std..ffi..os_str..OsString$u20$as$u20$core..ops..index..Index$LT$core..ops..range..RangeFull$GT$$GT$::index::h273e9513d8eb0763(r14);
    char* rax_1 = std::path::Path::parent::hef287f60afa56900(rax, rdx);
    
    if (!rax_1)
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    uint64_t result_1;
    zoxide::util::tmpfile::h1fc190374b8e79de(&result_1, rax_1);
    uint64_t result = result_1;
    int64_t var_68;
    
    if (-(var_68) != -0x8000000000000000)
    {
        int64_t* var_60;
        int64_t* var_80_1 = var_60;
        int64_t var_88 = var_68;
        int32_t var_50_1 = result;
        result_1 = result_4;
        int64_t var_68_1 = rdx_1;
        var_60 = &var_88;
        var_60 = &var_40;
        uint64_t result_2 =
            zoxide::util::write::_$u7b$$u7b$closure$u7d$$u7d$::hb8a2a97235f5d2d5(&result_1);
        result = result_2;
        uint64_t result_3 = result_2;
        
        if (result_2)
        {
            result_1 = std::fs::remove_file::ha6d2497cc4d67d74(&var_88);
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h29a4fc21488b4033(&result_1);
        }
        
        core::mem::drop::h8efcdb4578edbe7f(var_88, var_80_1);
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h3a7e22f11fe542c0(*arg2, r14);
    return result;
}
