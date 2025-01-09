undefined8 __rustcall uu_tee::tee(long param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined auVar7 [16];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  long local_98;
  long local_90;
  undefined *local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  
  uVar6 = 0x2700000003;
  if ((*(char *)(param_1 + 0x19) != '\0') &&
     (iVar3 = uucore::features::signals::ignore_interrupts(), iVar3 != 0x86)) {
    return 0x2700000003;
  }
  cVar2 = *(char *)(param_1 + 0x1a);
  if ((cVar2 == '\x04') && (iVar3 = uucore::features::signals::enable_pipe_errors(), iVar3 != 0x86))
  {
    return 0x2700000003;
  }
  local_40 = *(long *)(param_1 + 8);
  lVar5 = *(long *)(param_1 + 0x10);
  local_38 = local_40 + lVar5 * 0x18;
  local_30 = param_1;
  core::iter::adapters::try_process(&local_a8,&local_40);
  lVar1 = local_98;
  local_58 = CONCAT44(uStack_a4,local_a8);
  uStack_50 = CONCAT44(uStack_9c,uStack_a0);
  if (local_58 == -0x8000000000000000) {
    return uStack_50;
  }
  local_48 = local_98;
                    /* try { // try from 001b32f1 to 001b3304 has its CatchHandler @ 001b343a */
  _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_a8,"\'standard output\': \nstdin: ",0x11);
  local_68 = local_98;
  local_78._0_4_ = local_a8;
  local_78._4_4_ = uStack_a4;
  uStack_70._0_4_ = uStack_a0;
  uStack_70._4_4_ = uStack_9c;
                    /* try { // try from 001b3318 to 001b3325 has its CatchHandler @ 001b343f */
  uVar4 = std::io::stdio::stdout();
  local_90 = ::alloc::boxed::Box<T>::new(uVar4);
  local_88 = &DAT_0021f900;
  local_a8 = (undefined4)local_78;
  uStack_a4 = local_78._4_4_;
  uStack_a0 = (undefined4)uStack_70;
  uStack_9c = uStack_70._4_4_;
  local_98 = local_68;
                    /* try { // try from 001b334a to 001b3358 has its CatchHandler @ 001b343a */
  ::alloc::vec::Vec<T,A>::insert(&local_58,0,&local_a8);
  local_98 = local_48;
  local_a8 = (undefined4)local_58;
  uStack_a4 = local_58._4_4_;
  uStack_a0 = (undefined4)uStack_50;
  uStack_9c = uStack_50._4_4_;
  local_88 = (undefined *)CONCAT71(local_88._1_7_,cVar2);
  local_90 = 0;
                    /* try { // try from 001b337a to 001b3387 has its CatchHandler @ 001b3458 */
  uVar4 = std::io::stdio::stdin();
  local_78 = ::alloc::boxed::Box<T>::new(uVar4);
  uStack_70 = &DAT_0021f950;
                    /* try { // try from 001b3399 to 001b33a5 has its CatchHandler @ 001b3426 */
  auVar7 = std::io::copy::generic_copy(&local_78,&local_a8);
  uVar4 = auVar7._8_8_;
  if (auVar7._0_8_ != 0) {
    if ((auVar7._0_8_ == 1) && (cVar2 = std::io::error::Error::kind(), cVar2 != '\''))
    goto LAB_001b33f2;
                    /* try { // try from 001b33c3 to 001b33e1 has its CatchHandler @ 001b3424 */
    core::ptr::drop_in_place<std::io::error::Error>(uVar4);
  }
  if (lVar1 == lVar5) {
    lVar5 = _<uu_tee::MultiWriter_as_std::io::Write>::flush(&local_a8);
    if (lVar5 == 0) {
      if (local_90 == 0) {
        uVar6 = 0;
      }
    }
    else {
      core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(lVar5);
    }
  }
  uVar4 = 0;
LAB_001b33f2:
                    /* try { // try from 001b33f5 to 001b33f9 has its CatchHandler @ 001b3426 */
  core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(uVar4);
                    /* try { // try from 001b3404 to 001b3408 has its CatchHandler @ 001b3458 */
  core::ptr::drop_in_place<uu_tee::NamedReader>(local_78,uStack_70);
  core::ptr::drop_in_place<uu_tee::MultiWriter>(&local_a8);
  return uVar6;
}