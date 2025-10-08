
  fn uu_cat::write_to_end::hcdda846ae653fcc6(arg1: i64, arg2: u64, arg3: *mut i64) -> u64

{
    let rax: i64;
    let mut var_28: i64 = rax;
    *var_28[6] = 0xa;
    *var_28[7] = 0xd;
    let mut rax_1: i8;
    let mut rdx_1: u64;
    rax_1 = memchr::arch::generic::memchr::search_slice_with_raw::h8995b36c1f9a8d5d(arg1, arg2, 
        &*var_28[6], &*var_28[7]);
    
    if (rax_1 & 1) == 0
    {
        core::result::Result$LT$T$C$E$GT$::unwrap::h7628d8a11a4ef90d(_$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h4762d2070cade9bd(arg3, arg1, arg2));
        return arg2;
    }
    
    let mut rax_2: i64;
    let mut rdx_3: u64;
    rax_2 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hefdaf78919a7c5d0(0, rdx_1, arg1, arg2);
    core::result::Result$LT$T$C$E$GT$::unwrap::h7628d8a11a4ef90d(_$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h4762d2070cade9bd(arg3, rax_2, rdx_3));
    rdx_1
}
