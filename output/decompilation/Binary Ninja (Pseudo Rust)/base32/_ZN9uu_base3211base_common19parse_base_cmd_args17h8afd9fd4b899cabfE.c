
  fn uu_base32::base_common::parse_base_cmd_args::h8afd9fd4b899cabf(arg1: *mut i64, arg2: i64) -> u64

{
    let mut var_2e8: ();
    uu_base32::base_common::base_app::hf62dc1f5a26396f2(&var_2e8, 
        "encode/decode data and print to …", 0x177, "{} [OPTION]... [FILE]Error flush…", 0x15);
    let mut var_320: i64;
    clap_builder::builder::command::Command::try_get_matches_from::he21a7f9860eb337f(&var_320, 
        &var_2e8, arg2);
    let rax: i64 = var_320;
    let var_318: i64;
    
    if -(rax) == -0x8000000000000000
    {
        let result: u64 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_318);
        arg1[1] = result;
        arg1[2] = &data_50ef90;
        *arg1 = 2;
        return result;
    }
    
    let var_2f0: i64;
    let var_328_1: i64 = var_2f0;
    let var_300: i128;
    let var_338_1: i128 = var_300;
    let var_310: i128;
    let var_348_1: i128 = var_310;
    let mut var_358: i64 = rax;
    let var_350_1: i64 = var_318;
    uu_base32::base_common::Config::from::he8007e948e715e4f(arg1, &var_358);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h5c522e2052e0e896(&var_358)
}
