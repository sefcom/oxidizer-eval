
  fn zoxide::cmd::query::_$LT$impl$u20$zoxide..cmd..cmd..Query$GT$::query_list::h1793189bc91b0810(arg1: *mut c_void, arg2: *mut c_void) -> u64

{
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    let mut var_60: *mut i64 = &std::io::stdio::STDOUT::h411b213c5c9add46;
    let mut var_98: *mut i64 = std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_60);
    let rax_1: i64 = *arg1.byte_offset(0x18);
    let r15: i64 = *arg1.byte_offset(0x20);
    let r12: i64 = *arg1.byte_offset(0x28);
    let mut i: u64;
    let mut result: u64;
    let mut var_90: *mut i64;
    let mut var_80: i64;
    
    if (*arg1.byte_offset(0x4b) & 1) == 0
    {
        if -(rax_1) != -0x8000000000000000
        {
            loop
            {
                let rax_11: *mut c_void = zoxide::db::stream::Stream::next::hb1d09a39dbd63cec(arg2);
                
                if rax_11 == 0
                {
                    goto 'label_490261;
                }
                
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h070d08ab5346a901(*rax_11.byte_offset(8), *rax_11.byte_offset(0x10), r15, r12) == 0
                {
                    let var_70_4: *mut c_void = rax_11;
                    var_80 = 0;
                    let var_68_4: i32 = 0x20;
                    var_90 = &var_80;
                    let var_88_4: fn(arg1: *mut i8, arg2: *mut i64) -> i64 = _$LT$zoxide..db..dir..DirDisplay$u20$as$u20$core..fmt..Display$GT$::fmt::h4918ffab7531bc79;
                    var_60 = &data_534950;
                    let var_58_4: i64 = 2;
                    let var_40_4: i64 = 0;
                    let var_50_4: *mut *mut i64 = &var_90;
                    let var_48_4: i64 = 1;
                    i = _$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$u20$as$u20$zoxide..error..BrokenPipeHandler$GT$::pipe_exit::ha3034502edd4f0bb(std::io::Write::write_fmt::h90c817d01f5acb46(&var_98, &var_60), 
                        "stdoutcould not read selection f…", 6);
                    
                    if i != 0
                    {
                        break;
                    }
                }
            }
        }
        else
        {
            do
            {
                let rax_6: i64 = zoxide::db::stream::Stream::next::hb1d09a39dbd63cec(arg2);
                
                if rax_6 == 0
                {
                    goto 'label_490261;
                }
                
                let var_70_2: i64 = rax_6;
                var_80 = 0;
                let var_68_2: i32 = 0x20;
                var_90 = &var_80;
                let var_88_2: fn(arg1: *mut i8, arg2: *mut i64) -> i64 = _$LT$zoxide..db..dir..DirDisplay$u20$as$u20$core..fmt..Display$GT$::fmt::h4918ffab7531bc79;
                var_60 = &data_534950;
                let var_58_2: i64 = 2;
                let var_40_2: i64 = 0;
                let var_50_2: *mut *mut i64 = &var_90;
                let var_48_2: i64 = 1;
                i = _$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$u20$as$u20$zoxide..error..BrokenPipeHandler$GT$::pipe_exit::ha3034502edd4f0bb(std::io::Write::write_fmt::h90c817d01f5acb46(&var_98, &var_60), 
                    "stdoutcould not read selection f…", 6);
            } while i == 0;
        }
    }
    else
    {
        let rdx: i64;
        
        if -(rax_1) != -0x8000000000000000
        {
            loop
            {
                let rax_8: *mut c_void = zoxide::db::stream::Stream::next::hb1d09a39dbd63cec(arg2);
                
                if rax_8 == 0
                {
                    goto 'label_490261;
                }
                
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h070d08ab5346a901(*rax_8.byte_offset(8), *rax_8.byte_offset(0x10), r15, r12) == 0
                {
                    var_80 = 1;
                    let var_78_2: i64 = rdx;
                    let var_70_3: *mut c_void = rax_8;
                    let var_68_3: i32 = 0x20;
                    var_90 = &var_80;
                    let var_88_3: fn(arg1: *mut i8, arg2: *mut i64) -> i64 = _$LT$zoxide..db..dir..DirDisplay$u20$as$u20$core..fmt..Display$GT$::fmt::h4918ffab7531bc79;
                    var_60 = &data_534950;
                    let var_58_3: i64 = 2;
                    let var_40_3: i64 = 0;
                    let var_50_3: *mut *mut i64 = &var_90;
                    let var_48_3: i64 = 1;
                    i = _$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$u20$as$u20$zoxide..error..BrokenPipeHandler$GT$::pipe_exit::ha3034502edd4f0bb(std::io::Write::write_fmt::h90c817d01f5acb46(&var_98, &var_60), 
                        "stdoutcould not read selection f…", 6);
                    
                    if i != 0
                    {
                        break;
                    }
                }
            }
        }
        else
        {
            do
            {
                let rax_3: i64 = zoxide::db::stream::Stream::next::hb1d09a39dbd63cec(arg2);
                
                if rax_3 == 0
                {
                    'label_490261:
                    result = 0;
                    goto 'label_490267;
                }
                
                var_80 = 1;
                let var_78_1: i64 = rdx;
                let var_70_1: i64 = rax_3;
                let var_68_1: i32 = 0x20;
                var_90 = &var_80;
                let var_88_1: fn(arg1: *mut i8, arg2: *mut i64) -> i64 = _$LT$zoxide..db..dir..DirDisplay$u20$as$u20$core..fmt..Display$GT$::fmt::h4918ffab7531bc79;
                var_60 = &data_534950;
                let var_58_1: i64 = 2;
                let var_40_1: i64 = 0;
                let var_50_1: *mut *mut i64 = &var_90;
                let var_48_1: i64 = 1;
                i = _$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$u20$as$u20$zoxide..error..BrokenPipeHandler$GT$::pipe_exit::ha3034502edd4f0bb(std::io::Write::write_fmt::h90c817d01f5acb46(&var_98, &var_60), 
                    "stdoutcould not read selection f…", 6);
            } while i == 0;
        }
    }
    result = i;
    'label_490267:
    core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h5b7e4e16b06d2aa7(var_98);
    result
}
