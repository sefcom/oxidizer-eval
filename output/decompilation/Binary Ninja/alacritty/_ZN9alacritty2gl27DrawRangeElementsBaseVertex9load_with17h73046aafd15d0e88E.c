
  void (*)() __noreturn alacritty::gl::DrawRangeElementsBaseVertex::load_with::h73046aafd15d0e88(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glDrawRangeElementsBaseVertexglE…", 0x1d, &data_c85de0, 2);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::DrawRangeElementsBaseVertex::he722275c120c2945 = result_1;
    data_ce5a30 = result;
    return result;
}
