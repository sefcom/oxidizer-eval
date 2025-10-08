undefined  [16] _ZN10change_log6domain9changelog21category_from_pr_type17h091454f49f5cc1c5E(void)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined8 uVar4;
  
  auVar5 = _ZN4core3str21__LT_impl_u20_str_GT_16trim_end_matches17h7ca8f070bd4eeac3E();
  uVar4 = auVar5._8_8_;
  uVar2 = auVar5._0_8_;
  cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h5d72a905da1b452aE
                    (uVar2,uVar4,"feat",4);
  if (cVar1 != '\0') {
    auVar6._8_8_ = 8;
    auVar6._0_8_ = "FeaturesS";
    return auVar6;
  }
  cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h5d72a905da1b452aE
                    (uVar2,uVar4,"fix",3);
  if (cVar1 != '\0') {
    auVar7._8_8_ = 5;
    auVar7._0_8_ = "Fixes";
    return auVar7;
  }
  cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h5d72a905da1b452aE
                    (uVar2,uVar4,"chore",5);
  pcVar3 = (char *)0x0;
  if (cVar1 != '\0') {
    pcVar3 = "Chores";
  }
  auVar5._8_8_ = 6;
  auVar5._0_8_ = pcVar3;
  return auVar5;
}