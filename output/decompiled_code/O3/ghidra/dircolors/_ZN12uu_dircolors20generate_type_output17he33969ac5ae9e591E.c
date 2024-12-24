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
              (auStack_38,anon_82c3ed8cdb07ba982e54791b0c97d0cf_114_llvm_541762227079851447,
               anon_82c3ed8cdb07ba982e54791b0c97d0cf_248_llvm_541762227079851447);
                    /* try { // try from 001bbd1d to 001bbd33 has its CatchHandler @ 001bbd9c */
    ::alloc::str::join_generic_copy(&local_20,local_30,local_28,&DAT_00123433,1);
  }
  else {
    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
              (auStack_38,anon_82c3ed8cdb07ba982e54791b0c97d0cf_114_llvm_541762227079851447,
               anon_82c3ed8cdb07ba982e54791b0c97d0cf_248_llvm_541762227079851447);
                    /* try { // try from 001bbd56 to 001bbd6c has its CatchHandler @ 001bbd8f */
    ::alloc::str::join_generic_copy(&local_20,local_30,local_28,&DAT_00123434,1);
  }
  *(undefined8 *)(param_1 + 4) = local_10;
  *param_1 = local_20;
  param_1[1] = uStack_1c;
  param_1[2] = uStack_18;
  param_1[3] = uStack_14;
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(auStack_38);
  return param_1;
}