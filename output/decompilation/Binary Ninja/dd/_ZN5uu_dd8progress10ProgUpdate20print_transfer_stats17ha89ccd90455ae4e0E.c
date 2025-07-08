
  void* uu_dd::progress::ProgUpdate::print_transfer_stats::ha89ccd90455ae4e0(int64_t* arg1, int32_t arg2)

{
    void* result_1;
    void* result = result_1;
    result = &std::io::stdio::stderr::INSTANCE::ha28648ccba9ff424;
    int128_t* rax;
    int64_t rdx_1;
    rax = uu_dd::progress::ProgUpdate::write_transfer_stats::h72fbc0aa2e615bbe(arg1, &result, arg2);
    core::result::Result$LT$T$C$E$GT$::unwrap::hfd1ba91060291f04(rax);
    return result;
}
