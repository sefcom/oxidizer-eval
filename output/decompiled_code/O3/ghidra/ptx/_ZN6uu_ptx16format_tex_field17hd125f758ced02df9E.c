void __rustcall uu_ptx::format_tex_field(undefined4 *param_1,long param_2,long param_3)

{
  undefined auStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined8 local_10;
  
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (auStack_38,param_2,param_3 + param_2);
                    /* try { // try from 002b792d to 002b793e has its CatchHandler @ 002b795e */
  ::alloc::str::join_generic_copy(&local_20,local_30,local_28,1,0);
  *(undefined8 *)(param_1 + 4) = local_10;
  *param_1 = local_20;
  param_1[1] = uStack_1c;
  param_1[2] = uStack_18;
  param_1[3] = uStack_14;
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(auStack_38);
  return;
}