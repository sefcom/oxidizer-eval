
  fn just::function::blake3::hc8e8efe80116daff(arg1: *mut i64, arg2: i64, arg3: i64, arg4: i64) -> *mut i64

{
    let mut var_30: ();
    blake3::hash::h8580f3e631ea9ef3(&var_30, arg3, arg4);
    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h2ede3b6c558812d5(&arg1[1], 
        &var_30);
    *arg1 = 0;
    arg1
}
