
  uint64_t uu_base32::base_common::parse_base_cmd_args::h8afd9fd4b899cabf(int64_t* arg1, int64_t arg2)

{
    void var_2e8;
    uu_base32::base_common::base_app::hf62dc1f5a26396f2(&var_2e8, 
        "encode/decode data and print to …", 0x177, "{} [OPTION]... [FILE]Error flush…", 0x15);
    int64_t var_320;
    clap_builder::builder::command::Command::try_get_matches_from::he21a7f9860eb337f(&var_320, 
        &var_2e8, arg2);
    int64_t rax = var_320;
    int64_t var_318;
    
    if (-(rax) == -0x8000000000000000)
    {
        uint64_t result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_318);
        arg1[1] = result;
        arg1[2] = &data_50ef90;
        *arg1 = 2;
        return result;
    }
    
    int64_t var_2f0;
    int64_t var_328_1 = var_2f0;
    int128_t var_300;
    int128_t var_338_1 = var_300;
    int128_t var_310;
    int128_t var_348_1 = var_310;
    int64_t var_358 = rax;
    int64_t var_350_1 = var_318;
    uu_base32::base_common::Config::from::he8007e948e715e4f(arg1, &var_358);
    return core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h5c522e2052e0e896(&var_358);
}
