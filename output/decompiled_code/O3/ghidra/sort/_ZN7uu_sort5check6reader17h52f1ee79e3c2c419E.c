undefined  [16] __rustcall
uu_sort::check::reader
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  long lVar1;
  undefined auVar2 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  long local_b8;
  char local_b0;
  undefined7 uStack_af;
  long local_a8 [15];
  
  local_d8 = 0;
  local_d0 = 1;
  local_c8 = 0;
  local_c0 = param_3;
  do {
                    /* try { // try from 00243010 to 00243055 has its CatchHandler @ 002430b1 */
    _<std::sync::mpsc::Iter<T>as_core::iter::traits::iterator::Iterator>::next(local_a8,&local_c0);
    if (local_a8[0] == -0x8000000000000000) break;
    chunks::read(&local_b8,param_4,local_a8,0);
    if (local_b8 != 0) {
      param_5 = CONCAT71(uStack_af,local_b0);
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_d8);
      lVar1 = local_b8;
      goto LAB_00243085;
    }
  } while (local_b0 != '\0');
                    /* try { // try from 00243067 to 00243084 has its CatchHandler @ 002430ac */
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_d8);
  lVar1 = 0;
LAB_00243085:
  core::ptr::drop_in_place<alloc::boxed::Box<dyn_std::io::Read_core::marker::Send>>(param_1,param_2)
  ;
  auVar2._8_8_ = param_5;
  auVar2._0_8_ = lVar1;
  return auVar2;
}