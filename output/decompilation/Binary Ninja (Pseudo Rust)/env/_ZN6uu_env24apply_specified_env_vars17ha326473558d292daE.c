
  fn uu_env::apply_specified_env_vars::ha326473558d292da(arg1: *mut c_void) -> *mut i64

{
    let rax: i64 = *arg1.byte_offset(0x38);
    let rcx: i64 = *arg1.byte_offset(0x40);
    let mut var_90: i64 = rax;
    let var_88: i64 = rcx * 0x30 + rax;
    let mut i: *mut i64;
    
    for i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5a91fe410bc96a89(&var_90); i != 0; i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5a91fe410bc96a89(&var_90)
    {
        if i[2] == 0
        {
            let mut rax_1: i64;
            let mut rdx_1: i64;
            rax_1 = uucore::util_name::h60d842bf27b05e82();
            let mut var_50: i64 = rax_1;
            let mut var_48_1: i64 = rdx_1;
            let mut var_a0: *mut i64 = &var_50;
            let var_98_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h402b3702303fb18e;
            let mut var_80: *mut c_void = &data_548c18;
            let var_78_1: i64 = 2;
            let var_60_1: i64 = 0;
            let var_70_1: *mut *mut i64 = &var_a0;
            let var_68_1: i64 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_80);
            let zmm0_1: i128 = *i.byte_offset(0x20);
            var_50 = 1;
            var_48_1 = zmm0_1;
            let var_38_1: i8 = 1;
            var_a0 = &var_50;
            let var_98_2: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            var_80 = &data_548c38;
            let var_78_2: i64 = 2;
            let var_60_2: i64 = 0;
            let var_70_2: *mut *mut i64 = &var_a0;
            let var_68_2: i64 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_80);
        }
        else
        {
            std::env::set_var::h6a4f0c86b7bc3f19(i, &i[3]);
        }
    }
    
    i
}
