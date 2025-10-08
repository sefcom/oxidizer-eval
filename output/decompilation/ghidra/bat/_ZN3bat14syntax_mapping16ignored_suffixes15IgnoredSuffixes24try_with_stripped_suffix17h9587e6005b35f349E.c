void _ZN3bat14syntax_mapping16ignored_suffixes15IgnoredSuffixes24try_with_stripped_suffix17h9587e6005b35f349E
               (undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined auVar1 [16];
  int local_30 [2];
  undefined8 local_28;
  undefined8 local_20;
  
  (*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_00807588)
            (local_30,param_3,param_4);
  if (local_30[0] != 1) {
    auVar1 = (*(code *)
               PTR__ZN3bat14syntax_mapping16ignored_suffixes15IgnoredSuffixes12strip_suffix17h54db9f7a9094d832E_008075c0
             )(param_2,local_28,local_20);
    if (auVar1._0_8_ != 0) {
      _ZN3bat14syntax_mapping13SyntaxMapping14get_syntax_for28__u7b__u7b_closure_u7d__u7d_17h5422123a2beb415cE
                (param_1,param_5,auVar1._0_8_,auVar1._8_8_);
      return;
    }
  }
  *(undefined8 *)(param_1 + 8) = 3;
  *param_1 = 0xd;
  return;
}