ulong _ZN7uu_expr11syntax_tree11get_next_id17hf082ef3e5b1b606fE(void)

{
  code *pcVar1;
  ulong uVar2;
  undefined auVar3 [12];
  
  auVar3 = _ZN3std6thread5local17LocalKey_LT_T_GT_8try_with17hf315ba242d5c93baE();
  if ((auVar3 & (undefined  [12])0x1) == (undefined  [12])0x0) {
    return (ulong)auVar3._8_4_;
  }
  (*(code *)PTR__ZN3std6thread5local18panic_access_error17hcb117c44f8523251E_002519c8)
            (&PTR_DAT_0024a4e0);
  pcVar1 = (code *)swi(3);
  uVar2 = (*pcVar1)();
  return uVar2;
}