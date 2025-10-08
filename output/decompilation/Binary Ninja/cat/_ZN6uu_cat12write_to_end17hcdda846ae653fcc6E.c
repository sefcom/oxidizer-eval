
  uint64_t uu_cat::write_to_end::hcdda846ae653fcc6(int64_t arg1, uint64_t arg2, int64_t* arg3)

{
    int64_t rax;
    int64_t var_28 = rax;
    *var_28[6] = 0xa;
    *var_28[7] = 0xd;
    char rax_1;
    uint64_t rdx_1;
    rax_1 = memchr::arch::generic::memchr::search_slice_with_raw::h8995b36c1f9a8d5d(arg1, arg2, 
        &*var_28[6], &*var_28[7]);
    
    if (!(rax_1 & 1))
    {
        core::result::Result$LT$T$C$E$GT$::unwrap::h7628d8a11a4ef90d(_$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h4762d2070cade9bd(arg3, arg1, arg2));
        return arg2;
    }
    
    int64_t rax_2;
    uint64_t rdx_3;
    rax_2 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hefdaf78919a7c5d0(0, rdx_1, arg1, arg2);
    core::result::Result$LT$T$C$E$GT$::unwrap::h7628d8a11a4ef90d(_$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h4762d2070cade9bd(arg3, rax_2, rdx_3));
    return rdx_1;
}
