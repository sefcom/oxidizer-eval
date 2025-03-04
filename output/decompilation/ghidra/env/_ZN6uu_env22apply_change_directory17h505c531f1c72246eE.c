undefined8 _ZN6uu_env22apply_change_directory17h505c531f1c72246eE(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long local_a0;
  undefined **local_98;
  undefined8 uStack_90;
  undefined8 **local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 *local_68;
  code *local_60;
  long *local_58;
  code *local_50;
  undefined8 local_48;
  long local_40;
  undefined8 local_38;
  undefined local_30;
  undefined local_28 [16];
  undefined8 local_18;
  
  lVar1 = *(long *)(param_1 + 0x78);
  if ((*(long *)(param_1 + 0x58) == 0) && (lVar1 != 0)) {
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17he132dab3b8589a55E
              (&local_98,&DAT_00124992,0x26);
    local_80 = CONCAT44(local_80._4_4_,0x7d);
    uVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17ha5ed2421d13baa8bE(&local_98);
  }
  else {
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x80);
      local_a0 = _ZN3std3env15set_current_dir17h4371552348ad9e0bE(lVar1,uVar2);
      if (local_a0 != 0) {
        local_48 = 1;
        local_30 = 1;
        local_68 = &local_48;
        local_60 = 
        _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
        local_58 = &local_a0;
        local_50 = 
        _ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h59fe8285afbb4739E;
        local_98 = &PTR_DAT_00248bf8;
        uStack_90 = 2;
        local_78 = 0;
        local_88 = &local_68;
        local_80 = 2;
                    /* try { // try from 001cef5d to 001cef9a has its CatchHandler @ 001cefc1 */
        local_40 = lVar1;
        local_38 = uVar2;
        _ZN4core6option15Option_LT_T_GT_11map_or_else17ha7b9eb55e1cbc84dE(local_28,&local_98);
        local_80 = CONCAT44(local_80._4_4_,0x7d);
        local_88 = (undefined8 **)local_18;
        uVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h48315bbd00cc7109E(&local_98);
        _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17hd5ebd4cd57902993E(&local_a0);
        return uVar2;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}