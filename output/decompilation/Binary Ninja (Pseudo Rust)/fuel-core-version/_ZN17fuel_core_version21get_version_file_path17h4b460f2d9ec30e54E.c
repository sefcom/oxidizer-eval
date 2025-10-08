
  fn fuel_core_version::get_version_file_path::h4b460f2d9ec30e54(arg1: *mut i128, arg2: *mut c_void) -> u64

{
    let mut rax: i64;
    let mut rdx: i64;
    rax = _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h5e4fe01fcd78a6fd(arg2);
    let mut rax_1: *mut i8;
    let mut rdx_1: u64;
    rax_1 = std::path::Path::parent::hef287f60afa56900(rax, rdx);
    
    if rax_1 != 0
    {
        /* tailcall */
        return std::path::Path::join::hf843098c80a9b6f7(arg1, rax_1, rdx_1);
    }
    
    let result: u64 =
        eyre::error::_$LT$impl$u20$eyre..Report$GT$::from_display::hdf5e0fd059bff6e3();
    *arg1.byte_offset(8) = result;
    *arg1 = -0x8000000000000000;
    result
}
