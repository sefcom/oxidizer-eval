undefined8 __rustcall uu_basenc::uu_app(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined **local_cc0;
  undefined **local_cb8;
  undefined local_cb0 [712];
  undefined local_9e8 [592];
  undefined local_798 [592];
  undefined local_548 [592];
  undefined local_2f8 [712];
  
  uu_base32::base_common::base_app(local_cb0,&DAT_0011954c,0x129,&DAT_00119675,0x15);
  local_cc0 = &PTR_DAT_0024fec0;
  local_cb8 = &PTR_drop_in_place<alloc_string_String>_00250000;
  puVar3 = (undefined8 *)
           _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next(&local_cc0);
  if (puVar3 != (undefined8 *)0x0) {
    do {
      uVar1 = *puVar3;
      uVar2 = puVar3[1];
      clap_builder::builder::arg::Arg::new(local_2f8,uVar1,uVar2);
      clap_builder::builder::arg::Arg::long(local_798,local_2f8,uVar1,uVar2);
                    /* try { // try from 001c6226 to 001c624e has its CatchHandler @ 001c62b5 */
      clap_builder::builder::arg::Arg::help(local_2f8,local_798,puVar3[3],puVar3[4]);
      clap_builder::builder::arg::Arg::action(local_9e8,local_2f8);
      _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::fold
                (local_548,local_9e8);
      (*(code *)PTR_memcpy_00254298)(local_2f8,local_cb0,0x2c8);
      clap_builder::builder::command::Command::arg(local_cb0,local_2f8,local_548);
      puVar3 = (undefined8 *)
               _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                         (&local_cc0);
    } while (puVar3 != (undefined8 *)0x0);
  }
  (*(code *)PTR_memcpy_00254298)(param_1,local_cb0,0x2c8);
  return param_1;
}