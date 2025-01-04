void __rustcall
uu_sort::make_sort_mode_arg
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
          undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  undefined8 *puVar2;
  undefined **local_720;
  undefined **local_718;
  undefined local_4d0 [592];
  undefined local_280 [592];
  
  clap_builder::builder::arg::Arg::new(local_280);
  clap_builder::builder::arg::Arg::short(&local_720,local_280,param_4);
  clap_builder::builder::arg::Arg::long(local_280,&local_720,param_2,param_3);
  clap_builder::builder::arg::Arg::help(&local_720,local_280,param_5,param_6);
  clap_builder::builder::arg::Arg::action(local_4d0,&local_720,2);
  local_720 = &PTR_s_general_numeric_sort_002ffbf8;
  local_718 = &PTR_drop_in_place<uucore_mods_error_UUsageError>_002ffc58;
  puVar2 = (undefined8 *)
           _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next(&local_720);
  if (puVar2 != (undefined8 *)0x0) {
    do {
                    /* try { // try from 00222107 to 00222111 has its CatchHandler @ 00222161 */
      cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(*puVar2,puVar2[1],param_2,param_3)
      ;
      if (cVar1 == '\0') {
        (*(code *)PTR_memcpy_00306c40)(local_280,local_4d0,0x250);
        clap_builder::builder::arg::Arg::conflicts_with(local_4d0,local_280,puVar2);
      }
      puVar2 = (undefined8 *)
               _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                         (&local_720);
    } while (puVar2 != (undefined8 *)0x0);
  }
  (*(code *)PTR_memcpy_00306c40)(param_1,local_4d0,0x250);
  return;
}