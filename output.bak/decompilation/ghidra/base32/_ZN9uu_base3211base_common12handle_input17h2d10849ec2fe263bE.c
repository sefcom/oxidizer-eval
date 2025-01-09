undefined  [16] __rustcall
uu_base32::base_common::handle_input(undefined8 param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined auVar3 [16];
  undefined8 local_38;
  undefined8 local_30;
  
                    /* try { // try from 00178bd3 to 00178bda has its CatchHandler @ 00178c75 */
  auVar3 = (*(code *)PTR_get_supports_fast_decode_and_encode_0024df30)(param_2);
  uVar2 = auVar3._8_8_;
  uVar1 = auVar3._0_8_;
                    /* try { // try from 00178bdb to 00178bf6 has its CatchHandler @ 00178c7a */
  local_30 = (*(code *)PTR_stdout_0024df38)();
  local_38 = (*(code *)PTR_lock_0024df40)(&local_30);
  if (*(char *)(param_3 + 5) == '\0') {
    auVar3 = fast_encode::fast_encode(param_1,&local_38,uVar1,uVar2,*param_3,param_3[1]);
  }
  else {
                    /* try { // try from 00178c06 to 00178c30 has its CatchHandler @ 00178c67 */
    auVar3 = fast_decode::fast_decode
                       (param_1,&local_38,uVar1,uVar2,*(undefined *)((long)param_3 + 0x29));
  }
                    /* try { // try from 00178c3b to 00178c3f has its CatchHandler @ 00178c7a */
  core::ptr::drop_in_place<std::io::stdio::StdoutLock>(local_38);
                    /* try { // try from 00178c40 to 00178c4a has its CatchHandler @ 00178c75 */
  core::ptr::
  drop_in_place<alloc::boxed::Box<dyn_uucore::features::encoding::SupportsFastDecodeAndEncode>>
            (uVar1,uVar2);
  core::ptr::drop_in_place<uu_base32::base_common::Config>(param_3);
  return auVar3;
}