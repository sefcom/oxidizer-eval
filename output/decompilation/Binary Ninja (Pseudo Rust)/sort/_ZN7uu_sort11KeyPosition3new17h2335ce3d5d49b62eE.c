
  fn uu_sort::KeyPosition::new::h2335ce3d5d49b62e(arg1: *mut i64, arg2: i64, arg3: i64, arg4: i64, arg5: i32) -> u64

{
    let mut var_68: ();
    _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h77b0cfb9226a3587(&var_68, 
        0x2e, arg2, arg3);
    let mut var_78: i64 = 0;
    let var_70: i64 = arg3;
    let var_38: i16 = 1;
    let mut rax: *mut i8;
    let mut rdx_1: i64;
    rax = core::str::iter::SplitInternal$LT$P$GT$::next::h1ca17ad8b676764c(&var_78);
    let mut result: u64;
    let mut var_a8: i128;
    let result_1: u64;
    let mut zmm0_1: i128;
    
    if rax == 0
    {
        uu_sort::KeyPosition::new::_$u7b$$u7b$closure$u7d$$u7d$::h1dd1921a886552ee(&var_a8);
        zmm0_1 = var_a8;
        result = result_1;
        'label_520e57:
        *arg1.byte_offset(8) = zmm0_1;
        arg1[3] = result;
        *arg1 = 1;
    }
    else
    {
        let mut rax_1: *mut i8;
        let mut rdx_2: i64;
        rax_1 = core::str::iter::SplitInternal$LT$P$GT$::next::h1ca17ad8b676764c(&var_78);
        let mut var_90: i8;
        core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&var_90, rax, rdx_1);
        
        if var_90 != 0
        {
            let var_8f: i8;
            uu_sort::KeyPosition::new::_$u7b$$u7b$closure$u7d$$u7d$::h01ea5a1ee9d844f2(&var_a8, 
                rax, rdx_1, var_8f);
            result = result_1;
            zmm0_1 = var_a8;
            goto 'label_520e57;
        }
        
        let result_2: u64;
        
        if result_2 == 0
        {
            result =
                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h1d4334c76f34ab0e(
                &arg1[1], "field index can not be 0invalid …", 0x18);
            *arg1 = 1;
        }
        else
        {
            *var_a8[8] = arg4;
            var_a8 = -0x8000000000000000;
            core::option::Option$LT$T$GT$::map_or::h5a5be3661124d534(&var_90, rax_1, rdx_2, 
                &var_a8);
            let rcx_3: i64 = var_90;
            result = result_2;
            
            if rcx_3 != -0x8000000000000000
            {
                arg1[1] = rcx_3;
                arg1[2] = result;
                let var_80: i64;
                arg1[3] = var_80;
                *arg1 = 1;
            }
            else
            {
                arg1[1] = result_2;
                arg1[2] = result;
                result = arg5;
                arg1[3] = result;
                *arg1 = 0;
            }
        }
    }
    result
}
