
  fn uu_rm::remove::ha4133918b1aa389d(arg1: i64, arg2: i64, arg3: *mut i8) -> u64

{
    let mut var_140: i64 = arg1;
    let var_138: i64 = (arg2 << 4) + arg1;
    let mut i: *mut i64 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0300d8f33fee60f7(&var_140);
    let mut rbp: i32;
    
    if i == 0
    {
        rbp = 0;
    }
    else
    {
        let rdx: i8 = arg3[5];
        let rcx_1: i8 = arg3[6];
        let mut var_168: i64;
        let mut var_e0: i32;
        let var_d8: i64;
        let var_a8: i32;
        
        if *arg3 == 0
        {
            rbp = 0;
            
            do
            {
                let r12_1: i64 = *i;
                let rbx_2: u64 = i[1];
                std::fs::symlink_metadata::h9e12b59fb6df20f8(&var_e0, r12_1);
                let mut rax_5: i8;
                
                if var_e0 == 2
                {
                    var_168 = var_d8;
                    let mut rax_7: i64;
                    let mut rdx_8: i64;
                    rax_7 = uucore::util_name::h60d842bf27b05e82();
                    let mut var_130: i64 = rax_7;
                    let var_128_1: i64 = rdx_8;
                    let mut var_150: *mut i64 = &var_130;
                    let var_148_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
                    let mut var_110: *mut c_void = &data_527970;
                    let var_108_1: i64 = 2;
                    let var_f0_1: i64 = 0;
                    let var_100_1: *mut *mut i64 = &var_150;
                    let var_f8_1: i64 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_110);
                    var_130 = 1;
                    let var_128_2: i64 = r12_1;
                    let var_120_1: u64 = rbx_2;
                    let var_118_1: i8 = 1;
                    var_150 = &var_130;
                    let var_148_2: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    var_110 = &data_527990;
                    let var_108_2: i64 = 2;
                    let var_f0_2: i64 = 0;
                    let var_100_2: *mut *mut i64 = &var_150;
                    let var_f8_2: i64 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_110);
                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h333f14ee3ed91a78(
                        &var_168);
                    rax_5 = 1;
                }
                else if (var_a8 & 0xf000) != 0x4000
                {
                    rax_5 = uu_rm::remove_file::hfb41d07f759de271(r12_1, rbx_2, rdx, rcx_1);
                }
                else
                {
                    rax_5 = uu_rm::handle_dir::h040a6908c8ea150b(r12_1, rbx_2, arg3);
                }
                
                rbp |= rax_5;
                i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0300d8f33fee60f7(&var_140);
            } while i != 0;
        }
        else
        {
            rbp = 0;
            
            do
            {
                let r13_1: i64 = *i;
                let r15_1: u64 = i[1];
                std::fs::symlink_metadata::h9e12b59fb6df20f8(&var_e0, r13_1);
                let mut rax_1: i8;
                
                if var_e0 == 2
                {
                    var_168 = var_d8;
                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h333f14ee3ed91a78(
                        &var_168);
                    rax_1 = 0;
                }
                else if (var_a8 & 0xf000) != 0x4000
                {
                    rax_1 = uu_rm::remove_file::hfb41d07f759de271(r13_1, r15_1, rdx, rcx_1);
                }
                else
                {
                    rax_1 = uu_rm::handle_dir::h040a6908c8ea150b(r13_1, r15_1, arg3);
                }
                
                rbp |= rax_1;
                i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0300d8f33fee60f7(&var_140);
            } while i != 0;
        }
    }
    
    rbp &= 1;
    rbp
}
