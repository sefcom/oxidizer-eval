void _ZN9alacritty7display6window6Window19get_platform_window17h039c940afcd4b52cE
               (undefined4 *param_1,long param_2,char param_3,long param_4,char param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  long local_940;
  undefined4 uStack_938;
  undefined4 uStack_934;
  undefined8 local_930;
  undefined8 local_928;
  undefined8 uStack_920;
  undefined8 local_918;
  undefined4 uStack_910;
  undefined4 uStack_90c;
  undefined4 local_908;
  undefined4 uStack_904;
  undefined4 uStack_900;
  undefined4 uStack_8fc;
  undefined4 local_8f8;
  undefined4 uStack_8f4;
  undefined4 uStack_8f0;
  undefined4 uStack_8ec;
  long local_8e0;
  char local_8d8;
  undefined local_8d0 [32];
  undefined4 local_8b0;
  undefined4 uStack_8ac;
  undefined4 uStack_8a8;
  undefined4 uStack_8a4;
  undefined4 local_8a0;
  undefined4 uStack_89c;
  undefined4 uStack_898;
  undefined4 uStack_894;
  undefined4 local_890;
  undefined4 uStack_88c;
  undefined4 uStack_888;
  undefined4 uStack_884;
  undefined4 local_880;
  undefined4 uStack_87c;
  undefined4 uStack_878;
  undefined4 uStack_874;
  undefined4 local_870;
  undefined4 local_86c;
  undefined local_868 [504];
  undefined8 local_670;
  undefined local_578 [521];
  undefined local_36f;
  undefined4 local_368;
  undefined4 local_364;
  undefined4 local_2e0;
  undefined local_240 [528];
  
  local_928 = &PNG_002021aa;
  uStack_920 = 0xe1c;
  local_918 = 0;
                    /* try { // try from 00549676 to 00549687 has its CatchHandler @ 0054994b */
  local_8e0 = param_4;
  local_8d8 = param_5;
  _ZN3png7decoder12read_decoder20ReadDecoder_LT_R_GT_3new17h0581ea6d3ad0c615E(&local_8b0,&local_928)
  ;
  local_670 = 0x4000000;
  (*(code *)PTR_memcpy_009de0b0)(local_578,&local_8b0,0x298);
  local_2e0 = 0x11;
                    /* try { // try from 005496bd to 005496e1 has its CatchHandler @ 0054994b */
  _ZN3png7decoder16Decoder_LT_R_GT_9read_info17h94af7fd70d2461d5E(&local_8b0,local_578);
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17h577d742adaea89deE(local_578,&local_8b0);
                    /* try { // try from 005496e2 to 00549702 has its CatchHandler @ 00549946 */
  uVar1 = _ZN3png7decoder15Reader_LT_R_GT_18output_buffer_size17h2f15e68fce2e0225E(local_578);
  _ZN63__LT_u8_u20_as_u20_alloc__vec__spec_from_elem__SpecFromElem_GT_9from_elem17h07b084566afb7c30E
            (&local_940,uVar1,&PTR_DAT_009822e8);
                    /* try { // try from 0054970d to 0054972e has its CatchHandler @ 00549944 */
  _ZN3png7decoder15Reader_LT_R_GT_10next_frame17h72de32dd90e166b3E
            (&local_8b0,local_578,CONCAT44(uStack_934,uStack_938),local_930);
  _ZN4core3ptr111drop_in_place_LT_core__result__Result_LT_png__decoder__OutputInfo_C_png__decoder__stream__DecodingError_GT__GT_17h5894716279453eb1E
            (&local_8b0);
  local_918 = local_930;
                    /* try { // try from 00549761 to 00549773 has its CatchHandler @ 00549933 */
  (*(code *)PTR__ZN5winit4icon4Icon9from_rgba17h66c7c29f717b366dE_009dfe20)
            (&local_8b0,&local_928,local_368,local_364);
                    /* try { // try from 00549774 to 00549785 has its CatchHandler @ 00549931 */
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17hd556e1259faf7983E(local_8d0,&local_8b0);
                    /* try { // try from 00549786 to 00549792 has its CatchHandler @ 0054994b */
  _ZN4core3ptr96drop_in_place_LT_png__decoder__Reader_LT_std__io__cursor__Cursor_LT__RF__u5b_u8_u5d__GT__GT__GT_17hcd5d61d046cde1e1E
            (local_578);
                    /* try { // try from 00549793 to 005497c0 has its CatchHandler @ 00549935 */
  _ZN74__LT_winit__window__WindowAttributes_u20_as_u20_core__default__Default_GT_7default17h5e7776c25a6677a7E
            (&local_8b0);
  _ZN96__LT_winit__window__WindowAttributes_u20_as_u20_winit__platform__x11__WindowAttributesExtX11_GT_9with_name17h36284b0f54cd2711E
            (local_578,&local_8b0,param_2 + 0x18,param_2 + 0x30);
  local_36f = param_3 != '\x03';
  (*(code *)PTR_memcpy_009de0b0)(local_240,local_578,0x210);
  _ZN5winit6window16WindowAttributes16with_window_icon17h1c2db395a7e09dbdE
            (&local_8b0,local_240,local_8d0);
  if (param_5 == '\x02') {
    local_8f8 = local_880;
    uStack_8f4 = uStack_87c;
    uStack_8f0 = uStack_878;
    uStack_8ec = uStack_874;
    local_908 = local_890;
    uStack_904 = uStack_88c;
    uStack_900 = uStack_888;
    uStack_8fc = uStack_884;
    local_918 = CONCAT44(uStack_89c,local_8a0);
    uStack_910 = uStack_898;
    uStack_90c = uStack_894;
    local_928 = (PNG_Image *)CONCAT44(uStack_8ac,local_8b0);
    uStack_920 = CONCAT44(uStack_8a4,uStack_8a8);
    (*(code *)PTR_memcpy_009de0b0)(local_578,local_868,0x1c8);
    uVar2 = local_86c;
  }
  else {
    uStack_938 = CONCAT31(uStack_938._1_3_,param_5);
    local_928 = (PNG_Image *)CONCAT44(uStack_8ac,local_8b0);
    uStack_920 = CONCAT44(uStack_8a4,uStack_8a8);
    local_918 = CONCAT44(uStack_89c,local_8a0);
    uStack_910 = uStack_898;
    uStack_90c = uStack_894;
    local_908 = local_890;
    uStack_904 = uStack_88c;
    uStack_900 = uStack_888;
    uStack_8fc = uStack_884;
    local_8f8 = local_880;
    uStack_8f4 = uStack_87c;
    uStack_8f0 = uStack_878;
    uStack_8ec = uStack_874;
    local_940 = param_4;
    (*(code *)PTR_memcpy_009de0b0)(local_578,local_868,0x1c8);
    uVar2 = *(undefined4 *)(param_4 + 8);
    _ZN4core3ptr57drop_in_place_LT_glutin__platform__x11__X11VisualInfo_GT_17h4bceaf83843a47fcE
              (&local_940);
    local_870 = 1;
  }
  param_1[0xc] = local_8f8;
  param_1[0xd] = uStack_8f4;
  param_1[0xe] = uStack_8f0;
  param_1[0xf] = uStack_8ec;
  param_1[8] = local_908;
  param_1[9] = uStack_904;
  param_1[10] = uStack_900;
  param_1[0xb] = uStack_8fc;
  param_1[4] = (undefined4)local_918;
  param_1[5] = local_918._4_4_;
  param_1[6] = uStack_910;
  param_1[7] = uStack_90c;
  *param_1 = (undefined4)local_928;
  param_1[1] = local_928._4_4_;
  param_1[2] = (undefined4)uStack_920;
  param_1[3] = uStack_920._4_4_;
  param_1[0x10] = local_870;
  param_1[0x11] = uVar2;
  (*(code *)PTR_memcpy_009de0b0)(param_1 + 0x12,local_578,0x1c8);
  return;
}