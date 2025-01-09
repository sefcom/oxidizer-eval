void __rustcall
uu_cat::write_new_line
          (long *param_1,undefined8 param_2,char *param_3,long *param_4,undefined param_5)

{
  long lVar1;
  undefined8 uVar2;
  char *pcVar3;
  long local_a8;
  long lStack_a0;
  long local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined local_78;
  long *local_70;
  code *local_68;
  undefined *local_60;
  undefined8 local_58;
  long **local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined8 local_38;
  
  if (*(char *)((long)param_4 + 9) == '\0') {
    if (((*(char *)(param_4 + 1) == '\0') || (*param_3 == '\0')) ||
       (*(char *)((long)param_4 + 10) == '\0')) {
      *(undefined *)((long)param_4 + 10) = 1;
      if ((*(char *)(param_4 + 1) != '\0') && (param_3[4] == '\x02')) {
        local_68 = core::fmt::num::imp::_<impl_core::fmt::Display_for_u64>::fmt;
        local_a8 = 2;
        local_98 = 0;
        local_90 = 6;
        local_88 = 0;
        local_80 = 0x20;
        local_78 = 3;
        local_60 = &DAT_00218728;
        local_58 = 2;
        local_38 = 1;
        local_50 = &local_70;
        local_48 = 1;
        local_70 = param_4;
        local_40 = (undefined *)&local_a8;
        lVar1 = std::io::Write::write_fmt(param_2,&local_60);
        if (lVar1 != 0) goto LAB_001b0adc;
        *param_4 = *param_4 + 1;
      }
      if (param_3[2] == '\0') {
        pcVar3 = "\n";
        uVar2 = 1;
      }
      else {
        pcVar3 = "$\n";
        uVar2 = 2;
      }
      write_end_of_line(&local_a8,param_2,pcVar3,uVar2,param_5);
      if (local_a8 != -0x7ffffffffffffffa) {
        param_1[1] = lStack_a0;
        param_1[2] = local_98;
        *param_1 = local_a8;
        return;
      }
    }
  }
  else {
    if (param_3[2] == '\0') {
      lVar1 = _<std::io::stdio::StdoutLock_as_std::io::Write>::write_all(param_2,"\r",1);
      if (lVar1 != 0) goto LAB_001b0adc;
      *(undefined *)((long)param_4 + 9) = 0;
      pcVar3 = "\n";
      uVar2 = 1;
    }
    else {
      lVar1 = _<std::io::stdio::StdoutLock_as_std::io::Write>::write_all(param_2,"^M",2);
      if (lVar1 != 0) {
LAB_001b0adc:
        *param_1 = -0x8000000000000000;
        param_1[1] = lVar1;
        return;
      }
      *(undefined *)((long)param_4 + 9) = 0;
      pcVar3 = "$\n";
      uVar2 = 2;
    }
    write_end_of_line(&local_a8,param_2,pcVar3,uVar2,param_5);
    if (local_a8 != -0x7ffffffffffffffa) {
      param_1[2] = local_98;
      *param_1 = local_a8;
      param_1[1] = lStack_a0;
      return;
    }
  }
  *param_1 = -0x7ffffffffffffffa;
  return;
}