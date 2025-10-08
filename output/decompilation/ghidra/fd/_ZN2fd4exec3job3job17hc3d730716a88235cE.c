ulong _ZN2fd4exec3job3job17hc3d730716a88235cE
                (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                long param_5)

{
  undefined uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  uint uVar6;
  undefined8 unaff_RBP;
  ulong uVar7;
  undefined auVar8 [16];
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined8 local_318;
  undefined local_308 [80];
  undefined local_2b8 [24];
  long local_2a0;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 local_268;
  undefined local_260 [248];
  long local_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 local_130;
  undefined local_128 [248];
  
  uVar2 = *(ulong *)(param_5 + 0x1a0);
  _ZN63__LT_I_u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17he05ad75fcea55ffbE
            (local_308,param_1);
  uVar3 = *(undefined8 *)(param_5 + 0x170);
  uVar1 = *(undefined *)(param_5 + 0x1e7);
  uVar4 = *(undefined8 *)(param_5 + 0x178);
  uVar7 = CONCAT71((int7)((ulong)unaff_RBP >> 8),2);
  if ((*(byte *)(param_5 + 0x1e6) & 1) == 0) {
                    /* try { // try from 002f2a40 to 002f2a93 has its CatchHandler @ 002f2b9b */
    while (_ZN106__LT_core__iter__adapters__flatten__Flatten_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hc38c5685e7f50b75E
                     (&local_168,local_308), local_168 != 5) {
      if ((int)local_168 == 4) {
        local_318 = local_130;
        local_328 = local_140;
        uStack_324 = uStack_13c;
        uStack_320 = uStack_138;
        uStack_31c = uStack_134;
        local_338 = local_150;
        uStack_334 = uStack_14c;
        uStack_330 = uStack_148;
        uStack_32c = uStack_144;
        local_348 = local_160;
        uStack_344 = uStack_15c;
        uStack_340 = uStack_158;
        uStack_33c = uStack_154;
        _ZN4core3ptr34drop_in_place_LT_ignore__Error_GT_17hba255aab589c455fE(&local_348);
      }
      else {
        local_2a0 = local_168;
        local_268 = local_130;
        local_278 = local_140;
        uStack_274 = uStack_13c;
        uStack_270 = uStack_138;
        uStack_26c = uStack_134;
        local_288 = local_150;
        uStack_284 = uStack_14c;
        uStack_280 = uStack_148;
        uStack_27c = uStack_144;
        local_298 = local_160;
        uStack_294 = uStack_15c;
        uStack_290 = uStack_158;
        uStack_28c = uStack_154;
        (*(code *)PTR_memcpy_0053fd28)(local_260,local_128,0xf8);
                    /* try { // try from 002f2ae6 to 002f2b2b has its CatchHandler @ 002f2b76 */
        auVar8 = _ZN2fd9dir_entry8DirEntry13stripped_path17h8d7ea7decf4ce9bfE(&local_2a0,uVar1);
        bVar5 = _ZN2fd4exec10CommandSet7execute17haf020f5cb9b7fb2fE
                          (param_2,param_3,auVar8._0_8_,auVar8._8_8_,uVar3,uVar4,param_4,1 < uVar2);
        uVar6 = _ZN2fd10exit_codes15merge_exitcodes17h93e1d44106fac795E
                          ((uint)uVar7 & 0xff | (uint)bVar5 << 8);
        uVar7 = (ulong)uVar6;
                    /* try { // try from 002f2b3f to 002f2b4b has its CatchHandler @ 002f2b72 */
        _ZN4core3ptr44drop_in_place_LT_fd__dir_entry__DirEntry_GT_17h394f0ee2b950b509E(&local_2a0);
      }
    }
  }
  else {
                    /* try { // try from 002f2910 to 002f291a has its CatchHandler @ 002f2b99 */
    while (_ZN106__LT_core__iter__adapters__flatten__Flatten_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hc38c5685e7f50b75E
                     (&local_168,local_308), local_168 != 5) {
      if ((int)local_168 == 4) {
        local_318 = local_130;
        local_328 = local_140;
        uStack_324 = uStack_13c;
        uStack_320 = uStack_138;
        uStack_31c = uStack_134;
        local_338 = local_150;
        uStack_334 = uStack_14c;
        uStack_330 = uStack_148;
        uStack_32c = uStack_144;
        local_348 = local_160;
        uStack_344 = uStack_15c;
        uStack_340 = uStack_158;
        uStack_33c = uStack_154;
                    /* try { // try from 002f295c to 002f296e has its CatchHandler @ 002f2b8a */
        _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h7dbe7d6fc55b9016E
                  (local_2b8,&local_348);
        _ZN2fd5error11print_error17h653511955bf98e50E(local_2b8);
                    /* try { // try from 002f296f to 002f2976 has its CatchHandler @ 002f2b99 */
        _ZN4core3ptr34drop_in_place_LT_ignore__Error_GT_17hba255aab589c455fE(&local_348);
      }
      else {
        local_2a0 = local_168;
        local_268 = local_130;
        local_278 = local_140;
        uStack_274 = uStack_13c;
        uStack_270 = uStack_138;
        uStack_26c = uStack_134;
        local_288 = local_150;
        uStack_284 = uStack_14c;
        uStack_280 = uStack_148;
        uStack_27c = uStack_144;
        local_298 = local_160;
        uStack_294 = uStack_15c;
        uStack_290 = uStack_158;
        uStack_28c = uStack_154;
        (*(code *)PTR_memcpy_0053fd28)(local_260,local_128,0xf8);
                    /* try { // try from 002f29c9 to 002f2a0f has its CatchHandler @ 002f2b78 */
        auVar8 = _ZN2fd9dir_entry8DirEntry13stripped_path17h8d7ea7decf4ce9bfE(&local_2a0,uVar1);
        bVar5 = _ZN2fd4exec10CommandSet7execute17haf020f5cb9b7fb2fE
                          (param_2,param_3,auVar8._0_8_,auVar8._8_8_,uVar3,uVar4,param_4,1 < uVar2);
        uVar6 = _ZN2fd10exit_codes15merge_exitcodes17h93e1d44106fac795E
                          ((uint)uVar7 & 0xff | (uint)bVar5 << 8);
        uVar7 = (ulong)uVar6;
                    /* try { // try from 002f2a23 to 002f2a2f has its CatchHandler @ 002f2b74 */
        _ZN4core3ptr44drop_in_place_LT_fd__dir_entry__DirEntry_GT_17h394f0ee2b950b509E(&local_2a0);
      }
    }
  }
  _ZN4core3ptr126drop_in_place_LT_core__iter__adapters__flatten__Flatten_LT_crossbeam_channel__channel__IntoIter_LT_fd__walk__Batch_GT__GT__GT_17hdb508d9cf42bcfa6E
            (local_308);
  return uVar7 & 0xffffffff;
}