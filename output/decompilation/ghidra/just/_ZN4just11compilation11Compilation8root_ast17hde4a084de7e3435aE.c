long _ZN4just11compilation11Compilation8root_ast17hde4a084de7e3435aE(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_9get_inner17h32fcef423693d73dE
                    (param_1 + 0x300,param_1 + 0x2e8);
  if (lVar2 != 0) {
    return lVar2 + 0x18;
  }
  (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00565e68)(&PTR_DAT_0052dca0);
  pcVar1 = (code *)swi(3);
  lVar2 = (*pcVar1)();
  return lVar2;
}