void _ZN3bat6assets15assets_metadata1_97__LT_impl_u20_serde__de__Deserialize_u20_for_u20_bat__assets__assets_metadata__AssetsMetadata_GT_11deserialize17hdb127007433595f9E
               (long *param_1,ulong *param_2)

{
  ulong uVar1;
  long lVar2;
  uint uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  ulong uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  long lStack_f0;
  long alStack_e8 [2];
  uint uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  ulong uStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint *puStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined4 uStack_40;
  undefined uStack_30;
  
  uStack_98 = 0;
  uStack_90 = 0;
  uVar1 = 4;
  if ((*param_2 ^ 0x8000000000000000) < 6) {
    uVar1 = *param_2 ^ 0x8000000000000000;
  }
  if (uVar1 == 3) {
    uStack_40 = 0xd;
    lVar2 = (*(code *)PTR__ZN10serde_yaml5error3new17hc0f4e3265683489aE_008082a0)(&uStack_88);
    param_1[1] = lVar2;
    *param_1 = -0x7fffffffffffffff;
    goto LAB_004f7b2c;
  }
  if (uVar1 != 4) {
    puStack_58 = (undefined8 *)param_2[6];
    uStack_88 = *param_2;
    uStack_80 = *(undefined4 *)(param_2 + 1);
    uStack_7c = *(undefined4 *)((long)param_2 + 0xc);
    uStack_78 = *(undefined4 *)(param_2 + 2);
    uStack_74 = *(undefined4 *)((long)param_2 + 0x14);
    uStack_70 = *(undefined4 *)(param_2 + 3);
    uStack_6c = *(undefined4 *)((long)param_2 + 0x1c);
    puStack_68 = (uint *)param_2[4];
    puStack_60 = (undefined8 *)param_2[5];
    (*(code *)PTR__ZN10serde_yaml6loader6Loader3new17h998b3ac58b2ee467E_008082a8)
              (&uStack_148,&uStack_88);
    alStack_e8[0] = CONCAT44(uStack_13c,uStack_140);
    if ((uStack_148 & 1) != 0) {
      param_1[1] = alStack_e8[0];
      *param_1 = -0x7fffffffffffffff;
      return;
    }
    (*(code *)PTR__ZN10serde_yaml6loader6Loader13next_document17h76936ae334dabdaaE_008082b0)
              (&uStack_148,alStack_e8);
    if (CONCAT44(uStack_144,uStack_148) == -0x8000000000000000) {
      uStack_40 = 0xc;
      lVar2 = (*(code *)PTR__ZN10serde_yaml5error3new17hc0f4e3265683489aE_008082a0)(&uStack_88);
      param_1[1] = lVar2;
      *param_1 = -0x7fffffffffffffff;
    }
    else {
      uStack_a8 = uStack_118;
      uStack_b8 = uStack_128;
      uStack_b4 = uStack_124;
      uStack_b0 = uStack_120;
      uStack_ac = uStack_11c;
      uStack_c8 = uStack_138;
      uStack_c4 = uStack_134;
      uStack_c0 = uStack_130;
      uStack_bc = uStack_12c;
      uStack_d8 = uStack_148;
      uStack_d4 = uStack_144;
      uStack_d0 = uStack_140;
      uStack_cc = uStack_13c;
      puStack_68 = &uStack_d8;
      puStack_60 = &uStack_98;
      puStack_58 = &uStack_90;
      uStack_88 = 0;
      uStack_30 = 0x80;
      uStack_50 = 0;
      _ZN72__LT_serde_yaml__de__Deserializer_u20_as_u20_serde__de__Deserializer_GT_18deserialize_struct28__u7b__u7b_closure_u7d__u7d_17h3687dcd26171f9d3E
                (&uStack_148,&uStack_88);
      uStack_110 = CONCAT44(uStack_144,uStack_148);
      uStack_108 = CONCAT44(uStack_13c,uStack_140);
      if (uStack_110 == -0x7fffffffffffffff) {
        param_1[1] = uStack_108;
        *param_1 = -0x7fffffffffffffff;
        _ZN4core3ptr108drop_in_place_LT_alloc__vec__Vec_LT__LP_serde_yaml__de__Event_C_serde_yaml__libyaml__error__Mark_RP__GT__GT_17h1b8bf88c4f4ace73E
                  (&uStack_d8);
        if (CONCAT44(uStack_bc,uStack_c0) != 0) {
          _ZN4core3ptr73drop_in_place_LT_alloc__sync__Arc_LT_serde_yaml__error__ErrorImpl_GT__GT_17hd531c14bd5cfeae4E
                    (&uStack_c0);
        }
      }
      else {
        lStack_f0 = CONCAT44(uStack_124,uStack_128);
        uStack_100 = uStack_138;
        uStack_fc = uStack_134;
        uStack_f8 = uStack_130;
        uStack_f4 = uStack_12c;
        if (CONCAT44(uStack_bc,uStack_c0) == 0) {
          (*(code *)PTR__ZN10serde_yaml6loader6Loader13next_document17h76936ae334dabdaaE_008082b0)
                    (&uStack_88,alStack_e8);
          if (uStack_88 == 0x8000000000000000) {
            _ZN4core3ptr77drop_in_place_LT_core__option__Option_LT_serde_yaml__loader__Document_GT__GT_17ha822189a8018d44cE
                      (&uStack_88);
            param_1[4] = lStack_f0;
            param_1[2] = CONCAT44(uStack_fc,uStack_100);
            param_1[3] = CONCAT44(uStack_f4,uStack_f8);
            *(undefined4 *)param_1 = (undefined4)uStack_110;
            *(undefined4 *)((long)param_1 + 4) = uStack_110._4_4_;
            *(undefined4 *)(param_1 + 1) = (undefined4)uStack_108;
            *(undefined4 *)((long)param_1 + 0xc) = uStack_108._4_4_;
          }
          else {
            _ZN4core3ptr77drop_in_place_LT_core__option__Option_LT_serde_yaml__loader__Document_GT__GT_17ha822189a8018d44cE
                      (&uStack_88);
            uStack_40 = 0xd;
            lVar2 = (*(code *)PTR__ZN10serde_yaml5error3new17hc0f4e3265683489aE_008082a0)
                              (&uStack_88);
            param_1[1] = lVar2;
            *param_1 = -0x7fffffffffffffff;
            _ZN4core3ptr65drop_in_place_LT_bat__assets__assets_metadata__AssetsMetadata_GT_17h8cc3753e3db2669aE
                      (&uStack_110);
          }
          _ZN4core3ptr49drop_in_place_LT_serde_yaml__loader__Document_GT_17hd10f291a1adea136E
                    (&uStack_d8);
          goto LAB_004f7b9c;
        }
        lVar2 = (*(code *)PTR__ZN10serde_yaml5error6shared17h628359452f649200E_008082b8)();
        param_1[1] = lVar2;
        *param_1 = -0x7fffffffffffffff;
        _ZN4core3ptr65drop_in_place_LT_bat__assets__assets_metadata__AssetsMetadata_GT_17h8cc3753e3db2669aE
                  (&uStack_110);
        _ZN4core3ptr108drop_in_place_LT_alloc__vec__Vec_LT__LP_serde_yaml__de__Event_C_serde_yaml__libyaml__error__Mark_RP__GT__GT_17h1b8bf88c4f4ace73E
                  (&uStack_d8);
      }
      _ZN4core3ptr122drop_in_place_LT_alloc__collections__btree__map__BTreeMap_LT__RF_alloc__string__String_C__RF_alloc__string__String_GT__GT_17h719c7a0fb9fc7400E
                (&uStack_b8);
    }
LAB_004f7b9c:
    _ZN4core3ptr47drop_in_place_LT_serde_yaml__loader__Loader_GT_17he41fab787d3c6167E(alStack_e8[0])
    ;
    return;
  }
  uStack_118 = param_2[6];
  uStack_148 = *(uint *)param_2;
  uStack_144 = *(undefined4 *)((long)param_2 + 4);
  uStack_140 = *(undefined4 *)(param_2 + 1);
  uStack_13c = *(undefined4 *)((long)param_2 + 0xc);
  uStack_138 = *(undefined4 *)(param_2 + 2);
  uStack_134 = *(undefined4 *)((long)param_2 + 0x14);
  uStack_130 = *(undefined4 *)(param_2 + 3);
  uStack_12c = *(undefined4 *)((long)param_2 + 0x1c);
  uStack_128 = *(undefined4 *)(param_2 + 4);
  uStack_124 = *(undefined4 *)((long)param_2 + 0x24);
  uStack_120 = *(undefined4 *)(param_2 + 5);
  uStack_11c = *(undefined4 *)((long)param_2 + 0x2c);
  puStack_60 = &uStack_98;
  puStack_58 = &uStack_90;
  uStack_88 = 0;
  uStack_30 = 0x80;
  uStack_50 = 0;
  puStack_68 = &uStack_148;
  _ZN72__LT_serde_yaml__de__Deserializer_u20_as_u20_serde__de__Deserializer_GT_18deserialize_struct28__u7b__u7b_closure_u7d__u7d_17h3687dcd26171f9d3E
            (&uStack_d8,&uStack_88);
  if (CONCAT44(uStack_d4,uStack_d8) == -0x7fffffffffffffff) {
    param_1[1] = CONCAT44(uStack_cc,uStack_d0);
    *param_1 = -0x7fffffffffffffff;
LAB_004f7b02:
    _ZN4core3ptr108drop_in_place_LT_alloc__vec__Vec_LT__LP_serde_yaml__de__Event_C_serde_yaml__libyaml__error__Mark_RP__GT__GT_17h1b8bf88c4f4ace73E
              (&uStack_148);
    if (CONCAT44(uStack_12c,uStack_130) != 0) {
      _ZN4core3ptr73drop_in_place_LT_alloc__sync__Arc_LT_serde_yaml__error__ErrorImpl_GT__GT_17hd531c14bd5cfeae4E
                (&uStack_130);
    }
  }
  else {
    uStack_100 = uStack_c8;
    uStack_fc = uStack_c4;
    uStack_f8 = uStack_c0;
    uStack_f4 = uStack_bc;
    if (CONCAT44(uStack_12c,uStack_130) == 0) {
      param_1[4] = CONCAT44(uStack_b4,uStack_b8);
      *(undefined4 *)(param_1 + 2) = uStack_c8;
      *(undefined4 *)((long)param_1 + 0x14) = uStack_c4;
      *(undefined4 *)(param_1 + 3) = uStack_c0;
      *(undefined4 *)((long)param_1 + 0x1c) = uStack_bc;
      *param_1 = CONCAT44(uStack_d4,uStack_d8);
      param_1[1] = CONCAT44(uStack_cc,uStack_d0);
      goto LAB_004f7b02;
    }
    lVar2 = (*(code *)PTR__ZN10serde_yaml5error6shared17h628359452f649200E_008082b8)();
    param_1[1] = lVar2;
    *param_1 = -0x7fffffffffffffff;
    _ZN4core3ptr65drop_in_place_LT_bat__assets__assets_metadata__AssetsMetadata_GT_17h8cc3753e3db2669aE
              (&uStack_110);
    _ZN4core3ptr108drop_in_place_LT_alloc__vec__Vec_LT__LP_serde_yaml__de__Event_C_serde_yaml__libyaml__error__Mark_RP__GT__GT_17h1b8bf88c4f4ace73E
              (&uStack_148);
  }
  _ZN4core3ptr122drop_in_place_LT_alloc__collections__btree__map__BTreeMap_LT__RF_alloc__string__String_C__RF_alloc__string__String_GT__GT_17h719c7a0fb9fc7400E
            (&uStack_128);
LAB_004f7b2c:
  if ((long)*param_2 < -0x7ffffffffffffffa) {
    _ZN4core3ptr45drop_in_place_LT_serde_yaml__de__Progress_GT_17h4759acfb9f6ec4a4E(param_2);
  }
  return;
}