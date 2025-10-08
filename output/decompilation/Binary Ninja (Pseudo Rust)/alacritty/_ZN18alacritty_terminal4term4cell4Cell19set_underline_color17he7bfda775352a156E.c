
  fn alacritty_terminal::term::cell::Cell::set_underline_color::he7bfda775352a156(arg1: *mut i64, arg2: i32) -> *mut c_void

{
    if arg2 == 3
    {
        let rax_1: *mut c_void = *arg1;
        
        if rax_1 == 0
        {
            'label_9bdc0e:
            let rax_4: i64 = core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..sync..Arc$LT$alacritty_terminal..term..cell..CellExtra$GT$$GT$$GT$::hf413cccff2c262a4(arg1);
            *arg1 = 0;
            return rax_4;
        }
        
        if *rax_1.byte_offset(0x20) == 0 && *rax_1.byte_offset(0x28) == 0
        {
            goto 'label_9bdc0e;
        }
    }
    
    let r14_1: u32 = arg2 >> 8;
    core::option::Option$LT$T$GT$::get_or_insert_with::h59e35f958d1e08ef(arg1, 
        _$LT$alloc..sync..Arc$LT$T$GT$$u20$as$u20$core..default..Default$GT$::default::h2e8909fcdb9d2bb7());
    let rax_3: *mut c_void = alloc::sync::Arc$LT$T$C$A$GT$::make_mut::hd1b9ba4e0192b0c5(arg1);
    *rax_3.byte_offset(0x20) = arg2;
    *rax_3.byte_offset(0x23) = r14_1 >> 0x10;
    *rax_3.byte_offset(0x21) = r14_1;
    rax_3
}
