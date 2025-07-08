
  int64_t (*)(void* arg1, int64_t arg2) uu_hashsum::hashsum::h440870b73b1317fa(char** arg1, int128_t* arg2)

{
    char** rbx = arg1;
    char const* const rcx = "*blake2bdescription() is depreca…";
    
    if (!arg1[5])
        rcx = " *blake2bdescription() is deprec…";
    
    char const* const var_d0 = rcx;
    int64_t var_c8 = 1;
    int128_t var_48 = arg2[3];
    int128_t var_58 = arg2[2];
    int128_t var_68 = arg2[1];
    int128_t var_78 = *arg2;
    
    while (true)
    {
        char* rax_1;
        size_t rdx_1;
        rax_1 = _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4412e25fb3900246(&var_78);
        
        if (!rax_1)
        {
            core::ptr::drop_in_place$LT$uu_hashsum..Options$GT$::h786198480f8a4310(arg1[2], 
                arg1[3]);
            return nullptr;
        }
        
        char* var_160;
        std::path::Path::components::h4f3217acf0fc8653(&var_160, rax_1, rdx_1);
        int128_t var_1a8;
        std::path::Path::components::h4f3217acf0fc8653(&var_1a8, 
            "-b2sumbinarycheckstatusquietstri…", 1);
        int64_t (* var_158)(void* arg1, int64_t arg2);
        int64_t* rax_3;
        void* const rcx_1;
        
        if (!_$LT$std..path..Components$u20$as$u20$core..cmp..PartialEq$GT$::eq::h5cac1ec2999e76da(
            &var_160, &var_1a8))
        {
            std::fs::File::open::hf67acec63d9b4762(&var_1a8, rax_1);
            _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h71e7b9096ef9ab27(&var_160, &var_1a8);
            int64_t (* r13_1)(void* arg1, int64_t arg2) = var_160;
            
            if (r13_1)
            {
                core::ptr::drop_in_place$LT$uu_hashsum..Options$GT$::h786198480f8a4310(arg1[2], 
                    arg1[3]);
                return r13_1;
            }
            
            rax_3 = alloc::boxed::Box$LT$T$GT$::new::hc466181734c65edc(var_158);
            rcx_1 = &data_73bb90;
        }
        else
        {
            std::io::stdio::stdin::h7215cc131abb55d8();
            rax_3 = alloc::boxed::Box$LT$T$GT$::new::h371a05b7099bb6c8(
                &std::io::stdio::stdin::INSTANCE::hd3a98c261e3f14b5);
            rcx_1 = &data_73bbe8;
        }
        
        void var_b0;
        std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hb9a751f4ce087bfe(&var_b0, 
            0x2000, rax_3, rcx_1);
        uucore::features::checksum::digest_reader::hc839b2e876c05e33(&var_1a8, &arg1[2], &var_b0, 
            rbx[5], rbx[4]);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h864ec134f8e6c354(&var_160, &var_1a8);
        char* rax_4 = var_160;
        
        if (rax_4 == -0x8000000000000000)
        {
            core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::h250a87cb04812376(&var_b0);
            core::ptr::drop_in_place$LT$uu_hashsum..Options$GT$::h786198480f8a4310(arg1[2], 
                arg1[3]);
            return var_158;
        }
        
        char* var_120 = rax_4;
        int64_t (* var_118_1)(void* arg1, int64_t arg2) = var_158;
        char** var_150;
        char** var_110_1 = var_150;
        rbx = arg1;
        uucore::features::checksum::escape_filename::hbc3241c83415153b(&var_1a8, rax_1, rdx_1);
        char const* const* var_198;
        char const* const* var_f8_1 = var_198;
        int128_t var_108 = var_1a8;
        int128_t var_190;
        int128_t var_c0 = var_190;
        char* var_f0;
        
        if (*(rbx + 0x29))
        {
            if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h1bae7f9ea29a26b8(*rbx, rbx[1], "blake2bdescription() is deprecat…", 7))
            {
                alloc::str::_$LT$impl$u20$str$GT$::to_ascii_uppercase::h60b631a23b970e6a(&var_f0, 
                    *rbx, rbx[1]);
                var_1a8 = &var_c0;
                *var_1a8[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h215de39c55175587;
                var_198 = &var_f0;
                var_190 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                *var_190[8] = &var_108;
                int64_t (* var_180_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                char** var_178_1 = &var_120;
                int64_t (* var_170_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                var_160 = &data_73bab0;
                var_158 = 5;
                int64_t var_140_1 = 0;
                var_150 = &var_1a8;
                int64_t var_148_2 = 4;
                std::io::stdio::_print::he918bceb0c89db46(&var_160);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3e7a1bd31eb01303(&var_f0);
            }
            else if ((*(rbx[3] + 0x30))(rbx[2]) != 0x200)
            {
                var_f0 = (*(rbx[3] + 0x30))(rbx[2]);
                var_1a8 = &var_f0;
                *var_1a8[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                var_198 = &var_108;
                var_190 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                *var_190[8] = &var_120;
                int64_t (* var_180_2)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                var_160 = &data_73ba70;
                var_158 = 4;
                int64_t var_140_2 = 0;
                var_150 = &var_1a8;
                int64_t var_148_3 = 3;
                std::io::stdio::_print::he918bceb0c89db46(&var_160);
            }
            else
            {
                var_160 = &var_108;
                var_158 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                var_150 = &var_120;
                int64_t (* var_148_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                var_1a8 = &data_73ba40;
                *var_1a8[8] = 3;
                *var_190[8] = 0;
                var_198 = &var_160;
                var_190 = 2;
                std::io::stdio::_print::he918bceb0c89db46(&var_1a8);
            }
        }
        else if (*(rbx + 0x2a))
        {
            var_160 = &var_120;
            var_158 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            var_1a8 = &data_73b958;
            *var_1a8[8] = 2;
            *var_190[8] = 0;
            var_198 = &var_160;
            var_190 = 1;
            std::io::stdio::_print::he918bceb0c89db46(&var_1a8);
        }
        else if (!*(rbx + 0x2b))
        {
            var_1a8 = &var_c0;
            *var_1a8[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h215de39c55175587;
            var_198 = &var_120;
            var_190 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            *var_190[8] = &var_d0;
            int64_t (* var_180_4)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h215de39c55175587;
            int128_t* var_178_2 = &var_108;
            int64_t (* var_170_2)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            var_160 = &data_73bb40;
            var_158 = 5;
            int64_t var_140_4 = 0;
            var_150 = &var_1a8;
            int64_t var_148_5 = 4;
            std::io::stdio::_print::he918bceb0c89db46(&var_160);
        }
        else
        {
            var_f0 = rax_1;
            size_t var_e8_1 = rdx_1;
            var_1a8 = &var_120;
            *var_1a8[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            var_198 = &var_d0;
            var_190 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h215de39c55175587;
            *var_190[8] = &var_f0;
            int64_t (* var_180_3)(int64_t* arg1, void* arg2) =
                _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
            var_160 = &data_73bb00;
            var_158 = 4;
            int64_t var_140_3 = 0;
            var_150 = &var_1a8;
            int64_t var_148_4 = 3;
            std::io::stdio::_print::he918bceb0c89db46(&var_160);
        }
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3e7a1bd31eb01303(&var_108);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3e7a1bd31eb01303(&var_120);
        core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::h250a87cb04812376(&var_b0);
    }
}
