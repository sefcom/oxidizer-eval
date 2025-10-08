bool _ZN9alacritty5input22Processor_LT_T_C_A_GT_9cell_side17h8083590e79163558E
               (undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  undefined uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  float extraout_XMM0_Da;
  undefined local_40 [16];
  float local_30;
  float local_28;
  float local_20;
  
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_9size_info17h75f6d6cd23dc8329E
            (local_40,param_1);
  uVar3 = 0;
  if (0.0 <= local_28) {
    uVar3 = (long)(local_28 - DAT_001ec664) & (long)local_28 >> 0x3f | (long)local_28;
  }
  if (DAT_001ec668 < local_28) {
    uVar3 = 0xffffffffffffffff;
  }
  if (uVar3 != 0) {
    uVar5 = (long)(local_20 - DAT_001ec664) & (long)local_20 >> 0x3f | (long)local_20;
    if (local_20 < 0.0) {
      uVar5 = 0;
    }
    if (DAT_001ec668 < local_20) {
      uVar5 = 0xffffffffffffffff;
    }
    uVar4 = param_2 - uVar5;
    if (param_2 < uVar5) {
      uVar4 = 0;
    }
    if ((uVar4 | uVar3) >> 0x20 == 0) {
      uVar4 = (uVar4 & 0xffffffff) % (uVar3 & 0xffffffff);
    }
    else {
      uVar4 = uVar4 % uVar3;
    }
    local_28 = DAT_001ec2f4 * local_28;
    uVar3 = 0;
    if (0.0 <= local_28) {
      uVar3 = (long)(local_28 - DAT_001ec664) & (long)local_28 >> 0x3f | (long)local_28;
    }
    uVar5 = 0xffffffffffffffff;
    if (local_28 <= DAT_001ec668) {
      uVar5 = uVar3;
    }
    (*(code *)PTR_fmodf_009dfe40)(local_30 - (local_20 + local_20));
    return uVar5 < uVar4 || (local_30 - local_20) - extraout_XMM0_Da <= (float)param_2;
  }
  (*(code *)
    PTR__ZN4core9panicking11panic_const23panic_const_rem_by_zero17hedb898bfe2cd5907E_009de548)
            (&PTR_DAT_00982d68);
  pcVar1 = (code *)swi(3);
  uVar2 = (*pcVar1)();
  return (bool)uVar2;
}