
  void* just::recipe::Recipe::module_path::h2114682f44294136(void* arg1)

{
    char* rax;
    int64_t rdx;
    rax = just::recipe::Recipe::namepath::haa1c710e3a0b6f26(arg1);
    char rax_1;
    int64_t rdx_1;
    rax_1 = core::str::_$LT$impl$u20$str$GT$::rfind::h11352625ba47f292(rax, rdx);
    int64_t r15 = rdx_1;
    
    if (!(rax_1 & 1))
        r15 = 0;
    
    void* result = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(0, r15, rax, rdx);
    
    if (result)
        return result;
    
    core::str::slice_error_fail::h1a2885084e28d077(rax, rdx, 0, r15);
    /* no return */
}
