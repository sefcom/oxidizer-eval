
  fn uu_sort::random_shuffle::h8f5479ff6f6d004b(arg1: *mut i8, arg2: i64, arg3: *mut i8, arg4: i64, arg5: *mut i8) -> i64

{
    let mut var_48: i64 = -0x340d631b7bdddcdb;
    _$LT$fnv..FnvHasher$u20$as$u20$core..hash..Hasher$GT$::write::h3b0e12ffd294463d(&var_48, arg1, 
        arg2);
    let mut var_49: i8 = 0xff;
    _$LT$fnv..FnvHasher$u20$as$u20$core..hash..Hasher$GT$::write::h3b0e12ffd294463d(&var_48, 
        &var_49, 1);
    let mut var_38: i64 = 0x10;
    _$LT$fnv..FnvHasher$u20$as$u20$core..hash..Hasher$GT$::write::h3b0e12ffd294463d(&var_48, 
        &var_38, 8);
    _$LT$fnv..FnvHasher$u20$as$u20$core..hash..Hasher$GT$::write::h3b0e12ffd294463d(&var_48, arg5, 
        0x10);
    let rbp: i64 = var_48;
    let mut var_40: i64 = -0x340d631b7bdddcdb;
    _$LT$fnv..FnvHasher$u20$as$u20$core..hash..Hasher$GT$::write::h3b0e12ffd294463d(&var_40, arg3, 
        arg4);
    var_48 = 0xff;
    _$LT$fnv..FnvHasher$u20$as$u20$core..hash..Hasher$GT$::write::h3b0e12ffd294463d(&var_40, 
        &var_48, 1);
    var_48 = 0x10;
    _$LT$fnv..FnvHasher$u20$as$u20$core..hash..Hasher$GT$::write::h3b0e12ffd294463d(&var_40, 
        &var_48, 8);
    _$LT$fnv..FnvHasher$u20$as$u20$core..hash..Hasher$GT$::write::h3b0e12ffd294463d(&var_40, arg5, 
        0x10);
    let temp0: i64 = var_40;
    let c: bool = rbp < temp0;
    (rbp != temp0 && !c) - 0
}
