long * _ZN8uu_rmdir6remove17h30d38ff9a4c5e87aE
                 (long *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined *puVar1;
  undefined auVar2 [16];
  long local_48;
  long lStack_40;
  long local_38;
  
  _ZN8uu_rmdir13remove_single17h47fda4712a97f9b5E(&local_48);
  if (local_48 == 0) {
    if (((param_4 & 0x100) != 0) &&
       (auVar2 = (*(code *)PTR__ZN3std4path4Path6parent17hef287f60afa56900E_001e4df0)
                           (param_2,param_3),
       puVar1 = PTR__ZN3std4path4Path6parent17hef287f60afa56900E_001e4df0,
       auVar2._8_8_ != 0 && auVar2._0_8_ != 0)) {
      do {
        _ZN8uu_rmdir13remove_single17h47fda4712a97f9b5E(&local_48,auVar2._0_8_,auVar2._8_8_,param_4)
        ;
        if (local_48 != 0) goto LAB_00154e38;
        auVar2 = (*(code *)puVar1)(auVar2._0_8_,auVar2._8_8_);
      } while ((auVar2._0_8_ != 0) && (auVar2._8_8_ != 0));
    }
    *param_1 = 0;
  }
  else {
LAB_00154e38:
    param_1[2] = local_38;
    *param_1 = local_48;
    param_1[1] = lStack_40;
  }
  return param_1;
}