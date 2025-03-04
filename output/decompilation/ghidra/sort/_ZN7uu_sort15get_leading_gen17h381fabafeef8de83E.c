undefined  [16] _ZN7uu_sort15get_leading_gen17h381fabafeef8de83E(undefined8 param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  long lVar6;
  uint uVar7;
  long lVar9;
  ulong uVar10;
  undefined auVar11 [16];
  undefined auVar12 [12];
  char *local_88;
  undefined8 local_80;
  undefined *local_78;
  undefined8 uStack_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  undefined8 local_38;
  ulong uVar8;
  
  auVar11 = _ZN4core3str21__LT_impl_u20_str_GT_18trim_start_matches17hbba8ab33437caca6E();
  uVar8 = auVar11._8_8_;
  lVar6 = auVar11._0_8_;
  lVar9 = param_2 - uVar8;
  local_88 = "inf";
  local_80 = 3;
  local_78 = &DAT_0012435c;
  uStack_70 = 4;
  local_68 = "nan";
  local_60 = 3;
  local_58 = 0;
  local_50 = 3;
  if (lVar6 == 0) {
    do {
                    /* try { // try from 00224280 to 00224287 has its CatchHandler @ 002243f9 */
      auVar11 = _ZN99__LT_core__array__iter__IntoIter_LT_T_C___GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h5ce99848dcb7192cE
                          (&local_88);
      if (auVar11._0_8_ == 0) goto LAB_002242b1;
      uVar10 = 0;
    } while ((auVar11._8_8_ != 0) && (uVar10 = uVar8, auVar11._8_8_ != uVar8));
                    /* try { // try from 0022429a to 002242b0 has its CatchHandler @ 002243fd */
    _ZN4core3str16slice_error_fail17h5dbb61534404fe7eE
              (0,uVar8,0,uVar10,&PTR_s_src_uu_sort_src_sort_rs_002ffdf0);
LAB_002242b1:
    _ZN4core3ptr73drop_in_place_LT_core__array__iter__IntoIter_LT__RF_str_C_3_usize_GT__GT_17h5e8c4d5bbc8b3091E
              (&local_88);
    local_40 = lVar6 + uVar8;
    local_38 = 0;
    local_48 = lVar6;
    _ZN4core4iter6traits8iterator8Iterator4fuse17hdd6e28be1a8e845dE(&local_68,&local_48);
    local_88 = (char *)0x0;
    local_80 = 8;
    local_78 = (undefined *)0x0;
    uStack_70 = 0;
                    /* try { // try from 002242fa to 0022431d has its CatchHandler @ 002243f7 */
    lVar6 = _ZN9itertools8peek_nth16PeekNth_LT_I_GT_8peek_nth17haa0f1378b280dbbcE(&local_88,0);
    if ((lVar6 != 0) && ((*(int *)(lVar6 + 8) == 0x2d || (*(int *)(lVar6 + 8) == 0x2b)))) {
      _ZN96__LT_itertools__peek_nth__PeekNth_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17he415a40120613359E
                (&local_88);
    }
    bVar2 = 1;
    bVar4 = false;
    do {
      while( true ) {
        do {
                    /* try { // try from 00224330 to 00224337 has its CatchHandler @ 0022440a */
          bVar3 = bVar4;
          auVar12 = _ZN96__LT_itertools__peek_nth__PeekNth_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17he415a40120613359E
                              (&local_88);
          uVar7 = auVar12._8_4_;
          if (uVar7 == 0x110000) {
            _ZN4core3ptr85drop_in_place_LT_itertools__peek_nth__PeekNth_LT_core__str__iter__CharIndices_GT__GT_17h99fb1acb9dd0bcb6E
                      (&local_88);
            goto LAB_002243e0;
          }
          bVar4 = bVar3;
        } while ((uVar7 - 0x30 < 10) || (bVar4 = true, (bool)((!bVar3 && uVar7 == 0x2e) & bVar2)));
                    /* try { // try from 00224372 to 002243b4 has its CatchHandler @ 002243f5 */
        if ((!(bool)((uVar7 & 0xffffffdf) == 0x45 & bVar2)) ||
           (lVar6 = _ZN9itertools8peek_nth16PeekNth_LT_I_GT_8peek_nth17haa0f1378b280dbbcE
                              (&local_88,0), lVar6 == 0)) goto LAB_002243c8;
        iVar1 = *(int *)(lVar6 + 8);
        if ((iVar1 != 0x2d) && (iVar1 != 0x2b)) break;
        lVar6 = _ZN9itertools8peek_nth16PeekNth_LT_I_GT_8peek_nth17haa0f1378b280dbbcE(&local_88,2);
        if ((lVar6 == 0) || (9 < *(int *)(lVar6 + 8) - 0x30U)) goto LAB_002243c8;
        bVar2 = 0;
        _ZN96__LT_itertools__peek_nth__PeekNth_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17he415a40120613359E
                  (&local_88);
        bVar4 = bVar3;
      }
      bVar2 = 0;
      bVar4 = bVar3;
    } while (iVar1 - 0x30U < 10);
LAB_002243c8:
    param_2 = auVar12._0_8_ + lVar9;
    _ZN4core3ptr85drop_in_place_LT_itertools__peek_nth__PeekNth_LT_core__str__iter__CharIndices_GT__GT_17h99fb1acb9dd0bcb6E
              (&local_88);
  }
  else {
LAB_00224220:
    do {
                    /* try { // try from 00224220 to 00224262 has its CatchHandler @ 002243fb */
      auVar11 = _ZN99__LT_core__array__iter__IntoIter_LT_T_C___GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h5ce99848dcb7192cE
                          (&local_88);
      uVar10 = auVar11._8_8_;
      if (auVar11._0_8_ == 0) goto LAB_002242b1;
      if (uVar10 != 0) {
        if (uVar10 < uVar8) {
          if (*(char *)(lVar6 + uVar10) < -0x40) goto LAB_00224220;
        }
        else if (uVar10 != uVar8) goto LAB_00224220;
      }
      cVar5 = _ZN4core5slice5ascii30__LT_impl_u20__u5b_u8_u5d__GT_20eq_ignore_ascii_case17he7c08894b5496a04E
                        (lVar6,uVar10,auVar11._0_8_,uVar10);
    } while (cVar5 == '\0');
    param_2 = uVar10 + lVar9;
    _ZN4core3ptr73drop_in_place_LT_core__array__iter__IntoIter_LT__RF_str_C_3_usize_GT__GT_17h5e8c4d5bbc8b3091E
              (&local_88);
  }
LAB_002243e0:
  auVar11._8_8_ = param_2;
  auVar11._0_8_ = lVar9;
  return auVar11;
}