
  fn uu_sort::random_shuffle::h0c00964e3c9491f0(arg1: i64, arg2: i64, arg3: i64, arg4: i64, arg5: i64) -> u64

{
    let mut var_38: i64 = -0x340d631b7bdddcdb;
    _$LT$fnv..FnvHasher$u20$as$u20$core..hash..Hasher$GT$::write::h1f40931822b5a752(&var_38, arg1, 
        arg2);
    let mut var_3a: i8 = 0xff;
    _$LT$fnv..FnvHasher$u20$as$u20$core..hash..Hasher$GT$::write::h1f40931822b5a752(&var_38, 
        &var_3a, 1);
    core::hash::impls::_$LT$impl$u20$core..hash..Hash$u20$for$u20$$RF$T$GT$::hash::h8c5e13fb85b9f364(arg5, &var_38);
    let rbp: i64 = var_38;
    var_38 = -0x340d631b7bdddcdb;
    _$LT$fnv..FnvHasher$u20$as$u20$core..hash..Hasher$GT$::write::h1f40931822b5a752(&var_38, arg3, 
        arg4);
    let mut var_39: i8 = 0xff;
    _$LT$fnv..FnvHasher$u20$as$u20$core..hash..Hasher$GT$::write::h1f40931822b5a752(&var_38, 
        &var_39, 1);
    core::hash::impls::_$LT$impl$u20$core..hash..Hash$u20$for$u20$$RF$T$GT$::hash::h8c5e13fb85b9f364(arg5, &var_38);
    let temp0: i64 = var_38;
    let mut rcx: i32;
    rcx = rbp != temp0;
    
    if rbp >= temp0
    {
        return rcx;
    }
    
    0xff
}
