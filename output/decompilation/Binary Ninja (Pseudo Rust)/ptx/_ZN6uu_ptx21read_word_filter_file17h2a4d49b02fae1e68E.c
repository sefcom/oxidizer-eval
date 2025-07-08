
  fn uu_ptx::read_word_filter_file::h2a4d49b02fae1e68(arg1: *mut i64, arg2: *mut c_void, arg3: i64, arg4: i64) -> *mut i64

{
    let mut var_108: i32;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0320162aad36ecc4(
        &var_108, arg2, arg3, arg4);
    let rax: *mut c_void =
        clap_builder::parser::error::MatchesError::unwrap::h3979b7ce1fd00743(arg3, arg4, &var_108);
    
    if rax == 0
    {
        core::option::expect_failed::h9e03a1f6ff88dbcf("parsing options failed!src/uu/pt…");
        /* no return */
    }
    
    let mut var_48: ();
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&var_48, 
        rax);
    std::fs::File::open::h25307432a9f68270(&var_108, &var_48);
    let mut result: *mut i64;
    
    if var_108 == 0
    {
        let var_104: i32;
        let mut var_78: i128;
        std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hfe08d7d96eb99100(&var_78, 
            0x2000, var_104);
        _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::h46266b0c4833887c(&var_108);
        let mut var_d8: i128 = var_108;
        let var_58: i128;
        let var_e8_1: i128 = var_58;
        let var_68: i128;
        let var_f8_1: i128 = var_68;
        var_108 = var_78;
        
        loop
        {
            let mut var_a8: i64;
            _$LT$std..io..Lines$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h7b587278e9c13b14(&var_a8, &var_108);
            let rax_1: i64 = var_a8;
            
            if rax_1 == -0x7fffffffffffffff
            {
                core::ptr::drop_in_place$LT$std..io..Lines$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$$GT$::h61fe1397cadf3f84(&var_108);
                let zmm0_2: i128 = var_d8;
                result = arg1;
                let var_e8: i128;
                *result.byte_offset(0x20) = var_e8;
                let var_f8: i128;
                *result.byte_offset(0x10) = var_f8;
                *result = zmm0_2;
                break;
            }
            
            let var_a0: i64;
            
            if rax_1 == -0x8000000000000000
            {
                arg1[1] = var_a0;
                *arg1 = 0;
                core::ptr::drop_in_place$LT$std..io..Lines$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$$GT$::h61fe1397cadf3f84(&var_108);
                return core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$alloc..string..String$GT$$GT$::h0fe902575fe225c7(&var_d8);
            }
            
            let mut var_90: i64 = rax_1;
            let var_88_1: i64 = var_a0;
            let var_98: i64;
            let var_80_1: i64 = var_98;
            hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h9782d684969e794d(&var_d8, 
                &var_90);
        }
    }
    else
    {
        let result_1: *mut i64;
        result = result_1;
        arg1[1] = result;
        *arg1 = 0;
    }
    
    result
}
