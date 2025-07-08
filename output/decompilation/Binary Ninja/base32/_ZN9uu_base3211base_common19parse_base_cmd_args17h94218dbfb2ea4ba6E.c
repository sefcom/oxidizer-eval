
  int64_t* uu_base32::base_common::parse_base_cmd_args::h94218dbfb2ea4ba6(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6, int64_t arg7)

{
    void var_2e8;
    uu_base32::base_common::base_app::ha21d2a66676032ef(&var_2e8, arg4, arg5, arg6, arg7);
    int64_t var_320;
    clap_builder::builder::command::Command::try_get_matches_from::hd471734dc146ea72(&var_320, 
        &var_2e8, arg2);
    int64_t rax_1 = var_320;
    int64_t var_318;
    
    if (rax_1 != -0x8000000000000000)
    {
        int64_t var_2f0;
        int64_t var_328_1 = var_2f0;
        int128_t var_300;
        int128_t var_338_1 = var_300;
        int128_t var_310;
        int128_t var_348_1 = var_310;
        int64_t var_358 = rax_1;
        int64_t var_350_1 = var_318;
        uu_base32::base_common::Config::from::h8f03cd9b16c9529c(arg1, &var_358);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hcb9c8c91441f9e13(&var_358);
    }
    else
    {
        arg1[1] = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_318);
        arg1[2] = &data_54a200;
        *arg1 = 2;
    }
    return arg1;
}
