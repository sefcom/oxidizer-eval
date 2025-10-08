
  uint64_t uu_install::set_ownership_and_permissions::h4b3ae3ef285be2d9(int64_t arg1, uint64_t arg2, void* arg3)

{
    if (*(arg3 + 0x48))
        *(arg3 + 0x4c);
    
    if (!uu_install::mode::chmod::hdfca6c9c8a923e56(arg1, arg2))
        return uu_install::chown_optional_user_group::h803ff07f1543e95d(arg1, arg2, arg3);
    
    void var_50;
    std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_50, arg1, arg2);
    int64_t var_58 = 3;
    return alloc::boxed::Box$LT$T$GT$::new::h1677fe46d8519fed(&var_58);
}
