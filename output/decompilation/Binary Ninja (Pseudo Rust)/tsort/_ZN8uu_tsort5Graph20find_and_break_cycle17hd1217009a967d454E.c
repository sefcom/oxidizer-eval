
  fn uu_tsort::Graph::find_and_break_cycle::hd1217009a967d454(arg1: *mut c_void, arg2: *mut i64) -> i64

{
    let mut var_48: i64;
    uu_tsort::Graph::detect_cycle::he977b3591bc78cb9(&var_48, arg1);
    let mut var_d0: i128;
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_d0, 
        arg1);
    let var_c0: i64;
    let var_68: i64 = var_c0;
    let var_78: i128 = var_d0;
    let mut var_80: i64 = 2;
    uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
    let mut rax_1: i64;
    let mut rdx: i64;
    rax_1 = uucore::util_name::h074417a1e6395129();
    let mut var_e0: i64 = rax_1;
    let var_d8: i64 = rdx;
    let mut var_a0: *mut i64 = &var_e0;
    let var_98: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hdba2249fdd736854;
    let var_90: *mut i64 = &var_80;
    let var_88: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
        _$LT$uu_tsort..TsortError$u20$as$u20$core..fmt..Display$GT$::fmt::h3b33dc5b43b5f539;
    var_d0 = &data_4eb378;
    *var_d0[8] = 3;
    let var_b0: i64 = 0;
    let mut var_c0_1: *mut *mut i64 = &var_a0;
    let var_b8: i64 = 2;
    std::io::stdio::_eprint::h57899770eacec2ad(&var_d0);
    core::ptr::drop_in_place$LT$uu_tsort..TsortError$GT$::h9d156dfc799f2429(&var_80);
    let mut var_e8: *mut *mut [i8; 0x95] = &data_4eb3a8;
    let mut var_f0: i64;
    let var_38: i64;
    
    if var_38 == 0
    {
        var_f0 = 0;
    }
    else
    {
        let i_2: *mut i64;
        let mut i: *mut i64 = i_2;
        var_f0 = var_38;
        let i_1: *mut i64 = i;
        
        do
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1c391e09306501bd(&var_d0, *i, i[1]);
            let var_68_1: *mut *mut i64 = var_c0_1;
            let var_78_1: i128 = var_d0;
            var_80 = 3;
            uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
            let mut rax_3: i64;
            let mut rdx_2: i64;
            rax_3 = uucore::util_name::h074417a1e6395129();
            var_e0 = rax_3;
            let var_d8_1: i64 = rdx_2;
            var_a0 = &var_e0;
            let var_98_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hdba2249fdd736854;
            let var_90_1: *mut i64 = &var_80;
            let var_88_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
                _$LT$uu_tsort..TsortError$u20$as$u20$core..fmt..Display$GT$::fmt::h3b33dc5b43b5f539;
            var_d0 = &data_4eb378;
            *var_d0[8] = 3;
            let var_b0_1: i64 = 0;
            var_c0_1 = &var_a0;
            let var_b8_1: i64 = 2;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_d0);
            core::ptr::drop_in_place$LT$uu_tsort..TsortError$GT$::h9d156dfc799f2429(&var_80);
            i = &i[2];
        } while i != &i[var_38 * 2];
        
        if var_f0 != 0
        {
            let i_3: *mut *mut i64 = i_1;
            
            if var_f0 != 1
            {
                let rbx_1: *mut i64 = i_3[2];
                let r12: i64 = i_3[3];
                uu_tsort::Graph::remove_edge::ha9a469af9283dfcd(arg1, *i_3, i_3[1], rbx_1, r12);
                let mut rax_5: i8;
                let mut rdx_5: i64;
                rax_5 = uu_tsort::Graph::indegree::h78335c1a80f6dbc5(arg1, rbx_1, r12);
                
                if (rax_5 & 1) == 0
                {
                    core::option::unwrap_failed::h893f57cb7db71cb7();
                    /* no return */
                }
                
                if rdx_5 == 0
                {
                    alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_back::hbf92dcd24a88f4eb(arg2, rbx_1, r12);
                }
                
                return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::hff7f0467ec13c3eb(var_48, i_3);
            }
            
            var_e8 = &data_4eb3c0;
        }
    }
    
    core::panicking::panic_bounds_check::h025cadc56a971af7(var_f0, var_f0);
    /* no return */
}
