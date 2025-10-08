
  void* uu_dd::progress::ProgUpdate::print_transfer_stats::h7b7c0ec0b63533bd(int64_t* arg1, int32_t arg2)

{
    void* result_1;
    void* result = result_1;
    result = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
    uint64_t rax;
    int64_t rdx_1;
    rax = uu_dd::progress::ProgUpdate::write_transfer_stats::h3ac3caa704374d4a(arg1, &result, arg2);
    core::result::Result$LT$T$C$E$GT$::unwrap::hccc281bd37fe7c9a(rax);
    return result;
}
