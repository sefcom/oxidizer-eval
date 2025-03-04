undefined8 _ZN8uu_mkdir21strip_minus_from_mode17h24f9592b17407d7aE(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  uint extraout_EDX;
  undefined auVar7 [16];
  undefined auStack_68 [16];
  ulong uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  auStack_68 = _ZN102__LT__RF_mut_u20_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h499fc8427362f7b8E
                         ();
  puVar5 = (undefined8 *)
           _ZN94__LT_core__slice__iter__IterMut_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hdb599252adab1561E
                     (auStack_68);
  if (puVar5 != (undefined8 *)0x0) {
    do {
      cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h5238fd9d438873e5E
                        (puVar5[1],puVar5[2],&DAT_0011e31a,2);
      if (cVar3 != '\0') {
        return 0;
      }
      uVar1 = puVar5[1];
      uVar2 = puVar5[2];
      uStack_58 = uStack_58 & 0xffffffff00000000;
      auVar7 = _ZN4core4char7methods15encode_utf8_raw17h4a752b0d300141c4E(0x2d,&uStack_58);
      auVar7 = _ZN55__LT__RF_str_u20_as_u20_core__str__pattern__Pattern_GT_15strip_prefix_of17hdb721c8cd5e22968E
                         (auVar7._0_8_,auVar7._8_8_,uVar1,uVar2);
      if (auVar7._0_8_ != 0) {
        uStack_58 = puVar5[1];
        lStack_50 = puVar5[2] + uStack_58;
        lVar6 = _ZN81__LT_core__str__iter__Chars_u20_as_u20_core__iter__traits__iterator__Iterator_GT_10advance_by17h7ba654970d2c1b3eE
                          (&uStack_58);
        if (lVar6 == 0) {
          iVar4 = _ZN4core3str11validations15next_code_point17h907a7b8270b2c707E(&uStack_58);
          if ((iVar4 != 0) &&
             (((extraout_EDX - 0x58 < 0x21 &&
               ((0x1bc808001U >> ((ulong)(extraout_EDX - 0x58) & 0x3f) & 1) != 0)) ||
              ((extraout_EDX & 0x1ffff8) == 0x30)))) {
            _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h7010a65c9c3e4a4eE
                      (&uStack_48,auVar7._0_8_,auVar7._8_8_);
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h32735e917f193574E(puVar5);
            puVar5[2] = uStack_38;
            *puVar5 = uStack_48;
            puVar5[1] = uStack_40;
            return 1;
          }
        }
      }
      puVar5 = (undefined8 *)
               _ZN94__LT_core__slice__iter__IterMut_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hdb599252adab1561E
                         (auStack_68);
    } while (puVar5 != (undefined8 *)0x0);
  }
  return 0;
}