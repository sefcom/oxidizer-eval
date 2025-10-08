double _ZN5uu_od12inputdecoder13MemoryDecoder10read_float17h83569d197b443106E
                 (long param_1,char param_2,long param_3,long param_4)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  float fVar5;
  double dVar6;
  undefined auVar7 [16];
  long local_50;
  long *local_48;
  undefined *local_40;
  undefined **local_38;
  undefined8 local_30;
  undefined8 **local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_50 = param_4;
  if (param_4 == 2) {
    auVar7 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h3318d31b00465fccE
                       (param_3,param_3 + 2,*(undefined8 *)(param_1 + 8),
                        *(undefined8 *)(param_1 + 0x10),
                        &PTR_s_src_uu_od_src_inputdecoder_rs_00202368);
    if ((param_2 == '\0') || (param_2 != '\x01')) {
      uVar3 = _ZN64__LT_byteorder__LittleEndian_u20_as_u20_byteorder__ByteOrder_GT_8read_u1617h373d52a990770211E
                        (auVar7._0_8_,auVar7._8_8_);
    }
    else {
      uVar3 = _ZN61__LT_byteorder__BigEndian_u20_as_u20_byteorder__ByteOrder_GT_8read_u1617h6f160655192c4847E
                        (auVar7._0_8_,auVar7._8_8_);
    }
    cVar2 = _ZN10std_detect6detect5cache4test17h42d452cfc9d2956fE();
    if (cVar2 != '\0') {
      fVar5 = (float)_ZN4half8binary164arch3x8619f16_to_f32_x86_f16c17hfa00155f589602d7E();
      return (double)fVar5;
    }
    dVar6 = (double)_ZN4half8binary164arch19f16_to_f64_fallback17h3fc5d8a950fdbd03E(uVar3);
    return dVar6;
  }
  if (param_4 == 4) {
    uVar4 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h3318d31b00465fccE
                      (param_3,param_3 + 4,*(undefined8 *)(param_1 + 8),
                       *(undefined8 *)(param_1 + 0x10),&PTR_s_src_uu_od_src_inputdecoder_rs_00202380
                      );
    fVar5 = (float)_ZN5uu_od12byteorder_io9ByteOrder8read_f3217h11afc518b6af4755E(param_2,uVar4);
    return (double)fVar5;
  }
  if (param_4 == 8) {
    uVar4 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h3318d31b00465fccE
                      (param_3,param_3 + 8,*(undefined8 *)(param_1 + 8),
                       *(undefined8 *)(param_1 + 0x10),&PTR_s_src_uu_od_src_inputdecoder_rs_00202398
                      );
    dVar6 = (double)_ZN5uu_od12byteorder_io9ByteOrder8read_f6417hdb659793fd52688bE(param_2,uVar4);
    return dVar6;
  }
  local_48 = &local_50;
  local_40 = 
  PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_0020ac70
  ;
  local_38 = &PTR_s_Invalid_byte_size__002022e0;
  local_30 = 1;
  local_18 = 0;
  local_28 = &local_48;
  local_20 = 1;
  (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_0020a9b0)
            (&local_38,&PTR_s_src_uu_od_src_inputdecoder_rs_002023b0);
  pcVar1 = (code *)swi(3);
  dVar6 = (double)(*pcVar1)();
  return dVar6;
}