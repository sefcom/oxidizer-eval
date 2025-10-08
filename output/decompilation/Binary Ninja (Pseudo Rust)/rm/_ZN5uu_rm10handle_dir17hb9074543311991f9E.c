
  fn uu_rm::handle_dir::hb9074543311991f9(arg1: i64, arg2: i64, arg3: *mut c_void) -> *mut c_void

{
    let mut rax: *mut i8;
    let mut rdx: u64;
    rax = uu_rm::clean_trailing_slashes::hf055f5506fb084d9(arg1, arg2);
    let mut var_a0: *mut i64;
    let mut var_90: *mut c_void;
    let mut var_50: *mut i8;
    let mut rax_3: *mut *mut c_void;
    
    if uu_rm::path_is_current_or_parent_directory::h8073b220e3800501(rax, rdx) == 0
    {
        std::path::Path::components::hd0346d362206f2e9(&var_90, rax, rdx);
        let var_80: i8;
        let var_56: i8;
        let mut rcx_1: i8;
        
        if var_56 != 0 || var_80 - 5 >= 2
        {
            let rax_5: *mut i8 = std::path::Path::parent::hef287f60afa56900(rax, rdx);
            rcx_1 = *arg3.byte_offset(3);
            
            if rcx_1 != 0
            {
                if rax_5 != 0 || *arg3.byte_offset(2) == 0
                {
                    /* tailcall */
                    return uu_rm::remove_dir_recursive::h796f941ab304c174(rax, rdx, arg3);
                }
                
                if *arg3.byte_offset(4) != 0 && *arg3.byte_offset(2) == 0
                {
                    /* tailcall */
                    return uu_rm::remove_dir::h55820dedda8befb2(rax, rdx, arg3);
                }
            }
            else if *arg3.byte_offset(4) != 0 && (rax_5 != 0 || *arg3.byte_offset(2) == 0)
            {
                /* tailcall */
                return uu_rm::remove_dir::h55820dedda8befb2(rax, rdx, arg3);
            }
        }
        else
        {
            rcx_1 = *arg3.byte_offset(3);
            
            if rcx_1 != 0
            {
                /* tailcall */
                return uu_rm::remove_dir_recursive::h796f941ab304c174(rax, rdx, arg3);
            }
            
            if *arg3.byte_offset(4) != 0
            {
                /* tailcall */
                return uu_rm::remove_dir::h55820dedda8befb2(rax, rdx, arg3);
            }
        }
        
        if rcx_1 == 0
        {
            let mut rax_10: *mut i8;
            let mut rdx_9: i64;
            rax_10 = uucore::util_name::h074417a1e6395129();
            var_50 = rax_10;
            let var_48_5: i64 = rdx_9;
            var_a0 = &var_50;
            let var_98_4: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5f6f103f460297c8;
            var_90 = &data_4ea4a0;
            let var_88_6: i64 = 2;
            let var_70_5: i64 = 0;
            let var_80_7: *mut *mut i64 = &var_a0;
            let var_78_5: i64 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_90);
            var_50 = 1;
            let var_48_6: *mut i8 = rax;
            let var_40_1: u64 = rdx;
            let var_38_1: i8 = 1;
            var_a0 = &var_50;
            let var_98_5: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            rax_3 = &data_4ea5a0;
            goto 'label_45d047;
        }
        
        let mut rax_7: *mut i8;
        let mut rdx_5: i64;
        rax_7 = uucore::util_name::h074417a1e6395129();
        var_50 = rax_7;
        let var_48_2: i64 = rdx_5;
        var_a0 = &var_50;
        let var_98_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5f6f103f460297c8;
        var_90 = &data_4ea4a0;
        let var_88_2: i64 = 2;
        let var_70_2: i64 = 0;
        let var_80_3: *mut *mut i64 = &var_a0;
        let var_78_2: i64 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_90);
        var_50 = "/";
        let var_48_3: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
            _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h0215b7857ad55b0c;
        var_90 = &data_4ea570;
        let var_88_3: i64 = 2;
        let var_70_3: i64 = 0;
        let var_80_4: *mut *mut i8 = &var_50;
        let var_78_3: i64 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_90);
        let mut rax_8: *mut i8;
        let mut rdx_6: i64;
        rax_8 = uucore::util_name::h074417a1e6395129();
        var_50 = rax_8;
        let var_48_4: i64 = rdx_6;
        var_a0 = &var_50;
        let var_98_3: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5f6f103f460297c8;
        var_90 = &data_4ea4a0;
        let var_88_4: i64 = 2;
        let var_70_4: i64 = 0;
        let var_80_5: *mut *mut i64 = &var_a0;
        let mut var_78_4: i64 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_90);
        var_90 = &data_4ea590;
        let var_88_5: i64 = 1;
        let var_80_6: i64 = 8;
        var_78_4 = {0};
        std::io::stdio::_eprint::h57899770eacec2ad(&var_90);
    }
    else
    {
        let mut rax_2: *mut i8;
        let mut rdx_1: i64;
        rax_2 = uucore::util_name::h074417a1e6395129();
        var_50 = rax_2;
        let var_48: i64 = rdx_1;
        var_a0 = &var_50;
        let var_98: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5f6f103f460297c8;
        var_90 = &data_4ea4a0;
        let var_88: i64 = 2;
        let var_70: i64 = 0;
        let var_80_1: *mut *mut i64 = &var_a0;
        let var_78: i64 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_90);
        var_50 = rax;
        let var_48_1: u64 = rdx;
        var_a0 = &var_50;
        let var_98_1: fn(arg1: *mut i64, arg2: i64) -> u64 =
            _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
        rax_3 = &data_4ea550;
        'label_45d047:
        var_90 = rax_3;
        let var_88_1: i64 = 2;
        let var_70_1: i64 = 0;
        let var_80_2: *mut *mut i64 = &var_a0;
        let var_78_1: i64 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_90);
    }
    let mut result: *mut c_void;
    result = 1;
    result
}
