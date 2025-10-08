
  fn fd::walk::ReceiverBuffer$LT$W$GT$::print::hd2dc40990132b5db(arg1: *mut c_void, arg2: *mut i32) -> i64

{
    let mut rax: i64;
    let mut rdx_1: u64;
    rax = fd::output::print_entry::hc890df4f63d95a00(arg1.byte_offset(0x10), arg2, 
        *arg1.byte_offset(0x60));
    
    if rax != 0
    {
        let mut var_68: i64 = rax;
        
        if std::io::error::Error::kind::h135fe00c4e7365f3(rax) != 0xb
        {
            let mut var_60: *mut i64 = &var_68;
            let var_58: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
            let mut var_50: *mut *mut c_void = &data_802618;
            let var_48: i64 = 1;
            let var_30: i64 = 0;
            let var_40: *mut *mut i64 = &var_60;
            let var_38: i64 = 1;
            let mut var_20: ();
            core::option::Option$LT$T$GT$::map_or_else::h1f7ab50fdd345844(&var_20, 0, rdx_1, 
                &var_50);
            fd::error::print_error::h653511955bf98e50(&var_20);
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h70c4621fa5d008f5(&var_68);
            let mut rax_4: i64;
            rax_4 = 4;
            return rax_4;
        }
        
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h70c4621fa5d008f5(&var_68);
    }
    
    if core::sync::atomic::atomic_load::h95058969b162ab98(*arg1.byte_offset(0x70), 0) == 0
    {
        return 6;
    }
    
    fd::walk::ReceiverBuffer$LT$W$GT$::flush::h793374cb5c5836e2(arg1);
    let mut rax_3: u64;
    rax_3 = 5;
    rax_3
}
