
  fn rg::flags::hiargs::HiArgs::searcher::h183c926e645b97ae(arg1: *mut i128, arg2: *mut c_void) -> *mut i128

{
    let mut rcx: i8 = 0xa;
    
    if (*arg2.byte_offset(0x387) & 1) != 0
    {
        rcx = 0;
    }
    
    let rax: i8 = *arg2.byte_offset(0x371);
    let mut var_58: i64 = 0;
    let mut s: i128;
    __builtin_memset(&s, 0, 0x18);
    let var_1e: i8 = 0;
    let var_1b: i8 = 0;
    let var_17: i8 = 1;
    let var_48: i128 = *arg2.byte_offset(0x20);
    let var_20: i8 = rax;
    let var_1f: i8 = rcx;
    let var_1c: i8 = *arg2.byte_offset(0x378);
    let var_1a: i8 = *arg2.byte_offset(0x37a);
    let var_18: i8 = *arg2.byte_offset(0x37d);
    let var_19: i8 = *arg2.byte_offset(0x37c);
    let var_16: i8 = *arg2.byte_offset(0x38d);
    let mut rax_6: i64;
    
    if *arg2.byte_offset(0x60) != 2
    {
        let mut rax_8: i64;
        let mut rdx_1: i64;
        rax_8 =
            rg::flags::lowargs::ContextModeLimited::get::h7014c861f00e9897(arg2.byte_offset(0x60));
        *s[8] = rax_8;
        s = rdx_1;
        rax_6 = *arg2.byte_offset(0x90);
        
        if rax_6 != 0
        {
            'label_6501d3:
            
            if rax_6 != 1
            {
                let var_17_1: i8 = 0;
            }
            else
            {
                let var_28_1: i64 = *arg2.byte_offset(0x98);
            }
        }
    }
    else
    {
        let var_1b_1: i8 = 1;
        rax_6 = *arg2.byte_offset(0x90);
        
        if rax_6 != 0
        {
            goto 'label_6501d3;
        }
    }
    grep_searcher::searcher::SearcherBuilder::build::h3a0046083d70284f(arg1, &var_58)
}
