void _ZN11firecracker10api_server7request5drive15parse_put_drive17hac7266bd766379d2E
               (ulong *param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5
               )

{
  char cVar1;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined4 local_230;
  undefined uStack_22c;
  undefined uStack_22b;
  undefined2 uStack_22a;
  undefined4 uStack_228;
  undefined2 uStack_224;
  undefined2 uStack_222;
  undefined6 uStack_220;
  undefined2 uStack_21a;
  undefined6 uStack_218;
  undefined2 uStack_212;
  long local_178;
  ulong local_170;
  undefined local_168 [56];
  undefined8 local_130;
  undefined8 local_128;
  long local_d0;
  ulong uStack_c8;
  ulong local_c0 [19];
  
  (*(code *)
    PTR__ZN89__LT_vmm__logger__metrics__SharedIncMetric_u20_as_u20_vmm__logger__metrics__IncMetric_GT_3add17hbbe9ee225a228839E_004bfb98
  )(PTR__ZN3vmm6logger7metrics7METRICS17h0c8a4aaa89fce6d9E_004bf5e0 + 0x140,1);
  if (param_4 == 0) {
    (*(code *)
      PTR__ZN89__LT_vmm__logger__metrics__SharedIncMetric_u20_as_u20_vmm__logger__metrics__IncMetric_GT_3add17hbbe9ee225a228839E_004bfb98
    )(PTR__ZN3vmm6logger7metrics7METRICS17h0c8a4aaa89fce6d9E_004bf5e0 + 0x150,1);
    *(undefined *)(param_1 + 1) = 0;
    *param_1 = 1;
  }
  else {
    _ZN11firecracker10api_server14parsed_request10checked_id17hc78530a21c875bb9E
              (&local_230,param_4,param_5);
    if ((char)local_230 == '\x05') {
      local_238 = 0;
      local_248 = param_2;
      local_240 = param_3;
      _ZN10serde_json2de10from_trait17h6520ce0bc022afddE(&local_230,&local_248);
      _ZN4core6result19Result_LT_T_C_E_GT_11inspect_err17hfc34a3d8808b1b29E(&local_d0,&local_230);
      local_170 = uStack_c8;
      local_178 = local_d0;
      if (local_d0 == 4) {
        *(undefined *)(param_1 + 1) = 4;
        param_1[2] = uStack_c8;
        *param_1 = 1;
      }
      else {
        (*(code *)PTR_memcpy_004bf3b8)(local_168,local_c0,0x98);
        cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hb86d93d0e67a6bf4E
                          (CONCAT26(uStack_222,CONCAT24(uStack_224,uStack_228)),
                           CONCAT26(uStack_21a,uStack_220),local_130,local_128);
        if (cVar1 == '\0') {
          (*(code *)
            PTR__ZN89__LT_vmm__logger__metrics__SharedIncMetric_u20_as_u20_vmm__logger__metrics__IncMetric_GT_3add17hbbe9ee225a228839E_004bfb98
          )(PTR__ZN3vmm6logger7metrics7METRICS17h0c8a4aaa89fce6d9E_004bf5e0 + 0x150,1);
          _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hadcf0352ee3104f1E
                    (&local_d0,&DAT_00138134,0x39);
          uStack_21a = (undefined2)local_c0[0];
          uStack_218 = (undefined6)(local_c0[0] >> 0x10);
          uStack_22a = (undefined2)local_d0;
          uStack_228 = (undefined4)((ulong)local_d0 >> 0x10);
          uStack_224 = (undefined2)((ulong)local_d0 >> 0x30);
          uStack_222 = (undefined2)uStack_c8;
          uStack_220 = (undefined6)(uStack_c8 >> 0x10);
          *(undefined2 *)(param_1 + 1) = 0x301;
          *(undefined4 *)((long)param_1 + 10) = local_230;
          *(uint *)((long)param_1 + 0xe) = CONCAT22(uStack_22a,CONCAT11(uStack_22b,uStack_22c));
          *(undefined4 *)((long)param_1 + 0x12) = uStack_228;
          *(uint *)((long)param_1 + 0x16) = CONCAT22(uStack_222,uStack_224);
          param_1[3] = uStack_c8;
          param_1[4] = local_c0[0];
          _ZN4core3ptr62drop_in_place_LT_vmm__vmm_config__drive__BlockDeviceConfig_GT_17ha6151e7be1d29869E
                    (&local_178);
        }
        else {
          (*(code *)PTR_memcpy_004bf3b8)(&uStack_228,&local_178,0xa8);
          local_230 = 0x11;
          uStack_22c = 0;
          uStack_22b = 0;
          uStack_22a = 0;
          _ZN11firecracker10api_server14parsed_request13ParsedRequest8new_sync17h3bce1d2f92bd31b1E
                    (param_1 + 1,&local_230);
        }
        *param_1 = (ulong)(cVar1 == '\0');
      }
    }
    else {
      *(uint *)((long)param_1 + 0xc) = CONCAT22(uStack_22a,CONCAT11(uStack_22b,uStack_22c));
      *(uint *)((long)param_1 + 9) = CONCAT13(uStack_22c,local_230._1_3_);
      *(char *)(param_1 + 1) = (char)local_230;
      param_1[2] = CONCAT26(uStack_222,CONCAT24(uStack_224,uStack_228));
      param_1[3] = CONCAT26(uStack_21a,uStack_220);
      param_1[4] = CONCAT26(uStack_212,uStack_218);
      *param_1 = 1;
    }
  }
  return;
}