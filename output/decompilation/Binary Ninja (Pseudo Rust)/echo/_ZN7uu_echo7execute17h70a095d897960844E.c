
  fn uu_echo::execute::h70a095d897960844(arg1: *mut i64, arg2: i8, arg3: i8, arg4: *mut i128) -> *mut i128

{
    let var_48: i128 = arg4[3];
    let var_58: i128 = arg4[2];
    let var_68: i128 = arg4[1];
    let mut var_78: i128 = *arg4;
    let var_38: i64 = 0;
    let mut rax: *mut *mut c_void;
    let mut i: *mut c_void;
    rax = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hbcfbc49f81d31fad(&var_78);
    
    if i != 0
    {
        if arg3 == 0
        {
            do
            {
                let r12_1: i64 = *i.byte_offset(8);
                let r13_2: u64 = *i.byte_offset(0x10);
                
                if rax != 0 && _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(arg1, " ", 1) != 0
                {
                    return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                }
                
                if _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(arg1, r12_1, r13_2) != 0
                {
                    return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                }
                
                rax = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hbcfbc49f81d31fad(&var_78);
            } while i != 0;
        }
        else
        {
            do
            {
                let r13_1: i64 = *i.byte_offset(8);
                let rbp_1: i64 = *i.byte_offset(0x10);
                
                if rax != 0
                {
                    rax = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(arg1, " ", 1);
                    
                    if rax != 0
                    {
                        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                    }
                }
                
                let mut var_88: i8;
                uu_echo::print_escaped::hfb2c9877aef23019(&var_88, r13_1, rbp_1, arg1, rax);
                
                if var_88 != 0
                {
                    return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                }
                
                let var_87: i8;
                
                if var_87 != 0
                {
                    return nullptr;
                }
                
                rax = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hbcfbc49f81d31fad(&var_78);
            } while i != 0;
        }
    }
    
    if arg2 != 0 &&
        _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(
        arg1, &data_41b420, 1) != 0
    {
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
    }
    
    nullptr
}
