undefined4 * __rustcall uu_dircolors::generate_type_output(undefined4 *param_1,char *param_2)

{
  undefined auStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined8 local_10;
  
  if (*param_2 == '\x02') {
    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
              (auStack_38,anon_84df56382e2e566cd8a063a5d0153d3b_97_llvm_4004663911042702431,
               anon_84df56382e2e566cd8a063a5d0153d3b_231_llvm_4004663911042702431);
                    /* try { // try from 001bbc3d to 001bbc53 has its CatchHandler @ 001bbcbc */
    ::alloc::str::join_generic_copy(&local_20,local_30,local_28,&DAT_0012333b,1);
  }
  else {
    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
              (auStack_38,anon_84df56382e2e566cd8a063a5d0153d3b_97_llvm_4004663911042702431,
               anon_84df56382e2e566cd8a063a5d0153d3b_231_llvm_4004663911042702431);
                    /* try { // try from 001bbc76 to 001bbc8c has its CatchHandler @ 001bbcaf */
    ::alloc::str::join_generic_copy(&local_20,local_30,local_28,&DAT_0012333c,1);
  }
  *(undefined8 *)(param_1 + 4) = local_10;
  *param_1 = local_20;
  param_1[1] = uStack_1c;
  param_1[2] = uStack_18;
  param_1[3] = uStack_14;
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(auStack_38);
  return param_1;
}