
  fn uu_more::Pager::draw_lines::hf362fbee6ca4fba8(arg1: *mut c_void, arg2: i64) -> u64

{
    if crossterm::command::write_command_ansi::h092cdb5fcd9c0436(arg2) == 0 &&
        _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::hfb2969f84e2164f2(arg2) == 0
    {
        let mut result: u64 = uu_more::Pager::load_visible_lines::hab6b7f963f4c8df4(arg1);
        
        if result == 0
        {
            let rax_1: i64 = *arg1.byte_offset(0x20);
            
            if rax_1 == 0
            {
                return 0;
            }
            
            let mut r12_1: i64 = *arg1.byte_offset(0x18);
            let mut i_1: i64 = rax_1 * 0x18;
            let mut i: i64;
            
            do
            {
                let mut var_90: i64 = r12_1;
                let mut var_70: *mut i64 = &var_90;
                let var_68_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb390d762ea379179;
                let mut var_60: *mut *mut [i8; 0x86] = &data_525308;
                let var_58_1: i64 = 1;
                let var_40_1: i64 = 0;
                let var_50_1: *mut *mut i64 = &var_70;
                let var_48_1: i64 = 1;
                let mut var_88: ();
                core::option::Option$LT$T$GT$::map_or_else::hc1ec3d5ca74f474d(&var_88, &var_60);
                let var_80: i64;
                let var_78: u64;
                
                if _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::hda8b04bbc47966cd(arg2, var_80, var_78) != 0
                {
                    let result_1: u64 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::habcac018958bfd8a(
                        &var_88);
                    result = result_1;
                    break;
                }
                
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::habcac018958bfd8a(&var_88);
                r12_1 += 0x18;
                i = i_1;
                i_1 -= 0x18;
                result = 0;
            } while i != 0x18;
        }
        
        return result;
    }
    
    uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2()
}
