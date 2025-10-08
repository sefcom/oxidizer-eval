ulong _ZN5uu_ls13extract_color17h349ba64db1ed3f00E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  ulong uVar5;
  undefined8 unaff_RBP;
  undefined auStack_48 [40];
  
  cVar3 = _ZN5uu_ls24is_color_compatible_term17h34ae6fe86d1936c0E();
  if (cVar3 != '\0') {
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h5fe44c4217b6c6aeE
              (auStack_48,param_1,"color",5);
    lVar4 = _ZN12clap_builder6parser5error12MatchesError6unwrap17he9eef133f866d763E
                      ("color",5,auStack_48);
    if (lVar4 == 0) {
      uVar5 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h5efeb7e2d2f22590E_0048fdc0
              )(param_1,"color",5);
      return uVar5;
    }
    uVar1 = *(undefined8 *)(lVar4 + 8);
    uVar2 = *(undefined8 *)(lVar4 + 0x10);
    cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h652dfc76ef3eba10E
                      (uVar1,uVar2,1,0);
    uVar5 = CONCAT71((int7)((ulong)unaff_RBP >> 8),1);
    if (cVar3 != '\0') goto LAB_00291e36;
    cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h652dfc76ef3eba10E
                      (uVar1,uVar2,"always",6);
    if (cVar3 != '\0') goto LAB_00291e36;
    cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h652dfc76ef3eba10E
                      (uVar1,uVar2,"yes",3);
    if (cVar3 != '\0') goto LAB_00291e36;
    cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h652dfc76ef3eba10E
                      (uVar1,uVar2,"force",5);
    if (cVar3 != '\0') goto LAB_00291e36;
    cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h652dfc76ef3eba10E
                      (uVar1,uVar2,&DAT_001cfd50,4);
    if (cVar3 != '\0') {
LAB_00291e1f:
      (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_0048f9a0)();
      uVar5 = _ZN3std3sys2io11is_terminal6isatty11is_terminal17h0e1d734d892dc985E();
      return uVar5;
    }
    cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h652dfc76ef3eba10E
                      (uVar1,uVar2,"tty",3);
    if (cVar3 != '\0') goto LAB_00291e1f;
    cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h652dfc76ef3eba10E
                      (uVar1,uVar2,"if-tty",6);
    if (cVar3 != '\0') goto LAB_00291e1f;
  }
  uVar5 = 0;
LAB_00291e36:
  return uVar5 & 0xffffffff;
}