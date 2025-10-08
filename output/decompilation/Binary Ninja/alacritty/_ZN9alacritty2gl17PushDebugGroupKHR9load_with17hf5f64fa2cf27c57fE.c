
  void (*)() __noreturn alacritty::gl::PushDebugGroupKHR::load_with::hf5f64fa2cf27c57f(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glPushDebugGroupKHRglQueryCounte…", 0x13, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::PushDebugGroupKHR::h45649799bac01e73 = result_1;
    data_ce6350 = result;
    return result;
}
