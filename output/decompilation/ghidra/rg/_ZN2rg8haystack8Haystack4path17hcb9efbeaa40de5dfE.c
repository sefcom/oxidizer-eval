void _ZN2rg8haystack8Haystack4path17hcb9efbeaa40de5dfE(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  
  if (*(char *)(param_1 + 0x70) != '\0') {
    uVar1 = (*(code *)PTR__ZN6ignore4walk8DirEntry4path17he339916189ce99eaE_00526f50)();
    cVar2 = _ZN3std4path4Path11starts_with17hfe49cb0779c8b156E(uVar1,extraout_RDX);
    if (cVar2 != '\0') {
      uVar1 = (*(code *)PTR__ZN6ignore4walk8DirEntry4path17he339916189ce99eaE_00526f50)();
      uVar1 = _ZN3std4path4Path12strip_prefix17h00920d6f673e5b0bE(uVar1,extraout_RDX_00);
      _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hffade1cca7e11e36E(uVar1,extraout_RDX_01);
      return;
    }
  }
  (*(code *)PTR__ZN6ignore4walk8DirEntry4path17he339916189ce99eaE_00526f50)(param_1);
  return;
}