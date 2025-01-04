undefined8 __rustcall
uu_echo::execute(undefined8 param_1,char param_2,char param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  char local_88;
  char local_87;
  long local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  local_78 = *param_4;
  uStack_74 = param_4[1];
  uStack_70 = param_4[2];
  uStack_6c = param_4[3];
  local_68 = param_4[4];
  uStack_64 = param_4[5];
  uStack_60 = param_4[6];
  uStack_5c = param_4[7];
  local_58 = param_4[8];
  uStack_54 = param_4[9];
  uStack_50 = param_4[10];
  uStack_4c = param_4[0xb];
  local_48 = param_4[0xc];
  uStack_44 = param_4[0xd];
  uStack_40 = param_4[0xe];
  uStack_3c = param_4[0xf];
  local_38 = 0;
  auVar4 = _<core::iter::adapters::enumerate::Enumerate<I>as_core::iter::traits::iterator::Iterator>
           ::next(&local_78);
  if (auVar4._8_8_ != 0) {
    if (param_3 == '\0') {
      do {
        uVar3 = *(undefined8 *)(auVar4._8_8_ + 8);
        uVar1 = *(undefined8 *)(auVar4._8_8_ + 0x10);
        if (((auVar4._0_8_ != 0) &&
            (lVar2 = _<std::io::stdio::StdoutLock_as_std::io::Write>::write_all
                               (param_1,&DAT_0011b6d3,1), lVar2 != 0)) ||
           (lVar2 = _<std::io::stdio::StdoutLock_as_std::io::Write>::write_all(param_1,uVar3,uVar1),
           lVar2 != 0)) goto LAB_001a4da0;
        auVar4 = _<core::iter::adapters::enumerate::Enumerate<I>as_core::iter::traits::iterator::Iterator>
                 ::next(&local_78);
      } while (auVar4._8_8_ != 0);
    }
    else {
      do {
        uVar3 = *(undefined8 *)(auVar4._8_8_ + 8);
        uVar1 = *(undefined8 *)(auVar4._8_8_ + 0x10);
        if (((auVar4._0_8_ != 0) &&
            (lVar2 = _<std::io::stdio::StdoutLock_as_std::io::Write>::write_all
                               (param_1,&DAT_0011b6d3,1), lVar2 != 0)) ||
           (print_escaped(&local_88,uVar3,uVar1,param_1), lVar2 = local_80, local_88 != '\0'))
        goto LAB_001a4da0;
        if (local_87 != '\0') {
          return 0;
        }
        auVar4 = _<core::iter::adapters::enumerate::Enumerate<I>as_core::iter::traits::iterator::Iterator>
                 ::next(&local_78);
      } while (auVar4._8_8_ != 0);
    }
  }
  if ((param_2 == '\0') ||
     (lVar2 = _<std::io::stdio::StdoutLock_as_std::io::Write>::write_all(param_1,&DAT_0011b420,1),
     lVar2 == 0)) {
    uVar3 = 0;
  }
  else {
LAB_001a4da0:
    uVar3 = uucore::mods::error::
            _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
            ::from(lVar2);
  }
  return uVar3;
}