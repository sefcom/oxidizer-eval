void __rustcall uu_df::filter_mount_list(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  char cVar2;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 *local_220;
  undefined local_218 [32];
  long local_1f8 [19];
  undefined local_160 [152];
  undefined local_c8 [152];
  
  local_238 = 0;
  uStack_230 = 8;
  local_228 = 0;
  local_220 = param_1;
  _<alloc::vec::Vec<T,A>as_core::iter::traits::collect::IntoIterator>::into_iter(local_218);
  _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::next
            (local_1f8,local_218);
  puVar1 = PTR_memcpy_00245ae0;
  if (local_1f8[0] != -0x8000000000000000) {
    do {
      (*(code *)puVar1)(local_160,local_1f8,0x98);
                    /* try { // try from 001c6a48 to 001c6a68 has its CatchHandler @ 001c6ab3 */
      cVar2 = is_included(local_160,param_3);
      if (cVar2 == '\0') {
LAB_001c6a20:
                    /* try { // try from 001c6a20 to 001c6a27 has its CatchHandler @ 001c6aae */
        core::ptr::drop_in_place<uucore::features::fsext::MountInfo>(local_160);
      }
      else {
        cVar2 = is_best(uStack_230,local_228,local_160);
        if (cVar2 == '\0') goto LAB_001c6a20;
        (*(code *)puVar1)(local_c8,local_160,0x98);
                    /* try { // try from 001c6a8c to 001c6a96 has its CatchHandler @ 001c6aac */
        ::alloc::vec::Vec<T,A>::push(&local_238,local_c8);
      }
      _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::next
                (local_1f8,local_218);
    } while (local_1f8[0] != -0x8000000000000000);
  }
                    /* try { // try from 001c69ce to 001c69d7 has its CatchHandler @ 001c6aa7 */
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<uucore::features::fsext::MountInfo>>
            (local_218);
  local_220[2] = local_228;
  *local_220 = local_238;
  local_220[1] = uStack_230;
  return;
}