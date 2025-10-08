
  fn uu_sum::bsd_sum::had74e08c6a1e4c0d(arg1: *mut i64, arg2: i64, arg3: *mut i64) -> i64

{
    let mut var_1030: i64 = 0;
    let mut var_1040: i32 = 0;
    memset(&var_1030, 0, 0x1000);
    let mut r12: i64 = 0;
    let mut rax_5: i64;
    let mut rcx: *mut i64;
    
    loop
    {
        let mut rax_1: i8;
        let mut rdx_1: i64;
        rax_1 = std::io::impls::_$LT$impl$u20$std..io..Read$u20$for$u20$alloc..boxed..Box$LT$R$GT$$GT$::read::h791f7fb0e274ba22(arg2, arg3, &var_1030);
        
        if (rax_1 & 1) == 0
        {
            if rdx_1 == 0
            {
                rcx = arg1;
                rcx[1] = (r12 >> 0xa) + 1;
                rcx[2] = var_1040;
                rax_5 = 0;
                break;
            }
            
            let mut rax_3: *mut i8;
            let mut rdx_3: *mut c_void;
            rax_3 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h7c38171c70972876(rdx_1, &var_1030);
            r12 += rdx_1;
            var_1040 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::hd7512954fe2c6365(rax_3, rdx_3.byte_offset(rax_3), var_1040);
        }
        else
        {
            if std::io::error::Error::kind::h135fe00c4e7365f3(rdx_1) != 0x23
            {
                rcx = arg1;
                rcx[1] = rdx_1;
                rax_5 = 1;
                break;
            }
            
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h5d0502746400dd7d(rdx_1);
        }
    }
    
    *rcx = rax_5;
    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::h5ecc831ddc7a04ed(arg2, arg3)
}
