ulong _ZN21ruff_python_formatter6string9docstring21needs_chaperone_space17h0757348e78c1bc42E
                (uint param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined8 unaff_RBX;
  ulong uVar3;
  undefined auVar4 [16];
  undefined4 local_30;
  undefined4 local_2c;
  
  uVar2 = _ZN21ruff_python_formatter6string9docstring32count_consecutive_chars_from_end17h92240d424756d0e0E
                    (param_2,param_3);
  uVar3 = CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
  if ((uVar2 & 1) == 0) {
    if ((param_4 & 1) == 0) {
      if ((param_1 & 2) != 0) {
        local_2c = 0;
        auVar4 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E
                           (((param_1 & 1) == 0) * '\x05' + '\"',&local_2c);
        uVar1 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_9ends_with17h74aadde88527fc22E
                          (param_2,param_3,auVar4._0_8_,auVar4._8_8_);
        uVar3 = (ulong)uVar1;
        goto LAB_0042648e;
      }
    }
    else if ((param_1 & 2) != 0) {
      local_30 = 0;
      auVar4 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E
                         (((param_1 & 1) == 0) * '\x05' + '\"',&local_30);
      auVar4 = _ZN55__LT__RF_str_u20_as_u20_core__str__pattern__Pattern_GT_15strip_suffix_of17ha48df28aef4c1d38E
                         (auVar4._0_8_,auVar4._8_8_,param_2,param_3);
      if ((auVar4._0_8_ != 0) &&
         (uVar2 = _ZN21ruff_python_formatter6string9docstring32count_consecutive_chars_from_end17h92240d424756d0e0E
                            (auVar4._0_8_,auVar4._8_8_), (uVar2 & 1) == 0)) goto LAB_0042648e;
    }
    uVar3 = 0;
  }
LAB_0042648e:
  return uVar3 & 0xffffffff;
}