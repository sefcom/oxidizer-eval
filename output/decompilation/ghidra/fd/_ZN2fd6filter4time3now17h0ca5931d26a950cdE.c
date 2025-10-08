void _ZN2fd6filter4time3now17h0ca5931d26a950cdE(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_40 [48];
  
  uVar1 = (*(code *)PTR__ZN4jiff3now3sys11system_time17hc6ac2cf3e18c4c07E_00540940)();
  _ZN90__LT_jiff__zoned__Zoned_u20_as_u20_core__convert__TryFrom_LT_std__time__SystemTime_GT__GT_8try_from17h9d7d1f1588340d2fE
            (local_40,uVar1);
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17habf9e8b7f193788bE(param_1,local_40);
  return;
}