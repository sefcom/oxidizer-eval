
  fn uu_stat::process_token_filesystem::h67597bda6d6ea400(arg1: *mut i64, arg2: *mut i64, arg3: i64, arg4: u64) -> *mut c_void

{
    let mut rcx: i64 = *arg1;
    let mut r8: i64 = 2;
    
    if rcx - 3 < 2
    {
        r8 = rcx - 3;
    }
    
    let mut var_78: *mut i32;
    let mut var_58: *mut c_void;
    
    if r8 == 0
    {
        let mut var_5c: i32 = arg1[1];
        var_78 = &var_5c;
        let var_70_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
            _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h0215b7857ad55b0c;
        var_58 = &data_41ab40;
        let var_50_1: i64 = 1;
        let var_38_1: i64 = 0;
        let var_48_1: *mut *mut i32 = &var_78;
        let var_40_1: i64 = 1;
        return std::io::stdio::_print::h5e446ff973c02de6(&var_58);
    }
    
    if r8 == 1
    {
        /* tailcall */
        return uu_stat::write_raw_byte::hbbf81da3232f2130(arg1[1]);
    }
    
    let rsi_3: u64 = arg1[4] << 0x20 | *arg1.byte_offset(0x1c);
    let r8_2: u64 = arg1[1];
    let rdx_2: i64 = arg1[2];
    let rdi_4: u64 = arg1[3] - 0x53;
    let mut rax_6: i64;
    
    if rdi_4 > 0x21
    {
        var_78 = -0x8000000000000005;
    }
    else
    {
        match rdi_4
        {
            0 =>
            {
                let var_70_2: i64 = arg2[1];
                var_78 = -0x8000000000000000;
            }
            1 =>
            {
                uucore::features::fsext::pretty_fstype::h1889f022e4b32583(&var_58, *arg2);
                _$LT$alloc..string..String$u20$as$u20$core..convert..From$LT$alloc..borrow..Cow$LT$str$GT$$GT$$GT$::from::hf538378189c0d550(&var_78, &var_58);
                rcx = rcx;
            }
            2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0xa | 0xb | 0xc | 0xd | 0x12 | 0x14 | 0x15 | 0x17 | 0x18
                | 0x1a | 0x1c | 0x1d | 0x1e | 0x1f =>
            {
                var_78 = -0x8000000000000005;
            }
            0xe =>
            {
                rax_6 = arg2[4];
                goto 'label_474322;
            }
            0xf =>
            {
                rax_6 = arg2[2];
                goto 'label_474322;
            }
            0x10 =>
            {
                rax_6 = arg2[5];
                goto 'label_474322;
            }
            0x11 =>
            {
                rax_6 = arg2[6];
                goto 'label_474322;
            }
            0x13 =>
            {
                rax_6 = arg2[3];
                goto 'label_474322;
            }
            0x16 =>
            {
                let var_70_4: u64 = *arg2.byte_offset(0x3c) | arg2[7] << 0x20;
                var_78 = -0x8000000000000002;
            }
            0x19 =>
            {
                rax_6 = arg2[8];
                goto 'label_474322;
            }
            0x1b =>
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1259f2eee6e0998a(&var_78, arg3, arg4);
                rcx = rcx;
            }
            0x20 =>
            {
                rax_6 = arg2[9];
                'label_474322:
                let var_70_5: i64 = rax_6;
                var_78 = -0x8000000000000001;
            }
            0x21 =>
            {
                let var_70_3: i64 = *arg2;
                var_78 = -0x8000000000000002;
            }
        }
    }
    uu_stat::print_it::hbae1e67489e4141f(&var_78, rsi_3, rdx_2, rcx, r8_2);
    core::ptr::drop_in_place$LT$uu_stat..OutputType$GT$::h618762e13dd348ef(&var_78)
}
