
  fn uu_dd::flush_caches_full_length::h852ee23a16d52f1f(arg1: *mut i32, arg2: *mut i32) -> off64_t

{
    let r15: *mut c_void = *arg1.byte_offset(8);
    
    if *r15.byte_offset(0x45) == 0
    {
        goto 'label_4d7f39;
    }
    
    let mut rax_1: i64;
    let mut rdx_1: off64_t;
    rax_1 = uu_dd::Source::len::hc3b1b96fe0850bcf(arg1);
    
    if rax_1 != 0
    {
        return rdx_1;
    }
    
    arg1[1];
    uu_dd::Input::discard_cache::h2bede2b9be5bf459(*arg1);
    'label_4d7f39:
    
    if *r15.byte_offset(0x9c) != 0
    {
        let mut rax_2: i64;
        let mut rdx_3: off64_t;
        rax_2 = uu_dd::Dest::len::hc5f67b7ac477ff9e(arg2);
        
        if rax_2 != 0
        {
            return rdx_3;
        }
        
        uu_dd::Output::discard_cache::h9654de1740a6c207(arg2, 0, rdx_3);
    }
    
    0
}
