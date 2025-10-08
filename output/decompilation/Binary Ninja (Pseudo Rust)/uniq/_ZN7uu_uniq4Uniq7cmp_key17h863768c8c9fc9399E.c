
  fn uu_uniq::Uniq::cmp_key::h863768c8c9fc9399(arg1: *mut i64, arg2: i64, arg3: u64, arg4: *mut i64) -> u64

{
    let mut var_48: i64;
    uu_uniq::Uniq::skip_fields::habc1c899824c43e1(&var_48, *arg1, arg1[1], arg2, arg3, arg1);
    let mut rcx_1: i64 = 0;
    
    if arg1[2] != 0
    {
        rcx_1 = arg1[3];
    }
    
    let var_38: i64;
    let mut r12_1: *mut c_void = var_38 - rcx_1;
    
    if var_38 < rcx_1
    {
        r12_1 = nullptr;
    }
    
    let mut r13: *mut i8 = 1;
    let var_40: *mut c_void;
    
    if var_38 > rcx_1
    {
        r13 = var_40.byte_offset(rcx_1);
    }
    
    let mut var_78: i32;
    let zmm0: [i32; 0x4] = core::str::converts::from_utf8::h8a6dc80f786921e0(&var_78, r13, r12_1);
    let mut rax: i32;
    
    if var_78 != 1
    {
        let var_70: *mut i8;
        let var_68: *mut c_void;
        let r13_2: *mut c_void = var_68.byte_offset(var_70);
        let rax_1: i64 = _$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::count::h41a8767c0185b7ec(var_70, r13_2, zmm0);
        let mut rdi_4: i64 = rax_1;
        
        if arg1[4] != 0
        {
            rdi_4 = arg1[5];
        }
        
        let rax_2: i64 = core::cmp::Ord::min::h32762a5a9ea48191(rdi_4, rax_1);
        let mut var_60: *mut i8 = var_70;
        
        if *arg1.byte_offset(0x34) == 0
        {
            rax = uu_uniq::Uniq::cmp_keys::_$u7b$$u7b$closure$u7d$$u7d$::hb84b773afb965e5b(arg4, 
                &var_60, &data_4f5738);
        }
        else
        {
            let var_68_1: i64 = rax_2;
            var_78 = var_60;
            let var_70_2: *mut c_void = r13_2;
            rax = uu_uniq::Uniq::cmp_keys::_$u7b$$u7b$closure$u7d$$u7d$::hb84b773afb965e5b(arg4, 
                &var_78, &data_4f5770);
        }
    }
    else
    {
        var_78 = r13;
        let var_70_1: *mut c_void = r12_1.byte_offset(r13);
        rax = uu_uniq::Uniq::cmp_keys::_$u7b$$u7b$closure$u7d$$u7d$::hb84b773afb965e5b(arg4, 
            &var_78, &data_4f57a8);
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hfd495873f16042da(var_48, var_40);
    rax
}
