void __rustcall
uu_unexpand::write_tabs
          (long *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5,
          byte param_6,char param_7,byte param_8)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined auVar4 [16];
  long local_88;
  undefined local_80 [16];
  undefined *local_70;
  undefined8 local_68;
  undefined8 **local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 *local_40;
  code *local_38;
  
  if (param_7 == '\0') {
    if (param_8 != 0) goto LAB_001b3699;
LAB_001b36a7:
    if ((param_5 <= param_4) || ((param_8 & param_6) == 0 && param_7 == '\0')) goto LAB_001b3806;
  }
  else {
    param_8 = 1;
LAB_001b3699:
    if ((param_6 != 0) || (param_5 <= param_4 + 1)) goto LAB_001b36a7;
  }
  auVar4 = next_tabstop(param_2,param_3,param_4);
  while ((auVar4._0_8_ == 1 && (uVar3 = auVar4._8_8_ + param_4, uVar3 <= param_5))) {
    lVar2 = param_1[2];
    if ((ulong)(*param_1 - lVar2) < 2) {
      local_88 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(param_1,"\t: \n",1);
      if (local_88 != 0) {
                    /* try { // try from 001b3746 to 001b37fd has its CatchHandler @ 001b3929 */
        local_80 = uucore::util_name();
        local_38 = _<&T_as_core::fmt::Display>::fmt;
        local_70 = &DAT_0021ec60;
        local_68 = 2;
        local_50 = 0;
        local_60 = &local_40;
        local_58 = 1;
        local_40 = (undefined8 *)local_80;
        std::io::stdio::_eprint(&local_70);
        local_80._8_8_ = _<std::io::error::Error_as_core::fmt::Display>::fmt;
        local_70 = &DAT_0021ec80;
        local_68 = 2;
        local_50 = 0;
        local_58 = 1;
        local_80._0_8_ = &local_88;
        local_60 = (undefined8 **)local_80;
        std::io::stdio::_eprint(&local_70);
        std::process::exit(1);
        return;
      }
    }
    else {
      *(undefined *)(param_1[1] + lVar2) = 9;
      param_1[2] = lVar2 + 1;
    }
    auVar4 = next_tabstop(param_2,param_3,uVar3);
    param_4 = uVar3;
  }
LAB_001b3806:
  lVar2 = param_5 - param_4;
  if (param_4 <= param_5 && lVar2 != 0) {
    do {
      lVar1 = param_1[2];
      if ((ulong)(*param_1 - lVar1) < 2) {
        local_88 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(param_1," ",1);
        if (local_88 != 0) {
                    /* try { // try from 001b3862 to 001b3919 has its CatchHandler @ 001b3937 */
          local_80 = uucore::util_name();
          local_38 = _<&T_as_core::fmt::Display>::fmt;
          local_70 = &DAT_0021ec60;
          local_68 = 2;
          local_50 = 0;
          local_60 = &local_40;
          local_58 = 1;
          local_40 = (undefined8 *)local_80;
          std::io::stdio::_eprint(&local_70);
          local_80._8_8_ = _<std::io::error::Error_as_core::fmt::Display>::fmt;
          local_70 = &DAT_0021ec80;
          local_68 = 2;
          local_50 = 0;
          local_58 = 1;
          local_80._0_8_ = &local_88;
          local_60 = (undefined8 **)local_80;
          std::io::stdio::_eprint(&local_70);
          std::process::exit(1);
          return;
        }
      }
      else {
        *(undefined *)(param_1[1] + lVar1) = 0x20;
        param_1[2] = lVar1 + 1;
      }
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}