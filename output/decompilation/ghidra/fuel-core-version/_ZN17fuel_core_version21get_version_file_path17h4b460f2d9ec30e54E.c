void _ZN17fuel_core_version21get_version_file_path17h4b460f2d9ec30e54E
               (undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined auVar3 [16];
  
  auVar3 = _ZN55__LT__RF_T_u20_as_u20_core__convert__AsRef_LT_U_GT__GT_6as_ref17h5e4fe01fcd78a6fdE
                     (param_2);
  lVar1 = (*(code *)PTR__ZN3std4path4Path6parent17hef287f60afa56900E_00237778)
                    (auVar3._0_8_,auVar3._8_8_);
  if (lVar1 != 0) {
    _ZN3std4path4Path4join17hf843098c80a9b6f7E(param_1,lVar1);
    return;
  }
  uVar2 = _ZN4eyre5error30__LT_impl_u20_eyre__Report_GT_12from_display17hdf5e0fd059bff6e3E();
  param_1[1] = uVar2;
  *param_1 = 0x8000000000000000;
  return;
}