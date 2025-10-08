
  fn fd::filter::owner::OwnerFilter::from_string::h74e6c4148becee40(arg1: *mut u128, arg2: i64, arg3: i64) -> u64

{
    let mut var_c8: i64 = arg2;
    let var_c0: i64 = arg3;
    let mut var_80: ();
    _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h19abee4db16fb58d(&var_80, 
        0x3a, arg2, arg3);
    let mut var_90: i64 = 0;
    let var_88: i64 = arg3;
    let var_50: i16 = 1;
    let mut rax: *mut i8;
    let mut rdx_1: u64;
    rax = core::str::iter::SplitInternal$LT$P$GT$::next::h307f8fd0ed8413be(&var_90);
    let mut rax_1: *mut i8;
    let mut rdx_2: u64;
    rax_1 = core::str::iter::SplitInternal$LT$P$GT$::next::h307f8fd0ed8413be(&var_90);
    let mut rax_2: i64;
    let mut rdx_3: u64;
    rax_2 = core::str::iter::SplitInternal$LT$P$GT$::next::h307f8fd0ed8413be(&var_90);
    let mut result: u64;
    let mut var_f8: *mut *mut c_void;
    
    if rax_2 != 0
    {
        let mut var_b8: *mut i64 = &var_c8;
        let var_b0_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h8a73a34aafb6f20d;
        var_f8 = &data_802308;
        let var_f0: i64 = 2;
        let var_d8_1: i64 = 0;
        let var_e8_1: *mut *mut i64 = &var_b8;
        let var_e0_1: i64 = 1;
        let mut var_48: ();
        core::option::Option$LT$T$GT$::map_or_else::h1f7ab50fdd345844(&var_48, 0, rdx_3, &var_f8);
        result = anyhow::error::_$LT$impl$u20$anyhow..Error$GT$::msg::h06348eb8850c741d(&var_48);
        *arg1.byte_offset(8) = result;
        *arg1 = 3;
    }
    else
    {
        fd::filter::owner::Check$LT$T$GT$::parse::h6fb56b91fc350486(&var_f8, rax, rdx_1);
        
        if (var_f8 & 1) != 0
        {
            'label_5f4f8f:
            let result_1: u64;
            result = result_1;
            *arg1.byte_offset(8) = result;
            *arg1 = 3;
        }
        else
        {
            let zmm0_1: u128 = var_f8;
            result =
                fd::filter::owner::Check$LT$T$GT$::parse::hcc7d42e9676f47f4(&var_f8, rax_1, rdx_2);
            
            if var_f8 == 1
            {
                goto 'label_5f4f8f;
            }
            
            *arg1 = zmm0_1 | var_f8 << 0x40;
        }
    }
    result
}
