void _ZN7uu_join5State15reset_next_line17hdffe12cfae3f9f25E(undefined8 *param_1,undefined8 param_2)

{
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  _ZN7uu_join5State9next_line17hca6ce189e8827bb3E(&local_78);
  if (local_78 == -0x7fffffffffffffff) {
    param_1[2] = local_60;
    *param_1 = local_70;
    param_1[1] = uStack_68;
  }
  else {
    local_28 = local_58;
    uStack_20 = uStack_50;
    local_48 = local_78;
    local_98 = (undefined4)local_70;
    uStack_94 = (undefined4)((ulong)local_70 >> 0x20);
    uStack_90 = (undefined4)uStack_68;
    uStack_8c = (undefined4)((ulong)uStack_68 >> 0x20);
    local_40 = local_98;
    uStack_3c = uStack_94;
    uStack_38 = uStack_90;
    uStack_34 = uStack_8c;
    local_30 = local_60;
    (*(code *)PTR__ZN7uu_join5State5reset17h80c820df90bbe344E_00239390)(param_2,&local_48);
    *param_1 = 0x8000000000000001;
  }
  return;
}