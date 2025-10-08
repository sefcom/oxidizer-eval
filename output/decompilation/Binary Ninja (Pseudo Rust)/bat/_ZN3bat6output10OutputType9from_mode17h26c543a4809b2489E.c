
  fn bat::output::OutputType::from_mode::h26c543a4809b2489(arg1: *mut i8, arg2: i8, arg3: i8) -> *mut i8

{
    let mut var_90: i128;
    let mut var_80: i128;
    let mut var_70: i128;
    let mut rax_1: i8;
    let mut var_98: i8;
    let rcx: *mut i8;
    let r8: i64;
    
    if arg2 == 0
    {
        bat::output::OutputType::try_pager::h20ac4bd3b0754dfb(&var_98, 1, arg3, rcx, r8);
        rax_1 = var_98;
        
        if rax_1 == 0xd
        {
            'label_83cdc7:
            let var_60: i64;
            let var_11_1: i64 = var_60;
            var_98 = var_90;
            var_90 = var_80;
            var_80 = var_70;
            *var_70[8] = var_60;
            goto 'label_83ce7e;
        }
    }
    else
    {
        if arg2 != 1
        {
            bat::output::OutputType::stdout::h211ec86729b50ed6(&var_98);
            'label_83ce7e:
            *arg1.byte_offset(0x38) = *var_70[8];
            let zmm0_1: i128 = var_98;
            *arg1.byte_offset(0x28) = var_80;
            *arg1.byte_offset(0x18) = var_90;
            *arg1.byte_offset(8) = zmm0_1;
            *arg1 = 0xd;
            return arg1;
        }
        
        bat::output::OutputType::try_pager::h20ac4bd3b0754dfb(&var_98, 0, arg3, rcx, r8);
        rax_1 = var_98;
        
        if rax_1 == 0xd
        {
            goto 'label_83cdc7;
        }
    }
    let var_58: i128;
    *arg1.byte_offset(0x40) = var_58;
    *arg1.byte_offset(0x30) = var_70;
    *arg1.byte_offset(0x21) = var_80;
    *arg1.byte_offset(0x11) = var_90;
    let var_97: i128;
    *arg1.byte_offset(1) = var_97;
    *arg1 = rax_1;
    arg1
}
