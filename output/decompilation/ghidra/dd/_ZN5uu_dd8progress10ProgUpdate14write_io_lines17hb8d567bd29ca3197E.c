long _ZN5uu_dd8progress10ProgUpdate14write_io_lines17hb8d567bd29ca3197E
               (long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  int local_54;
  undefined **local_50;
  undefined8 local_48;
  undefined4 **local_40;
  ulong local_38;
  undefined8 uStack_30;
  int *local_20;
  undefined *local_18;
  
  lVar2 = _ZN5uu_dd8progress8ReadStat6report17hbca14eda554cb06aE(param_1 + 0x10);
  if (lVar2 == 0) {
    lVar2 = _ZN5uu_dd8progress9WriteStat6report17hc78063a235cbbca9E(param_1 + 0x30,param_2);
    if (lVar2 == 0) {
      iVar1 = *(int *)(param_1 + 0x28);
      if (iVar1 != 0) {
        if (iVar1 != 1) {
          local_20 = &local_54;
          local_18 = 
          PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17h4ee7c3ea607dee75E_00246c48
          ;
          local_50 = (undefined **)&DAT_0023d970;
          local_48 = 2;
          local_40 = &local_20;
          local_54 = iVar1;
        }
        else {
          local_50 = &PTR_DAT_0023d960;
          local_48 = 1;
          local_40 = (undefined4 **)&DAT_00000008;
        }
        uStack_30 = 0;
        local_38 = (ulong)(iVar1 != 1);
        lVar2 = (*(code *)
                  PTR__ZN57__LT_std__io__stdio__Stderr_u20_as_u20_std__io__Write_GT_9write_fmt17hebff3e936d8559e8E_00246c50
                )(param_2,&local_50);
        return lVar2;
      }
      return 0;
    }
  }
  return lVar2;
}