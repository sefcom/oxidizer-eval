undefined * _ZN4just8namepath8Namepath4last17hd204dfab89d26ff3E(long param_1,undefined *param_2)

{
  code *pcVar1;
  undefined *puVar2;
  long extraout_RDX;
  undefined **ppuVar3;
  
  if (param_2 != (undefined *)0x0) {
    return (undefined *)(param_1 + (long)param_2 * 0x48 + -0x48);
  }
  ppuVar3 = &PTR_DAT_005305f8;
  (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00565e68)();
  if (extraout_RDX != 0) {
    *ppuVar3 = param_2 + (extraout_RDX + -1) * 0x48;
    ppuVar3[1] = param_2;
    ppuVar3[2] = (undefined *)(extraout_RDX + -1);
    return param_2 + (extraout_RDX + -1) * 0x48;
  }
  (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00565e68)(&PTR_DAT_00530610);
  pcVar1 = (code *)swi(3);
  puVar2 = (undefined *)(*pcVar1)();
  return puVar2;
}