void _ZN9alacritty6config5color1_91__LT_impl_u20_serde__de__Deserialize_u20_for_u20_alacritty__config__color__IndexedColor_GT_11deserialize17haa5ab4569b2194daE
               (long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  long lStack_c8;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long lStack_68;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  
  switch(*(undefined *)((long)param_2 + 0x1a)) {
  case 2:
    _ZN5serde2de7Visitor12visit_string17h60c245d632150c6aE(param_1);
    return;
  case 3:
    _ZN5serde2de7Visitor9visit_i6417he3f902472d36ecbdE(param_1,*param_2);
    return;
  case 4:
    _ZN5serde2de7Visitor9visit_f6417he15929094da9d438E((int)*param_2,param_1);
    return;
  case 5:
    _ZN5serde2de7Visitor10visit_bool17hd3f7c62e03c9f648E(param_1,*(undefined *)param_2);
    return;
  case 6:
    uStack_108 = param_2[2];
    uStack_118 = *(undefined4 *)param_2;
    uStack_114 = *(undefined4 *)((long)param_2 + 4);
    uStack_110 = *(undefined4 *)(param_2 + 1);
    uStack_10c = *(undefined4 *)((long)param_2 + 0xc);
    _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h1b5383533e0e1d50E
              (&uStack_b8,&uStack_118);
    _ZN5serde2de7Visitor12visit_string17h60c245d632150c6aE(param_1,&uStack_b8);
    break;
  case 7:
    uStack_38 = *(undefined4 *)param_2;
    uStack_34 = *(undefined4 *)((long)param_2 + 4);
    uStack_30 = *(undefined4 *)(param_2 + 1);
    uStack_2c = *(undefined4 *)((long)param_2 + 0xc);
    uVar1 = param_2[2];
    uStack_28 = uVar1;
    (*(code *)PTR__ZN4toml5value15SeqDeserializer3new17h329d78865408554fE_009df6c0)
              (&uStack_118,&uStack_38);
    _ZN182__LT_alacritty__config__color______LT_impl_u20_serde__de__Deserialize_u20_for_u20_alacritty__config__color__IndexedColor_GT___deserialize____Visitor_u20_as_u20_serde__de__Visitor_GT_9visit_seq17h9f0a1da784d9b1c7E
              (&uStack_b8,&uStack_118);
    uVar2 = uStack_b0;
    if (CONCAT44(uStack_b4,uStack_b8) == 2) {
      lVar3 = _ZN4core4iter6traits10exact_size17ExactSizeIterator3len17h203675a6536c64a1E
                        (CONCAT44(uStack_10c,uStack_110),CONCAT44(uStack_fc,uStack_100));
      if (lVar3 == 0) {
        *(undefined4 *)(param_1 + 1) = uVar2;
        *param_1 = 2;
      }
      else {
        _ZN5serde2de5Error14invalid_length17h2ddd52a07005d270E
                  (&uStack_b8,uVar1,&PTR_s_fewer_elements_in_array_0097c878,&DAT_00974b78);
        param_1[10] = lStack_68;
        param_1[8] = CONCAT44(uStack_74,uStack_78);
        param_1[9] = CONCAT44(uStack_6c,uStack_70);
        param_1[6] = CONCAT44(uStack_84,uStack_88);
        param_1[7] = CONCAT44(uStack_7c,uStack_80);
        param_1[4] = CONCAT44(uStack_94,uStack_98);
        param_1[5] = CONCAT44(uStack_8c,uStack_90);
        param_1[2] = CONCAT44(uStack_a4,uStack_a8);
        param_1[3] = CONCAT44(uStack_9c,uStack_a0);
        *(undefined4 *)param_1 = uStack_b8;
        *(undefined4 *)((long)param_1 + 4) = uStack_b4;
        *(undefined4 *)(param_1 + 1) = uStack_b0;
        *(undefined4 *)((long)param_1 + 0xc) = uStack_ac;
      }
    }
    else {
      param_1[9] = CONCAT44(uStack_6c,uStack_70);
      param_1[10] = lStack_68;
      *(ulong *)((long)param_1 + 0x3c) = CONCAT44(uStack_78,uStack_7c);
      *(ulong *)((long)param_1 + 0x44) = CONCAT44(uStack_70,uStack_74);
      *(ulong *)((long)param_1 + 0x2c) = CONCAT44(uStack_88,uStack_8c);
      *(ulong *)((long)param_1 + 0x34) = CONCAT44(uStack_80,uStack_84);
      *(ulong *)((long)param_1 + 0x1c) = CONCAT44(uStack_98,uStack_9c);
      *(ulong *)((long)param_1 + 0x24) = CONCAT44(uStack_90,uStack_94);
      *(undefined4 *)((long)param_1 + 0xc) = uStack_ac;
      *(undefined4 *)(param_1 + 2) = uStack_a8;
      *(undefined4 *)((long)param_1 + 0x14) = uStack_a4;
      *(undefined4 *)(param_1 + 3) = uStack_a0;
      *param_1 = CONCAT44(uStack_b4,uStack_b8);
      *(undefined4 *)(param_1 + 1) = uStack_b0;
    }
    _ZN4core3ptr49drop_in_place_LT_toml__value__SeqDeserializer_GT_17h428b3041770c9729E(&uStack_118)
    ;
    break;
  default:
    uVar1 = param_2[2];
    (*(code *)PTR__ZN4toml5value15MapDeserializer3new17h8ae0ef8153c34451E_009df6c8)(&uStack_b8);
    _ZN182__LT_alacritty__config__color______LT_impl_u20_serde__de__Deserialize_u20_for_u20_alacritty__config__color__IndexedColor_GT___deserialize____Visitor_u20_as_u20_serde__de__Visitor_GT_9visit_map17h443957f319ad5678E
              (&uStack_118,&uStack_b8);
    if (CONCAT44(uStack_114,uStack_118) == 2) {
      if (CONCAT44(uStack_74,uStack_78) == 0) {
        *(undefined4 *)(param_1 + 1) = uStack_110;
        *param_1 = 2;
      }
      else {
        _ZN5serde2de5Error14invalid_length17h2ddd52a07005d270E
                  (&uStack_118,uVar1,&PTR_s_fewer_elements_in_map_0097c888,&DAT_00974b78);
        param_1[10] = lStack_c8;
        param_1[8] = CONCAT44(uStack_d4,uStack_d8);
        param_1[9] = CONCAT44(uStack_cc,uStack_d0);
        param_1[6] = CONCAT44(uStack_e4,uStack_e8);
        param_1[7] = CONCAT44(uStack_dc,uStack_e0);
        param_1[4] = CONCAT44(uStack_f4,uStack_f8);
        param_1[5] = CONCAT44(uStack_ec,uStack_f0);
        param_1[2] = uStack_108;
        param_1[3] = CONCAT44(uStack_fc,uStack_100);
        *(undefined4 *)param_1 = uStack_118;
        *(undefined4 *)((long)param_1 + 4) = uStack_114;
        *(undefined4 *)(param_1 + 1) = uStack_110;
        *(undefined4 *)((long)param_1 + 0xc) = uStack_10c;
      }
    }
    else {
      param_1[9] = CONCAT44(uStack_cc,uStack_d0);
      param_1[10] = lStack_c8;
      *(ulong *)((long)param_1 + 0x3c) = CONCAT44(uStack_d8,uStack_dc);
      *(ulong *)((long)param_1 + 0x44) = CONCAT44(uStack_d0,uStack_d4);
      *(ulong *)((long)param_1 + 0x2c) = CONCAT44(uStack_e8,uStack_ec);
      *(ulong *)((long)param_1 + 0x34) = CONCAT44(uStack_e0,uStack_e4);
      *(ulong *)((long)param_1 + 0x1c) = CONCAT44(uStack_f8,uStack_fc);
      *(ulong *)((long)param_1 + 0x24) = CONCAT44(uStack_f0,uStack_f4);
      *(undefined4 *)((long)param_1 + 0xc) = uStack_10c;
      *(undefined4 *)(param_1 + 2) = (undefined4)uStack_108;
      *(undefined4 *)((long)param_1 + 0x14) = uStack_108._4_4_;
      *(undefined4 *)(param_1 + 3) = uStack_100;
      *param_1 = CONCAT44(uStack_114,uStack_118);
      *(undefined4 *)(param_1 + 1) = uStack_110;
    }
    _ZN4core3ptr49drop_in_place_LT_toml__value__MapDeserializer_GT_17hb81e30d88605ff3aE(&uStack_b8);
  }
  return;
}