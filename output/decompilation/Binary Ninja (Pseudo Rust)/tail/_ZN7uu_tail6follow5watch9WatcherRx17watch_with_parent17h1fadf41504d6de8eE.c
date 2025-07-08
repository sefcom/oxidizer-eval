
  fn uu_tail::follow::watch::WatcherRx::watch_with_parent::h1fadf41504d6de8e(arg1: *mut *mut c_void, arg2: i64, arg3: i64, arg4: size_t) -> *mut i128

{
    let mut var_b8: *mut *mut c_void;
    std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&var_b8, arg3, arg4);
    let var_b0: *mut i8;
    let mut var_a8: u64;
    let mut result: *mut i128;
    let mut var_98: *mut *mut c_void;
    let var_88: u64;
    
    if std::path::Path::is_file::h82f08f46fb8d8099(var_b0, var_a8) == 0
    {
        'label_504d6a:
        let mut rdx_3: *mut i8 = var_b0;
        let mut rcx: u64 = var_a8;
        
        if std::path::Path::is_absolute::h3431a23d91045560(var_b0, var_a8) != 0
        {
            goto 'label_504ddf;
        }
        
        std::fs::canonicalize::hd214f5c614fa2ecb(&var_98, rdx_3);
        let r15_2: *mut *mut c_void = var_98;
        
        if r15_2 != -0x8000000000000000
        {
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b(&var_b8);
            var_b8 = r15_2;
            let var_90: *mut i8;
            rdx_3 = var_90;
            let var_b0_1: *mut i8 = var_90;
            rcx = var_88;
            let var_a8_1: u64 = var_88;
            'label_504ddf:
            let result_1: *mut i128 =
                uu_tail::follow::watch::WatcherRx::watch::h12bff18e757f3bf5(arg1, arg2, rdx_3, rcx);
            result = result_1;
            
            if result_1 == 0
            {
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b(&var_b8);
                return nullptr;
            }
        }
        else
        {
            result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
        }
    }
    else
    {
        let mut rax_1: *mut i8;
        let mut rdx_1: u64;
        rax_1 = std::path::Path::parent::h65c9a340a6266f2d(var_b0, var_a8);
        let mut var_68: i128;
        
        if rax_1 != 0
        {
            let mut zmm0_2: i128;
            
            if std::path::Path::is_dir::h9ac0db933706da51(rax_1, rdx_1) == 0
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
            goto 'label_504d6a;
        }
        
        var_68 = var_b0;
        let mut var_50: *mut i128 = &var_68;
        let var_48_1: fn(arg1: *mut i64, arg2: *mut c_void) -> i64 =
            _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
        var_98 = &data_5bbd68;
        let var_90_1: i64 = 1;
        let var_78_1: i64 = 0;
        let var_88_1: *mut *mut i128 = &var_50;
        let mut var_80_1: i64 = 1;
        let mut var_40: i128;
        core::option::Option$LT$T$GT$::map_or_else::hb4ba59fb1ad49b60(&var_40, &var_98);
        var_80_1 = 1;
        var_98 = var_40;
        let var_30: i64;
        let var_88_2: i64 = var_30;
        result = alloc::boxed::Box$LT$T$GT$::new::h7645b42f7bfbf581(&var_98);
    }
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b(&var_b8);
    result
}
