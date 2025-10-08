ulong _ZN2fd10filesystem21is_existing_directory17h6c4a6eed8c6886fcE
                (undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  undefined8 unaff_RBP;
  ulong uVar3;
  undefined local_38 [24];
  undefined7 uVar4;
  
  cVar1 = (*(code *)PTR__ZN3std4path4Path6is_dir17h02edbc48c38d7d9eE_00540918)();
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    lVar2 = (*(code *)PTR__ZN3std4path4Path9file_name17h6d40d88bf3fb287aE_0053ff18)(param_1,param_2)
    ;
    uVar4 = (undefined7)((ulong)unaff_RBP >> 8);
    uVar3 = CONCAT71(uVar4,1);
    if (lVar2 == 0) {
      (*(code *)PTR__ZN8normpath3imp9normalize17h59e357bf70bb8f7bE_00540858)
                (local_38,param_1,param_2);
      uVar3 = CONCAT71(uVar4,1);
      _ZN4core3ptr100drop_in_place_LT_core__result__Result_LT_normpath__base__BasePathBuf_C_std__io__error__Error_GT__GT_17h5196cef524be1b6aE
                (local_38);
    }
  }
  return uVar3 & 0xffffffff;
}