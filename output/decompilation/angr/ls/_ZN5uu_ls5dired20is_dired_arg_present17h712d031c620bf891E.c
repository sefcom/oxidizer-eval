long long uu_ls::dired::is_dired_arg_present()
{
    char v0;  // [bp-0x28]
    unsigned int v2;  // eax

    std::env::args_os(&v0);
    v2 = v0.try_fold().eq();
    ::0x559250::core::ptr::drop_in_place<std::env::ArgsOs>(&v0);
    return v2;
}
