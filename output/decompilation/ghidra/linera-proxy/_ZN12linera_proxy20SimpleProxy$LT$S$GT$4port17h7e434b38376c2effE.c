ulong _ZN12linera_proxy20SimpleProxy_LT_S_GT_4port17h7e434b38376c2effE(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  long local_40;
  undefined *local_38;
  undefined **local_30;
  undefined8 local_28;
  long *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  if (*(ulong *)(param_1 + 0x108) < *(ulong *)(param_1 + 0x60)) {
    return (ulong)*(ushort *)(*(long *)(param_1 + 0x58) + 0x18 + *(ulong *)(param_1 + 0x108) * 0x20)
    ;
  }
  local_40 = param_1 + 0x108;
  local_38 = 
  PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_0164c250
  ;
  local_30 = &PTR_DAT_015a95e0;
  local_28 = 2;
  local_10 = 0;
  local_20 = &local_40;
  local_18 = 1;
  (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_0164bc60)
            (&local_30,&PTR_s_linera_service_src_proxy_main_rs_015a9600);
  pcVar1 = (code *)swi(3);
  uVar2 = (*pcVar1)();
  return uVar2;
}