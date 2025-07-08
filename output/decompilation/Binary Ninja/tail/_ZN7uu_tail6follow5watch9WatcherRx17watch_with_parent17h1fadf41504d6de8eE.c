
  int128_t* uu_tail::follow::watch::WatcherRx::watch_with_parent::h1fadf41504d6de8e(void** arg1, int64_t arg2, int64_t arg3, size_t arg4)

{
    void** const var_b8;
    std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&var_b8, arg3, arg4);
    char* var_b0;
    uint64_t var_a8;
    int128_t* result;
    void** const var_98;
    uint64_t var_88;
    
    if (!std::path::Path::is_file::h82f08f46fb8d8099(var_b0, var_a8))
    {
        label_504d6a:
        char* rdx_3 = var_b0;
        uint64_t rcx = var_a8;
        
        if (std::path::Path::is_absolute::h3431a23d91045560(var_b0, var_a8))
            goto label_504ddf;
        
        std::fs::canonicalize::hd214f5c614fa2ecb(&var_98, rdx_3);
        void** const r15_2 = var_98;
        
        if (r15_2 != -0x8000000000000000)
        {
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b(&var_b8);
            var_b8 = r15_2;
            char* var_90;
            rdx_3 = var_90;
            char* var_b0_1 = var_90;
            rcx = var_88;
            uint64_t var_a8_1 = var_88;
            label_504ddf:
            int128_t* result_1 =
                uu_tail::follow::watch::WatcherRx::watch::h12bff18e757f3bf5(arg1, arg2, rdx_3, rcx);
            result = result_1;
            
            if (!result_1)
            {
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b(&var_b8);
                return nullptr;
            }
        }
        else
            result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
    }
    else
    {
        char* rax_1;
        uint64_t rdx_1;
        rax_1 = std::path::Path::parent::h65c9a340a6266f2d(var_b0, var_a8);
        int128_t var_68;
        
        if (rax_1)
        {
            int128_t zmm0_2;
            
            if (!std::path::Path::is_dir::h9ac0db933706da51(rax_1, rdx_1))
            {
                std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_98, 
                    ".cannot watch parent directory o…", 1);
                var_68 = var_98;
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b(&var_b8);
                var_a8 = var_88;
                zmm0_2 = var_68;
            }
            else
            {
                std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&var_98, 
                    rax_1, rdx_1);
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b(&var_b8);
                var_a8 = var_88;
                zmm0_2 = var_98;
            }
            
            var_b8 = zmm0_2;
            goto label_504d6a;
        }
        
        var_68 = var_b0;
        int128_t* var_50 = &var_68;
        int64_t (* var_48_1)(int64_t* arg1, void* arg2) =
            _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
        var_98 = &data_5bbd68;
        int64_t var_90_1 = 1;
        int64_t var_78_1 = 0;
        int128_t** var_88_1 = &var_50;
        int64_t var_80_1 = 1;
        int128_t var_40;
        core::option::Option$LT$T$GT$::map_or_else::hb4ba59fb1ad49b60(&var_40, &var_98);
        var_80_1 = 1;
        var_98 = var_40;
        int64_t var_30;
        int64_t var_88_2 = var_30;
        result = alloc::boxed::Box$LT$T$GT$::new::h7645b42f7bfbf581(&var_98);
    }
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b(&var_b8);
    return result;
}
