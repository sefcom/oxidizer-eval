undefined8 __rustcall uu_hashsum::uu_app_custom(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined **local_ae8;
  undefined *local_ae0;
  undefined local_ad8 [712];
  undefined local_810 [712];
  undefined local_548 [712];
  undefined local_280 [592];
  
  uu_app_common(local_810);
  uu_app_opt_bits(local_548,local_810);
  uu_app_b3sum_opts(local_ad8,local_548);
  local_ae8 = &PTR_s_md5_0043fc40;
  local_ae0 = &DAT_0043fe20;
  puVar1 = (undefined8 *)
           _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next(&local_ae8);
  if (puVar1 != (undefined8 *)0x0) {
    do {
      (*(code *)PTR_memcpy_004806c8)(local_810,local_ad8,0x2c8);
                    /* try { // try from 002dba78 to 002dbaa0 has its CatchHandler @ 002dbafc */
      clap_builder::builder::arg::Arg::new(local_548,*puVar1,puVar1[1]);
      clap_builder::builder::arg::Arg::long(local_280,local_548,puVar1);
      clap_builder::builder::arg::Arg::help(local_548,local_280,puVar1[2],puVar1[3]);
      clap_builder::builder::arg::Arg::action(local_280,local_548,2);
      clap_builder::builder::command::Command::arg(local_ad8,local_810,local_280);
      puVar1 = (undefined8 *)
               _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                         (&local_ae8);
    } while (puVar1 != (undefined8 *)0x0);
  }
  (*(code *)PTR_memcpy_004806c8)(param_1,local_ad8,0x2c8);
  return param_1;
}