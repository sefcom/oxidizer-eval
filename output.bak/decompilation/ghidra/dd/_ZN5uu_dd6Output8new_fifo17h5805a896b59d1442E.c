undefined * __rustcall
uu_dd::Output::new_fifo(undefined *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  undefined4 extraout_EDX;
  undefined auVar3 [16];
  undefined4 local_48;
  undefined8 local_44;
  byte local_3c;
  undefined local_3b;
  int local_38;
  undefined4 local_34;
  undefined8 local_30;
  
  lVar1 = param_4[0x11];
  if (lVar1 == 0) {
LAB_001d7a7d:
    if (((*param_4 == 0) || ((int)*param_4 == 1)) && (param_4[1] == 0)) {
      *param_1 = 3;
    }
    else {
      local_3c = *(byte *)((long)param_4 + 0x92) ^ 1;
      local_3b = *(undefined *)((long)param_4 + 0x91);
      local_44 = (ulong)CONCAT16(*(undefined *)((long)param_4 + 0x96),0x100000001b6);
      iVar2 = make_linux_oflags((long)param_4 + 0x96);
      local_48 = extraout_EDX;
      if (iVar2 == 0) {
        local_48 = 0;
      }
      std::fs::OpenOptions::open(&local_38,&local_48,param_2,param_3);
      if (local_38 != 0) goto LAB_001d7af8;
      *param_1 = 2;
      *(undefined4 *)(param_1 + 4) = local_34;
    }
    *(long **)(param_1 + 0x10) = param_4;
  }
  else {
    std::fs::File::open(&local_38,param_2,param_3);
    if (local_38 == 0) {
      local_44 = CONCAT44(local_44._4_4_,local_34);
      local_48 = CONCAT31(local_48._1_3_,2);
                    /* try { // try from 001d7a3c to 001d7a54 has its CatchHandler @ 001d7b34 */
      auVar3 = Dest::seek(&local_48,lVar1);
      if (auVar3._0_8_ != 0) {
        auVar3 = uucore::mods::error::
                 _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                 ::from(auVar3._8_8_);
        *(undefined (*) [16])(param_1 + 8) = auVar3;
        *param_1 = 4;
        core::ptr::drop_in_place<uu_dd::Dest>(local_48,local_44 & 0xffffffff);
        return param_1;
      }
      core::ptr::drop_in_place<uu_dd::Dest>(local_48,local_44 & 0xffffffff);
      goto LAB_001d7a7d;
    }
LAB_001d7af8:
    auVar3 = uucore::mods::error::
             _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
             ::from(local_30);
    *(undefined (*) [16])(param_1 + 8) = auVar3;
    *param_1 = 4;
  }
  return param_1;
}