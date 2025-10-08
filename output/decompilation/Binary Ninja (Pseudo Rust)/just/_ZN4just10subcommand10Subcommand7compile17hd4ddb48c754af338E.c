
  fn just::subcommand::Subcommand::compile::hd4ddb48c754af338(arg1: *mut i64, arg2: *mut c_void, arg3: *mut i64, arg4: i64, arg5: u64) -> i64

{
    let mut var_6f0: *mut c_void;
    just::compiler::Compiler::compile::h029c05ce59997e38(&var_6f0, arg3, arg4, arg5);
    let r12: *mut c_void = var_6f0;
    let mut var_6e8: i128;
    let mut var_768: i128 = var_6e8;
    let mut var_6d8: i128;
    let var_6c8: i128;
    let var_6b8: i128;
    let var_6a8: i128;
    let var_698: i128;
    let result: i64;
    
    if -(r12) == -0x8000000000000000
    {
        arg1[0xd] = result;
        *arg1.byte_offset(0x58) = var_698;
        *arg1.byte_offset(0x48) = var_6a8;
        let zmm0: i128 = var_768;
        *arg1.byte_offset(0x38) = var_6b8;
        *arg1.byte_offset(0x28) = var_6c8;
        *arg1.byte_offset(0x18) = var_6d8;
        *arg1.byte_offset(8) = zmm0;
        *arg1 = -0x8000000000000000;
        return result;
    }
    
    let mut var_680: ();
    let mut i_2: i64;
    memcpy(&i_2, &var_680, 0x2f0);
    let var_388_1: i128 = var_768;
    let var_378_1: i128 = var_6d8;
    let var_368_1: i128 = var_6c8;
    let var_358_1: i128 = var_6b8;
    let var_348_1: i128 = var_6a8;
    let var_338_1: i128 = var_698;
    let mut var_390: *mut c_void = r12;
    just::justfile::Justfile::check_unstable::he04de0852efda7ff(&var_6f0, &var_390, 
        *arg2.byte_offset(0x1a4));
    
    if var_6f0 != 0x38
    {
        arg1[0xd] = *var_698[8];
        *arg1.byte_offset(0x58) = var_6a8;
        *arg1.byte_offset(0x48) = var_6b8;
        let zmm0_2: i128 = var_6f0;
        *arg1.byte_offset(0x38) = var_6c8;
        *arg1.byte_offset(0x28) = var_6d8;
        *arg1.byte_offset(0x18) = var_6e8;
        *arg1.byte_offset(8) = zmm0_2;
        *arg1 = -0x8000000000000000;
        return core::ptr::drop_in_place$LT$just..compilation..Compilation$GT$::hcea2292c76e0cd86(
            &var_390);
    }
    
    if *arg2.byte_offset(0x1a7) != 0
    {
        let mut i_1: i64 = i_2;
        
        if i_1 != 0
        {
            let mut i: i64;
            
            do
            {
                just::color::Color::stderr::h04afff4548ac818e(&var_6f0, arg2.byte_offset(0x184));
                var_768 = result;
                *var_768[8] = &data_831110;
                let mut var_748: i128;
                var_748 = *var_6e8[8];
                let var_758_1: i128 = var_6f0;
                let mut var_700: *mut i128 = &var_768;
                let var_6f8_1: fn(arg1: *mut i64, arg2: i64) -> i64 = _$LT$just..color_display..Wrapper$u20$as$u20$core..fmt..Display$GT$::fmt::hc72f260d5107bced;
                var_6f0 = &data_82dbd8;
                var_6e8 = 2;
                *var_6d8[8] = 0;
                *var_6e8[8] = &var_700;
                var_6d8 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_6f0);
                i = i_1;
                i_1 -= 1;
            } while i != 1;
        }
    }
    
    memcpy(arg1, &var_390, 0x360)
}
