
  int64_t* uu_ptx::read_word_filter_file::h2a4d49b02fae1e68(int64_t* arg1, void* arg2, int64_t arg3, int64_t arg4)

{
    int32_t var_108;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0320162aad36ecc4(
        &var_108, arg2, arg3, arg4);
    void* rax =
        clap_builder::parser::error::MatchesError::unwrap::h3979b7ce1fd00743(arg3, arg4, &var_108);
    
    if (!rax)
    {
        core::option::expect_failed::h9e03a1f6ff88dbcf("parsing options failed!src/uu/pt…");
        /* no return */
    }
    
    void var_48;
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&var_48, 
        rax);
    std::fs::File::open::h25307432a9f68270(&var_108, &var_48);
    int64_t* result;
    
    if (!var_108)
    {
        int32_t var_104;
        int128_t var_78;
        std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hfe08d7d96eb99100(&var_78, 
            0x2000, var_104);
        _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::h46266b0c4833887c(&var_108);
        int128_t var_d8 = var_108;
        int128_t var_58;
        int128_t var_e8_1 = var_58;
        int128_t var_68;
        int128_t var_f8_1 = var_68;
        var_108 = var_78;
        
        while (true)
        {
            int64_t var_a8;
            _$LT$std..io..Lines$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h7b587278e9c13b14(&var_a8, &var_108);
            int64_t rax_1 = var_a8;
            
            if (rax_1 == -0x7fffffffffffffff)
            {
                core::ptr::drop_in_place$LT$std..io..Lines$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$$GT$::h61fe1397cadf3f84(&var_108);
                int128_t zmm0_2 = var_d8;
                result = arg1;
                int128_t var_e8;
                *(result + 0x20) = var_e8;
                int128_t var_f8;
                *(result + 0x10) = var_f8;
                *result = zmm0_2;
                break;
            }
            
            int64_t var_a0;
            
            if (rax_1 == -0x8000000000000000)
            {
                arg1[1] = var_a0;
                *arg1 = 0;
                core::ptr::drop_in_place$LT$std..io..Lines$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$$GT$::h61fe1397cadf3f84(&var_108);
                return core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$alloc..string..String$GT$$GT$::h0fe902575fe225c7(&var_d8);
            }
            
            int64_t var_90 = rax_1;
            int64_t var_88_1 = var_a0;
            int64_t var_98;
            int64_t var_80_1 = var_98;
            hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h9782d684969e794d(&var_d8, 
                &var_90);
        }
    }
    else
    {
        int64_t* result_1;
        result = result_1;
        arg1[1] = result;
        *arg1 = 0;
    }
    
    return result;
}
