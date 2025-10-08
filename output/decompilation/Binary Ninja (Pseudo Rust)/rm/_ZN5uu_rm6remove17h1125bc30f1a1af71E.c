
  fn uu_rm::remove::h1125bc30f1a1af71(arg1: *mut i64, arg2: i64, arg3: *mut i8) -> u64

{
    let mut rbp: i32;
    
    if arg2 == 0
    {
        rbp = 0;
    }
    else
    {
        let mut r15_1: *mut i64 = arg1;
        let r14_3: *mut c_void = &arg1[arg2 * 2];
        let rax_1: i8 = *arg3;
        let rcx_1: i8 = rax_1 ^ 1;
        rbp = 0;
        let mut var_e0: i32;
        let var_d8: i64;
        let var_a8: i32;
        
        if (rax_1 & 1) == 0
        {
            do
            {
                let rbx_2: i64 = *r15_1;
                let r12_1: i64 = r15_1[1];
                std::fs::symlink_metadata::h2654b7702b6620cd(&var_e0, rbx_2);
                let mut rax_6: i8;
                
                if var_e0 == 2
                {
                    let mut rax_8: i64;
                    let mut rdx_5: i64;
                    rax_8 = uucore::util_name::h074417a1e6395129();
                    let mut var_100: i64 = rax_8;
                    let var_f8_1: i64 = rdx_5;
                    let mut var_140: *mut i64 = &var_100;
                    let var_138_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5f6f103f460297c8;
                    let mut var_130: *mut c_void = &data_4ea4a0;
                    let var_128_1: i64 = 2;
                    let var_110_1: i64 = 0;
                    let var_120_1: *mut *mut i64 = &var_140;
                    let var_118_1: i64 = 1;
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_130);
                    var_100 = 1;
                    let var_f8_2: i64 = rbx_2;
                    let var_f0_1: i64 = r12_1;
                    let var_e8_1: i8 = 1;
                    var_140 = &var_100;
                    let var_138_2: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                    var_130 = &data_4ea4c0;
                    let var_128_2: i64 = 2;
                    let var_110_2: i64 = 0;
                    let var_120_2: *mut *mut i64 = &var_140;
                    let var_118_2: i64 = 1;
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_130);
                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::haf081cf9ad72b71d(
                        var_d8);
                    rax_6 = rcx_1;
                }
                else if (var_a8 & 0xf000) != 0x4000
                {
                    rax_6 = uu_rm::remove_file::h42f0a78696bb1093(rbx_2, r12_1, arg3);
                }
                else
                {
                    rax_6 = uu_rm::handle_dir::hb9074543311991f9(rbx_2, r12_1, arg3);
                }
                
                rbp |= rax_6;
                r15_1 = &r15_1[2];
            } while r15_1 != r14_3;
        }
        else
        {
            do
            {
                let r13_1: i64 = *r15_1;
                let rbx_1: i64 = r15_1[1];
                std::fs::symlink_metadata::h2654b7702b6620cd(&var_e0, r13_1);
                let mut rax_2: i8;
                
                if var_e0 == 2
                {
                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::haf081cf9ad72b71d(
                        var_d8);
                    rax_2 = rcx_1;
                }
                else if (var_a8 & 0xf000) != 0x4000
                {
                    rax_2 = uu_rm::remove_file::h42f0a78696bb1093(r13_1, rbx_1, arg3);
                }
                else
                {
                    rax_2 = uu_rm::handle_dir::hb9074543311991f9(r13_1, rbx_1, arg3);
                }
                
                rbp |= rax_2;
                r15_1 = &r15_1[2];
            } while r15_1 != r14_3;
        }
    }
    
    rbp &= 1;
    rbp
}
