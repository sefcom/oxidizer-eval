
  fn uu_fmt::uumain::uumain::h4d597dedc19545e7(arg1: i64) -> *mut i64

{
    let mut var_388: ();
    core::iter::traits::iterator::Iterator::collect::had47ac2ddb67d26a(&var_388, arg1);
    let var_378: i64;
    
    if var_378 < 2
    {
        goto 'label_4692c6;
    }
    
    let mut var_3c0: i64;
    let var_380: *mut c_void;
    std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&var_3c0, 
        *var_380.byte_offset(0x20), *var_380.byte_offset(0x28));
    let mut var_2f8: i32 = 0;
    let mut rax_2: i64;
    let mut rdx_2: u64;
    rax_2 = core::char::methods::encode_utf8_raw::h4a752b0d300141c4(&var_2f8);
    let var_3b8: u64;
    let mut var_3b0: *mut c_void;
    let mut result: *mut i64;
    let mut var_3d8: *mut i64;
    let mut var_370: i64;
    let mut var_360: i128;
    let mut result_3: *mut i64;
    let mut var_2e8: *mut *mut c_void;
    let mut var_2e0: i128;
    
    if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h2971c2e1dfecdedf(var_3b8, var_3b0, 
        rax_2, rdx_2) == 0
    {
        'label_4692b9:
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h89e5cba2904b1c92(&var_3c0);
        'label_4692c6:
        uu_fmt::uu_app::h6ccf3ffc03c52d4c(&var_2f8);
        clap_builder::builder::command::Command::try_get_matches_from::h2c39ca88ebe63a43(&var_370, 
            &var_2f8, &var_388);
        let rax_6: i64 = var_370;
        let var_368: i64;
        
        if rax_6 != -0x8000000000000000
        {
            let var_340: i64;
            let var_390_1: i64 = var_340;
            let mut var_350: i128;
            let var_3a0_1: i128 = var_350;
            var_3b0 = var_360;
            var_3c0 = rax_6;
            let var_3b8_1: i64 = var_368;
            uu_fmt::extract_files::h65884a2383ba06f2(&var_2f8, &var_3c0);
            let rax_8: *mut i64 = var_2f8;
            result = result_3;
            
            if rax_8 != -0x8000000000000000
            {
                var_3d8 = rax_8;
                let result_1: *mut i64 = result;
                uu_fmt::FmtOptions::from_matches::ha8709eba89c06adb(&var_2f8, &var_3c0);
                let rax_9: i64 = var_2f8;
                result = result_3;
                
                if rax_9 != -0x7fffffffffffffff
                {
                    let var_2b0: i64;
                    let var_328_1: i64 = var_2b0;
                    let var_2c0: i128;
                    let var_338_1: i128 = var_2c0;
                    let var_2d0: i128;
                    var_350 = var_2d0;
                    var_360 = var_2e0;
                    var_370 = rax_9;
                    let result_2: *mut i64 = result;
                    var_360 = var_2e8;
                    std::io::stdio::stdout::h077da66234850927();
                    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h76aeb7fd66c6f503(&var_2f8, 0x2000, &std::io::stdio::STDOUT::hdbe36c11cd3014ce);
                    let mut result_4: *mut i64 = result_1;
                    let var_318_1: *mut c_void = &result_1[var_2e8 * 3];
                    let mut i: *mut i128;
                    
                    do
                    {
                        let rax_11: *mut c_void = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h6d8ec22a73c6b668(&result_4);
                        
                        if rax_11 == 0
                        {
                            core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..Stdout$GT$$GT$::h5437aef1784e66e4(&var_2f8);
                            core::ptr::drop_in_place$LT$uu_fmt..FmtOptions$GT$::hac3fe91eb70a1596(
                                &var_370);
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h3af8a85558a8e77d(&var_3d8);
                            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h808e47ba2ada1f90(&var_3c0);
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::h4c4617d61c3bdfda(&var_388);
                            return nullptr;
                        }
                        
                        let mut rdx_6: *mut *mut c_void;
                        i = uu_fmt::process_file::h286817e23c9d96bb(*rax_11.byte_offset(8), 
                            *rax_11.byte_offset(0x10), &var_370, &var_2f8);
                        result = i;
                    } while i == 0;
                    core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..Stdout$GT$$GT$::h5437aef1784e66e4(&var_2f8);
                    core::ptr::drop_in_place$LT$uu_fmt..FmtOptions$GT$::hac3fe91eb70a1596(&var_370);
                }
                
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h3af8a85558a8e77d(&var_3d8);
            }
            
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h808e47ba2ada1f90(&var_3c0);
        }
        else
        {
            result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_368);
        }
    }
    else
    {
        var_2f8 = var_3b8;
        result_3 = var_3b0.byte_offset(var_3b8);
        
        if _$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::advance_by::h7ba654970d2c1b3e(&var_2f8, 1) != 0
        {
            goto 'label_4692b9;
        }
        
        let mut rax_13: i32;
        let mut rdx_8: i32;
        rax_13 = core::str::validations::next_code_point::ha2c5c8f2c7e9b106(&var_2f8, var_3b8);
        
        if rax_13 == 0 || rdx_8 - 0x30 >= 0xa
        {
            goto 'label_4692b9;
        }
        
        var_2f8 = var_3b8;
        result_3 = var_3b0.byte_offset(var_3b8);
        var_2e8 = 2;
        
        if _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h11f5455cc95e9734(_$LT$core..iter..adapters..skip..Skip$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::ha210a45ec350f961(&var_2f8)) == 0
        {
            goto 'label_4692b9;
        }
        
        var_2f8 = 0;
        let mut rax_17: i64;
        let mut rdx_10: u64;
        rax_17 = core::char::methods::encode_utf8_raw::h4a752b0d300141c4(&var_2f8);
        let mut rax_18: i64;
        let mut rdx_12: i64;
        rax_18 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_prefix_of::hdb721c8cd5e22968(rax_17, rdx_10, var_3b8, var_3b0);
        
        if rax_18 == 0
        {
            core::option::unwrap_failed::h0e11329e76906eaa();
            /* no return */
        }
        
        var_370 = 0;
        let var_368_1: i64 = rax_18;
        var_360 = rdx_12;
        *var_360[8] = 1;
        var_3d8 = &var_370;
        let var_3d0_1: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        var_2f8 = &data_523a48;
        let var_2f0: i64 = 1;
        *var_2e0[8] = 0;
        let var_2e8_1: *mut *mut i64 = &var_3d8;
        var_2e0 = 1;
        let mut var_310: i128;
        core::option::Option$LT$T$GT$::map_or_else::hc9968c7ec2993a3c(&var_310, &var_2f8);
        var_2e0 = 1;
        var_2f8 = var_310;
        let var_300: i64;
        let var_2e8_2: i64 = var_300;
        result = alloc::boxed::Box$LT$T$GT$::new::h5f75f92fa2fc2663(&var_2f8);
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h89e5cba2904b1c92(&var_3c0);
    }
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::h4c4617d61c3bdfda(&var_388);
    result
}
