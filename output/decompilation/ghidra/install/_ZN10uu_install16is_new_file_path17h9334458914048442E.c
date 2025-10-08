ulong _ZN10uu_install16is_new_file_path17h9334458914048442E(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  char cVar2;
  ulong uVar3;
  undefined auVar4 [16];
  int local_d0 [44];
  
  _ZN3std2fs8metadata17hd1e2f191d36a0fa4E(local_d0,param_1,param_2);
  _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h8e5ba91c564dca48E
            (local_d0);
  if (local_d0[0] == 2) {
    auVar4 = (*(code *)PTR__ZN3std4path4Path6parent17hef287f60afa56900E_00209c18)(param_1,param_2);
    uVar3 = 1;
    if (auVar4._0_8_ != 0) {
      cVar2 = (*(code *)PTR__ZN3std4path4Path6is_dir17h02edbc48c38d7d9eE_00209c20)
                        (auVar4._0_8_,auVar4._8_8_);
      if (cVar2 == '\0') {
        auVar4 = (*(code *)PTR__ZN3std4path4Path6parent17hef287f60afa56900E_00209c18)
                           (param_1,param_2);
        if (auVar4._0_8_ == 0) {
          (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00209b00)
                    (&PTR_s_src_uu_install_src_install_rs_00202310);
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return uVar3;
        }
        uVar3 = (ulong)(auVar4._8_8_ == 0);
      }
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}