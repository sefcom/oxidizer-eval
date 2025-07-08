
  fn uu_ls::dired::print_dired_output::h12a985547a0b3a50(arg1: *mut c_void, arg2: *mut c_void, arg3: *mut c_void) -> *mut i128

{
    if _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h5d2671fc0ed75d53(arg3) != 0
    {
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
    }
    
    let rcx_1: i64 = *arg2.byte_offset(0x10);
    
    if rcx_1 != 0
    {
        uu_ls::dired::print_positions::h1699d046e996e251("//DIRED////SUBDIRED//--dired-Des…", 9, 
            *arg2.byte_offset(8), rcx_1);
    }
    
    if *arg1.byte_offset(0xe6) != 0
    {
        uu_ls::dired::print_positions::h1699d046e996e251("//SUBDIRED//--dired-Descapeliter…", 0xc, 
            *arg2.byte_offset(0x20), *arg2.byte_offset(0x28));
    }
    
    let mut var_50: *mut c_void = arg1.byte_offset(0xf5);
    let var_48_1: fn(arg1: *mut i8, arg2: *mut c_void) -> u64 = _$LT$uucore..features..quoting_style..QuotingStyle$u20$as$u20$core..fmt..Display$GT$::fmt::h8d278e288b2ed706;
    let mut var_40: *mut *mut c_void = &data_613708;
    let var_38_1: i64 = 2;
    let var_20_1: i64 = 0;
    let var_30_1: *mut *mut c_void = &var_50;
    let var_28_1: i64 = 1;
    std::io::stdio::_print::he918bceb0c89db46(&var_40);
    nullptr
}
