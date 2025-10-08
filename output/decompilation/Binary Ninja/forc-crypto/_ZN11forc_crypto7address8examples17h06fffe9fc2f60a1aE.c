
  int64_t forc_crypto::address::examples::h06fffe9fc2f60a1a()

{
    void** const var_58 = &data_a2f248;
    int64_t var_50 = 1;
    void var_78;
    void* var_48 = &var_78;
    int128_t var_40 = {0};
    void var_70;
    core::option::Option$LT$T$GT$::map_or_else::h34f6eea6daa701c2(&var_70, 
        "    # Convert an address to anot…", 0x84, &var_58);
    void var_28;
    alloc::str::join_generic_copy::hb36460053a1e0f5c(&var_28, &var_70, 1);
    int64_t result;
    int64_t rdx;
    result = alloc::vec::Vec$LT$T$C$A$GT$::into_boxed_slice::hf05f49726fdee3c0(&var_28);
    core::ptr::drop_in_place$LT$forc_crypto..address..Args$GT$::hfcd41aab899c86aa(&var_70);
    return result;
}
