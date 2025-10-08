undefined *
_ZN5uu_dd8progress10ProgUpdate20print_transfer_stats17h7b7c0ec0b63533bdE
          (undefined8 param_1,undefined4 param_2)

{
  undefined auVar1 [16];
  undefined *local_8;
  
  local_8 = PTR__ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E_00246c80;
  auVar1 = _ZN5uu_dd8progress10ProgUpdate20write_transfer_stats17h3ac3caa704374d4aE
                     (param_1,&local_8,param_2);
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hccc281bd37fe7c9aE
            (auVar1._0_8_,auVar1._8_8_,&PTR_DAT_0023db70);
  return local_8;
}