
  fn uu_base32::base_common::parse_base_cmd_args::h94218dbfb2ea4ba6(arg1: *mut i64, arg2: i64, arg3: i64, arg4: i64, arg5: i64, arg6: i64, arg7: i64) -> *mut i64

{
    let mut var_2e8: ();
    uu_base32::base_common::base_app::ha21d2a66676032ef(&var_2e8, arg4, arg5, arg6, arg7);
    let mut var_320: i64;
    clap_builder::builder::command::Command::try_get_matches_from::hd471734dc146ea72(&var_320, 
        &var_2e8, arg2);
    let rax_1: i64 = var_320;
    let var_318: i64;
    
    if rax_1 != -0x8000000000000000
    {
        let var_2f0: i64;
        let var_328_1: i64 = var_2f0;
        let var_300: i128;
        let var_338_1: i128 = var_300;
        let var_310: i128;
        let var_348_1: i128 = var_310;
        let mut var_358: i64 = rax_1;
        let var_350_1: i64 = var_318;
        uu_base32::base_common::Config::from::h8f03cd9b16c9529c(arg1, &var_358);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hcb9c8c91441f9e13(&var_358);
    }
    else
    {
        arg1[1] = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_318);
        arg1[2] = &data_54a200;
        *arg1 = 2;
    }
    arg1
}
