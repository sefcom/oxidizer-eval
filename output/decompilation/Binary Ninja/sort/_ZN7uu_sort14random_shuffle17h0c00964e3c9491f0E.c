
  uint64_t uu_sort::random_shuffle::h0c00964e3c9491f0(int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5)

{
    int64_t var_38 = -0x340d631b7bdddcdb;
    _$LT$fnv..FnvHasher$u20$as$u20$core..hash..Hasher$GT$::write::h1f40931822b5a752(&var_38, arg1, 
        arg2);
    char var_3a = 0xff;
    _$LT$fnv..FnvHasher$u20$as$u20$core..hash..Hasher$GT$::write::h1f40931822b5a752(&var_38, 
        &var_3a, 1);
    core::hash::impls::_$LT$impl$u20$core..hash..Hash$u20$for$u20$$RF$T$GT$::hash::h8c5e13fb85b9f364(arg5, &var_38);
    int64_t rbp = var_38;
    var_38 = -0x340d631b7bdddcdb;
    _$LT$fnv..FnvHasher$u20$as$u20$core..hash..Hasher$GT$::write::h1f40931822b5a752(&var_38, arg3, 
        arg4);
    char var_39 = 0xff;
    _$LT$fnv..FnvHasher$u20$as$u20$core..hash..Hasher$GT$::write::h1f40931822b5a752(&var_38, 
        &var_39, 1);
    core::hash::impls::_$LT$impl$u20$core..hash..Hash$u20$for$u20$$RF$T$GT$::hash::h8c5e13fb85b9f364(arg5, &var_38);
    int64_t temp0 = var_38;
    int32_t rcx;
    rcx = rbp != temp0;
    
    if (rbp >= temp0)
        return rcx;
    
    return 0xff;
}
