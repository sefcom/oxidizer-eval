
  uint64_t fuel_core_version::get_version_file_path::h4b460f2d9ec30e54(int128_t* arg1, void* arg2)

{
    int64_t rax;
    int64_t rdx;
    rax = _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h5e4fe01fcd78a6fd(arg2);
    char* rax_1;
    uint64_t rdx_1;
    rax_1 = std::path::Path::parent::hef287f60afa56900(rax, rdx);
    
    if (rax_1)
        /* tailcall */
        return std::path::Path::join::hf843098c80a9b6f7(arg1, rax_1, rdx_1);
    
    uint64_t result =
        eyre::error::_$LT$impl$u20$eyre..Report$GT$::from_display::hdf5e0fd059bff6e3();
    *(arg1 + 8) = result;
    *arg1 = -0x8000000000000000;
    return result;
}
