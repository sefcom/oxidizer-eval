void _ZN8uu_rmdir13remove_single17h7d254dd4570d65d7E
               (long *param_1,long param_2,long param_3,uint param_4)

{
  long lVar1;
  undefined local_98 [16];
  undefined *local_88;
  code *local_80;
  undefined8 *local_78;
  code *local_70;
  undefined8 local_68;
  long local_60;
  long local_58;
  undefined local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined **local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  if ((param_4 & 0x10000) != 0) {
    local_98 = _ZN6uucore9util_name17h60d842bf27b05e82E();
    local_68 = 1;
    local_50 = 1;
    local_80 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h39d7d38f25d43a0cE;
    local_78 = &local_68;
    local_70 = 
    _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
    local_48 = &DAT_0020dab8;
    local_40 = 3;
    local_28 = 0;
    local_38 = &local_88;
    local_30 = 2;
    local_88 = local_98;
    local_60 = param_2;
    local_58 = param_3;
    _ZN3std2io5stdio6_print17he918bceb0c89db46E(&local_48);
  }
  lVar1 = _ZN3std2fs10remove_dir17h0572df07be869037E(param_2,param_3);
  if (lVar1 != 0) {
    param_1[1] = param_2;
    param_1[2] = param_3;
  }
  *param_1 = lVar1;
  return;
}