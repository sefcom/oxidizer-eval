
  int64_t* uu_du::read_files_from::h6043d31ba0920720(int64_t* arg1, int64_t arg2, uint64_t arg3)

{
    int64_t* result = arg1;
    int64_t var_c8 = arg2;
    uint64_t var_c0 = arg3;
    int128_t var_168;
    uint64_t var_158;
    int128_t var_138;
    uint64_t var_128;
    int64_t* result_1;
    int32_t var_108;
    int128_t* var_e8;
    int64_t* var_a0;
    int128_t* rax_1;
    void** const rcx_1;
    
    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb35b18b4f111dc4a(arg2, arg3, "-iso%Y-%m-%d %H:%M%Y-%m-%d %H:%M…", 1))
    {
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_168, arg2, arg3);
        var_128 = var_158;
        var_138 = var_168;
        
        if (!std::path::Path::is_dir::h9ac0db933706da51(*var_138[8], var_158))
        {
            std::fs::File::open::h9cae249c916a6c96(&var_108, var_c8);
            
            if (!var_108)
            {
                int32_t var_104;
                std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::ha4ed61db034c9bb6(
                    &var_168, 0x2000, var_104);
                int128_t* rax_12 = alloc::boxed::Box$LT$T$GT$::new::ha50a6ea0e0989317(&var_168);
                result_1 = result;
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hbd810d79ecac54ea(&var_138);
                rcx_1 = &data_584728;
                rax_1 = rax_12;
                goto label_4f3970;
            }
            
            int128_t* var_100;
            
            if (!std::io::error::Error::kind::hb2ff5fa058639b3d(var_100))
            {
                var_e8 = var_100;
                var_a0 = &var_c8;
                int64_t (* var_98_2)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h6327d06d698acdd2;
                var_168 = &data_5846b8;
                *var_168[8] = 2;
                int64_t var_148_4 = 0;
                int64_t** var_158_3 = &var_a0;
                int64_t var_150_4 = 1;
                void var_48;
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
            int64_t (* var_98_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h6327d06d698acdd2;
            var_168 = &data_584698;
            *var_168[8] = 2;
            int64_t var_148_3 = 0;
            int64_t** var_158_2 = &var_a0;
            int64_t var_150_3 = 1;
            void var_60;
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
        label_4f3970:
        int64_t var_b8 = 0;
        int64_t var_b0_1 = 8;
        int64_t var_a8_1 = 0;
        var_108 = rax_1;
        char var_f8_1 = 0;
        int64_t var_f0_1 = 0;
        
        while (true)
        {
            _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h886d3813ac58f572(&var_a0, &var_108);
            int64_t var_98;
            
            if (var_98 == -0x7fffffffffffffff)
            {
                core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$std..io..Split$LT$alloc..boxed..Box$LT$dyn$u20$std..io..BufRead$GT$$GT$$GT$$GT$::h93c3737ff8ebef1f(var_108, rcx_1);
                result = result_1;
                result[2] = var_a8_1;
                *result = var_b8;
                break;
            }
            
            int64_t var_90;
            
            if (var_98 == -0x8000000000000000)
            {
                result = result_1;
                result[1] = var_90;
                *result = -0x8000000000000000;
                core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$std..io..Split$LT$alloc..boxed..Box$LT$dyn$u20$std..io..BufRead$GT$$GT$$GT$$GT$::h93c3737ff8ebef1f(var_108, rcx_1);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h16d3046407d1e07a(&var_b8);
                break;
            }
            
            int64_t* rcx_2 = var_a0;
            int64_t var_78 = var_98;
            int64_t var_70_1 = var_90;
            size_t var_88;
            size_t var_68_1 = var_88;
            
            if (!var_88)
            {
                void* var_80 = rcx_2 + 1;
                int64_t rax_6;
                int64_t rdx_3;
                rax_6 = uucore::util_name::h60d842bf27b05e82();
                var_138 = rax_6;
                *var_138[8] = rdx_3;
                var_e8 = &var_138;
                int64_t (* var_e0_1)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h6327d06d698acdd2;
                var_168 = &data_5846d8;
                *var_168[8] = 2;
                int64_t var_148_1 = 0;
                int128_t** var_158_1 = &var_e8;
                int64_t var_150_1 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_168);
                var_138 = &var_c8;
                *var_138[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h6327d06d698acdd2;
                var_128 = &var_80;
                uint64_t (* var_120_1)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                var_168 = &data_5846f8;
                *var_168[8] = 3;
                int64_t var_148_2 = 0;
                var_158 = &var_138;
                int64_t var_150_2 = 2;
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
                
                if (_$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::hc0e47005068e24dd(&var_e8, var_b0_1, var_a8_1))
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hbd810d79ecac54ea(&var_e8);
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
    return result;
}
