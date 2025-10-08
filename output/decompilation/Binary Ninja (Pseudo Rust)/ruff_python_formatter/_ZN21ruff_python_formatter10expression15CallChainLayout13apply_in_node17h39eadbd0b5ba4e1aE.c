
  fn ruff_python_formatter::expression::CallChainLayout::apply_in_node::h39eadbd0b5ba4e1a(arg1: i32, arg2: i64, arg3: i64, arg4: *mut c_void) -> u64

{
    let rax: i64;
    let var_28: i64 = rax;
    
    if arg1 == 0
    {
        let r15_1: i64 = *arg4.byte_offset(0x30);
        let mut rax_2: *mut c_void;
        rax_2 = r15_1(arg3);
        let rcx: u32 = *rax_2.byte_offset(0x20);
        
        if rcx == 3
        {
            'label_7102b5:
            let rax_3: *mut *mut i32 =
                _$LT$T$u20$as$u20$core..convert..Into$LT$U$GT$$GT$::into::ha4dd26e64d596d39();
            let r12: *mut c_void = *(*r15_1(arg3).byte_offset(0x10)).byte_offset(0x60);
            let rax_6: *mut i64 = r15_1(arg3);
            /* tailcall */
            return ruff_python_formatter::expression::CallChainLayout::from_expression::h8a81a54727e8f68f(0x10, rax_3, *r12.byte_offset(8), *r12.byte_offset(0x10), *rax_6, rax_6[1]);
        }
        
        arg1 = 2;
        
        if rcx == 2 && *rax_2.byte_offset(0x24) != 0
        {
            goto 'label_7102b5;
        }
    }
    
    arg1
}
