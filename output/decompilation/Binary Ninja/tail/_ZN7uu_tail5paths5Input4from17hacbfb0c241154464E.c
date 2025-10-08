
  uint64_t uu_tail::paths::Input::from::hacbfb0c241154464(int128_t* arg1, void* arg2)

{
    int64_t rax;
    uint64_t rdx;
    rax = _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h2e9e2a0144479a37(arg2);
    int64_t var_38;
    _$LT$uu_tail..paths..InputKind$u20$as$u20$core..convert..From$LT$$RF$std..ffi..os_str..OsStr$GT$$GT$::from::h425c1323af6ac6c8(&var_38, rax, rdx);
    int128_t var_58;
    uint64_t result;
    int128_t var_70;
    uint64_t result_1;
    
    if (-(var_38) != -0x8000000000000000)
    {
        alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_70, rax, rdx);
        int64_t var_68;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hf90a2ac3df31af12(&var_58, var_68, result_1);
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::ha58dd5728a52fcee(&var_70);
    }
    else
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::ha6b2ce04d4e70875(&var_70, "standard input/dev/fd/0 <==\n", 0xe);
        result = result_1;
        var_58 = var_70;
    }
    int64_t var_28;
    *(arg1 + 0x28) = var_28;
    *(arg1 + 0x18) = var_38;
    *arg1 = var_58;
    arg1[1] = result;
    return result;
}
