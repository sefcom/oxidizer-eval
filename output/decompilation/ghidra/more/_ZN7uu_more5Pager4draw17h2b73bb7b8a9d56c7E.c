void _ZN7uu_more5Pager4draw17h2b73bb7b8a9d56c7E(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _ZN7uu_more5Pager10draw_lines17h890a8f2ebbed6d60E();
  lVar2 = -1;
  if (!CARRY8((ulong)*(ushort *)(param_1 + 0x40),*(ulong *)(param_1 + 0x18))) {
    lVar2 = (ulong)*(ushort *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x18);
  }
  uVar1 = _ZN4core3cmp6min_by17h872777368743a5eeE(*(undefined8 *)(param_1 + 0x30),lVar2);
  _ZN7uu_more5Pager11draw_prompt17hbe0a765e7105d705E(param_1,param_2,uVar1,param_3);
  uVar1 = _ZN57__LT_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_5flush17h392d0be644ab70e9E
                    (param_2);
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h830102b0065460c6E(uVar1,&PTR_DAT_00262a20);
  return;
}