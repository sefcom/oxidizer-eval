
  int64_t* uu_stat::Stater::default_format::h2dd040e5543d36f9(int64_t* arg1, int32_t arg2, char arg3, char arg4)

{
    if (arg2)
    {
        if (!arg3)
            /* tailcall */
            return _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1259f2eee6e0998a(arg1, "  File: "%n"\n    ID: %-8i Namel…", 0xab);
        
        /* tailcall */
        return _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1259f2eee6e0998a(arg1, "%n %i %l %t %s %S %b %f %a %c %d…", 0x21);
    }
    
    if (arg3)
        /* tailcall */
        return _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1259f2eee6e0998a(arg1, "%n %s %b %f %u %g %D %i %h %t %T…", 0x30);
    
    int64_t rcx_3 = 0x28;
    
    if (arg4)
        rcx_3 = 0x3d;
    
    void* const rdx_3 = "Device: %Dh/%dd\tInode: %-10i  L…";
    
    if (arg4)
        rdx_3 = "Device: %Dh/%dd\tInode: %-10i  L…";
    
    void* var_40 = "  File: %N\n  Size: %-10s\tBlock…";
    int64_t var_38 = 0x39;
    void* const var_30 = rdx_3;
    int64_t var_28 = rcx_3;
    char const* const var_20 = "Access: (%04a/%10.10A)  Uid: (%5…";
    int64_t var_18 = 0x38;
    char const* const var_10 = "Access: %x\nModify: %y\nChange: …";
    int64_t var_8 = 0x2c;
    return alloc::str::join_generic_copy::h5d56894876c21cae(arg1, &var_40);
}
