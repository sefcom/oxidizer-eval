
  fn uu_ls::dired::print_dired_output::h024401ebfd75ea3a(arg1: *mut c_void, arg2: *mut c_void, arg3: *mut c_void) -> u64

{
    if _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h6ed1f3d156b2ad73(arg3) != 0
    {
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
    }
    
    let rcx: i64 = *arg2.byte_offset(0x10);
    
    if rcx != 0
    {
        uu_ls::dired::print_positions::h2333ffc8f21f2b3d("//DIRED////SUBDIRED//--dired-D\x1b…", 9, 
            *arg2.byte_offset(8), rcx);
    }
    
    if *arg1.byte_offset(0xee) != 0
    {
        uu_ls::dired::print_positions::h2333ffc8f21f2b3d("//SUBDIRED//--dired-D\x1b[Kprint…", 0xc, 
            *arg2.byte_offset(0x20), *arg2.byte_offset(0x28));
    }
    
    let mut var_50: *mut c_void = arg1.byte_offset(0xfc);
    let var_48: fn(arg1: *mut i8, arg2: *mut i64) -> u64 = _$LT$uucore..features..quoting_style..QuotingStyle$u20$as$u20$core..fmt..Display$GT$::fmt::hae4e8fc211181537;
    let mut var_40: *mut *mut c_void = &data_6866c0;
    let var_38: i64 = 2;
    let var_20: i64 = 0;
    let var_30: *mut *mut c_void = &var_50;
    let var_28: i64 = 1;
    std::io::stdio::_print::h5e446ff973c02de6(&var_40);
    0
}
