
  fn uu_realpath::uumain::uumain::h4951007969af279f(arg1: i64) -> u64

{
    let mut var_2f8: i128;
    uu_realpath::uu_app::h23198b2885553f83(&var_2f8);
    let mut var_360: *mut i64;
    clap_builder::builder::command::Command::try_get_matches_from::he30c2dd8d847e14c(&var_360, 
        &var_2f8, arg1);
    let rax: *mut i64 = var_360;
    let var_358: i64;
    
    if -(rax) == -0x8000000000000000
    {
        return alloc::boxed::Box$LT$T$GT$::new::h0de4245eb69d759e(var_358, 1);
    }
    
    let mut var_34c: i128;
    let var_384_1: i128 = var_34c;
    let var_33c: i128;
    let var_374_1: i128 = var_33c;
    let var_32c: i32;
    let var_364_1: i32 = var_32c;
    let mut var_398: *mut i64 = rax;
    let var_390_1: i64 = var_358;
    let mut var_350: i32;
    let var_388_1: i32 = var_350;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h37d95d2df42b3eed(
        &var_2f8, &var_398, "files(uutils coreutils) 0.0.30{}…", 5);
    clap_builder::parser::error::MatchesError::unwrap::hac41c44882bcb057(&var_360, 
        "files(uutils coreutils) 0.0.30{}…", 5, &var_2f8);
    
    if var_360 == 0
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    let zmm1_1: i128 = var_350;
    let var_2c8_1: i128 = var_33c;
    var_2f8 = var_360;
    let mut var_320: ();
    core::iter::traits::iterator::Iterator::collect::hdb759ab7422451e3(&var_320, &var_2f8);
    let rax_2: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_398, "striplogicalfiles(uutils coreuti…", 5);
    let mut r13_1: i8 = 0xa;
    
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_398, "zero -- \x1b[8mhelpNoneshim\x1b[…", 4) != 0
    {
        r13_1 = 0;
    }
    
    let rax_4: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_398, "quietstriplogicalfiles(uutils co…", 5);
    let rax_5: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_398, "logicalfiles(uutils coreutils) 0…", 7);
    let mut rax_6: i8 = 1;
    
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_398, "canonicalize-existingcanonicaliz…", 0x15) == 0
    {
        rax_6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_398, "canonicalize-missing/home/34r7hm…", 0x14) * 2;
    }
    
    let mut r15_1: i8 = 0;
    
    if rax_2 == 0
    {
        r15_1 = rax_5 + 1;
    }
    
    let rdx_2: u32 = rax_6;
    let var_3ec_1: i8 = rdx_2;
    uu_realpath::prepare_relative_options::h41375d3aff00cd98(&var_2f8, &var_398, rdx_2, r15_1);
    let rdx_3: i64 = var_2f8;
    let result: u64 = *var_2f8[8];
    let rbp: *mut *mut c_void = zmm1_1;
    
    if rdx_3 == -0x7fffffffffffffff
    {
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::hd0c0a7bace92335a(&var_320);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h2cf72d9c1ed05912(&var_398);
        return result;
    }
    
    let rax_7: i64 = *zmm1_1[8];
    let rax_8: i64 = var_34c;
    let var_310: i64;
    
    if var_310 != 0
    {
        let rdx_4: i64 = *var_34c[8];
        let mut rdx_5: i64 = 0;
        let mut result_1: u64 = result;
        
        if rdx_3 == -0x8000000000000000
        {
            result_1 = 0;
        }
        
        if rax_7 != -0x8000000000000000
        {
            rdx_5 = rax_8;
        }
        
        let r14_2: i64 = var_310 * 0x18;
        let var_318: i64;
        
        if rax_4 == 0
        {
            let mut rbx_3: i64 = 0;
            
            do
            {
                let rax_13: ssize_t = uu_realpath::resolve_path::h552c68346491a6aa(
                    *(var_318 + rbx_3 + 8), *(var_318 + rbx_3 + 0x10), r13_1, r15_1, var_3ec_1, 
                    result_1, rbp, rdx_5, rdx_4);
                *(var_318 + rbx_3 + 8);
                *(var_318 + rbx_3 + 0x10);
                let rax_14: i64 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h3d4d92ecb6af89be(rax_13);
                
                if rax_14 == 0
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::h57eea4118bcf36d2(0, &data_4ebb08);
                }
                else
                {
                    let mut var_3c0: i64 = rax_14;
                    let var_3b8_1: *mut *mut c_void = &data_4ebb08;
                    uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
                    let mut rax_15: i64;
                    let mut rdx_10: i64;
                    rax_15 = uucore::util_name::h074417a1e6395129();
                    let mut var_308: i64 = rax_15;
                    let var_300_1: i64 = rdx_10;
                    var_360 = &var_308;
                    let var_358_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hee44077f1658e718;
                    var_350 = &var_3c0;
                    *var_34c[4] = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h2f77f4399ff4c393;
                    var_2f8 = &data_4eb9b0;
                    *var_2f8[8] = 3;
                    let mut var_2d8_1: i128;
                    var_2d8_1 = 0;
                    let mut var_2e8_1: i128;
                    var_2e8_1 = &var_360;
                    *var_2e8_1[8] = 2;
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_2f8);
                    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::hf6e261a66b2d911a(var_3c0, var_3b8_1);
                }
                
                rbx_3 += 0x18;
            } while r14_2 != rbx_3;
        }
        else
        {
            let mut r12_1: i64 = 0;
            
            do
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h3073fe51a1703a1e(uu_realpath::resolve_path::h552c68346491a6aa(*(var_318 + r12_1 + 8), 
                    *(var_318 + r12_1 + 0x10), r13_1, r15_1, var_3ec_1, result_1, rbp, rdx_5, 
                    rdx_4));
                r12_1 += 0x18;
            } while r14_2 != r12_1;
        }
    }
    
    core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h6793401050955f40(rax_7, rax_8);
    core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h6793401050955f40(rdx_3, result);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::hd0c0a7bace92335a(
        &var_320);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h2cf72d9c1ed05912(&var_398);
    0
}
