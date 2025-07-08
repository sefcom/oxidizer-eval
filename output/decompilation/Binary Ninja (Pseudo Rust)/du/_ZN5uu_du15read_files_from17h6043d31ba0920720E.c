
  fn uu_du::read_files_from::h6043d31ba0920720(arg1: *mut i64, arg2: i64, arg3: u64) -> *mut i64

{
    let mut result: *mut i64 = arg1;
    let mut var_c8: i64 = arg2;
    let var_c0: u64 = arg3;
    let mut var_168: i128;
    let mut var_158: u64;
    let mut var_138: i128;
    let mut var_128: u64;
    let mut result_1: *mut i64;
    let mut var_108: i32;
    let mut var_e8: *mut i128;
    let mut var_a0: *mut i64;
    let mut rax_1: *mut i128;
    let mut rcx_1: *mut *mut c_void;
    
    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb35b18b4f111dc4a(arg2, arg3, "-iso%Y-%m-%d %H:%M%Y-%m-%d %H:%M…", 1) == 0
    {
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_168, arg2, arg3);
        var_128 = var_158;
        var_138 = var_168;
        
        if std::path::Path::is_dir::h9ac0db933706da51(*var_138[8], var_158) == 0
        {
            std::fs::File::open::h9cae249c916a6c96(&var_108, var_c8);
            
            if var_108 == 0
            {
                let var_104: i32;
                std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::ha4ed61db034c9bb6(
                    &var_168, 0x2000, var_104);
                let rax_12: *mut i128 =
                    alloc::boxed::Box$LT$T$GT$::new::ha50a6ea0e0989317(&var_168);
                result_1 = result;
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hbd810d79ecac54ea(&var_138);
                rcx_1 = &data_584728;
                rax_1 = rax_12;
                goto 'label_4f3970;
            }
            
            let var_100: *mut i128;
            
            if std::io::error::Error::kind::hb2ff5fa058639b3d(var_100) == 0
            {
                var_e8 = var_100;
                var_a0 = &var_c8;
                let var_98_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h6327d06d698acdd2;
                var_168 = &data_5846b8;
                *var_168[8] = 2;
                let var_148_4: i64 = 0;
                let var_158_3: *mut *mut i64 = &var_a0;
                let var_150_4: i64 = 1;
                let mut var_48: ();
                core::option::Option$LT$T$GT$::map_or_else::he00bf600f5f44dbc(&var_48, &var_168);
                result[1] = std::io::error::Error::new::hd0a0d6bee076b6f8(0x27, &var_48);
                *result = -0x8000000000000000;
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h3dad00d2d386d8f0(&var_e8);
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hbd810d79ecac54ea(&var_138);
            }
            else
            {
                result[1] = var_100;
                *result = -0x8000000000000000;
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hbd810d79ecac54ea(&var_138);
            }
        }
        else
        {
            var_a0 = &var_c8;
            let var_98_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h6327d06d698acdd2;
            var_168 = &data_584698;
            *var_168[8] = 2;
            let var_148_3: i64 = 0;
            let var_158_2: *mut *mut i64 = &var_a0;
            let var_150_3: i64 = 1;
            let mut var_60: ();
            core::option::Option$LT$T$GT$::map_or_else::he00bf600f5f44dbc(&var_60, &var_168);
            result[1] = std::io::error::Error::new::hd0a0d6bee076b6f8(0x27, &var_60);
            *result = -0x8000000000000000;
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hbd810d79ecac54ea(&var_138);
        }
    }
    else
    {
        result_1 = result;
        std::io::stdio::stdin::h7215cc131abb55d8();
        std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h4d636d06c0931382(
            &var_168, 0x2000, &std::io::stdio::stdin::INSTANCE::hd3a98c261e3f14b5);
        rax_1 = alloc::boxed::Box$LT$T$GT$::new::hdb9fa66f67ecf04b(&var_168);
        rcx_1 = &data_5847b0;
        'label_4f3970:
        let mut var_b8: i64 = 0;
        let var_b0_1: i64 = 8;
        let var_a8_1: i64 = 0;
        var_108 = rax_1;
        let var_f8_1: i8 = 0;
        let var_f0_1: i64 = 0;
        
        loop
        {
            _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h886d3813ac58f572(&var_a0, &var_108);
            let var_98: i64;
            
            if var_98 == -0x7fffffffffffffff
            {
                core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$std..io..Split$LT$alloc..boxed..Box$LT$dyn$u20$std..io..BufRead$GT$$GT$$GT$$GT$::h93c3737ff8ebef1f(var_108, rcx_1);
                result = result_1;
                result[2] = var_a8_1;
                *result = var_b8;
                break;
            }
            
            let var_90: i64;
            
            if var_98 == -0x8000000000000000
            {
                result = result_1;
                result[1] = var_90;
                *result = -0x8000000000000000;
                core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$std..io..Split$LT$alloc..boxed..Box$LT$dyn$u20$std..io..BufRead$GT$$GT$$GT$$GT$::h93c3737ff8ebef1f(var_108, rcx_1);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h16d3046407d1e07a(&var_b8);
                break;
            }
            
            let rcx_2: *mut i64 = var_a0;
            let mut var_78: i64 = var_98;
            let var_70_1: i64 = var_90;
            let var_88: size_t;
            let var_68_1: size_t = var_88;
            
            if var_88 == 0
            {
                let mut var_80: *mut c_void = rcx_2.byte_offset(1);
                let mut rax_6: i64;
                let mut rdx_3: i64;
                rax_6 = uucore::util_name::h60d842bf27b05e82();
                var_138 = rax_6;
                *var_138[8] = rdx_3;
                var_e8 = &var_138;
                let var_e0_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h6327d06d698acdd2;
                var_168 = &data_5846d8;
                *var_168[8] = 2;
                let var_148_1: i64 = 0;
                let var_158_1: *mut *mut i128 = &var_e8;
                let var_150_1: i64 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_168);
                var_138 = &var_c8;
                *var_138[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h6327d06d698acdd2;
                var_128 = &var_80;
                let var_120_1: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                var_168 = &data_5846f8;
                *var_168[8] = 3;
                let var_148_2: i64 = 0;
                var_158 = &var_138;
                let var_150_2: i64 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_168);
                uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
            }
            else
            {
                alloc::string::String::from_utf8_lossy::hea505cf60d4f919b(&var_168, var_90, var_88);
                _$LT$alloc..borrow..Cow$LT$str$GT$$u20$as$u20$alloc..string..ToString$GT$::to_string::ha2cb0370e40ab073(&var_138, *var_168[8], var_158);
                var_e8 = var_138;
                core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h7fa1288604a001f4(
                    &var_168);
                
                if _$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::hc0e47005068e24dd(&var_e8, var_b0_1, var_a8_1) != 0
                {
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hbd810d79ecac54ea(&var_e8);
                }
                else
                {
                    var_158 = var_128;
                    var_168 = var_e8;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::hcb430c3180ba1f0f(&var_b8, &var_168);
                }
            }
            
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hc287f1aab316582a(&var_78);
        }
    }
    result
}
