undefined  [16] _ZN4just11compilation11Compilation8root_src17hcd87e6a66a75a8d2E(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined auVar3 [16];
  
  lVar2 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_9get_inner17hf568833ba02effeaE
                    (param_1 + 0x330,param_1 + 0x2e8);
  if (lVar2 != 0) {
    return *(undefined (*) [16])(lVar2 + 0x18);
  }
  (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00565e68)(&PTR_DAT_0052dcb8);
  pcVar1 = (code *)swi(3);
  auVar3 = (*pcVar1)();
  return auVar3;
}