
  int64_t firecracker::build_microvm_from_json::h1f8e3de32d767856(int64_t* arg1, int64_t* arg2, void* arg3, int64_t* arg4, int32_t* (* arg5)(int32_t* arg1, void* arg2, void* arg3), char arg6, int64_t arg7, char* arg8, int64_t arg9)

{
    char const (** const var_320)[0x104];
    vmm::resources::VmResources::from_json::h0181225b5ca3964a(&var_320, arg4[1], arg4[2], arg5, 
        arg7, arg8, arg9);
    char const (** const r12)[0x104] = var_320;
    char var_318;
    int128_t var_317;
    int128_t var_307;
    int128_t var_2f7;
    
    if (-(r12) != -0x8000000000000000)
    {
        int128_t var_378_1 = var_2f7;
        void var_2d8;
        void var_160;
        memcpy(&var_160, &var_2d8, 0x130);
        int128_t var_19f_1 = var_317;
        int128_t var_18f_1 = var_307;
        int128_t var_17f_1 = var_2f7;
        var_17f_1 = var_2f7;
        char const (** const var_1a8)[0x104] = r12;
        char var_1a0_1 = var_318;
        char r9;
        char var_38_1 = r9;
        char var_37_1 = arg6;
        vmm::builder::build_and_boot_microvm::hc7426a70ff4a868a(&var_320, arg5, &var_1a8, arg3, 
            arg2);
        char rax_6 = var_320;
        
        if (rax_6 != 0x1b)
        {
            int32_t rcx_3 = *var_320[1];
            *(arg1 + 0xc) = *var_320[4];
            *(arg1 + 9) = rcx_3;
            *(arg1 + 0x28) = var_307;
            *(arg1 + 0x38) = var_2f7;
            *(arg1 + 0x18) = var_317;
            arg1[1] = rax_6;
            arg1[2] = var_318;
            *arg1 = -0x8000000000000000;
            core::ptr::drop_in_place$LT$vmm..resources..VmResources$GT$::h68977f9def7baa44(
                &var_1a8);
        }
        else
        {
            int64_t r12_1 = var_318;
            
            if (core::sync::atomic::atomic_load::hcd41a4cf8b7c5bb4(
                &log::MAX_LOG_LEVEL_FILTER::hba2cad573e31d8ba, 0) >= 3)
            {
                var_320 = &data_7a4138;
                var_318 = 1;
                *var_317[7] = 8;
                var_317 = {0};
                int64_t rax_8 = log::__private_api::loc::h0b1bf3028c786bb7(&data_7a4148);
                char const* const var_348 = "firecrackerPath to unix domain s…";
                int64_t var_340_1 = 0xb;
                char const* const var_338_1 = "firecrackerPath to unix domain s…";
                int64_t var_330_1 = 0xb;
                int64_t var_328_1 = rax_8;
                log::__private_api::log_impl::h05439a06b798919c(&var_320, 3, &var_348);
            }
            
            memcpy(arg1, &var_1a8, 0x178);
            arg1[0x2f] = r12_1;
        }
    }
    else
    {
        arg1[7] = *var_307[0xf];
        arg1[8] = *var_2f7[0xf];
        *(arg1 + 0x29) = var_307;
        *(arg1 + 0x19) = var_317;
        *(arg1 + 9) = var_318;
        arg1[1] = 0x1b;
        *arg1 = -0x8000000000000000;
    }
    core::ptr::drop_in_place$LT$vmm..vmm_config..instance_info..InstanceInfo$GT$::h8bafaefa3a8db683(
        arg5);
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1017b1af1d0852d4(arg4);
}
