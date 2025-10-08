void _ZN5uu_od11output_info10OutputInfo19calculate_alignment17hd4ddf31643e28a32E
               (undefined8 *param_1,undefined8 param_2,ulong param_3,long param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  bool bVar8;
  long local_90;
  undefined8 ***local_88 [9];
  undefined *local_40;
  char *local_38;
  undefined *local_30;
  
  if (param_3 < 9) {
    local_88[6] = (undefined8 ***)0x0;
    local_88[7] = (undefined8 ***)0x0;
    local_88[4] = (undefined8 ***)0x0;
    local_88[5] = (undefined8 ***)0x0;
    local_88[2] = (undefined8 ****)0x0;
    local_88[3] = (undefined8 ***)0x0;
    local_88[0] = (undefined8 ***)0x0;
    local_88[1] = (undefined8 ***)0x0;
    uVar3 = _ZN98__LT_uu_od__parse_formats__ParsedFormatterItemInfo_u20_as_u20_uu_od__output_info__TypeSizeInfo_GT_9byte_size17hae6e2cf52c2547bfE
                      (param_2);
    if (uVar3 != 0) {
      if (uVar3 <= param_3) {
        lVar4 = _ZN98__LT_uu_od__parse_formats__ParsedFormatterItemInfo_u20_as_u20_uu_od__output_info__TypeSizeInfo_GT_11print_width17h4208d9448b3500d1E
                          ();
        uVar5 = (ulong)(byte)(((ushort)param_3 & 0xff) / (ushort)(byte)uVar3);
        uVar7 = param_4 - lVar4 * uVar5;
        do {
          uVar2 = uVar7;
          if (uVar7 >> 0x20 == 0) {
            uVar2 = uVar7 & 0xffffffff;
          }
          lVar4 = uVar5 + (uVar5 == 0);
          uVar6 = 0;
          do {
            if (7 < uVar6) goto LAB_00169490;
            local_88[uVar6] = (undefined8 ***)((long)local_88[uVar6] + uVar2 / uVar5);
            uVar7 = uVar7 - uVar2 / uVar5;
            uVar6 = uVar6 + uVar3;
            lVar4 = lVar4 + -1;
          } while (lVar4 != 0);
          uVar3 = uVar3 * 2;
          bVar8 = 1 < uVar5;
          uVar5 = uVar5 >> 1;
        } while (bVar8);
      }
      param_1[6] = local_88[6];
      param_1[7] = local_88[7];
      param_1[4] = local_88[4];
      param_1[5] = local_88[5];
      param_1[2] = local_88[2];
      param_1[3] = local_88[3];
      *param_1 = local_88[0];
      param_1[1] = local_88[1];
      return;
    }
  }
  else {
    local_90 = param_3 << 3;
    local_88[8] = (undefined8 ***)&local_90;
    local_40 = 
    PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_0020ac70
    ;
    local_38 = "@";
    local_30 = 
    PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_0020ac70
    ;
    local_88[0] = (undefined8 ***)&DAT_00202560;
    local_88[1] = (undefined8 ***)0x3;
    local_88[4] = (undefined8 ***)0x0;
    local_88[2] = local_88 + 8;
    local_88[3] = (undefined8 ***)0x2;
    (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_0020a9b0)
              (local_88,&PTR_s_src_uu_od_src_output_info_rs_bit_00202590);
LAB_00169490:
    (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_0020a9f0)();
  }
  (*(code *)
    PTR__ZN4core9panicking11panic_const23panic_const_div_by_zero17hc7d962fcb87948a3E_0020aca0)
            (&PTR_s_src_uu_od_src_output_info_rs_bit_002025a8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}