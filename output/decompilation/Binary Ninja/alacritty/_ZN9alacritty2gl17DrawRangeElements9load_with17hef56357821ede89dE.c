
  void (*)() __noreturn alacritty::gl::DrawRangeElements::load_with::hef56357821ede89d(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glDrawRangeElementsglDrawRangeEl…", 0x13, &data_c85dd0, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::DrawRangeElements::hd3429d483d39148c = result_1;
    data_ce5a20 = result;
    return result;
}
