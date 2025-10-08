
  fn uu_kill::kill::hf0ec59056e3b4307(arg1: i32, arg2: *mut i32, arg3: i64)

{
    if arg3 != 0
    {
        let mut i: i64 = 0;
        
        do
        {
            let var_94_1: i32 = *arg2.byte_offset(i);
            
            if nix::sys::signal::kill::hae40f56929b3de6e() != 0x86
            {
                let mut var_a0: u64 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::hf3c0616e28f90799();
                uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
                let mut rax_4: i64;
                let mut rdx: i64;
                rax_4 = uucore::util_name::h074417a1e6395129();
                let mut var_90: i64 = rax_4;
                let var_88_1: i64 = rdx;
                let mut var_80: *mut i64 = &var_90;
                let var_78_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h3a9a4fe6be7cab02;
                let var_70_1: *mut u64 = &var_a0;
                let var_68_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hc2db305b91b5782c;
                let mut var_60: *mut c_void = &data_4e7718;
                let var_58_1: i64 = 3;
                let var_40_1: i64 = 0;
                let var_50_1: *mut *mut i64 = &var_80;
                let var_48_1: i64 = 2;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_60);
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$::h133e6d19fe6e02d4(var_a0);
            }
            
            i += 4;
        } while arg3 << 2 != i;
    }
}
