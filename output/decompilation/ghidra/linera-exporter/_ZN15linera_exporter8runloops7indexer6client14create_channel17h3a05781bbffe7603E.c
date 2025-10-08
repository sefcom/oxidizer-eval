void _ZN15linera_exporter8runloops7indexer6client14create_channel17h3a05781bbffe7603E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long local_6d8;
  undefined8 local_6d0;
  undefined8 uStack_6c8;
  undefined8 local_6c0;
  undefined8 local_6b8;
  undefined8 local_6b0;
  undefined8 local_6a8;
  undefined8 local_698;
  undefined8 local_690;
  undefined8 local_688;
  undefined4 local_680;
  undefined8 local_668;
  undefined4 local_660;
  undefined8 local_658;
  undefined4 local_650;
  undefined8 local_648;
  int local_640;
  undefined4 local_63c;
  undefined8 local_638;
  undefined8 uStack_630;
  undefined8 local_628;
  undefined2 local_4b8;
  undefined4 local_4a0;
  undefined4 uStack_49c;
  undefined4 uStack_498;
  undefined8 uStack_494;
  undefined4 uStack_48c;
  undefined4 uStack_488;
  undefined4 uStack_484;
  undefined4 local_480;
  undefined4 uStack_47c;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined local_268 [24];
  long local_250 [3];
  undefined8 local_238;
  undefined local_230 [536];
  
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h5c19877edf14c43cE
            (local_268);
  _ZN5tonic9transport7channel8endpoint8Endpoint11from_shared17hc888a304014a381dE
            (&local_6d8,local_268);
  if (local_6d8 == 2) {
    param_1[3] = local_6c0;
  }
  else {
    (*(code *)PTR_memcpy_01592358)(local_230,&local_6b8,0x218);
    local_250[0] = local_6d8;
    local_238 = local_6c0;
    local_6a8 = 0x8000000000000000;
    local_6d8 = 0;
    local_6d0 = 8;
    uStack_6c8 = 0;
    local_6c0 = 0;
    local_6b8 = 8;
    local_6b0 = 0;
    local_690 = 0x8000000000000000;
    local_650 = 0x10000;
    local_658 = CONCAT44(local_658._4_4_,1000000000);
    (*(code *)
      PTR__ZN5tonic9transport7channel8endpoint8Endpoint10tls_config17hea4812cb3b7139ffE_01594848)
              (&local_4a0,local_250,&local_6d8);
    if (CONCAT44(uStack_49c,local_4a0) != 2) {
      (*(code *)PTR_memcpy_01592358)(&local_6b8,&local_480,0x218);
      local_6d0 = CONCAT44((undefined4)uStack_494,uStack_498);
      uStack_6c8 = CONCAT44(uStack_48c,uStack_494._4_4_);
      if (*(int *)(param_4 + 1) != 1000000000) {
        local_648 = *param_4;
        local_640 = *(int *)(param_4 + 1);
      }
      if (*(int *)(param_4 + 3) != 1000000000) {
        local_698 = param_4[2];
        local_690 = CONCAT44(local_690._4_4_,*(int *)(param_4 + 3));
      }
      uStack_48c = (undefined4)local_628;
      uStack_488 = (undefined4)((ulong)local_628 >> 0x20);
      uStack_49c = (undefined4)local_638;
      uStack_498 = (undefined4)((ulong)local_638 >> 0x20);
      uStack_494 = uStack_630;
      local_688 = 0x14;
      local_680 = 0;
      local_668 = 0x14;
      local_660 = 0;
      local_658 = 10;
      local_650 = 0;
      local_63c = local_4a0;
      local_4b8 = 0x100;
                    /* try { // try from 009ede7e to 009ede90 has its CatchHandler @ 009edecb */
      (*(code *)
        PTR__ZN5tonic9transport7channel8endpoint8Endpoint12connect_lazy17h06f046e6e7591c77E_01592768
      )(&local_4a0,&local_6d8);
      *(undefined4 *)(param_1 + 4) = local_480;
      *(undefined4 *)((long)param_1 + 0x24) = uStack_47c;
      *(undefined4 *)(param_1 + 5) = uStack_478;
      *(undefined4 *)((long)param_1 + 0x2c) = uStack_474;
      *(undefined4 *)(param_1 + 2) = uStack_494._4_4_;
      *(undefined4 *)((long)param_1 + 0x14) = uStack_48c;
      *(undefined4 *)(param_1 + 3) = uStack_488;
      *(undefined4 *)((long)param_1 + 0x1c) = uStack_484;
      *(undefined4 *)param_1 = local_4a0;
      *(undefined4 *)((long)param_1 + 4) = uStack_49c;
      *(undefined4 *)(param_1 + 1) = uStack_498;
      *(undefined4 *)((long)param_1 + 0xc) = (undefined4)uStack_494;
      _ZN4core3ptr66drop_in_place_LT_tonic__transport__channel__endpoint__Endpoint_GT_17ha30dbae129204e04E
                (&local_6d8);
      return;
    }
    param_1[3] = CONCAT44(uStack_484,uStack_488);
    local_6d0._0_4_ = uStack_498;
    local_6d0._4_4_ = (undefined4)uStack_494;
    uStack_6c8._0_4_ = uStack_494._4_4_;
    uStack_6c8._4_4_ = uStack_48c;
  }
  *(undefined4 *)(param_1 + 1) = (undefined4)local_6d0;
  *(undefined4 *)((long)param_1 + 0xc) = local_6d0._4_4_;
  *(undefined4 *)(param_1 + 2) = (undefined4)uStack_6c8;
  *(undefined4 *)((long)param_1 + 0x14) = uStack_6c8._4_4_;
  *param_1 = 4;
  return;
}