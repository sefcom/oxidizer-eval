
  fn uu_cat::write_tab_to_end::h19b37e049af5d87c(arg1: *mut c_void, arg2: u64, arg3: *mut i64) -> *mut c_void

{
    let mut rbx: u64 = arg2;
    let mut r13: *mut c_void = arg1;
    let mut var_40: *mut c_void = arg1;
    let var_38: *mut c_void = arg1.byte_offset(arg2);
    let mut rax_1: i8;
    let mut rdx: *mut c_void;
    rax_1 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::position::h8cb300f68696631d(&var_40);
    let mut r14: *mut c_void;
    
    if (rax_1 & 1) == 0
    {
        r14 = nullptr;
    }
    else
    {
        let mut r12_1: *mut c_void = rdx;
        r14 = nullptr;
        let mut rbp_1: *mut i8 = r13;
        let mut rax_6: i8;
        
        do
        {
            let mut rax_2: i64;
            let mut rdx_2: u64;
            rax_2 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hefdaf78919a7c5d0(0, r12_1, rbp_1, rbx);
            core::result::Result$LT$T$C$E$GT$::unwrap::h7628d8a11a4ef90d(_$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h4762d2070cade9bd(arg3, rax_2, rdx_2));
            
            if r12_1 >= rbx
            {
                core::panicking::panic_bounds_check::h025cadc56a971af7(r12_1, rbx);
                /* no return */
            }
            
            if *rbp_1.byte_offset(r12_1) != 9
            {
                return r14.byte_offset(r12_1);
            }
            
            core::result::Result$LT$T$C$E$GT$::unwrap::h7628d8a11a4ef90d(_$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h4762d2070cade9bd(arg3, 
                "^I^?unknown filetype: Is a direc…", 2));
            r13 = r12_1.byte_offset(rbp_1).byte_offset(1);
            r14 = r14.byte_offset(r12_1).byte_offset(1);
            let rbp_2: *mut c_void = &rbp_1[rbx];
            rbx -= r12_1.byte_offset(1);
            var_40 = r13;
            let var_38_1: *mut c_void = rbp_2;
            let mut rdx_3: *mut c_void;
            rax_6 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::position::h8cb300f68696631d(&var_40);
            r12_1 = rdx_3;
            rbp_1 = r13;
        } while (rax_6 & 1) != 0;
    }
    
    core::result::Result$LT$T$C$E$GT$::unwrap::h7628d8a11a4ef90d(_$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h4762d2070cade9bd(arg3, r13, rbx));
    r14.byte_offset(rbx)
}
