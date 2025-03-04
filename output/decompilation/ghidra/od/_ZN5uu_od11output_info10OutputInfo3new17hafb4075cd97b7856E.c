long _ZN5uu_od11output_info10OutputInfo3new17hafb4075cd97b7856E
               (long param_1,ulong param_2,long param_3,long param_4,undefined param_5)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong local_38;
  
  lVar3 = param_3 + param_4 * 0x28;
  uVar2 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4fold17h657e94a48a80ec23E
                    (param_3,lVar3);
  local_38 = uVar2;
  lVar3 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4fold17h903e90235b75c4dbE
                    (param_3,lVar3,&local_38);
  if (uVar2 != 0) {
    if ((uVar2 | param_2) >> 0x20 == 0) {
      uVar4 = (param_2 & 0xffffffff) / (uVar2 & 0xffffffff);
    }
    else {
      uVar4 = param_2 / uVar2;
    }
    _ZN5uu_od11output_info10OutputInfo28create_spaced_formatter_info17h79701a83eb03afe1E
              (param_1,param_3,param_4,uVar2);
    *(ulong *)(param_1 + 0x18) = param_2;
    *(ulong *)(param_1 + 0x20) = uVar4 * lVar3;
    *(ulong *)(param_1 + 0x28) = local_38;
    *(undefined *)(param_1 + 0x30) = param_5;
    return param_1;
  }
  _ZN4core9panicking11panic_const23panic_const_div_by_zero17haded503194f0bf6eE(&DAT_00243638);
  pcVar1 = (code *)swi(3);
  lVar3 = (*pcVar1)();
  return lVar3;
}