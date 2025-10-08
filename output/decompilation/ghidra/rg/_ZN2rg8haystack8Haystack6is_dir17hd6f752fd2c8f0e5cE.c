undefined8 _ZN2rg8haystack8Haystack6is_dir17hd6f752fd2c8f0e5cE(long *param_1)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  
  if (*param_1 != 0) {
    if ((*(uint *)(param_1 + 6) & 0xf000) == 0x4000) {
      return 0x4001;
    }
    if (((*(uint *)(param_1 + 6) & 0xf000) == 0xa000) || (*(char *)((long)param_1 + 0x34) != '\0'))
    {
      auVar2 = (*(code *)PTR__ZN6ignore4walk8DirEntry4path17he339916189ce99eaE_00526f50)();
      uVar1 = (*(code *)PTR__ZN3std4path4Path6is_dir17h02edbc48c38d7d9eE_00526f30)
                        (auVar2._0_8_,auVar2._8_8_);
      return uVar1;
    }
  }
  return 0;
}