void _ZN11firecracker10api_server9ApiServer14handle_request17hb80410b53111182eE
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  undefined *local_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined *local_108;
  undefined8 local_100;
  undefined8 **local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 *local_d8;
  code *local_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined local_3f;
  
  _ZN137__LT_firecracker__api_server__parsed_request__ParsedRequest_u20_as_u20_core__convert__TryFrom_LT__RF_micro_http__request__Request_GT__GT_8try_from17h32898402e65c35ffE
            (&local_a8,param_3);
  if ((int)local_a8 == 1) {
    local_150 = uStack_a0;
    uStack_138 = local_88;
    lVar1 = _ZN4core4sync6atomic11atomic_load17hcd41a4cf8b7c5bb4E
                      (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hba2cad573e31d8baE_004bfb78,0);
    if (lVar1 != 0) {
      local_128 = &local_150;
      uStack_120 = 
      _ZN90__LT_firecracker__api_server__parsed_request__RequestError_u20_as_u20_core__fmt__Debug_GT_3fmt17hdc8772a4831cbc03E
      ;
      local_a8 = &DAT_00130b60;
      uStack_a0 = (undefined *)0x1;
      local_88 = 0;
      local_98 = &local_128;
      uStack_90 = 1;
      local_e8 = (*(code *)PTR__ZN3log13__private_api3loc17h0b1bf3028c786bb7E_004bfb80)
                           (&PTR_DAT_004a39e0);
      local_108 = &DAT_001384cc;
      local_100 = 0x17;
      local_f8 = (undefined8 **)&DAT_001384cc;
      local_f0 = 0x17;
      _ZN3log13__private_api8log_impl17h05439a06b798919cE(&local_a8,1,&local_108);
    }
    uStack_90 = uStack_138;
    local_a8 = local_150;
    _ZN11firecracker10api_server14parsed_request141__LT_impl_u20_core__convert__From_LT_firecracker__api_server__parsed_request__RequestError_GT__u20_for_u20_micro_http__response__Response_GT_4from17h6d9b414c67446cdbE
              (param_1,&local_a8);
  }
  else {
    local_b8 = uStack_90;
    uStack_c0 = (undefined4)local_98;
    uStack_bc = local_98._4_4_;
    _ZN11firecracker10api_server9ApiServer24serve_vmm_action_request17he3bf2713b381bcf6E
              (&local_a8,param_2,local_88,param_4,param_5,param_6,(undefined4)uStack_a0,
               (undefined4)local_98,uStack_90);
    local_c8 = 0x8000000000000000;
    local_128 = (undefined **)CONCAT44(uStack_a0._4_4_,(undefined4)uStack_a0);
    uStack_120 = (code *)CONCAT44(local_98._4_4_,(undefined4)local_98);
    uVar2 = _ZN4core4sync6atomic11atomic_load17hcd41a4cf8b7c5bb4E
                      (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hba2cad573e31d8baE_004bfb78,0);
    if (1 < uVar2) {
      local_d8 = &local_128;
      local_d0 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
      local_108 = &DAT_00130b60;
      local_100 = 1;
      local_e8 = 0;
      local_f8 = &local_d8;
      local_f0 = 1;
      local_130 = (*(code *)PTR__ZN3log13__private_api3loc17h0b1bf3028c786bb7E_004bfb80)
                            (&PTR_DAT_004a39c8);
      local_150 = &DAT_001384cc;
      uStack_148 = 0x17;
      puStack_140 = &DAT_001384cc;
      uStack_138 = 0x17;
      _ZN3log13__private_api8log_impl17h05439a06b798919cE(&local_108,2,&local_150);
    }
    local_3f = 1;
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h1017b1af1d0852d4E(&local_128);
    (*(code *)PTR_memcpy_004bf3b8)(param_1,&local_a8,0x90);
    _ZN4core3ptr73drop_in_place_LT_firecracker__api_server__parsed_request__ParsingInfo_GT_17hb3c6e9d5bd6ac77fE
              (&local_c8);
  }
  return;
}