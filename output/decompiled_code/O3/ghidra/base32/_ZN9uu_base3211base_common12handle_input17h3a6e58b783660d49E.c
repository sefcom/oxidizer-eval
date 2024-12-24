undefined  [16] __rustcall
uu_base32::base_common::handle_input(undefined8 param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined auVar3 [16];
  undefined8 local_38;
  undefined8 local_30;
  
                    /* try { // try from 00177e83 to 00177e8a has its CatchHandler @ 00177f25 */
  auVar3 = (*(code *)PTR_get_supports_fast_decode_and_encode_0024eb88)(param_2);
  uVar2 = auVar3._8_8_;
  uVar1 = auVar3._0_8_;
                    /* try { // try from 00177e8b to 00177ea6 has its CatchHandler @ 00177f2a */
  local_30 = (*(code *)PTR_stdout_0024eb90)();
  local_38 = (*(code *)PTR_lock_0024eb98)(&local_30);
  if (*(char *)(param_3 + 5) == '\0') {
    auVar3 = fast_encode::fast_encode(param_1,&local_38,uVar1,uVar2,*param_3,param_3[1]);
  }
  else {
                    /* try { // try from 00177eb6 to 00177ee0 has its CatchHandler @ 00177f17 */
    auVar3 = fast_decode::fast_decode
                       (param_1,&local_38,uVar1,uVar2,*(undefined *)((long)param_3 + 0x29));
  }
                    /* try { // try from 00177eeb to 00177eef has its CatchHandler @ 00177f2a */
  core::ptr::drop_in_place<std::io::stdio::StdoutLock>(local_38);
                    /* try { // try from 00177ef0 to 00177efa has its CatchHandler @ 00177f25 */
  core::ptr::
  drop_in_place<alloc::boxed::Box<dyn_uucore::features::encoding::SupportsFastDecodeAndEncode>>
            (uVar1,uVar2);
  core::ptr::drop_in_place<uu_base32::base_common::Config>(param_3);
  return auVar3;
}