
  int64_t uu_whoami::platform::unix::get_username::hecd22d348e0efc05(int64_t* arg1)

{
    int64_t var_90;
    _$LT$uucore..features..entries..Passwd$u20$as$u20$uucore..features..entries..Locate$LT$u32$GT$$GT$::locate::h0b6474282aeae5d7(&var_90, uucore::features::process::geteuid::hdc9764945a55bce9());
    
    if (var_90 == -0x8000000000000000)
    {
        int64_t result;
        arg1[1] = result;
        *arg1 = -0x8000000000000000;
        return result;
    }
    
    int128_t var_a8;
    uucore::features::entries::uid2usr::_$u7b$$u7b$closure$u7d$$u7d$::h39d946a14e614e73(&var_a8, 
        &var_90);
    var_a8 = var_a8;
    int64_t var_98;
    int64_t var_98_1 = var_98;
    return core::ops::function::FnOnce::call_once::h3bdbc0715ca1c228(arg1, &var_a8);
}
