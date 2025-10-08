
  fn bat::assets::build_assets::acknowledgements::build_acknowledgements::h985f29fe48cdf84e(arg1: *mut i8, arg2: i64, arg3: i64, arg4: i32)

{
    if arg4 == 0
    {
        *arg1.byte_offset(8) = -0x8000000000000000;
        *arg1 = 0xd;
        return;
    }
    
    let mut var_1e0: *mut *mut c_void = &data_acdf98;
    let var_1d8_1: i64 = 1;
    let mut var_2f8: ();
    let var_1d0_1: *mut c_void = &var_2f8;
    let mut var_1c8_1: i128 = {0};
    let mut var_2d8: i128;
    core::option::Option$LT$T$GT$::map_or_else::hec96efa742f30dcc(&var_2d8, 
        "Copyright (c) 2018-2021 bat-deve…", 0xfa, &var_1e0);
    walkdir::WalkDir::new::h459c167d76fb9d91(&var_1e0, arg2);
    let mut var_270: i128;
    walkdir::WalkDir::sort_by::h6657eda31431a47e(&var_270, &var_1e0);
    let var_238: i128;
    let var_150_1: i128 = var_238;
    let var_248: i128;
    let var_160_1: i128 = var_248;
    let var_258: i128;
    let var_170_1: i128 = var_258;
    let var_188_1: i128 = var_270;
    let var_260: i64;
    let var_178_1: i64 = var_260;
    var_1e0 = nullptr;
    let var_1d0_2: i64 = 0;
    var_1c8_1 = 8;
    var_1c8_1 = {0};
    let var_1b0_1: i64 = 8;
    let var_1a8_1: i128 = {0};
    let var_198_1: i64 = 8;
    let var_190_1: i64 = 0;
    let var_140_1: i128 = {0};
    let var_130_1: i64 = -0x7fffffffffffffff;
    let var_100_1: i64 = -0x7fffffffffffffff;
    let var_d0_1: i64 = arg2;
    let var_c8_1: i64 = arg3;
    let var_c0_1: i64 = -0x7fffffffffffffff;
    let var_78_1: i64 = -0x7fffffffffffffff;
    
    loop
    {
        let mut var_228: i64;
        _$LT$core..iter..adapters..flatten..FlattenCompat$LT$I$C$U$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf4f2140db3f21559(&var_228, &var_1e0);
        
        if var_228 == -0x8000000000000000
        {
            core::ptr::drop_in_place$LT$core..iter..adapters..flatten..FlatMap$LT$core..iter..adapters..flatten..Flatten$LT$walkdir..IntoIter$GT$$C$core..option..Option$LT$bat..assets..build_assets..acknowledgements..PathAndStem$GT$$C$bat..assets..build_assets..acknowledgements..build_acknowledgements..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::ha54413022cf6097c(&var_1e0);
            let var_2c8: i64;
            *arg1.byte_offset(0x18) = var_2c8;
            *arg1.byte_offset(8) = var_2d8;
            *arg1 = 0xd;
            break;
        }
        
        let mut var_2c0: i8;
        bat::assets::build_assets::acknowledgements::handle_file::hb5a8e1bdb81e5e02(&var_2c0, 
            &var_228);
        let rax_2: i8 = var_2c0;
        let mut var_2b8: i64;
        let var_2b0: i128;
        
        if rax_2 != 0xd
        {
            let var_2bf: i32;
            *arg1.byte_offset(4) = var_2bf;
            *arg1.byte_offset(1) = var_2bf;
            let var_280: i128;
            *arg1.byte_offset(0x40) = var_280;
            let var_290: i128;
            *arg1.byte_offset(0x30) = var_290;
            let var_2a0: i128;
            *arg1.byte_offset(0x20) = var_2a0;
            *arg1.byte_offset(0x10) = var_2b0;
            *arg1 = rax_2;
            *arg1.byte_offset(8) = var_2b8;
            core::ptr::drop_in_place$LT$bat..assets..build_assets..acknowledgements..PathAndStem$GT$::h4560092f5c8bce4c(&var_228);
            core::ptr::drop_in_place$LT$core..iter..adapters..flatten..FlatMap$LT$core..iter..adapters..flatten..Flatten$LT$walkdir..IntoIter$GT$$C$core..option..Option$LT$bat..assets..build_assets..acknowledgements..PathAndStem$GT$$C$bat..assets..build_assets..acknowledgements..build_acknowledgements..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::ha54413022cf6097c(&var_1e0);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(&var_2d8);
            break;
        }
        
        if var_2b8 != -0x8000000000000000
        {
            var_2c0 = var_2b8;
            var_2b8 = var_2b0;
            let var_1f0: i64;
            let var_1e8: i64;
            bat::assets::build_assets::acknowledgements::append_to_acknowledgements::he3cabe6578d3b81f(&var_2d8, var_1f0, var_1e8, var_2b8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(&var_2c0);
        }
        
        core::ptr::drop_in_place$LT$bat..assets..build_assets..acknowledgements..PathAndStem$GT$::h4560092f5c8bce4c(&var_228);
    }
}
