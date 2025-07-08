
  fn uu_ln::link_files_in_dir::h0d7f4d99648ce3c4(arg1: i64, arg2: i64, arg3: *mut i8, arg4: u64, arg5: *mut c_void) -> *mut i128

{
    let mut var_128: i128;
    
    if std::path::Path::is_dir::h9ac0db933706da51(arg3, arg4) == 0
    {
        std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&var_128, arg3, 
            arg4);
        let var_110_11: i64 = -0x8000000000000000;
        return alloc::boxed::Box$LT$T$GT$::new::hf17afba5cd7396c5(&var_128);
    }
    
    std::thread::local::LocalKey$LT$T$GT$::try_with::h0d9f788c4dae22c7(&var_128);
    let mut rax_1: i64;
    let mut rdx: i64;
    rax_1 = core::result::Result$LT$T$C$E$GT$::expect::h5a01a070efd742e5(&var_128);
    hashbrown::map::HashMap$LT$K$C$V$C$S$GT$::with_capacity_and_hasher::h75cd1283ff7601d9(&var_128, 
        arg2, rax_1, rdx);
    let mut var_108: i128;
    let var_48_1: i128 = var_108;
    let mut var_118: i128;
    let var_58_1: i128 = var_118;
    let mut var_68: i128 = var_128;
    let mut var_78: i64 = arg1;
    let var_70_1: i64 = arg1 + arg2 * 0x18;
    let mut i_2: *mut c_void = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hca227a6f7df71fd4(&var_78);
    let mut result: *mut i128;
    
    if i_2 == 0
    {
        result = nullptr;
    }
    else
    {
        let mut i_1: *mut c_void = i_2;
        i_2 = *arg5.byte_offset(0x34) != 0;
        let mut rcx_1: *mut c_void;
        rcx_1 = *arg5.byte_offset(0x36) == 2;
        rcx_1 &= i_2;
        i_2 = 1;
        let mut var_cc_1: i8 = i_2;
        let mut i: *mut c_void;
        
        do
        {
            let mut rax_4: i8;
            
            if rcx_1 != 0
            {
                rax_4 = std::path::Path::is_symlink::h6ab8b58756c51c6b(arg3, arg4);
            }
            
            let mut var_f8: *mut *mut i128;
            let mut var_e0: i8;
            let mut var_c8: *mut i128;
            let mut var_b8: *mut *mut *mut i128;
            let mut var_98: ();
            
            if rcx_1 != 0 && rax_4 != 0
            {
                if std::path::Path::is_file::h82f08f46fb8d8099(arg3, arg4) != 0
                {
                    let rax_6: *mut i128 = std::fs::remove_file::h49bdff741c081dc5(arg3);
                    
                    if rax_6 != 0
                    {
                        var_c8 = rax_6;
                        let mut rax_7: *mut *mut i128;
                        let mut rdx_2: i64;
                        rax_7 = uucore::util_name::h60d842bf27b05e82();
                        var_f8 = rax_7;
                        let var_f0_1: i64 = rdx_2;
                        var_b8 = &var_f8;
                        let var_b0_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1743bab71917fc0b;
                        var_128 = &data_52cf68;
                        *var_128[8] = 2;
                        var_108 = 0;
                        var_118 = &var_b8;
                        let var_110_1: i64 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_128);
                        var_f8 = 1;
                        let var_f0_2: *mut i8 = arg3;
                        let var_e8_1: u64 = arg4;
                        var_e0 = 1;
                        var_b8 = &var_f8;
                        let var_b0_2: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                        let var_a8_1: *mut *mut i128 = &var_c8;
                        let var_a0_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                        var_128 = &data_52cf88;
                        *var_128[8] = 3;
                        var_108 = 0;
                        var_118 = &var_b8;
                        let var_110_2: i64 = 2;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_128);
                        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h106838a02a13d9fd(
                            var_c8);
                    }
                }
                
                if std::path::Path::is_dir::h9ac0db933706da51(arg3, arg4) != 0
                {
                    let rax_9: *mut i128 = std::fs::remove_dir::h9bddb08efc8342d5(arg3);
                    
                    if rax_9 != 0
                    {
                        var_c8 = rax_9;
                        let mut rax_10: *mut *mut i128;
                        let mut rdx_3: i64;
                        rax_10 = uucore::util_name::h60d842bf27b05e82();
                        var_f8 = rax_10;
                        let var_f0_3: i64 = rdx_3;
                        var_b8 = &var_f8;
                        let var_b0_3: fn(arg1: *mut i64, arg2: i64) -> i64 =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1743bab71917fc0b;
                        var_128 = &data_52cf68;
                        *var_128[8] = 2;
                        var_108 = 0;
                        var_118 = &var_b8;
                        let var_110_3: i64 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_128);
                        var_f8 = 1;
                        let var_f0_4: *mut i8 = arg3;
                        let var_e8_2: u64 = arg4;
                        var_e0 = 1;
                        var_b8 = &var_f8;
                        let var_b0_4: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                        let var_a8_2: *mut *mut i128 = &var_c8;
                        let var_a0_2: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                        var_128 = &data_52cf88;
                        *var_128[8] = 3;
                        var_108 = 0;
                        var_118 = &var_b8;
                        let var_110_4: i64 = 2;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_128);
                        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h106838a02a13d9fd(
                            var_c8);
                    }
                }
                
                std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&var_98, 
                    arg3, arg4);
                goto 'label_4b9f80;
            }
            
            let rbp_1: *mut i8 = *i_1.byte_offset(8);
            let r12_1: i64 = *i_1.byte_offset(0x10);
            std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&var_128, rbp_1, r12_1);
            
            if var_128 == 0
            {
                let r12_2: i64 = *var_128[8];
                let mut rax_12: i64;
                let mut rdx_7: i64;
                rax_12 = std::path::Path::file_name::h79ecbb7850a9c7f3(r12_2, var_118);
                
                if rax_12 == 0
                {
                    std::path::Path::join::he50aec8d5a7ea1a7(&var_98, arg3, arg4, r12_2);
                }
                else
                {
                    std::path::Path::join::hbea12235afa21da2(&var_98, arg3, arg4, rax_12);
                }
                
                'label_4b9f80:
                let var_90: *mut i8;
                
                if hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h0bc31a4b071d28ea(
                    &var_68, &var_98) == 0
                {
                    let var_88: u64;
                    let mut rax_15: *mut i128;
                    let mut rdx_12: *mut i64;
                    rax_15 = uu_ln::link::h8c92ebae2dccde8f(*i_1.byte_offset(8), 
                        *i_1.byte_offset(0x10), var_90, var_88, arg5);
                    
                    if rax_15 != 0
                    {
                        var_c8 = rax_15;
                        let mut rax_16: *mut *mut i128;
                        let mut rdx_13: i64;
                        rax_16 = uucore::util_name::h60d842bf27b05e82();
                        var_f8 = rax_16;
                        let var_f0_9: i64 = rdx_13;
                        var_b8 = &var_f8;
                        let var_b0_8: fn(arg1: *mut i64, arg2: i64) -> i64 =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1743bab71917fc0b;
                        var_128 = &data_52cf68;
                        *var_128[8] = 2;
                        var_108 = 0;
                        var_118 = &var_b8;
                        let var_110_9: i64 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_128);
                        var_f8 = &var_c8;
                        let var_f0_10: fn(arg1: *mut i64) -> i64 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h863403f9a165bd80;
                        var_128 = &data_52d008;
                        *var_128[8] = 2;
                        var_108 = 0;
                        var_118 = &var_f8;
                        let var_110_10: i64 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_128);
                        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::hae31b381e209e077(var_c8, rdx_12);
                        var_cc_1 = 0;
                    }
                }
                else
                {
                    let mut rax_14: *mut *mut i128;
                    let mut rdx_10: i64;
                    rax_14 = uucore::util_name::h60d842bf27b05e82();
                    var_f8 = rax_14;
                    let var_f0_7: i64 = rdx_10;
                    var_b8 = &var_f8;
                    let var_b0_7: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1743bab71917fc0b;
                    var_128 = &data_52cf68;
                    *var_128[8] = 2;
                    var_108 = 0;
                    var_118 = &var_b8;
                    let var_110_7: i64 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_128);
                    var_c8 = var_90;
                    var_b8 = *i_1.byte_offset(8);
                    var_f8 = &var_c8;
                    let var_f0_8: fn(arg1: *mut i64, arg2: *mut c_void) -> i64 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                    let var_e8_4: *mut *mut *mut *mut i128 = &var_b8;
                    var_e0 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                    var_128 = &data_52cfd8;
                    *var_128[8] = 3;
                    var_108 = 0;
                    var_118 = &var_f8;
                    let var_110_8: i64 = 2;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_128);
                    var_cc_1 = 0;
                }
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hbf396db49ef6ba51(&var_128, &var_98);
                let var_e8_5: i64 = var_118;
                var_f8 = var_128;
                hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::hc95a599cc62b1fc4(&var_68, 
                    &var_f8);
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hff8990cc0a5456e3(&var_98);
            }
            else
            {
                let mut rax_11: *mut *mut i128;
                let mut rdx_6: i64;
                rax_11 = uucore::util_name::h60d842bf27b05e82();
                var_f8 = rax_11;
                let var_f0_5: i64 = rdx_6;
                var_b8 = &var_f8;
                let var_b0_5: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1743bab71917fc0b;
                var_128 = &data_52cf68;
                *var_128[8] = 2;
                var_108 = 0;
                var_118 = &var_b8;
                let var_110_5: i64 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_128);
                var_f8 = 1;
                let var_f0_6: *mut i8 = rbp_1;
                let var_e8_3: i64 = r12_1;
                var_e0 = 1;
                var_b8 = &var_f8;
                let var_b0_6: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                var_128 = &data_52cfb8;
                *var_128[8] = 2;
                var_108 = 0;
                var_118 = &var_b8;
                let var_110_6: i64 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_128);
                var_cc_1 = 0;
            }
            
            i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hca227a6f7df71fd4(&var_78);
            i_1 = i;
        } while i != 0;
        
        if (var_cc_1 & 1) != 0
        {
            result = nullptr;
        }
        else
        {
            let var_110_12: i64 = -0x7fffffffffffffff;
            result = alloc::boxed::Box$LT$T$GT$::new::hf17afba5cd7396c5(&var_128);
        }
    }
    
    core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$std..path..PathBuf$GT$$GT$::h5977e179e61e5eb6(&var_68);
    result
}
