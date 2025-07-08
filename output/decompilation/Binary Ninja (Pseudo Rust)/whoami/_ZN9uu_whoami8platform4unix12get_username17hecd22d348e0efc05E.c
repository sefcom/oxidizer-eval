
  fn uu_whoami::platform::unix::get_username::hecd22d348e0efc05(arg1: *mut i64) -> i64

{
    let mut var_90: i64;
    _$LT$uucore..features..entries..Passwd$u20$as$u20$uucore..features..entries..Locate$LT$u32$GT$$GT$::locate::h0b6474282aeae5d7(&var_90, uucore::features::process::geteuid::hdc9764945a55bce9());
    
    if var_90 == -0x8000000000000000
    {
        let result: i64;
        arg1[1] = result;
        *arg1 = -0x8000000000000000;
        return result;
    }
    
    let mut var_a8: i128;
    uucore::features::entries::uid2usr::_$u7b$$u7b$closure$u7d$$u7d$::h39d946a14e614e73(&var_a8, 
        &var_90);
    var_a8 = var_a8;
    let var_98: i64;
    let var_98_1: i64 = var_98;
    core::ops::function::FnOnce::call_once::h3bdbc0715ca1c228(arg1, &var_a8)
}
