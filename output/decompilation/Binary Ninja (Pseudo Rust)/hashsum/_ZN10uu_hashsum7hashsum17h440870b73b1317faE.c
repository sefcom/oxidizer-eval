
  fn uu_hashsum::hashsum::h440870b73b1317fa(arg1: *mut *mut i8, arg2: *mut i128) -> fn(arg1: *mut c_void, arg2: i64) -> i64

{
    let mut rbx: *mut *mut i8 = arg1;
    let mut rcx: *const i8 = "*blake2bdescription() is depreca…";
    
    if arg1[5] == 0
    {
        rcx = " *blake2bdescription() is deprec…";
    }
    
    let mut var_d0: *const i8 = rcx;
    let var_c8: i64 = 1;
    let var_48: i128 = arg2[3];
    let var_58: i128 = arg2[2];
    let var_68: i128 = arg2[1];
    let mut var_78: i128 = *arg2;
    
    loop
    {
        let mut rax_1: *mut i8;
        let mut rdx_1: size_t;
        rax_1 = _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4412e25fb3900246(&var_78);
        
        if rax_1 == 0
        {
            core::ptr::drop_in_place$LT$uu_hashsum..Options$GT$::h786198480f8a4310(arg1[2], 
                arg1[3]);
            return nullptr;
        }
        
        let mut var_160: *mut i8;
        std::path::Path::components::h4f3217acf0fc8653(&var_160, rax_1, rdx_1);
        let mut var_1a8: i128;
        std::path::Path::components::h4f3217acf0fc8653(&var_1a8, 
            "-b2sumbinarycheckstatusquietstri…", 1);
        let mut var_158: fn(arg1: *mut c_void, arg2: i64) -> i64;
        let mut rax_3: *mut i64;
        let mut rcx_1: *mut c_void;
        
        if _$LT$std..path..Components$u20$as$u20$core..cmp..PartialEq$GT$::eq::h5cac1ec2999e76da(
            &var_160, &var_1a8) == 0
        {
            std::fs::File::open::hf67acec63d9b4762(&var_1a8, rax_1);
            _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h71e7b9096ef9ab27(&var_160, &var_1a8);
            let r13_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = var_160;
            
            if r13_1 != 0
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
        
        let mut var_b0: ();
        std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hb9a751f4ce087bfe(&var_b0, 
            0x2000, rax_3, rcx_1);
        uucore::features::checksum::digest_reader::hc839b2e876c05e33(&var_1a8, &arg1[2], &var_b0, 
            rbx[5], rbx[4]);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h864ec134f8e6c354(&var_160, &var_1a8);
        let rax_4: *mut i8 = var_160;
        
        if rax_4 == -0x8000000000000000
        {
            core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::h250a87cb04812376(&var_b0);
            core::ptr::drop_in_place$LT$uu_hashsum..Options$GT$::h786198480f8a4310(arg1[2], 
                arg1[3]);
            return var_158;
        }
        
        let mut var_120: *mut i8 = rax_4;
        let var_118_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = var_158;
        let mut var_150: *mut *mut i8;
        let var_110_1: *mut *mut i8 = var_150;
        rbx = arg1;
        uucore::features::checksum::escape_filename::hbc3241c83415153b(&var_1a8, rax_1, rdx_1);
        let mut var_198: *const *const i8;
        let var_f8_1: *const *const i8 = var_198;
        let mut var_108: i128 = var_1a8;
        let mut var_190: i128;
        let mut var_c0: i128 = var_190;
        let mut var_f0: *mut i8;
        
        if *rbx.byte_offset(0x29) != 0
        {
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h1bae7f9ea29a26b8(*rbx, rbx[1], "blake2bdescription() is deprecat…", 7) == 0
            {
                alloc::str::_$LT$impl$u20$str$GT$::to_ascii_uppercase::h60b631a23b970e6a(&var_f0, 
                    *rbx, rbx[1]);
                var_1a8 = &var_c0;
                *var_1a8[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h215de39c55175587;
                var_198 = &var_f0;
                var_190 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                *var_190[8] = &var_108;
                let var_180_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                let var_178_1: *mut *mut i8 = &var_120;
                let var_170_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                var_160 = &data_73bab0;
                var_158 = 5;
                let var_140_1: i64 = 0;
                var_150 = &var_1a8;
                let var_148_2: i64 = 4;
                std::io::stdio::_print::he918bceb0c89db46(&var_160);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3e7a1bd31eb01303(&var_f0);
            }
            else if (*rbx[3].byte_offset(0x30))(rbx[2]) != 0x200
            {
                var_f0 = (*rbx[3].byte_offset(0x30))(rbx[2]);
                var_1a8 = &var_f0;
                *var_1a8[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                var_198 = &var_108;
                var_190 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                *var_190[8] = &var_120;
                let var_180_2: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                var_160 = &data_73ba70;
                var_158 = 4;
                let var_140_2: i64 = 0;
                var_150 = &var_1a8;
                let var_148_3: i64 = 3;
                std::io::stdio::_print::he918bceb0c89db46(&var_160);
            }
            else
            {
                var_160 = &var_108;
                var_158 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                var_150 = &var_120;
                let var_148_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                var_1a8 = &data_73ba40;
                *var_1a8[8] = 3;
                *var_190[8] = 0;
                var_198 = &var_160;
                var_190 = 2;
                std::io::stdio::_print::he918bceb0c89db46(&var_1a8);
            }
        }
        else if *rbx.byte_offset(0x2a) != 0
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
        else if *rbx.byte_offset(0x2b) == 0
        {
            var_1a8 = &var_c0;
            *var_1a8[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h215de39c55175587;
            var_198 = &var_120;
            var_190 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            *var_190[8] = &var_d0;
            let var_180_4: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h215de39c55175587;
            let var_178_2: *mut i128 = &var_108;
            let var_170_2: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            var_160 = &data_73bb40;
            var_158 = 5;
            let var_140_4: i64 = 0;
            var_150 = &var_1a8;
            let var_148_5: i64 = 4;
            std::io::stdio::_print::he918bceb0c89db46(&var_160);
        }
        else
        {
            var_f0 = rax_1;
            let var_e8_1: size_t = rdx_1;
            var_1a8 = &var_120;
            *var_1a8[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            var_198 = &var_d0;
            var_190 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h215de39c55175587;
            *var_190[8] = &var_f0;
            let var_180_3: fn(arg1: *mut i64, arg2: *mut c_void) -> i64 =
                _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
            var_160 = &data_73bb00;
            var_158 = 4;
            let var_140_3: i64 = 0;
            var_150 = &var_1a8;
            let var_148_4: i64 = 3;
            std::io::stdio::_print::he918bceb0c89db46(&var_160);
        }
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3e7a1bd31eb01303(&var_108);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3e7a1bd31eb01303(&var_120);
        core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::h250a87cb04812376(&var_b0);
    }
}
